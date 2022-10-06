
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int uravnenie(double x){ return (pow((x+125),3))-45*x-18;}
int main()
{
    unsigned int variant,N,n1 = 1,flag = 0;
    double x1,x2,delta,delta1,k,count;
    int key;
    while(variant != 1 || variant!=2){
        if(flag!=0) break;
        printf("Enter variant (1 or 2): ");
        scanf("%u", &variant);
        if (variant==1) {
            printf("Perform Action for var 1\n");
            printf("Enter X1, X2, N: \n");
            scanf("%lf", &x1);
            scanf("\n%lf", &x2);
            scanf("\n%d", &N);
            printf("X1=%.2f, X2=%.2f, N=%d", x1, x2, N);
            delta1 = (x2-x1)/(N-1);
            printf("\n**************************");
            printf("\n*  N  *  X  *  F(X)   *");
            printf("\n**************************");
            printf("\n+-----+-----+------------+");
            for (;n1!=N+1;x1+=delta1){
                if((n1%6)==0){
                    printf("\nPress Any Key to Continue…\n");
                    scanf("%d", &key);
                    printf("\n+-----+-----+------------+");
                }
                k=uravnenie(x1);
                printf("\n|  %d  |%.2f  |%.2f|", n1, x1,k);
                printf("\n+-----+-----+------------+");
                n1++;
            }
            flag=1;
        }
        else if (variant==2) {
            printf("Perform Action for var 2\n");
            printf("Enter X1, X2, delta: \n");
            scanf("%lf", &x1);
            scanf("\n%lf", &x2);
            scanf("\n%lf", &delta);
            printf("X1=%.2f, X2=%.2f, delta=%.2f", x1, x2, delta);
            printf("\n**************************");
            printf("\n*  N  *  X  *  F(X)   *");
            printf("\n**************************");
            printf("\n+-----+-----+------------+");
            for (;x1<=x2;x1+=delta){
                if((n1%6)==0){
                    printf("\nPress Any Key to Continue…\n");
                    scanf("%d", &key);
                    printf("\n+-----+-----+------------+");
                }
                k=uravnenie(x1);
                printf("\n|  %d  |%.2f  |%.2f|", n1, x1,k);
                printf("\n+-----+-----+------------+");
                n1++;
            }
            flag=1;
        }
        else{
            printf("Variant not valid \n");
            flag=0;
        }
        printf("\nProgram finished\n");}
    return 0;
}

