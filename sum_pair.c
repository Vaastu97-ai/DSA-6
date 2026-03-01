#include<stdio.h>
int main()
{
    int n , target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n<2)
    {
        printf("Array should have at least 2 elements\n");
    return 0;
    }

    int arr[n];

    printf("Enter the array elements:");
    for(int i=0 ; i<=n ;i++)
    {
        scanf("%d" , &arr[i]);

    }

    printf("Enter the Target :");
    scanf("%d" , &target);

    //ingore the duplicate values in arrray
    int used[20]={0};

    //core logic
    for (int i=0 ; i<n ; i++){ 

        for (int j=i+1; j<n ; j++){

            if(arr[i] + arr[j] == target){
                printf("The pair is: %d and %d\n", arr[i], arr[j]);
                break;
            }
            else {
                printf("no pair found to provide your sum:%i\n" , target);
                break;
            }
            
                
            }

        }
    

            

    return 0;
}