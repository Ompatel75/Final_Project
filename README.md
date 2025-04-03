# 🛒 Supermarket Billing System - C++ Project 🎯  

## 🚀 Introduction  
Welcome to the **Supermarket Billing System**, a **C++ console-based application** designed to manage product inventory and process customer purchases efficiently. This system allows **administrators** to add, modify, and remove products, while **buyers** can purchase items and receive a detailed bill. 💰  

---

## 🎯 Features  

### 🏢 **Administrator Panel**  
- 🔹 **🔐 Secure Login** (Username: `techtitans@gmail.com`, Password: `4`)  
- 🔹 **➕ Add Products** (Code, Name, Price, Discount)  
- 🔹 **✏️ Modify Products** (Edit product details)  
- 🔹 **❌ Delete Products** (Remove from inventory)  
- 🔹 **📜 View Product List** (Check available items)  

### 🛍️ **Buyer Panel**  
- 🛒 **📜 View Products** (See the available products)  
- 🛒 **💰 Purchase Items** (Select product & quantity)  
- 🛒 **🧾 Generate Bill** (Total price with applied discounts)  

---

## 🗃️ Data Structures Used  

📌 **Arrays (`arrc[]`, `arrq[]`)** → Stores product codes and quantities while processing a purchase.  
📌 **File Handling (`fstream`)** → Acts as a **persistent data structure** for storing product details.  
📌 **Class (`shopping`)** → Implements **encapsulation** by grouping all related functions & variables.  
📌 **Loops & Conditionals (`while`, `for`, `if-else`)** → Used for menu navigation and searching in files.  
📌 **String (`string pname`)** → Stores product names.  

🔹 **Why File Handling Instead of Other DS?**  
Instead of using **arrays or linked lists** for storage, **files** ensure **data persistence**, so product information remains even after restarting the program.  

---

## 📂 File Handling  
📌 Stores product details in **`database.txt`**  
📌 Uses **`database1.txt`** for temporary storage while editing/deleting records  
📌 Ensures **data is saved even after program termination**  

---

## 🔑 How to Run  
💻 **Compile the program:**  
```bash
g++ supermarket.cpp -o supermarket
