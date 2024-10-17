//   | 1 | 2 | 3 |                | 1 | 4 | 7 |
//   | 4 | 5 | 6 |     ------>    | 8 | 5 | 2 |
//   | 7 | 8 | 9 |                | 3 | 6 | 9 |

#include <stdio.h>
int main(){
    int arr[3][3]={1,2,3,  4,5,6,  7,8,9};

    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){

            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<3;i++){
        if(i%2==0){
            for(int j=0;j<3;j++){
                printf("%d ", arr[i][j]);
            }
        }

        else if(i%2!=0){
            for(int j=2;j>=0;j--){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}