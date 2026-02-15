import subprocess
import time
import os
from datetime import datetime

# 🔹 Your Git repository folder
repo_path = "/Users/vikrantsingh/hello.c"

def run_git_command(command):
    result = subprocess.run(
        command,
        cwd=repo_path,
        capture_output=True,
        text=True
    )
    if result.returncode != 0:
        print("Git Error:", result.stderr.strip())
    return result

# ✅ Check if path exists
if not os.path.isdir(repo_path):
    print("❌ Repository path does not exist.")
    exit()

# ✅ Check if it's a git repository
if not os.path.isdir(os.path.join(repo_path, ".git")):
    print("❌ This folder is not a Git repository.")
    exit()

print("🚀 Auto Git Push Script Started...")
print("Press Ctrl+C to stop.\n")

try:
    while True:
        # Stage changes
        run_git_command(["git", "add", "."])

        # Check for changes
        status = run_git_command(["git", "status", "--porcelain"]).stdout

        if status.strip():
            timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
            commit_message = f"Auto commit on {timestamp}"

            run_git_command(["git", "commit", "-m", commit_message])
            run_git_command(["git", "push", "origin", "main"])

            print(f"✅ Changes pushed at {timestamp}")
        else:
            print("No changes to push.")

        time.sleep(10)

except KeyboardInterrupt:
    print("\n🛑 Auto push stopped by user.")
