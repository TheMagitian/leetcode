//Q35
int searchInsert(int A[], int n, int target) {

    int a, b, c; 

    a = 0;

    b = n - 1;

    while (a <= b) {

        c = (a+b) / 2;

        if (A[c]==target) {

            return c;

        }

        else if (A[c]<target) {

            a = c + 1;

        }

        else {

            b = c - 1;

        }

    }

    return a;

}

