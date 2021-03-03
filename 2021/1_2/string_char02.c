/*
 * 常用的函数及作用
 * strcpy(s1,s2);   复制字符串s2到s1
 * strcat(s1,s2);   链接字符串s2至字符串s1的末尾
 * strlen(s1);      返回字符串s1的长度
 * strcmp(s1,s2);   如果s1和s2时相同的返回0,若s1<s2返回小于0,若s1>s2返回大于0
 *strchr(s1,ch);    返回一个指针，指向字符串s1中的字符ch第一次出现的位置
 *strstr(s1,s2);    返回一个指针，指向字符串s1中字符串s2第一出现的位置
 */ 
#include<stdio.h>
#include<string.h>
int main(){
    char str1[14] = "runoob";
    char str2[14] = "google";
    char str3[14];
    int len;
    //复制str1 到 str3
    strcpy(str3,str1);
    printf("strcpy( str3 , str1): %s\n",str3);
    //链接str1和str2
    strcat(str1,str2);
    printf("strcat(str1,str2) : %s\n",str1);
    //链接后，str1的总长度
    len = strlen(str1);
    printf("strlen(str1) : %d\n",len);
    return 0;
}
