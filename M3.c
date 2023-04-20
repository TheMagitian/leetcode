//Q33
#include <stdio.h>

int search(int A[], int n, int target) {

    int l, N, m;

    l = 0;

    N = n-1;

    while (l <= N) {

        m = (l + N) / 2;

        if (A[m] == target) return m;

        

        if (A[l] <= A[m]) {

            if (A[l] <= target && target < A[m]) {

                N=m-1;

            }

            else {

                l=m+1;

            }

        }

        else {

            if (A[m] < target && target <= A[N]) {

                l = m + 1;

            }

            else {

                N = m - 1;

            }

        } 

    }

    return -1;

}

