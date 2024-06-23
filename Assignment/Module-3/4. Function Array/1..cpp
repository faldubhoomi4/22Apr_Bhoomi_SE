#include<stdio.h>
main()
{
    int arr[] = { 23, 12, 45, 20, 90, 89, 95, 32, 65, 19 }; 
    
    int res = arr[0]; 
  
    for (int i = 0; i < 10; i++) { 
        if (res < arr[i]) 
            res = arr[i]; 
    } 
    
    printf("Array Elements: "); 
    for (int i = 0; i < 10; i++) { 
        printf("%d ", arr[i]); 
    }
 
    printf("\nThe maximum value of the array is: %d", res); 
}
