# 配环境总结文档

Author: ZhangXvji(2378539553@qq.com)  
Time: 2022-7-13

测试机型: HUAWEI Matebook  
显卡: Intel(R) NHD Graphics 620

---

## Ubuntu的安装

+ [下载Ubuntu20.04系统镜像文件](https://mirrors.tuna.tsinghua.edu.cn/ubuntu-releases/20.04/ubuntu-20.04.4-desktop-amd64.iso)
+ [下载刻录软件“软碟通”](https://cn.ultraiso.net/uiso9_cn.exe)
+ 准备一个大于2G的U盘
+ 参照[CSDN-Windows 10安装ubuntu 18.04双系统(超详细教程)](https://blog.csdn.net/qq_43106321/article/details/105361644)
  + 查看电脑信息
  + 制作系统盘
  + 在Windows下创建空白分区
  + 使用系统盘安装系统
  + 完成安装:设置地区、用户等

---
  
## 环境和工具的配置

*在Terminal中输入如下命令*

### 1.git

在终端中键入  
`sudo apt install git`

### 2.build-essential

在终端中键入  
`sudo apt-get update`  
`sudo apt install build-essential`

### 3.cmake

+ 安装依赖: 在终端中键入  
`sudo apt-get install openssl libssl-dev`
+ 双击打开cmake安装包，点击Extract解压
+ 进入解压后文件夹，右键在文件夹中打开终端，键入  
`sudo ./bootstrap && sudo make -j16 && sudo make install`

+ 重新打开一个终端，键入`cmake --version`检查版本是否与安装包一致

+

### 4.opencv

+ 安装依赖: 在终端中键入  

    ```bash
    sudo add-apt-repository "deb http://security.ubuntu.com/ubuntu xenial-security main"
    sudo apt update
    sudo apt install libjasper1 libjasper-dev
    sudo apt install libavcodec-dev libavformat-dev
    sudo apt install libgtk2.0-dev libswscale-dev
    sudo apt install python-dev python-numpy
    sudo apt install libtbb2 libtbb-dev
    sudo apt install libjpeg-dev libpng-dev libtiff5-dev
    ```

+ 双击打开opencv安装包，点击Extract解压
+ 进入解压后文件夹，右键在文件夹中打开终端，键入  

    ```bash
    mkdir build
    cd build
    cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D WITH_TBB=ON -D WITH_V4L=ON ..
    sudo make -j16
    sudo make install
    ```

### 5.Eigen

在解压后文件夹中打开终端并键入

```bash
mkdir build
cd build
cmake ..
make -j16
sudo make install
```

### 6.PCL点云库

|序号|说明|命令|
|:---|:--:|---|
|1|备份原来的源头|`sudo cp/etc/apt/sources.lis /ect/apt/sources_init.list`|
| 2|打开配置文件|`sudo gedit /etc/apt/sources.list`|
|3|删除并替换配置文件中的内容|**`替换内容`**|
|4|更新源|`sudo apt-get update`|
|5|更新软件|`sudo apt-get upgrade`|
|6|安装PCL|`sudo apt install libpcl-dev pcl-tools`|

**`替换内容`**

```bash
# 默认注释了源码镜像以提高 apt update 速度，如有需要可自行取消注释
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal main restricted universe multiverse
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-updates main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-updates main restricted universe multiverse
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-backports main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-backports main restricted universe multiverse
deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-security main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-security main restricted universe multiverse

# 预发布软件源，不建议启用
# deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-proposed main restricted universe multiverse
# deb-src https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-proposed main restricted universe multiverse
```

---

## VScode的安装和配置

1.在[官网](https://code.visualstudio.com/)上下载vscode并安装  
2.按照队内发布的文件安装插件
>参考文件: 03_vscode_config.md

+ 需安装的插件
![插件](https://github.com/ZhangXvji/pictures/raw/master/hitcrt_sm_01.png)

3.参考文件对settings进行修改

+ 修改结果
![settings](https://github.com/ZhangXvji/pictures/raw/master/hitcrt_sm_02.png)
