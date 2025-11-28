PROJECT-RESTAURANT_MANAGEMENT_SYSTEM
📌 Features

Loads menu items from an external file (menu.txt) Displays menu in a formatted layout Allows users to enter product ID and quantity Validates input and product IDs Adds items to cart using structured data Calculates: Item-wise subtotal Total bill GST at 5% Final payable amount Generates a clean and readable invoice

🛠 Technologies & Concepts Used C Programming Structures Multi-file programming (.c + .h) File handling (fopen, fscanf, fclose) Modular functions Arrays & loops Formatted output (printf)

🚀 How to Run the Project

Compile the Code Use GCC or any C compiler: gcc src/main.c src/menu.c src/order.c src/util.c -I include -o main

Run the Executable ./main

Ensure menu.txt Exists Example format:
