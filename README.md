# Queue-Implementation-using-Array
# Aim:

To study and implement Queue operations using an array with the following menu options:

1. Insert (Enqueue)

2. Delete (Dequeue)

3. Display

4. Exit
   
# Apparatus/Software Required:

Computer system with C/C++ compiler.

# Theory:

A Queue is a linear data structure in which insertion and deletion of elements take place at different ends:

Insertion (Enqueue) → Performed at the rear end.

Deletion (Dequeue) → Performed at the front end.


The Queue follows the FIFO principle (First In First Out):

The element inserted first is the first element to be removed.


# Operations in a Queue:

1. Enqueue → Adding an element at the rear.


2. Dequeue → Removing an element from the front.


3. Display → Viewing the current elements in the queue.



# Types of Queue:

Linear Queue → Fixed front and rear. May cause wastage of space.

Circular Queue → Rear connects back to the front, optimizing space usage.


Thus, Queue implementation using an array provides an efficient way to handle ordered data where processing happens in sequential order.

# Algorithms:

1. Start

2. Initialize variables front = -1, rear = -1.

3. Define functions:

Enqueue(x):

If rear == size-1, then print Queue is full.

Else if front == -1, set front = 0 and rear = 0, insert element.

Else increment rear and insert element at queue[rear].

Dequeue():

If front == -1 or front > rear, then print Queue is empty.

Else return element at queue[front] and increment front.


Display():

If front == -1 or front > rear, then print Queue is empty.

Else display elements from front to rear.

4. In main() function:

Create a queue object.

Perform operations: Enqueue, Dequeue, and Display based on menu-driven choice.

5. Stop

# Conclusion:

Queue was successfully implemented using arrays.

The program performs Enqueue (insertion), Dequeue (deletion), and Display operations.

It follows the FIFO (First In First Out) principle, where the first element inserted is the first to be deleted.

Linear queue has limitations like wasted space after deletions, which can be solved by implementing Circular Queue.
