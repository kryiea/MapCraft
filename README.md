# 项目名称：广工 数据结构课程设计，可视化的最短路径寻路工具

## 项目简介

这是一个使用Qt框架开发的地图编辑器。它允许用户创建和编辑地图，包括添加、删除和连接点，以及设置和显示路径长度。它还包括一个深度优先搜索（DFS）堆栈，用于遍历和显示最短路径。

## 文件说明

- `mapeditor.h`：地图编辑器的头文件，定义了地图编辑器类。
- `ui_mapeditor.h`：用户界面的头文件，定义了用户界面类。
- `mapeditor.cpp`：地图编辑器的源文件，实现了地图编辑器类的功能。

## 主要功能

- 添加、删除和连接点
- 设置和显示路径长度
- 搜索和显示最短路径
- 保存和加载地图

## 如何使用

1. 打开地图编辑器。
2. 使用鼠标左键在地图上添加点。
3. 使用鼠标右键连接两个点，创建路径。
4. 在右侧显示栏中，可以查看路径的数量和长度。
5. 使用“保存”按钮保存当前地图。
6. 使用“加载”按钮加载已保存的地图。

## 开发环境

- 操作系统：Windows
- 开发工具：Visual Studio Code
- 编程语言：C++
- 框架：Qt5.0

## 注意事项

- 点的数量不能超过51个。
- 路径的数量不能超过100条。
- 保存的地图文件路径应为绝对路径。
