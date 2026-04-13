````markdown
# 📘 Customer Support System using Tree (C Program)

## 🎯 Objective
The objective of this project is to implement a Customer Support System using the Tree Data Structure in C programming. This system manages customer tickets and demonstrates CRUD operations.

---

## 👥 Team Members
- K. Nishanth Reddy
- P. Rajesh

---

## 📌 Project Description
This project simulates a customer support system where tickets are stored in a hierarchical structure using a Tree (N-ary Tree).

Each node represents a support ticket, and child nodes represent sub-issues or follow-ups.

---

## 🌍 Real-world Applications
- Helpdesk systems
- Customer support platforms
- Complaint management systems
- IT service tracking

---

## 🧠 Data Structure Used
Tree (N-ary Tree)

### Node contains:
- Ticket ID
- Customer Name
- Issue Description
- Status (Open / In Progress / Resolved)
- Pointer to parent
- List of child nodes

---

## ⚙️ Features

### ➕ Add Ticket
Adds a new ticket under a parent ticket.

### 🔍 Search Ticket
Searches for a ticket using Ticket ID (DFS traversal).

### ✏️ Update Ticket
Updates ticket details like name, issue, and status.

### ❌ Delete Ticket
Deletes a ticket (only if it is a leaf node).

### 📄 Display Tickets
Displays all tickets in hierarchical structure.

---

## 🏗️ System Design
- Root node represents the main system
- Tickets are stored as tree nodes
- Uses Depth First Search (DFS) for traversal

---

## 💻 Technologies Used
- C Programming Language
- Concepts:
  - Structures
  - Pointers
  - Dynamic Memory Allocation
  - Recursion

---

## ▶️ How to Run

1. Compile the program:
   ```bash
   gcc customer_support.c -o support
````

2. Run the program:

   ```bash
   ./support
   ```

---

## 🖥️ Sample Operations

* Add ticket
* Search ticket
* Update ticket
* Delete ticket
* Display tickets

---

## ✅ Advantages

* Efficient hierarchical management
* Easy tracking of issues
* Simple and structured approach

---

## ⚠️ Limitations

* No permanent storage
* Limited child nodes (if fixed)
* Only leaf deletion allowed

---

## 🔮 Future Enhancements

* File handling (save/load data)
* GUI interface
* Priority-based tickets
* Multi-user system

---

## 📷 Demo

(Add your screenshots here)

---

## 📚 Conclusion

This project shows how tree data structures can be applied to build a simple and effective customer support system in C.

```
```

