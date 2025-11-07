# 🚀 Libft

> A comprehensive custom C library implementing standard C functions and bonus utilities.

---

## 🎯 Project Goals

This is the foundational project at 42. It was a deep dive into the **C programming language fundamentals**. The primary goal was to gain a rock-solid understanding of **manual memory management** (`malloc`, `free`) and the inner workings of common C library functions. This project forces you to build a robust, error-free, and well-documented toolset that serves as the base for all future C projects.

## 🛠️ Technical Details

* **Standard Functions:** Reimplemented a wide range of functions from standard libraries like `<string.h>`, `<stdlib.h>`, and `<ctype.h>` (e.g., `ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_calloc`).
* **Additional Functions:** Developed new, useful functions not found in the standard library, such as `ft_split` (for splitting strings by a delimiter) and `ft_itoa` (for integer-to-string conversion).
* **Linked List Manipulation:** Implemented a full set of functions to create and manipulate singly linked lists (`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, etc.).
* **Challenge:** The main challenge was ensuring **robustness and memory safety**. Every function had to be protected against edge cases (like NULL pointers) and meticulously checked to prevent memory leaks.

## ⚙️ How to Compile & Run

1.  Clone the repository:
    ```bash
    git clone [https://github.com/carlopezc/Libft.git](https://github.com/carlopezc/Libft.git)
    cd Libft
    ```
2.  Compile the library:
    ```bash
    make
    ```
    This will compile all source files and create the static library file `libft.a`.

3.  To use it in another program, link the library during compilation:
    ```bash
    gcc your_program.c -L. -lft
    ```

