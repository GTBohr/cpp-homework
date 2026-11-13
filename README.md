# C++ 课堂练习

- 课程：C++ 程序设计
- 姓名：____（提交前可填）
- 说明：课堂练习按次整理，每个文件可单独编译运行。

## 目录

### 第一次课（基础语法）

| 文件 | 内容 |
|---|---|
| `class/class_practice1.cpp` | 利润提成计算 |
| `class/class_practice2.cpp` | 电影评分 |
| `class/class_practice3.cpp` | 回文数判断 |
| `class/class_practice4.cpp` | 100~999 水仙花数 |
| `class/class_practice5.cpp` | a + aa + aaa + … |
| `class/class_practice6.cpp` | 9×9 乘法表 |
| `class/class_practice7.cpp` | 数列 a[n] = a[n-1] + a[n-3] |
| `class/class_practice8.cpp` | 数列 a[n+1] = 2*(a[n]+1) |

### 第二次课（函数与递归）

| 文件 | 内容 |
|---|---|
| `class2/class2_practice.cpp` | 引用传参的 swap：交换两个整数 |
| `class2/class2_practice1.cpp` | 整数除法，除数为 0 时输出 -1 |
| `class2/class2_practice2.cpp` | 判断素数 |
| `class2/class2_practice3.cpp` | 最大公约数与最小公倍数 |
| `class2/class2_practice4.cpp` | 递归求斐波那契数 |
| `class2/class2_practice5.cpp` | 递归求整数幂 |
| `class2/class2_practice6.cpp` | 递归求浮点数幂 |
| `class2/class2_practice7.cpp` | 递归求幂：double 支持负指数，long long 仅非负指数 |

### 第三次课（static / 友元）

| 文件 | 内容 |
|---|---|
| `class3/class3_practice1.cpp` | static 数据成员：统计创建的对象个数 |
| `class3/class3_practice2.cpp` | static 数据成员 + 成员函数 |
| `class3/class3_practice3.cpp` | 全局变量与局部变量的作用域 |
| `class3/class3_practice4.cpp` | static 成员函数的调用 |
| `class3/class3_practice5.cpp` | 友元的三种写法：友元成员函数 / 友元类 / 友元全局函数 |

## 编译与运行

```bash
g++ -std=c++17 -Wall -Wextra class/class_practice1.cpp -o class_practice1
./class_practice1

g++ -std=c++17 -Wall -Wextra class2/class2_practice.cpp -o class2_practice
./class2_practice
```

把文件名换成对应文件即可。
