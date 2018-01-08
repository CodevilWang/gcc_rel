// Copyright 2011 Jike.com  All Rights Reserved.
// Author: wangmeng@jike.com (Meng Wang)
#include <stdio.h>
int work() {
    int pre_work() {
        printf("in pre_work [%d]\n", worker_value);
        return 0;
    };
    int worker_value = 10;
    pre_work();
    // printf("in function work[%d]\n", (pre_work()));
    return 0;
}
int main() {
    printf("%d\n", work());
    return 0;
}

/* vim: set expandtab ts=2 sw=2 sts=2 tw=80: */
