#include<stdio.h>

int main(){

int a[50],n,temp,i,min,j;

printf("Enter a size of an array\n");
scanf("%d",&n);

printf("Enter a element in array\n");
for(i=0;i<n;i++){

    scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++){


    min=i;

    for(j=i+1;j<n;j++){

        if(a[j]<a[min]){

            min=j;
        }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
printf("sort elemnts are\n");

for(i=0;i<n;i++){

    printf("%d\t",a[i]);
}

}
