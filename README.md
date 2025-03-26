# Custom "printf" Implementation

A simplified recreation of the standard printf function in C as part of Holberton School curriculum.

## Project Specifications

| Category             | Details                                                                 |
|----------------------|-------------------------------------------------------------------------|
| Flags                | -Wall -Werror -Wextra -pedantic -std=gnu89                              |
| Style                | Betty compliant                                                         |
| Function Limit       |     5 functions per file                                                |
| Header               | main.h (include-guarded)                                                |
| Authorized Functions | write, malloc, free, va_start, va_end, va_copy, va_arg                  |

## Implemented Conversion Specifiers

| Specifier | Description                  | Example Usage                |
|-----------|------------------------------|------------------------------|
| %c        | Single character             | `_printf("%c", 'A')`         |
| %s        | String                       | `_printf("%s", "test")`      |
| %%        | Percent sign                 | `_printf("100%% completed")` |
| %d, %i    | Signed integer               | `_printf("%d", -42)`         |

### File Descriptions

| File          | Purpose                                                                 |
|---------------|-------------------------------------------------------------------------|
| `_printf.c`   | Handles all format conversions (`%c`, `%s`, `%%`)                       |
| `functions.c` | Handles all format conversions (`%d`, `%i`)                             |
| `main.h`      | Contains function prototypes and library includes                       |
| `test/`       | Holds test cases to verify functionality                                |
| `README.md`   | Project documentation and specifications                                |


## Student

-Ahmed Dawwari (https://github.com/Ahmedyahyay)
-Munirah Faqihi (https://github.com/MuFaqihi)
