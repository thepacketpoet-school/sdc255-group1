# Menu-Driven Calculator Application

## Description

This is a simple C-based menu-driven application that allows users to:
- Read the contents of an output file
- Perform addition
- Perform subtraction
- Write the most recent calculation to the output file
- Exit the program

Each module is structured with its own `.c` and `.h` files following modular programming best practices.

---

## Getting Started

### Prerequisites

- A C compiler (such as `gcc`)
- Unix-like environment (Linux or macOS)

---

### Build Instructions

1. Clone or download the project files into a local directory.

2. Open a terminal and navigate to the project directory.

3. Run the following command to compile the program:

   ```bash
   make
   ```

4. To clean up compiled object files and the executable:

   ```bash
   make clean
   ```

---

### Run the Program

After compiling, execute the program with:

```bash
./calculator_app
```

---

## Features

| Option | Description                          |
|--------|--------------------------------------|
|   1    | Read the contents of `output.txt`    |
|   2    | Perform an addition                  |
|   3    | Perform a subtraction                |
|   4    | Write the last calculation to file   |
|   5    | Exit the application                 |

- The file `output.txt` will be created or appended to when option 4 is selected.
- A calculation should be performed prior to selecting option 4 to ensure that calculation is written.
- Input is provided interactively by the user when selecting options 2 or 3.

---

## Contributors

- Haley Archer  
- Cody Ackerman  
- Moriah Payne  
- Joshua Taylor  

---

## License

This project was developed as part of SDC-255 Agile Software Development final project and is not intended for production use.