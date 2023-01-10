#! /bin/bash
DATE=$(date +%d/%m/%y)

echo "Pulling from Repo"
echo "=============================================="
echo ""
git pull origin main

echo "Adding \*.py and \*.cpp \*.sh"
echo "=============================================="
echo ""
git add *.py *.cpp

echo "Commiting data"
echo "=============================================="
echo ""
git commit -m $DATE

echo "Pushing to Repo"
echo "=============================================="
echo ""
git push origin main