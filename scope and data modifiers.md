# Scope

Understanding scope is crucial in programming as it determines the accessibility of variables within different parts of your code.

1. **Global Scope**: 
   - Variables defined in the global scope are accessible from anywhere in the code. They are typically declared outside of any function or block.
   - Example: 
     ```cpp
     // Global variable
     int globalVar = 10;

     void exampleFunction() {
         std::cout << "Global variable: " << globalVar << std::endl; // Accessible here
     }

     int main() {
         std::cout << "Global variable: " << globalVar << std::endl; // Accessible here
         exampleFunction();
         return 0;
     }
     ```

2. **Local Scope**: 
   - Variables defined within a function, conditional block, or within `{}` braces are limited to that specific block or function.
   - Example:
     ```cpp
     void exampleFunction() {
         // Local variable
         int localVar = 20;
         std::cout << "Local variable: " << localVar << std::endl; // Accessible here
     }

     int main() {
         exampleFunction();
         // std::cout << "Local variable: " << localVar << std::endl; // Error: localVar is not defined
         return 0;
     }
     ```

# Data Modifiers

Data modifiers are used to define the size and type of data that can be stored in a variable. They help in optimizing memory usage and ensuring data integrity.

- **int**: 
  - Typically occupies 4 bytes (32 bits) of memory.
  - The range is from `-2^31` to `2^31 - 1`.
  - Exceeding this range can lead to overflow errors.

1. **long**: 
   - Occupies 8 bytes, allowing for a larger range of values than `int`.
   - Useful for storing large integers.

2. **short**: 
   - Occupies 2 bytes, suitable for smaller integer values like ages or small counts.

3. **long long**: 
   - Also occupies 8 bytes, similar to `long`, but often used for even larger integer values.

4. **signed**: 
   - Can be applied to `int`, `double`, `float`, allowing them to store both positive and negative values.

5. **unsigned**: 
   - Only stores positive values, effectively doubling the maximum positive range compared to signed types.
   - Example for `unsigned int`: Range is from `0` to `2^32 - 1`.
