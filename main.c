#include <stdio.h>
#define numbers "numbers.txt"
int main() {
    int x[100] = {},i = 0,n = 0,max = x[0],min = x[0],disv = 0,d;
    FILE *fin;
    fin = fopen(numbers, "r");
    if (fin == NULL){
        return 0;
    }
    while (!feof(fin)){
        fscanf(fin,"%d",&x[i]);
        i++;
    }
    while (n < i){
        while (n<2){
            if(max < x[n]){
                max = x[n];
                n++;
            }else if(min > x[n]){
                min = x[n];
                n++;
            }else{
                n++;
            }
        }while(x[n] == x[n-2] + x[n-1] || x[n] == x[n-2] - x[n-1] || x[n] == x[n-2] * x[n-1] || x[n] == x[n-2] / x[n-1]){
            if(max < x[n]){
                max = x[n];
                n++;
            }else if(min > x[n]){
                min = x[n];
                n++;
            }else{
                n++;
            }
        }
        disv++;
        for(d=n; d<i; d++){
            x[d] = x[d + 1];
        }
        i--;
        n++;
    }
    printf("Maximum value: %d \nMinimum value: %d \n",max,min);
    printf("# of discarded values: %d",disv);
    return 0;
}