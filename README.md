# Final_Project
🛒 Supermarket Billing System - C++ Project 🎯
🚀 Introduction
Welcome to the Supermarket Billing System, a C++ console-based project designed to manage products and generate customer bills efficiently! This program helps administrators handle inventory and allows buyers to purchase items with ease. 💰

🎯 Features
🏢 Administrator Panel
🔹 🔐 Secure Login (Username: ompatel, Password: 1)
🔹 ➕ Add Products (Code, Name, Price, Discount)
🔹 ✏️ Modify Products (Edit details)
🔹 ❌ Delete Products (Remove from inventory)
🔹 📜 View Product List (Check available items)

🛍️ Buyer Panel
🛒 📜 View Products (See what's available)
🛒 💰 Purchase Items (Select product & quantity)
🛒 🧾 Generate Bill (Total with applied discounts)

🗃️ Data Structures Used
📌 Arrays (arrc[], arrq[]) → Used for storing product codes and quantities while processing a purchase.
📌 File Handling (fstream) → Acts as a persistent data structure to store product details.
📌 Class (shopping) → Implements encapsulation by grouping all related functions & variables.
📌 Loops & Conditionals (while, for, if-else) → Used for menu navigation and searching in files.
📌 String (string pname) → Stores product names.

🔹 Why File Handling Instead of Other DS?
Instead of using arrays or linked lists for storage, files are used for permanent data storage, ensuring data is available even after restarting the program.

📂 File Handling
📌 Stores product details in database.txt
📌 Uses database1.txt for editing/deleting records
📌 Ensures data persistence between sessions

🔑 How to Run
💻 Compile the program:

bash
Copy
Edit
g++ supermarket.cpp -o supermarket
💻 Run the program:

bash
Copy
Edit
./supermarket
🖥️ Navigate through the menu & explore the features!

🚀 Future Enhancements
✨ Better Admin Authentication 🔐
✨ Database Integration (MySQL) 🗄️
✨ Graphical User Interface (GUI) 🎨
✨ Barcode Scanner Support 🔍
✨ Linked List for Product Management to enhance efficiency 🔗

🎯 This project is a great example of:
✅ Object-Oriented Programming (OOP) in C++
✅ File Handling Techniques
✅ User-Friendly Console-Based Applications
✅ Basic Data Structures (Arrays, File Handling, Strings)

💡 Ready to take this project to the next level? Let's build the future of smart supermarkets! 🚀
