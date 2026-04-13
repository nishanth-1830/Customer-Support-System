# 📌 Customer Support System in C

## 👥 Team Members
- K.Venkata Nishanth Reddy
- Ravipatri Rajesh

---

## 🎯 Problem Statement
In many organizations, managing customer complaints manually is inefficient and time-consuming.  
This project aims to develop a **Customer Support System** using C that allows users to efficiently manage support tickets with basic CRUD operations.

---

## 💡 Project Objective
- Implement real-world problem solving using **Data Structures in C**
- Perform **CRUD operations (Create, Read, Update, Delete)**
- Use **dynamic memory allocation**
- Develop a **menu-driven application**

---

## 🧱 Data Structure Used
We use a **Linked List** to store customer support tickets dynamically.

Each node contains:
- `Ticket ID`
- `Customer Name`
- `Issue Description`
- `Status`

---

## ⚙️ Features (CRUD Operations)

- ➕ **Create** – Add a new ticket  
- 📋 **Read** – Display all tickets  
- ✏️ **Update** – Modify ticket details/status  
- ❌ **Delete** – Remove a ticket  
- 🔍 **Search** – Find ticket by ID  

---

## 🧠 Algorithm (Basic Steps)

### 1. Add Ticket
- Allocate memory using `malloc`
- Input ticket details
- Insert node into linked list

### 2. Display Tickets
- Traverse linked list
- Print each node’s data

### 3. Search Ticket
- Traverse list
- Compare Ticket ID

### 4. Update Ticket
- Search node by ID
- Modify details

### 5. Delete Ticket
- Locate node
- Adjust pointers
- Free memory using `free`

---

## 🖥️ Sample Menu

