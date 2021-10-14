#include <stdio.h>
# define n 12
int a[n] = {48,1,98,74,30,7,37,20,740,100,2,51};

int bubbleswap(int *a, int j, int s){
        int t;
        for (int i=1 ; i < j; i++) {
            if (a[i] < a[i - 1]) {
                t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                s = 1;
            }
        }
        j--;
        return s;
}
void bubble(int *a,  int size)
{
    int j = n, s = 1;
    while (s) {
        s = 0;
        s = bubbleswap(a,j,s);
    }
}
int main () {
    bubble(a, n);        
    return 0;
}
