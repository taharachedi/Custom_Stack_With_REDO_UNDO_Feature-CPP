# 📌 Custom Stack with REDO & UNDO Feature⚡

> **A C++ class for managing strings with built-in undo/redo functionality using stacks. 🚀**

---

## 🌟 Project Overview

The `clsMyString` class provides a **string management system** with the ability to undo and redo changes. It uses **two stacks** to track modifications, allowing users to revert or reapply changes efficiently.

### 🔹 Core Functionalities:
- **Set and Get String Values** ✏️
- **Undo Last Change** ⏪
- **Redo Last Undone Change** ⏩

This implementation ensures a smooth user experience by maintaining a **history of modifications**, making it ideal for text editors, command-based interfaces, and other applications requiring version control.

---

## ✨ Features

### 🔹 Basic String Operations
- **`Set(Value)`**: Updates the string and stores the previous value for undo.
- **`Get()`**: Retrieves the current string value.
- **`Value` Property**: Accessor for the string (supports `get` and `set`).

### 🔹 Undo/Redo Functionality
- **`Undo()`**: Restores the string to its previous state.
- **`Redo()`**: Reapplies the last undone change.

---

## 🚀 How It Works

### 🔹 Managing String Changes
- When `Set(Value)` is called, the current value is pushed onto the **Undo stack** before updating.
- Performing an **Undo** moves the current value to the **Redo stack** and retrieves the last stored value from **Undo**.
- Performing a **Redo** moves the current value back to **Undo** and retrieves the last stored value from **Redo**.

### 🔹 Memory Management
- Only stores necessary changes, preventing excessive memory usage.
- Ensures efficient access through **stack-based** operations.

---

## 📚 Potential Enhancements

- 🏗 **Multi-level Undo/Redo Optimization**: Allowing configurable history depth.
- 🔍 **Change Tracking**: Storing granular changes rather than full strings.
- 📂 **Persistent Storage**: Saving history to a file for session restoration.
- 🚀 **Thread Safety**: Implementing concurrency control for multi-threaded environments.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Stack-based Undo/Redo**: Efficient history tracking.
- **Dynamic String Management**: Using `std::string` for flexible operations.

---

## 🎯 Learning Outcomes

This project demonstrates:
- ✅ **Efficient string modification tracking**
- ✅ **Undo/Redo functionality with stack data structures**
- ✅ **Property-based access in C++ (`__declspec(property)`)**
- ✅ **Memory-efficient implementation of reversible actions**

---

## 📜 License

This project is **open-source**. Feel free to modify and enhance it! 🚀

---

## 🤝 Contributing

Contributions are welcome! If you have ideas for improvements, submit a Pull Request.

---

## 🏁 Ready to Explore?

### 🚀 How to Run
1. **Download** the repository.
2. **Include** `clsMyString.h` in your project.
3. **Compile & Run** your C++ program (e.g., `g++ main.cpp -o output`).
4. **Test** different string modifications, undo, and redo operations.

