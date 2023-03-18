#include <stdio.h>
#include <stdlib.h>

float findMedian(float nums[], int n);

int main()
{
    int n;
    for(int i=0; ;i++){
        printf("Enter the size of the array : ");
        scanf("%d",&n);
        float numbers[n];
        printf("Enter numbers : ");
        for(int i=0; i<n ; i++){
        scanf("%f", &numbers[i]);
        }
        float result = findMedian(numbers, n);
        printf("The median is %.2f \n", result);
    }
    return 0;
}

float findMedian(float nums[], int n){

    if((n%2)==0){
        return (nums[(n/2)-1] + nums[((n/2)+1)-1])/2;
    }
    else{
        return nums[(n+1)/2-1];
    }


}
