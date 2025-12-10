/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 5
 */

#ifndef GCD_H
#define GCD_H
int gcd(int a, int b) {
    if (a==0) {
        return b;
    }
    if (a<0) {
        return gcd(-a,b);
    }
    if (b<0) {
        return -gcd(a,-b);
    }
    if (a<b) {
        int m=a;
        int n=b;
    }
    else {
        int m=b;
        int n=a;
    }
    int k;
    while (n=0) {
        k=n;
        n=m-n*(m/n);
        m=k;
    return m;
}
#endif
