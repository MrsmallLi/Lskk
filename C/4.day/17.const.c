/*************************************************************************
	> File Name: 17.const.c
	> Author: 
	> Mail: 
	> Created Time: Sun 24 Mar 2024 05:49:28 PM CST
 ************************************************************************/

#include<stdio.h>


int main() {
    const int a = 123;
    const int b = 456;
    const int *p1 = &a;
    //这样的定义方式是p1是一个指针指向整形常量
    //const是指向a变量的
    //意思就是p1指向的空间的值是不能改变的
    //但是p1的值是可以改变的
    //*p1 = 1;这局代码就是不可以的
    printf("*p1 = %d\n", *p1);
    p1 = &b;
    printf("*p1 = %d\n", *p1);
    //这样定义方式是p2是一个指针指向常量整形
    //可以改变p2的值，但是p2指向区域里存储的值是不能改变
    int const *p2 = &a;
    printf("*p2 = %d\n", *p2);
    p2 = &b;
    printf("*p2 = %d\n", *p2);
    int n = 789, m = 1000;
    //p3是一个常量指针指向整形
    //可以改变p3指向区域里存储的值
    //但是p3的值是不能改变的
    //比如p3 = &m,就不可以
    int *const p3 = &n;
    printf("*p3 = %d\n", *p3);
    *p3 = 1000;
    printf("*p3 = %d\n", *p3);
    return 0;
}