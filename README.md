# c/c++ 练习代码

> create by afterloe<afterloe@foxmail.com>  
> MIT License  
> version 1.4

## 随手笔记
### extern 关键字
extern
用于申明变量，如[代码3](./3-learn.c)的内容。也可以用于在一个源文件引用另一个源文件中的内容如代码4-1，4-2的内容。

### gcc编译两个文件
```bash
# gcc 4-1-learn.c 4-2-learn.c -o ./out/4.out
# ./out/4.out
```
> 文件顺序与编译顺序无关，试过将两个文件的顺序颠倒，不影响正常内容输出。

### signed
signed意思为有符号的，也就是第一个位代表正负，剩余的代表大小  
unsigned意思为无符号的，所有的位都为大小，没有负数  
默认为*signed*

### static
Clang不支持在调用函数时返回局部变量的地址，因为局部变量的地址存储在内存的栈区域，当函数调用结束时，函数与其对应的局部变量生命周期结束，函数内的变量不再拥有那个内存地址，所以不能返回其指针。使用static关键字将该存储变为静态数据即可。
