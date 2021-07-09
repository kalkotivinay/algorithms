# algorithms

How to find nth element from the end of a singly linked list?

The key to this algorithm is to set two pointers p1 and p2 apart by n-1 nodes initially 
so we want p2 to point to the (n-1)th node from the start of the list then we move p2 till 
it reaches the last node of the list. Once p2 reaches end of the list p1 will be pointing to the nth node from the end of the list.
