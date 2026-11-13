# Git Documentation

## 1. Introduction
Git is a distributed version control system used to track changes in files and coordinate development.

## 2. Installation and Verification
Check the installed version:
```bash
git --version
```

## 3. Configuration
```bash
git config --global user.name "Student Name"
git config --global user.email "student@example.com"
git config --global --list
```

## 4. Create a Repository
```bash
mkdir my-project
cd my-project
git init
```

## 5. Basic Workflow
```bash
git status
git add .
git commit -m "Initial commit"
```

## 6. Tracking Files
```bash
git add main.py
git add .
git add file1.py file2.py
git add *.py
```

## 7. Commit History
```bash
git log
git log --oneline
```

## 8. Comparing Changes
```bash
git diff
git diff --staged
git diff HEAD
```

## 9. Listing Tracked Files
```bash
git ls-files
```

## 10. Ignore Files
Create a `.gitignore` file to exclude files from tracking.
Example:
```text
__pycache__/
*.pyc
.env
*.log
data/
```

## 11. Rename and Remove Files
```bash
git mv old.py new.py
git rm old.py
```

## 12. Undoing Changes
Unstage a file:
```bash
git restore --staged main.py
```

Discard unstaged modifications:
```bash
git restore main.py
```

Revert a previous commit:
```bash
git log --oneline
git revert COMMIT_ID
```

## 13. Branches
List branches:
```bash
git branch
```

Create a branch:
```bash
git branch feature-login
```

Switch branches:
```bash
git switch feature-login
git switch main
```

Create and switch to a new branch:
```bash
git switch -c feature-login
```

## 14. Merging
```bash
git switch main
git merge feature-login
```

Resolve any reported merge conflicts, test the result, and complete the merge.

## 15. Remote Repositories
```bash
git remote -v
git remote add origin REPOSITORY_URL
```

## 16. Push and Pull
```bash
git push -u origin main
git push
git fetch origin
git pull
git pull origin main
```

## 17. Clone a Repository
```bash
git clone REPOSITORY_URL
```

## 18. Complete GitHub Workflow
```bash
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin REPOSITORY_URL
git push -u origin main
```

## 19. Important Safety Notes
- Check `git status` before committing.
- Inspect staged changes using `git diff --staged`.
- Do not commit passwords, tokens, or private keys.
- Avoid running `git restore` on important uncommitted work.

## Conclusion
Git tracks project changes through repositories, staging, commits, branches, and remote synchronization.
