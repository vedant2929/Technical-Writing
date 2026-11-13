
# Doxygen Documentation

## 1. Introduction

Doxygen is a documentation generator used to create software documentation from specially formatted comments in source code.

## 2. Purpose

- Documents C and C++ programs.
- Generates HTML documentation.
- Can generate LaTeX documentation.
- Helps developers understand functions, parameters and return values.

## 3. Documentation Tags

| Tag | Purpose |
|---|---|
| @file | Describes a source file |
| @brief | Provides a short description |
| @param | Describes a function parameter |
| @return | Describes the returned value |
| @author | Specifies the author |
| @version | Specifies the version |

## 4. Example

```cpp
/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the integers.
 */
int add(int a, int b) {
    return a + b;
}
```

## 5. Doxygen Workflow

1. Write documentation comments in the source code.
2. Configure Doxygen using a Doxyfile.
3. Run Doxygen.
4. Open the generated HTML documentation.

## 6. Conclusion

Doxygen simplifies code documentation and improves software maintainability by generating structured documentation from source-code comments.
