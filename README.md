# Custom "printf" Implementation

A simplified recreation of the standard printf function in C as part of Holberton School curriculum.

## 📋 Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Project Specifications

| Category             | Details                                                                 |
|----------------------|-------------------------------------------------------------------------|
| Flags                | -Wall -Werror -Wextra -pedantic -std=gnu89                              |
| Style                | Betty compliant                                                         |
| Function Limit       |     5 functions per file                                                |
| Header               | main.h (include-guarded)                                                |
| Authorized Functions | write, malloc, free, va_start, va_end, va_copy, va_arg                  |

## 🛠️ Compilation

To compile the project, run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_printf
```
This will generate an executable file named my_printf.

## 🧪 Testing
To test the '_printf' function, you can run:
```bash
./my_printf
```
We also included test cases inside the test/ directory. You may create or edit your own tests as needed

## Implemented Conversion Specifiers

| Specifier | Description                  | Example Usage                |
|-----------|------------------------------|------------------------------|
| %c        | Single character             | `_printf("%c", 'A')`         |
| %s        | String                       | `_printf("%s", "test")`      |
| %%        | Percent sign                 | `_printf("100%% completed")` |
| %d, %i    | Signed integer               | `_printf("%d", -42)`         |
### Not Yet Implemented

- `%u`, `%o`, `%x`, `%X`, `%p`, `%S`, `%r`, `%R`

## File Descriptions

| File          | Purpose                                                                 |
|---------------|-------------------------------------------------------------------------|
| `_printf.c`   | Handles format conversions (`%c`, `%s`, `%%`)                           |
| `functions.c` | Handles format conversions (`%d`, `%i`)                                 |
| `man_3_printf`|man page for the function                                                |
| `main.h`      | Contains function prototypes and library includes                       |
| `test/`       | Holds test cases to verify functionality                                |
| `README.md`   | Project documentation and specifications                                |

## ℹ️ Behavior With Extra Arguments
When calling _printf("hello %s\n", "world", 1, 2, 3);, the function will ignore the extra arguments. It uses va_list to retrieve only the number of arguments specified in the format string. The function does not fail, but the user must pass the correct number of arguments for predictable results.

## 👥 Contributors

### Ahmed Dawwari  
GitHub: [Ahmedyahyay](https://github.com/Ahmedyahyay)  
**Main Contributions:**
- Implemented the core logic of `_printf`
- Handled `%c`, `%s`, `%%`, `%d`, `%i` format specifiers
- Refactored code and created `functions.c`
- Managed memory and error handling
- Updated `main.h` and created helper functions

### Munirah Faqihi  
GitHub: [MuFaqihi](https://github.com/MuFaqihi)  
**Main Contributions:**
- Created and organized test files
- Authored and maintained `README.md`
- Worked on `man_3_printf` documentation
- Set up initial project structure and headers
- Handled commits related to file organization

## 🤝 Team Collaboration

We worked together to complete the project by dividing tasks clearly:

- **Ahmed** focused on writing the core logic, implementing specifiers, and refactoring the code using helper functions.
- **Munirah** handled documentation (`README.md`, `man_3_printf`), organized the directory structure, and created the test files to ensure functionality.

Commits from both contributors reflect consistent participation, responsibility division, and code collaboration.


## 📌 Future Improvements
- Add more format specifiers (%u, %o, %x, etc.)
- Refactor using an array of structs with function pointers
- Improve error handling for unsupported or malformed format strings
