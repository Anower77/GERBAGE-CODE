import tkinter as tk
from tkinter import ttk, messagebox
import subprocess
import tempfile
import os

class LiveAssemblyCompilerApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Live C++ to Assembly Compiler")
        
        # Compiler options
        self.compiler_var = tk.StringVar(value="g++")
        self.optimization_var = tk.StringVar(value="-O0")
        
        # Setup UI
        self.setup_ui()
        
    def setup_ui(self):
        # Compiler and optimization level
        options_frame = tk.Frame(self.root)
        options_frame.pack(fill="x", padx=5, pady=5)
        
        ttk.Label(options_frame, text="Compiler:").grid(row=0, column=0, padx=5, pady=5)
        compiler_dropdown = ttk.Combobox(options_frame, textvariable=self.compiler_var, values=["g++", "clang++"])
        compiler_dropdown.grid(row=0, column=1, padx=5, pady=5)
        
        ttk.Label(options_frame, text="Optimization Level:").grid(row=0, column=2, padx=5, pady=5)
        optimization_dropdown = ttk.Combobox(options_frame, textvariable=self.optimization_var, values=["-O0", "-O1", "-O2", "-O3"])
        optimization_dropdown.grid(row=0, column=3, padx=5, pady=5)
        
        # Input text box
        self.cpp_input = tk.Text(self.root, wrap="word", height=15)
        self.cpp_input.pack(fill="both", expand=True, padx=5, pady=5)
        self.cpp_input.bind("<KeyRelease>", self.compile_code)
        
        # Output text box
        self.asm_output = tk.Text(self.root, wrap="word", height=15, state="disabled")
        self.asm_output.pack(fill="both", expand=True, padx=5, pady=5)
        
    def compile_code(self, event=None):
        cpp_code = self.cpp_input.get("1.0", "end-1c")
        
        if not cpp_code.strip():
            self.clear_output()
            return
        
        # Create a temporary C++ file
        with tempfile.NamedTemporaryFile(delete=False, suffix=".cpp") as cpp_file:
            cpp_file.write(cpp_code.encode())
            cpp_file_path = cpp_file.name
        
        # Command to compile to assembly
        try:
            asm_output = subprocess.check_output(
                [self.compiler_var.get(), cpp_file_path, "-S", "-o", "-", self.optimization_var.get()],
                stderr=subprocess.STDOUT
            ).decode()
            self.update_output(asm_output)
        except subprocess.CalledProcessError as e:
            self.update_output(e.output.decode())
        finally:
            os.remove(cpp_file_path)
    
    def clear_output(self):
        self.asm_output.config(state="normal")
        self.asm_output.delete("1.0", "end")
        self.asm_output.config(state="disabled")
    
    def update_output(self, asm_text):
        self.asm_output.config(state="normal")
        self.asm_output.delete("1.0", "end")
        self.asm_output.insert("1.0", asm_text)
        self.asm_output.config(state="disabled")

# Run the application
if __name__ == "__main__":
    root = tk.Tk()
    app = LiveAssemblyCompilerApp(root)
    root.mainloop()
