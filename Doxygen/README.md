# Doxygen Documentation

## 1. Introduction
Doxygen is a documentation generation tool that creates reference documentation directly from specially formatted comments in source code.

## 2. Uses
- Generate software reference manuals.
- Document classes and functions.
- Describe parameters and return values.
- Generate HTML and LaTeX documentation.

## 3. Documentation Comments
Example in C++:
```cpp
/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}
```

## 4. Common Doxygen Commands

| Tag | Purpose |
|---|---|
| `\brief` | Short description |
| `\param` | Parameter description |
| `\return` | Return value description |
| `\author` | Author information |
| `\version` | Version information |
| `\see` | Reference to related items |
| `\note` | Additional note |

## 5. Basic Workflow

1. Write specially formatted comments in the source code.
2. Generate a configuration file.
3. Edit the configuration file.
4. Run Doxygen.
5. Open the generated documentation.

## 6. Generate Configuration
```bash
doxygen -g Doxyfile
```

## 7. Generate Documentation
```bash
doxygen Doxyfile
```

## 8. Output
Doxygen can generate:
- HTML documentation
- LaTeX documentation
- PDF documentation through the LaTeX output workflow

The generated HTML documentation can commonly be opened at:
```text
html/index.html
```

## 9. Configuration
The Doxyfile controls settings such as project name, input files, output formats, and recursive directory scanning.

## Conclusion
Doxygen automates code documentation and helps developers maintain readable and organized software reference manuals.
