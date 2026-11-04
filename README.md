## Initial Plan

My program will be a geometry calculator that allows the user to choose between calculating the area of a circle, rectangle, or triangle. The user will enter a menu choice from 1 to 4.

I will use variables to store the user's choice and the measurements needed for each shape. For a circle, I will ask for the radius and multiply it by itself and by PI (3.14159). For a rectangle, I will multiply the length by the width. For a triangle, I will multiply the base by the height and then by 0.5.

I will use selection statements to decide which calculation to perform based on the menu choice. I will check that measurements are not negative before calculating. Zero will be allowed. If the user enters a number outside the menu options, the program will display an error message. If the user chooses 4, the program will quit.

The program will display the calculated area with a clear label so the user can understand the result.

## Course Information

Course: CIS-165-W099

## Compile and Run Instructions

The program uses C++17.

To compile using a terminal:

`g++ -std=c++17 -Wall -Wextra geometry.cpp -o geometry`

To run:

`./geometry`

The program can also be tested using OnlineGDB with the language set to C++.

## Testing Results

All tests below were run using OnlineGDB.

| Test | Input | Expected Result | Actual Result | Status |
|---|---|---|---|---|
| Circle | Choice 1, radius 2 | 12.56636 | 12.56636 | PASS |
| Rectangle | Choice 2, length 3, width 4.5 | 13.50000 | 13.50000 | PASS |
| Triangle | Choice 3, base 5, height 3 | 7.50000 | 7.50000 | PASS |
| Quit | Choice 4 | Goodbye! | Goodbye! | PASS |
| Invalid choice | Choice 0 | Invalid menu choice error | Invalid menu choice error | PASS |
| Invalid choice | Choice 5 | Invalid menu choice error | Invalid menu choice error | PASS |
| Negative radius | Radius -1 | Negative radius error | Negative radius error | PASS |
| Negative length | Length -1, width 4 | Negative dimension error | Negative dimension error | PASS |
| Negative width | Length 3, width -1 | Negative dimension error | Negative dimension error | PASS |
| Negative base | Base -1, height 3 | Negative dimension error | Negative dimension error | PASS |
| Negative height | Base 5, height -1 | Negative dimension error | Negative dimension error | PASS |
| Zero radius | Radius 0 | 0.00000 | 0.00000 | PASS |
| Additional circle test | Radius 3 | 28.27431 | 28.27431 | PASS |

All displayed area results use five decimal places.

## Program Explanation

### 1. How does the selection logic send each choice to the correct calculation?

The program uses an if-else-if structure to check the user's menu choice. Each condition matches a different shape and performs its calculation. Choice 4 displays a goodbye message, while any other number displays an error message.

### 2. Why does radius * radius work while radius ^ 2 does not?

In C++, the asterisk (*) is the multiplication operator. Multiplying the radius by itself calculates its square. The caret (^) is a bitwise XOR operator, not an exponent operator.

### 3. Why does the triangle calculation use 0.5 instead of 1 / 2?

Using 0.5 makes the calculation use floating-point arithmetic. In C++, 1 / 2 with two integers would produce 0 because integer division removes the decimal part.

### 4. Where are negative dimension checks performed, and how are zero and choice 4 handled?

The program checks each measurement before calculating the area. If a measurement is negative, it displays an error message. Zero is accepted and produces an area of zero. Choice 4 quits without asking for dimensions or calculating an area.

## Final Testing Note

The program was run with the required test cases, including valid calculations, invalid menu choices, negative measurements, zero, and the additional calculation. The reported outputs matched the expected results.