#include<stdio.h>

int main(){

int a[50],n,i,j,temp;
printf("Enter a size of an array\n");
scanf("%d",&n);

printf("Enter a element in array\n");
for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

for(i=1;i<n;i++){

    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp){

        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=temp;
}
printf("sort elemnts are\n");

for(i=0;i<n;i++){

    printf("%d\t",a[i]);
}

}
