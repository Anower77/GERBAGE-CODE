import subprocess

def get_saved_wifi_passwords():
    # Get list of saved Wi-Fi profiles
    profiles_data = subprocess.check_output(['netsh', 'wlan', 'show', 'profiles']).decode('utf-8').split('\n')
    profiles = [i.split(":")[1][1:-1] for i in profiles_data if "All User Profile" in i]

    wifi_passwords = {}

    for profile in profiles:
        try:
            # Get the Wi-Fi password
            profile_info = subprocess.check_output(
                ['netsh', 'wlan', 'show', 'profile', profile, 'key=clear']
            ).decode('utf-8').split('\n')
            password_line = [b for b in profile_info if "Key Content" in b]

            # Extract the password
            if password_line:
                password = password_line[0].split(":")[1][1:-1]
            else:
                password = None

            wifi_passwords[profile] = password
        except subprocess.CalledProcessError:
            wifi_passwords[profile] = None

    return wifi_passwords

# Display saved Wi-Fi networks and their passwords (if available)
saved_networks = get_saved_wifi_passwords()
print("\nSaved Wi-Fi Networks and Passwords:")
for network, password in saved_networks.items():
    print(f"Network: {network} | Password: {password if password else 'No password saved'}")
