set /p commitmsg = "Write the commit msg (main)"

git add .
git commit -m "%commitmsg%"
git push -f origin main