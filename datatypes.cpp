//problem.2:cpp (source : Hackerrank)

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    float b;
    char c ;
    double d;
    long e;
    
    scanf("%d %ld %c %f %lf",&a ,&e, &c,&b ,&d);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf",a,e,c,b,d);
    
    return 0;
}
