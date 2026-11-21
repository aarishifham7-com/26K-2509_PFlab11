#include <stdio.h>

struct item{
    int id;
    char name[50];
    int quantity;
    float unit_price;
};

int main(){
    struct item arr[5];
    int i,total;
    int item_id;
    float total_value = 0;
    total = 0;
    for(i=0; i<5; i++){
        printf("Enter your id :");
        scanf("%d",&arr[i].id);
        printf("Enter your name :");
        scanf("%49s",arr[i].name);
        printf("Enter the quantity :");
        scanf("%d",&arr[i].quantity);
        printf("Enter the price : ");
        scanf("%f",&arr[i].unit_price);
    }
    for(i=0; i<5; i++){
        total_value = total_value + (arr[i].quantity * arr[i].unit_price);
    }
    printf("Total inventory value is : %.2f\n", total_value);
    printf("Enter the item id :");
    scanf("%d",&item_id);
    for(i=0; i<5; i++){
        if(arr[i].id == item_id){
            printf("ID: %d\n",arr[i].id);
            printf("Name: %s\n",arr[i].name);
            printf("Quantity: %d\n",arr[i].quantity);
            printf("Price: %.2f\n",arr[i].unit_price);
        }
    }
    return 0;
}
