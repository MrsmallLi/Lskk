/*************************************************************************
	> File Name: 7.define.c
	> Author: 
	> Mail: 
	> Created Time: Mon 25 Mar 2024 02:36:58 PM CST
 ************************************************************************/

#include<stdio.h>

#define PI 3.1415926
//这里为什么需要在(a) * (b),这里每个变量都要加上()
//应为define的作用只是替换
//如果没有(), 对应下面的S(3 + 7, 4); 替换的结果就是3 + 7 * 4
//最终结果是31, 不是我们想要的(3 + 7) * 4的结果40
#define S(a, b) (a) * (b)
#define s(a, b) a * b
//定义多行宏时需要在每行末尾加上\进行续尾
#define P(a) {\
    printf("define P : %d\n", a);\
}

int main() {
    printf("PI = %lf\n", PI);
    printf("S(3, 4) = %d\n", S(3, 4));
    printf("S(3 + 7, 4) = %d\n", S(3 + 7, 4));
    //这里利用宏定义替换
    //就相当于定义了一个int类型的指针p 
    s(int, p);
    int a = 123;
    p = &a;
    P(*p);
    return 0;
}
