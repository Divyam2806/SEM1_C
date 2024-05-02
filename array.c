#include<stdio.h>
#include<math.h>

int find_missing_term(int arr[], int size){
    for(int i = 0; i < size-1 ; i++){
        if( arr[i+1] - arr[i] > 1 ){
            return arr[i+1];
        }
        else{
            return 23;
        }
    }
}

int main(){ 
    int arr[6] = {10, 11, 12, 13, 15, 16};
    int size = sizeof(arr[6]);
    int missing_term = find_missing_term(arr[6], size) ;

    if(missing_term != 23){
        printf("missing term is %d", missing_term);
    } else{
        printf("no missing term");
    }
     
     return 0;
}