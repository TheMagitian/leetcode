//Q89
#include <stdio.h>

#include <stdlib.h>

int* grayCode(int n, int* returnSize) {

    *returnSize = 1 << n;

    int *gray = (int *)malloc(*returnSize * sizeof(int));

    int i;

    for (i = 0; i < *returnSize; i++) {

        gray[i] = (i >> 1) ^ i;

    }

    return gray;

}
