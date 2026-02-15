import subprocess
import os
import time

repo_path = r"C:\Users\Manish Pandey\Desktop\SU\CSCR1503-Python-Application-Programming"

while True:
    os.chdir(repo_path)
    
    # Stage all changes
    subprocess.run(["git", "add", "."])
    
    # Check if anything to commit
    status = subprocess.run(["git", "status", "--porcelain"], capture_output=True, text=True).stdout
    
    if status.strip():
        subprocess.run(["git", "commit", "-m", "Auto commit by Python script"])
        subprocess.run(["git", "push", "origin", "main"])
        print("✅ Changes pushed to GitHub!")
    else:
        print("No changes to push.")
    
    time.sleep(10)