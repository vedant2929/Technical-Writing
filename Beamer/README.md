# Beamer Documentation

## 1. Introduction
Beamer is a LaTeX document class used to create presentations. A presentation is organized into frames, which produce individual slides.

## 2. Basic Beamer Document
```latex
\documentclass{beamer}

\title{My Presentation}
\author{Student Name}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}

\begin{frame}
\titlepage
\end{frame}

\begin{frame}{Introduction}
Welcome to my presentation.
\end{frame}

\end{document}
```

## 3. Frames
Each frame creates a slide.
```latex
\begin{frame}{Introduction}
This is the content of the slide.
\end{frame}
```

## 4. Title Information
Common commands:
- \title{}
- \subtitle{}
- \author{}
- \institute{}
- \date{}
- \titlepage

## 5. Themes
Themes control the appearance of the presentation.
```latex
\usetheme{Madrid}
```

A colour theme can also be selected:
```latex
\usecolortheme{wolverine}
```

## 6. Lists
```latex
\begin{frame}{Topics}
\begin{itemize}
  \item LaTeX
  \item Beamer
  \item Documentation
\end{itemize}
\end{frame}
```

## 7. Blocks
```latex
\begin{frame}{Important Information}
\begin{block}{Definition}
This is a block of information.
\end{block}
\end{frame}
```

## 8. Highlighted Text
```latex
\alert{Important text}
```

## 9. Mathematical Expressions
```latex
\begin{frame}{Equation}
\[
E = mc^2
\]
\end{frame}
```

## 10. Columns
```latex
\begin{frame}{Two Columns}
\begin{columns}
\column{0.5\textwidth}
First column

\column{0.5\textwidth}
Second column
\end{columns}
\end{frame}
```

## 11. Customization
Beamer supports customization of fonts, colours, themes, blocks, and frame titles.

## 12. Compilation
A Beamer source file is compiled using a LaTeX engine to generate a PDF presentation.

## Conclusion
Beamer makes it possible to create structured presentations using LaTeX commands, frames, themes, mathematical expressions, lists, and blocks.
