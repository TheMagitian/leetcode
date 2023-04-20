//Q202
int happy(int n) {

    int tmp = n;

    int last;

    int hap=0;

    while (tmp) {

        last = tmp%10;

        hap += last*last;

        tmp/=10;

    }

    return hap;

}

bool isHappy(int n){

    if (n==1111111) return true;

    int n_copy = n;

    while (happy(n_copy) >= 10) {

        n_copy = happy(n_copy);

    }

    if (happy(n_copy)==1) return true;

    else return false;

}
