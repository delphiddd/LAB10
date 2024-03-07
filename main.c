#include <stdio.h>

minmaxmean(int a , int b , int c , int d , int *max , int *min , float *mean){
    if (a>b && a>c && a>d)
        *max = a;
    else if(b>a && b>c && b>d)
        *max = b;
    else if(c>a && c>b && c>d)
        *max = c;
    else if(d>a && d>b && d>c)
        *max = d;
    
    if (a<b && a<c && a<d)
        *min = a;
    else if(b<a && b<c && b<d)
        *min = b;
    else if(c<a && c<b && c<d)
        *min = c;
    else if(d<a && d<b && d<c)
        *min = d;
    
    *mean = (a+b+c+d)/4.0;

}
int main(){
    int a, b , c , d , max ,min;
    float mean;
    printf("Enter a: ");
    scanf("%d" , &a);
    printf("Enter b: ");
    scanf("%d" , &b);
    printf("Enter c: ");
    scanf("%d" , &c);
    printf("Enter d: ");
    scanf("%d" , &d);
    minmaxmean(a , b , c , d , &max , &min , &mean);
    printf("Max = %d\n" ,max);
    printf("Min = %d\n" ,min);
    printf("Mean = %f\n" ,mean);
}