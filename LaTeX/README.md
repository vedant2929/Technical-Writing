# LaTeX Documentation

## 1. Introduction
LaTeX is a document preparation system based on the TeX typesetting system. It is used to create structured technical and scientific documents.

## 2. Basic Document Structure
```latex
\documentclass{article}
\begin{document}
Hello World!
\end{document}
```

## 3. Document Classes
Common document classes:
- article
- report
- book
- beamer

Example:
```latex
\documentclass[12pt,a4paper]{article}
```

## 4. Sections and Subsections
```latex
\section{Introduction}
\subsection{Overview}
\subsubsection{Details}
```

## 5. Lists
Numbered list:
```latex
\begin{enumerate}
  \item First item
  \item Second item
\end{enumerate}
```

Bulleted list:
```latex
\begin{itemize}
  \item First item
  \item Second item
\end{itemize}
```

## 6. Mathematical Expressions
Inline mathematics:
```latex
Einstein's equation is \(E=mc^2\).
```

Displayed mathematics:
```latex
\[
v = u + at
\]
```

Fractions and roots:
```latex
\[
\frac{a}{b}, \qquad \sqrt{x}
\]
```

Summation:
```latex
\[
\sum_{i=1}^{n} i
\]
```

## 7. Equations and Matrices
```latex
\begin{equation}
x^2 + y^2 = 1
\label{eq:circle}
\end{equation}
```

```latex
\[
\begin{bmatrix}
1 & 2\\
3 & 4
\end{bmatrix}
\]
```

## 8. Tables
```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks\\
\hline
Amit & 90\\
Neha & 95\\
\hline
\end{tabular}
```

## 9. Figures
```latex
\usepackage{graphicx}

\begin{figure}[h]
\centering
\includegraphics[width=0.5\textwidth]{image.png}
\caption{Sample Figure}
\label{fig:sample}
\end{figure}
```

## 10. Colours
```latex
\usepackage{xcolor}
\textcolor{blue}{Blue text}
```

## 11. Bibliography and Citations
LaTeX supports bibliographies and citations using tools such as BibTeX and packages such as natbib.

Example:
```latex
\cite{reference}
```

## 12. Cross-References
```latex
\label{sec:intro}
\ref{sec:intro}
```

## 13. Page Layout
The geometry package can be used to customize margins.
```latex
\usepackage{geometry}
\geometry{margin=1in}
```

## 14. Common LaTeX Tools
- TeXstudio
- TeX Live
- Overleaf
- MiKTeX

## Conclusion
LaTeX provides structured document preparation, mathematical typesetting, tables, figures, references, and professional report formatting.
