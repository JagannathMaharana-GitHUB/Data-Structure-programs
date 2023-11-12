#include <stdio.h>
#include <conio.h>

void main(){
    int n,i,find,flag=0;
    printf("Enter the number of elements to Insert into Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the the elements into Array: ");
    for(i=0;i<n;i++) {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&find);
    for(i=0;i<n;i++) {
        if (a[i]==find) {
            flag++;
            break;
        }
    }
    if(flag!=0){
        printf("%d is available at index %d.",find,i);
    }
    else{
        printf("%d is not available int the array.",find);
    }
}