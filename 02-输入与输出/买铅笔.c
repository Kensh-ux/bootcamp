#include <stdio.h>
int main(){
    int n;
    int digit1,price1;
    int digit2,price2;
    int digit3,price3;
    scanf("%d",&n);
    int total1=0;
    int total2=0;
    int total3=0;
    scanf("%d",&digit1);
    scanf("%d",&price1);
    scanf("%d",&digit2);
    scanf("%d",&price2);
    scanf("%d",&digit3);
    scanf("%d",&price3);
    int m=n;
    do{
    m =m-digit1;
    total1 = total1+price1;
    } while(m>0);
    int k=n;
    do{
    k =k-digit2;
    total2 = total2+price2;
    } while(k>0);
    int l=n;
    do{
    l =l-digit3;
    total3 = total3+price3;
    } while(l>0);

    if(total1<total2 && total1<total3){
        printf("%d",total1);
    }else if(total2<total1 && total2<total3){
        printf("%d",total2);
    }else{
        printf("%d",total3);
    }
    return 0;
}
//这也太史山了