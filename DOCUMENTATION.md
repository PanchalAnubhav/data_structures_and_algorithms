30 -> unordered map
hashing is req

32 -> building custom comparator

# You can tell Git to completely ignore any future local modifications to that file:

Open your terminal in VS Code.

### Run this exact command:

git update-index --skip-worktree .vscode/tasks.json

What this does: It tells Git, "Keep this file in the repository, but stop tracking it for local changes." Even if VS Code modifies your tasks.json, Git will pretend it didn't happen, keeping your commit history clean and preventing you from accidentally pushing a broken config!

# If you ever intentionally want to update your tasks and push those changes to GitHub later, you just unlock it with:


git update-index --no-skip-worktree .vscode/tasks.json