# git常规用法

### 安装

yum install git

### 使用

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


### 关联仓库、创建远程分支

git init

git add .

git commit -m "test"

git remote add origin http://github

git checkout -b dev

git push origin dev

### 删除git信息

rm -rf .git

### 编辑git信息
vim ~/.gitconfig 

### tag信息

git tag -a v0.1 -m "old master"

git push origin v0.1

### 回滚
git reset --hard 5aa158a3

git push -f

### 删除文件，使用git rm可以省略add过程，会直接将git信息删除
git rm 

git commit 

git push

### 解决冲突
git clone 

git checkout dev

git merge master // 此时就会出现冲突的文件

出现错误fatal: refusing to merge unrelated histories，使用如下命令：

git merge master --allow-unrelated-histories

git diff --name-only --diff-filter=U //修改中途查看冲突文件



# git lfs 使用

1、安装

https://github.com/git-lfs/git-lfs/releases Linux AMD64

2、使用

git lfs track "*.jar"

git add .

git commit -m "test"

git lfs ls-files

git push

