# c/c++ 练习代码

> create by afterloe<afterloe@foxmail.com>  
> MIT License  
> version 1.4

# extern 关键字
extern
用于申明变量，如[代码3](./3-learn.c)的内容。也可以用于在一个源文件引用另一个源文件中的内容如代码4-1，4-2的内容。

# gcc编译两个文件
```bash
# gcc 4-1-learn.c 4-2-learn.c -o ./out/4.out
# ./out/4.out
```
> 文件顺序与编译顺序无关，试过将两个文件的顺序颠倒，不影响正常内容输出。
