# RPOC
RPOC: Random Pieces of Code

This repository is meant for pieces of code that perform a very specific function on itself.
They were either written separately or were/are part of some bigger project.
The purpose is to group these small code snippets together in a GitHub project so I can easily look them up again when I need it.

Current content as of 10 DEC 2015:

- **Bit**: contains code used in my master's thesis as part of a sender-receiver algorithm. Purpose is to read in a certain amount of integer values (incrementing counter), convert each integer to it's binary value, put all these binary numbers into a 16-by-16 matrix, transpose the matrix to form new values, send these packets to a receiver, and reverse this whole process at the receiver side to uncover the original integer values again.

- **Conversions**: contains two folders; one for a DecToBin conversion and another folder for it's complimentary BinToDec conversion. This code doesn't work well though, and the conversion used in **Bit** is much simpler and faster.

- **CRC**: contains small framework to add CRC values to information for the purpose of error-detection (NOT error-corrrection).
