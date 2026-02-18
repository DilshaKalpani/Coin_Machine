# Automatic Stamp Vending Machine Simulation
## Computer Science Undergraduate – C Programming Assignment


## Project Description

This project simulates an **Automatic Stamp Vending Machine** using the C programming language.

The machine:

- Dispenses stamps worth **Rs. 25, Rs. 15, and Rs. 10**
- Accepts only **one coin per transaction**
- Accepts coin denominations of:
  - Rs. 50
  - Rs. 25
  - Rs. 10
  - Rs. 5

The system processes transactions, dispenses stamps, returns change (if possible), and handles exceptional conditions.


## Machine Specifications

### (a) Stamp Denominations
- Rs. 25
- Rs. 15
- Rs. 10

### (b) Accepted Coins
- Rs. 50
- Rs. 25
- Rs. 10
- Rs. 5

### (c) Constraints
- Only **one coin** can be inserted per transaction.
- If more than one coin of the same denomination is required as change,
  - The machine **cannot provide change**
  - The inserted coin is returned
  - A **"No Change"** signal is displayed
- The machine must indicate:
  - Insufficient amount tendered
  - No stamp available
  - No change available


## Program Features

- Accepts:
  - Amount tendered (one coin only)
  - Stamp requested
- Displays:
  - Whether stamp is dispensed
  - Stamp value
  - Coins returned as change (if any)
  - “No Change” signal (if applicable)
  - “No Stamp Available” message (if applicable)
- Updates and displays:
  - Remaining stamp quantities
  - Remaining coin quantities
- Repeats transactions until the user chooses to quit



## Program Logic Summary

1. Store initial quantities of:
   - Each stamp type
   - Each coin denomination
2. Accept user input
3. Validate:
   - Coin type
   - Stamp availability
   - Sufficient amount
4. Calculate change:
   - If exact change possible using available coins → dispense
   - If multiple same coins needed → No Change
5. Update quantities:
   - Decrease sold stamp quantity
   - Increase inserted coin quantity
   - Decrease returned coin quantity
6. Display updated quantities
7. Repeat until user exits


## Restrictions Followed

- No arrays used
- No structures used
- Multi-file implementation
- At least three sub-modules used


## Testing

The program was tested with multiple data sets including:

- Exact payment
- Insufficient amount
- No change available
- No stamp available
- Successful transaction with change


## Technologies Used

- C Programming Language
- GCC Compiler / CodeBlocks
- Multi-file modular programming


## Author

Dilsha Kalpani  
Assignment – Stamp Vending Machine Simulation  
C Programming

Final marks for the Assignment 90/100.



