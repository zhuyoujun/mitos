#!/bin/sh

#Author:zhuyoujun
#Date:2015/07/23
#Email:zhuyoujun0513@163.com
#Function: automatic update files to git remote repository.

###pull
echo "------update files------"
git pull origin master

###add files
echo "------add files------"
git add -A

###commit
echo "------commit------"
git commit -m " update"

###push
echo "------push to remote repository------"
git push origin master
echo "------end------"
