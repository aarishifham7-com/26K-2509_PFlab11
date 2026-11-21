#include <stdio.h>
#include <math.h>

int calculateChecksum(int transaction_id);

int main() {
    int transaction_id;
    printf("Enter your transcation id :");
    scanf("%d",&transaction_id);
    printf("%d",calculateChecksum(transaction_id));
    return 0;
}

int calculateChecksum(int transaction_id){
    int length = (int)log10(transaction_id) + 1;
    if(length == 1){
        return transaction_id;
    }
    else{
        int i;
        int sum = 0;
        for(i=0; i<length; i++){
            sum = sum + transaction_id % 10;
            transaction_id = transaction_id / 10;
        }
        transaction_id = sum;
        return(calculateChecksum(sum));
    }
}
