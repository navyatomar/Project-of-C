#include <stdio.h>
#include <string.h>
#include "menu.h"

int update_menu(const char *filename, Product menu[]) {      //Function to get the menu from menu.txt file
    FILE *fptr = fopen(filename, "r");
    if (!fptr) {
        printf("Error in opening the file %s\n", filename);
        return 0;
    }

    int  count= 0;
   // The loop below reads each line from the file and puts them in the menu array of structure.
    while (fscanf(fptr, "%d %s %f",        
                  &menu[count].id,                      
                  menu[count].name,
                  &menu[count].price) == 3) { 
        count++;
    }

    fclose(fptr);
    return count;
}

int find_product_index(Product menu[], int size_menu, int id) {   //Function to return the index of a product in the menu based on its ID
    for (int i = 0; i < size_menu; i++) {
        if (menu[i].id == id)
            return i;
    }
    return -1;
}

void print_menu(Product menu[], int size_menu) {     //Function to display the menu on screen
    printf("\n========= RESTAURANT MENU =========\n");
    printf("ID\tProduct\t\tPrice\n");
    printf("-----------------------------------\n");

    for (int i = 0; i < size_menu; i++) {
        printf("%d\t%-15s\t%.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
    printf("-----------------------------------\n");
}


