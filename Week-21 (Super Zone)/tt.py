import os
import subprocess
import sys

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def execute_command(command):
    try:
        if command.startswith('cd '):
            os.chdir(command[3:])
        else:
            result = subprocess.run(command, shell=True, text=True)
    except Exception as e:
        print(f"Error: {e}")

def main():
    clear_screen()
    print("Welcome to My Custom Terminal! Type 'exit' to quit.")
    while True:
        try:
            command = input("complexity||> ")
            if command.lower() in ['exit', 'quit']:
                break
            execute_command(command)
        except KeyboardInterrupt:
            print("\nUse 'exit' to quit.")
        except EOFError:
            print("\nExiting...")
            break

if __name__ == "__main__":
    main()
