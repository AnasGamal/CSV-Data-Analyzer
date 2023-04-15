# C++ Delimited File Column Reader

This C++ project provides users with the ability to read in a specified column of a delimited file and calculate the largest, smallest, and mean of these values. The application requires 3 arguments to be provided at runtime: the path of the file, the column number, and the delimiter. The output includes the three calculated values: the largest, smallest, and mean. The application will also alert the user if they have not provided sufficient arguments.

## Technologies and Libraries

The application was implemented using standard C++ libraries, including iostream, string, fstream, sstream, and float.h.

## Installation

To install and run the application, follow these steps:

1. Clone the repository to your local machine with the following command:

    `git clone https://github.com/anasgamal/cpp-delimited-file-column-reader.git`

2. Ensure that you have a C++ compiler installed on your machine. If not, install one of your preference.

3. Navigate to the cloned directory location in your terminal or shell.

4. Build the program with the command:

    `g++ -o program <source_file>.cpp`

5. Run the compiled executable with the command

    `./program <path_to_file> <column_number> <delimiter>`

Example:

    `./program /path/to/file.csv 2 ,`

The above command would run the program on the file `/path/to/file.csv` and calculate the largest, smallest, and mean of the values in column 2 separated by the comma.

## Challenges

The most challenging aspect of this project was understanding how to identify and read in the specified column from the file. The solution involved parsing each line of the file using the provided delimiter and isolating the desired column. Another challenge encountered was validating the input data and detecting any potential errors in the input arguments. The input validation process ensured that the program would not crash with input errors. To overcome the challenges of this project, I spent time researching and experimenting with different solutions until I found the ones that worked best.
