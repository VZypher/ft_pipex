# Pipex

## Description

Pipex is a command-line utility that simulates the behavior of the Unix `pipe` command. It allows you to execute multiple commands in a pipeline, redirecting the output of one command to the input of the next. This project is built using C and utilizes a custom library, `libft`, for various utility functions.

## Features

- Execute two commands in a pipeline.
- Handle input and output redirection.
- Error handling for command execution and file operations.
- Custom implementation of standard library functions.

## Requirements

- C compiler (gcc)
- Make

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/VZypher/ft_pipex
   cd ft_pipex
   ```
   
2. Build the Pipex executable:
   ```bash
   make
   ```

## Usage

To use Pipex, run the following command in your terminal:
```bash
./pipex <input_file> <cmd1> <cmd2> <output_file>
```

- `<input_file>`: The file to read input from.
- `<cmd1>`: The first command to execute.
- `<cmd2>`: The second command to execute.
- `<output_file>`: The file to write the output to.

### Example

```bash
./pipex input.txt "grep 'search_term'" "wc -l" output.txt
```

This command will search for `search_term` in `input.txt` and count the number of lines containing it, writing the result to `output.txt`.
