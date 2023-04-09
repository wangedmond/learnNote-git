# git常规用法

1、安装

yum install git

2、使用

// 添加追踪<br/>
git add .

// 解除追踪删除<br/>
git rm .

// 撤销add操作<br>
git reset HEAD test.cc

// 撤销commit操作<br>
git reset --soft HEAD~1

git commit -m "test"

//origin是远程仓库git remote，master是分支
git push origin master


3、关联仓库、创建远程分支

git init

git add .

git commit -m "test"

git remote add origin http://github

git checkout -b dev

git push origin dev

4、删除git信息

rm -rf .git

5、编辑git信息
vim ~/.gitconfig 





# git lfs 使用

1、安装

https://github.com/git-lfs/git-lfs/releases Linux AMD64

2、使用

git lfs track "*.jar"

git add .

git commit -m "test"

git lfs ls-files

git push

