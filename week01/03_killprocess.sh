#!/bin/bash
#see background, write to results.txt, and kill 01_main.cpp.
top -bn 1 > result.txt #-b使top工作在批处理模式，否输入到txt会发生乱码
ps -ef|grep '01_hello_world'|grep -v 'grep'|awk '{print $2}'|xargs kill -9
#ps -ef 查看所有进程的命令，检索出的进程将作为右侧的输入
#grep '01_hello_world' 筛选需要进程，向右侧输出所有含'01_hello_world'的进程
#grep -v 'grep' 上边查找含'01_hello_world'的进程中，有一条会包含grep本身的进程行，此命令忽略该进程
#awk '{print $2}' 提取进程记录中的第二列参数，即进程号
#xargs kill -9 把参数传给强制终止命令kill -9