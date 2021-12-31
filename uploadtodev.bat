set /p commitmsg="Write the commit msg"

git add .
git commit -m "%commitmsg%"
git branch dev
git checkout dev
git push -f origin dev
git branch -d dev
git checkout main