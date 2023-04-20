//Q9
#include<stdio.h>

// To check if number is palindrome or not

double pow(double a, double b) {

  int i=0,res = 1;

  for (i=0;i<b;i++) res*=a;

  return res;

}

bool isPalindrome(int n) {

  int tmp1,tmp2;

  int pal;

  int last;

  int count;

  int res;

  tmp1 = n;

  count = 0;

  pal = 0;

  while (tmp1>=1) {

    count += 1;

    tmp1/=10;

  }

  tmp2 = n;

  while (count > 0) {

    last = tmp2%10;

    pal += last * pow(10,count-1);

    tmp2 /= 10;

    count--;

  }

  if (pal == n) res=1;

  else res=0;

  return res;

}
