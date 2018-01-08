// Copyright 2011 Jike.com  All Rights Reserved.
// Author: wangmeng@jike.com (Meng Wang)
#include <stdio.h>

int a = 20, b = 11;

int main()
{
    int a = 5, b = 60;
    int func()
    {
        printf("\nI am in funct");
        return 1;
    }

    printf("\nI am in main-1");


    printf("\nI am in main-2");
    return func();
}


/* vim: set expandtab ts=2 sw=2 sts=2 tw=80: */
