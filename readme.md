# 域名信息管理系统

<p align="center">
<a href="https://opensource.org/license/apache-2-0" target="_blank"><img alt="License: apache-2-0" src="https://img.shields.io/github/license/saltstack/salt"></a>
<a href="https://github.com/yuhkalhic/NEU_software_engineering" target="_blank"><img alt="GitHub Stars" src="https://img.shields.io/github/stars/yuhkalhic/NEU_software_engineering?style=social"></a>
</p>

<h5 align="center"> 如果您喜欢我们的项目，请在 GitHub 上给我们一个 star ⭐。</h5>

# 💡 预览
本项目旨在设计和实现一个域名管理系统，通过利用C++和Qt框架实现对域名的全面管理。该系统主要包含以下功能模块：
1. 用户注册与登录
2. 域名的分类管理
3. 域名的添加与删除
4. 域名信息的修改与查询
5. 数据库的备份与恢复

# 🔧 安装

```
git clone https://github.com/yuhkalhic/NEU_software_engineering.git
cd NEU_software_engineering
```

环境要求：
```
Qt 5.x 或更高版本
minGW
QMake
MySQL
```

## 🏃 快速开始

- 编译
1. Windows

```
cd src
qmake src.pro
/root/Qt/Tools/mingw810_64/bin/mingw32-make -f Makefile.Release
```
2. Linux
```
cd src
qmake src.pro
make
make release
```

- 运行
```
cd bin
./IDNIMS # Linux
IDNIMS.exe # Windows
```

## 📖 Citation

如果您发现这项工作有帮助，请引用我们的软件:
```bibtex
@software{Domain_name_management_system,
  author = {Li, Junjie and Yu, Jiayang and Shen, Hang and Zhang, Xuan and Hou, Yufei and Huang, Haiyang and Han, Zhen},
  month = {4},
  title = {{Domain_name_management_system}},
  url = {https://github.com/yuhkalhic/NEU_software_engineering},
  year = {2025}
}
```

## 📞 Contact

如有任何疑问或反馈，请联系我们：[yujiayang@stumail.neu.edu.cn](yujiayang@stumail.neu.edu.cn)。