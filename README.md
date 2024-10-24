# Homework 1 - Data Structures

**Author**: Majid

## Description
This repository contains C++ programs that solve various data structure problems related to stacks and queues.

## Questions

### Stacks:
1. **Question 1**: Write a C++ program to reverse a stack using recursion, without using any loop.
   - **Example**: Input: elements present in stack from top to bottom 28 29 30 31
   - **Output**: 31 30 29 28 

2. **Question 2**: Given an array, print the Next Greater Element (NGE) for every element.
   - **Example**: Input: arr[] = [ 4, 5 , 2 , 25 ]
   - **Output**: 
     ```
     4      –>   5
     5      –>   25
     2      –>   25
     25     –>   -1
     ```

### Queue:
1. **Question 1**: Given an array and a positive integer k, find the first negative integer for each window (contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window.
   - **Example**: Input: arr[] = {-8, 2, 3, -6, 10}, k = 2
   - **Output**: -8 0 -6 -6

2. **Question 2**: Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.
   - **Example**: Input:  1 2 3 4
   - **Output**: 1 3 2 4
