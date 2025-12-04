#include<stdio.h>
//#include<stdlib.h>

int main(){
    int a[10],n,i,loc=0,item;

    printf("enter elements\n");
    for(i=0;i<=9;i++){
        scanf("%d \n",&a[i]);
    }
    
        printf("enter element to be searched \n");
        scanf("%d \n",&item);

            for(i=0;i<n;i++){
                if(a[i]==item){
                    loc=i+1;
                    break;
                }
            }
        
        if(loc>0){
            printf("%d  location found \n",loc);
        }    
        else{
            printf("location not found \n");
        }
        return 0;
}