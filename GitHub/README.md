# GitHub Documentation

## 1. Introduction
GitHub is an online platform for hosting Git repositories and collaborating on software projects.

## 2. Main Features
- Hosting and sharing source code.
- Repository history.
- Branches and collaboration.
- Pull requests and code reviews.
- Issues for tracking tasks and bugs.
- GitHub Actions for automated workflows.

## 3. Creating an Account
1. Visit https://github.com/
2. Create an account using an email address.
3. Verify the email address if prompted.
4. Sign in.

## 4. Creating a Repository
1. Sign in to GitHub.
2. Select New repository.
3. Enter a repository name.
4. Select Public or Private.
5. Configure optional README and .gitignore settings.
6. Select Create repository.

## 5. Connecting a Local Repository
```bash
git remote add origin REPOSITORY_URL
git remote -v
```

## 6. Uploading a Project
```bash
git branch -M main
git push -u origin main
```

## 7. Cloning a Repository
```bash
git clone REPOSITORY_URL
```

## 8. Fetching and Pulling
```bash
git fetch origin
git pull
git pull origin main
```

## 9. Branches
Branches allow work on separate features without directly changing the main branch.
```bash
git branch feature-example
git switch feature-example
```

## 10. Pull Requests
A pull request proposes changes from one branch to another.

Typical steps:
1. Create a feature branch.
2. Modify files.
3. Stage and commit changes.
4. Push the feature branch.
5. Open a pull request on GitHub.
6. Review the changes.
7. Merge the pull request.

## 11. Issues
Issues are used to report bugs, suggest improvements, and track project tasks.

## 12. Repository Visibility
- Public: Anyone can view the repository.
- Private: Access is limited to authorized users.

## 13. Security
Never share passwords, personal access tokens, or private SSH keys.

## Conclusion
GitHub provides remote hosting, collaboration, code review, issue tracking, and project management features for Git repositories.
