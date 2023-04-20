//Q26
#include <stdio.h>

int removeDuplicates(int A[], int n) {

    if (n == 0) return 0;

    int i, j;

    i = 1, j = 1;

    while (j < n) {

        while (A[j - 1] == A[j]) {

            j++;

            if (j >= n) goto OUT;

        }

        A[i] = A[j];

        i++;

        j++;

    }

OUT: // to bypass return warning

    return i;

}

