﻿# xd0615 
1.首先申请账户，建仓库
2.把仓库引到本地 ：（相关步骤来自于https://www.cnblogs.com/yanglang/p/9563496.htm）
  首先，创建一个SSH       key ssh-keygen -t rsa -C "邮箱地址"
                         -t 指定密钥类型，默认是 rsa ，可以省略。-C 设置注释文字，比如邮箱。
                         密码啥的就可以直接跳过。打开github，并且打开刚密匙生成的那个文件 .ssh 中的id_rsa.pub，密匙名                           自己起即可
  然后就要把仓库引到你想要的盘 cd d（盘名）:
                               cd 文件名（多输几次，最终引到需要的地方）
   然后 git clone （地址）
 3.在本地编辑 第一种，直接打开那个文件（用记事本），然后修改内容，并保存。
              第二种，在git上编辑  vim+文件名  然后刚进去是命令模式，按“i”转到编辑模式，除了esc和鼠标，其他都可以用。                       然后这个里复制粘贴不是 Ctrl +c,v,直接右键搞。esc从编辑模式转为命令模式，然后退出有两种方式  ：wq                       或大写ZZ
              更多操作  https://www.runoob.com/linux/linux-vim.html
4.git add+要上传的文件名    
  git commit -m “注释”
  git push
  就把这些保存到仓库里了
