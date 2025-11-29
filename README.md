# PROJECT-RESTAURANT_MANAGEMENT_SYSTEM
📌 Features

Loads menu items from an external file (menu.txt)
Displays menu in a formatted layout
Allows users to enter product ID and quantity
Validates input and product IDs
Adds items to cart using structured data
Calculates:
Item-wise subtotal
Total bill
GST at 5%
Final payable amount
Generates a clean and readable invoice

🛠 Technologies & Concepts Used
C Programming
Structures
Multi-file programming (.c + .h)
File handling (fopen, fscanf, fclose)
Modular functions
Arrays & loops
Formatted output (printf)

🚀 How to Run the Project
1. Compile the Code
Use GCC or any C compiler:
gcc src/main.c src/menu.c src/order.c src/util.c -I include -o main

2. Run the Executable
./main

3. Ensure menu.txt Exists
Example format:
<pre>
1 PIZZA 120
2 FRIES 75
3 BURGER 80
4 COKE 40
5 PASTA 140
6 DABELI 35
7 BIRYANI 110
</pre>
📄 Sample Output (Invoice)
<pre>
============= ORDER SUMMARY =============
Product         Qty     Price    Subtotal
------------------------------------------
PIZZA           1       120.00   120.00
BURGER          1       80.00    80.00
------------------------------------------
Total:                           200.00
GST (5%):                         10.00
Final Amount:                    210.00
==========================================
</pre>
