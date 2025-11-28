#include <stdio.h>
#include "order.h"

void initialize(Order *o) {    //Function to initialize the number of products in the order to zero
    o->count = 0;
}

int add_product(Order *o, int id, int qty) {   // Function to add an product in the order
    if (o->count >= MAX_ORDER_PRODUCTS)
        return -1;

    o->productId[o->count] = id;
    o->qty[o->count] = qty;
    o->count++;

    return 0;
}

void print_bill(Order *o,Product menu[], int size_menu) {    //Function to print the bill of the order
    float total = 0;

    printf("\n============= ORDER SUMMARY =============\n");
    printf("Product\t\tQty\tPrice\tSubtotal\n");
    printf("------------------------------------------\n");
   // The loop below iterates through the the products in order(structure) and calculates the subtotal.
    for (int i = 0; i < o->count; i++) {
        int idx = find_product_index(menu, size_menu, o->productId[i]);
        float price = menu[idx].price;
        float sub = price * o->qty[i];

        total += sub;

        printf("%-15s\t%d\t%.2f\t%.2f\n",
               menu[idx].name,
               o->qty[i],
               price,
               sub);
    }

    float gst = total * 0.05;
    float final = total + gst;

    printf("------------------------------------------\n");
    printf("Total:\t\t\t\t%.2f\n", total);
    printf("GST (5%%):\t\t\t%.2f\n", gst);
    printf("Final Amount:\t\t\t%.2f\n", final);
    printf("==========================================\n");
}
