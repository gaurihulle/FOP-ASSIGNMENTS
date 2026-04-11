/*Assignment 16:
To accept list of N integers and partition list into two sub lists even and odd numbers.*/

#include<stdio.h>
int main()
{
    int i,j,n;
    int arr[50], even[50], odd[50];
    int e_no=0;
    int o_no=0;
    printf("Enter the number of integers in the array:=");
    scanf("%d", &n);
    
    //input array:
    printf("Enter %d integers:=", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //printing array:
    printf("Printing array:=");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    
    //partioning as even and odd:
    for(j=0; j<n; j++)
    {
        if (arr[j]%2==0)
        {
            even[e_no]=arr[j];
            e_no++;
        }
        else{
            odd[o_no]=arr[j];
            o_no++;
        }
    }
    
    //printing even number array:
    printf("\n Even number array:=");
    for(i=0; i<e_no; i++)
    {
        printf("%d ", even[i]);
    }
    
    //printing odd number array:
    printf("\n Odd number array:=");
    for(i=0; i<o_no; i++)
    {
        printf("%d ", odd[i]);
    }
}

/*OUTPUT:
Enter the number of integers in the array:=10

Enter 10 integers:=1 2 3 45 67 80 34 5 64 12 

Printing array:=1 2 3 45 67 80 34 5 64 12 
 
Even number array:=2 80 34 64 12 

Odd number array:=1 3 45 67 5*/
