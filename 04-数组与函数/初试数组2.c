#include <stdio.h>
int main(){
    int l,m;
    scanf("%d %d", &l, &m);

    int longs[l+1];
    for(int i = 0; i <= l; i++) {
        longs[i] = 0;
    }
    
    int kai,jie;
    int tree=0;

    for(int i=0; i<m; i++){
        scanf("%d %d", &kai, &jie);
        for(int j=kai; j<=jie; j++){
            longs[j]=1;
        }
    }

    for(int k=0; k<=l; k++){
        if(longs[k] == 0){
            tree++;
        } 
    }
    printf("%d", tree);
    return 0;
}