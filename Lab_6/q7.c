#include <stdio.h>

int main() {
    // Write C code here
    int a[10];
    int ne=0,pe=0,no=0,po=0,o=0;
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    if(a[i]>0&&a[i]%2==0)
        pe+=1;
    else if(a[i]>0&&a[i]%2!=0)
        po+=1;
    else if(a[i]<0&&a[i]%2!=0)
        no+=1;
    else if(a[i]<0&&a[i]%2==0)
        ne+=1;
    else 
        o+=1;
}
    
    printf(" positive even=%d\n",pe);
        printf(" positive odd=%d\n",po);
            printf(" negative even=%d\n",ne);
                printf(" begative odd=%d\n",no);
                    printf("zeros=%d\n",o);

    return 0;
}