# Git and GitHub Documentation

## 1. Introduction

Git is a distributed version control system used to track changes in files and manage project history.

GitHub is an online platform used to host Git repositories and collaborate with other developers.

## 2. Installation and Verification

Check the installed Git version:

```bash
git --version
```

## 3. Configuration

Configure your identity:

```bash
git config --global user.name "Student Name"
git config --global user.email "student@example.com"
git config --global --list
```

## 4. Creating a Repository

```bash
mkdir my-project
cd my-project
git init
```

## 5. Basic Git Workflow

The basic workflow is:

**Edit → Stage → Commit → Push**

```bash
git status
git add .
git commit -m "Initial commit"
git push
```

## 6. Staging Files

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

## 10. Ignoring Files

A `.gitignore` file specifies files and folders Git should ignore.

Example:

```text
__pycache__/
*.pyc
.env
*.log
data/
```

## 11. Renaming and Removing Files

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

Create and switch to a branch:

```bash
git switch -c feature-login
```

## 14. Merging Branches

```bash
git switch main
git merge feature-login
```

If a merge conflict occurs, edit the conflicting files and complete the merge.

## 15. Remote Repositories

View remote repositories:

```bash
git remote -v
```

Add a remote repository:

```bash
git remote add origin REPOSITORY_URL
```

## 16. Pushing Changes

Push the main branch and set its upstream:

```bash
git push -u origin main
```

Push subsequent changes:

```bash
git push
```

## 17. Fetching and Pulling Changes

Fetch remote changes:

```bash
git fetch origin
```

Pull changes:

```bash
git pull
git pull origin main
```

## 18. Cloning a Repository

```bash
git clone REPOSITORY_URL
```

## 19. Publishing a Local Repository on GitHub

```bash
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin REPOSITORY_URL
git push -u origin main
```

## 20. Feature Branch and Pull Request Workflow

Create a feature branch:

```bash
git switch -c feature-login
```

Stage and commit changes:

```bash
git add .
git commit -m "Add login feature"
```

Push the feature branch:

```bash
git push -u origin feature-login
```

On GitHub:

1. Open the repository.
2. Create a Pull Request.
3. Select `main` as the base branch.
4. Select the feature branch for comparison.
5. Create and review the Pull Request.
6. Merge the approved changes.

Update the local main branch:

```bash
git switch main
git pull origin main
```

## 21. Complete Developer Workflow

1. Create or clone a repository.
2. Create a branch for a new feature.
3. Modify files and test changes.
4. Stage and commit changes.
5. Push the branch to GitHub.
6. Open a Pull Request and request review.
7. Merge the approved changes.

Typical workflow:

**Edit → Stage → Commit → Push → Review → Merge**

## 22. Common Git Errors

| Problem | Solution |
|---|---|
| Untracked files | Use `git add` |
| Push rejected | Fetch and integrate remote changes |
| Merge conflict | Edit conflicting files and complete the merge |
| Wrong branch | Check using `git branch` |
| Nothing to commit | Check using `git status` |
| Authentication failed | Check credentials and repository permissions |

## 23. Practical Example: Calculator Repository

```bash
mkdir calculator
cd calculator
git init
echo "print(2 + 3)" > main.py
git status
git add main.py
git commit -m "Add calculator program"
git log --oneline
```

## 24. Important Safety Notes

- Check `git status` before committing.
- Inspect staged changes using `git diff --staged`.
- Never commit passwords, tokens, or private keys.
- Avoid using `git restore` on important uncommitted work.

## Conclusion

Git helps developers track changes, maintain project history, create branches, merge work, and collaborate through GitHub.