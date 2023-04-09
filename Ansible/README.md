# 常用用法

1、 执行shell或者远程脚本

ansible -i hosts all -m shell -a "pwd" -k

2、 远程主机执行主控端存储的 shell 脚本文件，相当于 scp + shell 组合

ansible Test -m script -a "~/test.sh" 

3、拷贝

ansible Client -m copy -a "src=/home/test.sh dest=/tmp/ owner=root group=root mode=0755 backup=yes"   # src源文件 dest目标地址，属主、组为root ，权限0755，数据备份

4、获取远程文件状态信息

ansible Client -m stat -a "path=/etc/syctl.conf"

5、crontab设置

ansible Client -m cron -a "name='check dirs' hour='5,2' job='ls -alh > /dev/null'"  //* 5,2 * * * ls -alh > /dev/null

ansible -i hosts all -m shell -a ‘echo "* * * * * hostname >> /tmp/tmp.txt" >> /var/spool/cron/root’ -k


## 备注
### 参数
* -i   指定hosts，default=/etc/ansible/hosts
* -m   要执行的模块，默认为command
* -a   模块参数

### 免密配置(分组需使用[]区分)

9.21.138.154  ansible_ssh_user='root'  ansible_ssh_pass='new@sec'

## 参考资料
https://juejin.cn/post/6844903631066513421