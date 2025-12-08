# Libft

A custom C library implementing standard C library functions and additional utility functions. This library serves as a foundation for future C projects.

## Description

Libft is a comprehensive collection of commonly used C functions, reimplemented from scratch. It includes standard library functions (libc), additional utility functions, and bonus functions for linked list manipulation. The project also incorporates `get_next_line` and `ft_printf` implementations.

## Features

### Standard C Library Functions (libc)
- **Character checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String manipulation**: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`
- **Memory operations**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Character conversion**: `ft_toupper`, `ft_tolower`
- **String to number**: `ft_atoi`, `ft_atof`

### Additional Utility Functions
- **String operations**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`, `ft_strcmp`, `ft_strcpy`
- **Number to string**: `ft_itoa`
- **Output functions**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Memory**: `ft_realloc`

### Bonus: Linked List Functions
- `ft_lstnew` - Create new list node
- `ft_lstadd_front` - Add node at the beginning
- `ft_lstadd_back` - Add node at the end
- `ft_lstsize` - Count list elements
- `ft_lstlast` - Get last node
- `ft_lstdelone` - Delete single node
- `ft_lstclear` - Delete entire list
- `ft_lstiter` - Iterate through list
- `ft_lstmap` - Apply function to list elements

### Extended Functions
- **ft_printf**: Custom implementation of printf supporting `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- **get_next_line**: Read line from file descriptor with configurable buffer size

## Structure

```
libft/
├── inc/
│   └── libft.h          # Header file with function prototypes
├── src/
│   ├── ft_*.c           # Implementation files
│   ├── get_next_line.c  # GNL implementation
│   └── ft_printf.c      # Printf implementation
├── obj/                 # Object files (generated)
├── Makefile             # Build configuration
└── libft.a              # Compiled library (generated)
```

## Compilation

### Requirements
- gcc
- make

### Build Commands

```bash
# Compile the library
make

# Clean object files
make clean

# Remove all generated files
make fclean

# Recompile from scratch
make re
```

### Compiler Flags
The library is compiled with the following flags:
- `-Wall` - Enable all warnings
- `-Wextra` - Enable extra warnings
- `-Werror` - Treat warnings as errors

## Usage

### Include in Your Project

1. Compile the library:
```bash
make
```

2. Include the header in your source files:
```c
#include "libft.h"
```

3. Compile your project with the library:
```bash
gcc your_file.c -L. -lft -I./inc -o your_program
```

### Example

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, World!");
    ft_printf("%s\n", str);
    
    char **split = ft_split(str, ' ');
    int i = 0;
    while (split[i])
    {
        ft_printf("Word %d: %s\n", i, split[i]);
        free(split[i]);
        i++;
    }
    free(split);
    free(str);
    
    return (0);
}
```

## Configuration

### Buffer Size (get_next_line)
The buffer size for `get_next_line` can be configured at compile time:

```bash
gcc -D BUFFER_SIZE=42 your_file.c -L. -lft
```

Default: 512 bytes

## Function Categories

### Memory Management
Functions that handle memory allocation and manipulation, ensuring proper memory usage and preventing leaks.

### String Processing
Comprehensive string manipulation utilities for common operations like splitting, joining, trimming, and searching.

### I/O Operations
Functions for formatted output and file reading, including a complete printf implementation and line-by-line file reading.

### Data Structures
Linked list implementation with full CRUD operations and iterators.

## Notes

- All functions handle edge cases and NULL pointers appropriately
- Memory allocations are checked and handled safely
- The library follows the 42 school coding standards (Norminette)
- Functions are optimized for clarity and correctness

## License

This project is part of the 42 school curriculum.

## Author

Created as part of the 42 coding school projects.
