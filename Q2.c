#include <stdio.h>

struct Product{
    int id;
    char name[50];
    char category[50];
    float price;
    int stock;
};

void displayProductDetails(struct Product s1);

int main(){
    struct Product s1 = {100, "Mobile", "Electronic", 50000, 20};
    displayProductDetails(s1);
    return 0;
}

void displayProductDetails(struct Product s1){
    float fprice;
    fprice = s1.price - (s1.price * 0.05);
    printf("Id of the product is: %d\n", s1.id);
    printf("Name of the product is: %s\n", s1.name);
    printf("Category of the product is: %s\n", s1.category);
    printf("Price of the product is: %.2f\n", s1.price);
    printf("Stock of the product is: %d\n", s1.stock);
    printf("Final price is: %.2f\n", fprice);
}
