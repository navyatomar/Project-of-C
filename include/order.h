#ifndef ORDER_H
#define ORDER_H

#include "menu.h"

#define MAX_ORDER_PRODUCTS 20        //Maximum number of products in one single order

typedef struct {
    int productId[MAX_ORDER_PRODUCTS];  //Array to store product IDs
    int qty[MAX_ORDER_PRODUCTS];     //Array to store quantities of every product
    int count;                    //Number of products in the order
} Order;

void initialize(Order *o);
int add_product(Order *o, int id, int qty);
void print_bill(Order *o, Product menu[], int size_menu);

#endif
