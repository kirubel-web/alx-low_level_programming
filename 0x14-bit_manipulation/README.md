Bit manipulation in C programming allows you to perform operations at the bit level, enabling you to manipulate individual bits within variables. This can be useful for tasks such as setting, clearing, or toggling specific bits, as well as extracting or combining bit patterns.

Here are some common bit manipulation operations in C:

1. Bitwise AND (`&`):
   - Performs a bitwise AND operation on each corresponding pair of bits.
   - Example: `result = a & b;` (result will have only the common set bits between `a` and `b`)

2. Bitwise OR (`|`):
   - Performs a bitwise OR operation on each corresponding pair of bits.
   - Example: `result = a | b;` (result will have all the set bits from both `a` and `b`)

3. Bitwise XOR (`^`):
   - Performs a bitwise XOR (exclusive OR) operation on each corresponding pair of bits.
   - Example: `result = a ^ b;` (result will have the set bits that are unique to either `a` or `b`)

4. Bitwise NOT (`~`):
   - Flips the bits of the operand, resulting in the one's complement.
   - Example: `result = ~a;` (result will have the complement of `a`)

5. Left Shift (`<<`):
   - Shifts the bits of the left operand to the left by a specified number of positions.
   - Example: `result = a << n;` (result will have the bits of `a` shifted left by `n` positions)

6. Right Shift (`>>`):
   - Shifts the bits of the left operand to the right by a specified number of positions.
   - Example: `result = a >> n;` (result will have the bits of `a` shifted right by `n` positions)

7. Bitwise AND with Assignment (`&=`):
   - Performs a bitwise AND operation between the operands and assigns the result to the left operand.
   - Example: `a &= b;` (equivalent to `a = a & b;`)

8. Bitwise OR with Assignment (`|=`):
   - Performs a bitwise OR operation between the operands and assigns the result to the left operand.
   - Example: `a |= b;` (equivalent to `a = a | b;`)

9. Bitwise XOR with Assignment (`^=`):
   - Performs a bitwise XOR operation between the operands and assigns the result to the left operand.
   - Example: `a ^= b;` (equivalent to `a = a ^ b;`)

These operations allow you to manipulate individual bits within variables, which can be useful in various scenarios such as implementing flags, bitmasking, or optimizing memory usage.
