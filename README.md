Libft – Custom C Standard Library
📌 Libft is my own implementation of essential C standard library functions, created as part of the 42 School curriculum. 
This project helped me deepen my understanding of memory management, pointers, and data structures in C.

📂 Project Overview
🔹 Rewrites standard C library functions (memcpy, strdup, atoi, etc.)
🔹 Provides additional utility functions (ft_split, ft_itoa, etc.)
🔹 Implements linked list functions (t_list for dynamic data structures)
🔹 Ensures memory efficiency and robustness

📜 Features
✅ Part 1 – Standard C Library Functions
Reimplementation of common string.h, ctype.h, and stdlib.h functions.
Example: ft_strlen, ft_memcpy, ft_strncmp, ft_isalpha, etc.

✅ Part 2 – Additional Utility Functions
Custom functions that simplify working with strings, numbers, and memory.
Example: ft_split, ft_itoa, ft_strjoin, ft_substr, etc.

✅ Part 3 – Linked List (t_list) Functions
Implementation of linked list operations such as adding, deleting, and iterating nodes.
Example: ft_lstnew, ft_lstadd_front, ft_lstiter, etc.

⚙️ Compilation & Usage

🔧 1. Clone the repository
git clone (https://github.com/onevilx/libft.git)
cd libft

🔧 2. Compile the library
make

🔧 3. Include it in your project
#include "libft.h"

Link it during compilation:
gcc my_program.c -L. -lft -o my_program

🛠️ Testing & Debugging
✔️ Uses Makefile for compilation
✔️ Tested with Valgrind for memory leaks
✔️ Compatible with norminette

📌 Notes
Fully written in C (C99) and adheres to the 42 coding standard.
No external libraries were used, ensuring compatibility.
This project serves as a foundation for future projects at 42.
📜 License
This project is open-source under the MIT License.

Let me know if you want further refinements! 🚀
