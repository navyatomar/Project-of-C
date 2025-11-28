#ifndef MENU_H
#define MENU_H

#define MAX_PRODUCTS 50       //Maximum number of products in the menu

typedef struct {
    int id;                 //Stores Product ID
    char name[50];          //Stores Name of Product
    float price;            //Stores Price of Product
} Product; 

int update_menu(const char *filename, Product menu[]); 
void print_menu(Product menu[], int n);
int find_product_index(Product menu[], int size_menu, int id);

#endif
