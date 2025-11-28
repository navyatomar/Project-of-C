#include <stdio.h>
#include "menu.h"
#include "order.h"
#include "util.h"

int main() {
    Product menu[MAX_PRODUCTS];   //menu is an array instance of structure-Product.
    Order order;            //order is an instance of structure-Order.
    int size_menu;           //Stores the number of products in the menu.

    size_menu = update_menu("menu.txt", menu);    //Get menu from menu.txt file and get the number of products in it.

    if (size_menu == 0) {                       
        printf("Failed to load the menu\n");
        return 0;
    }

    initialize(&order);                  //Initialize the order with 0 products.

 print_menu(menu, size_menu);              //Display the menu on the screen.
    while (1) {
        int id = getInteger("\nEnter Product ID to add (0 to finish): ");  //Read product ID from user.

        if (id == 0)
            break;

        int idx = find_product_index(menu, size_menu, id);      //Find the index of the product in the menu array.
        if (idx == -1) {
            printf("Invalid ID!\n");
            continue;
        }

        int qty = getInteger("Enter quantity: ");      //Get quantity from user.

        if (qty <= 0) {
            printf("Invalid quantity!\n");
            continue;
        }

        add_product(&order, id, qty);               //Add the product to the order using ID and quantity.
        printf("Product added!\n");
    }
    print_bill(&order, menu, size_menu);             //Print the final bill for the order.
    return 0;
}
