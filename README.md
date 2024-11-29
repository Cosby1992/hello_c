# Learning C language
learning c language bit by bit. This file will container notes gathered through the learning process. 

## Compiling

### Compiler
I'm starting out by using the most common compiler, gcc (GNU Compiler Collection) version 9.2.0 (tdm64-1).

### Targets

#### Windows PC
x86_64-w64-mingw32

### Basic compilation

The following command will compile the file `program.c` to binary (executable) `program.exe`
`gcc program.c -o program`

#### Flags
- **-Wall** enable all warnings

## Format specifiers


## Notes

- `printf` accepts format string like `printf("some number %d", some_int);`
- `scanf` takes user inputs using a format string and a reference `int num; scanf("%d", &num);`

- **Common format specifiers:**

| Specifier | Meaning              | Example Input |
|-----------|----------------------|---------------|
| `%d`      | Integer              | `42`          |
| `%f`      | Floating-point number| `3.14`        |
| `%c`      | Single character     | `a`           |
| `%s`      | String               | `hello`       |
| `%lf`     | Double               | `3.141592`    |
