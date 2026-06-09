
# Circular Buffer in C

A simple fixed-size circular buffer implementation in C.

This project is part of my embedded C / IoT learning path.

## Concepts practiced

- structs
- pointers
- pass-by-reference using pointers
- fixed-size arrays
- FIFO behavior
- circular indexing using modulo
- push and pop operations

## Why circular buffers matter in embedded systems

Circular buffers are commonly used for UART receive buffers,
sensor data queues, logging buffers, and real-time systems where
dynamic memory allocation should be avoided.
