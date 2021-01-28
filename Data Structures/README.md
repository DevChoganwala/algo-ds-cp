# DS for cp

## Map

The C++ standard library contains two map implementations that correspond
to the set implementations: the structure map is based on a balanced binary tree and accessing elements takes O(logn) time, while the structure unordered_map uses hashing and accessing elements takes O(1) time on average.

The following code creates a map where the keys are strings and the values are integers:

```cpp
map<string,int> m;
m["monkey"] = 4;
m["banana"] = 3;
m["harpsichord"] = 9;
cout << m["banana"] << "\n"; // 3
```

If the value of a key is requested but the map does not contain it, the key is automatically added to the map with a default value.

The function *count* checks if a key exists in a map:

```cpp
if (m.count("aybabtu")) {
	// key exists
}
```

The following code prints all the keys and values in a map:

```cpp
for (auto x : m) {
	cout << x.first << " " << x.second << "\n";
}
```

## Iterators and ranges

The often used iterators begin and end define a range that contains all elements in a data structure. The iterator begin points to the first element in the data structure, and the iterator end points to the position after the last element.

## Set iterators

```cpp
set<int>::iterator it = s.begin();
//shorter way
auto it = s.begin();
cout << *it << "\n"; //access
```

The function *find(x*) returns an iterator that points to an element whose value is x. However, if the set does not contain x, the iterator will be end.

The function *lower_bound(x)* returns an iterator to the smallest element in the set whose value is at least x, and the function *upper_bound(x)* returns an iterator to the smallest element in the set whose value is larger than x. These functions are not supported by the unordered_set structure which does not maintain the order of the elements.

## Bitset

A bitset is an array whose each value is either 0 or 1.

```cpp
bitset<10> s;
s[1] = 1;
s[3] = 1;
s[4] = 1;
s[7] = 1;
cout << s[4] << "\n"; // 1
cout << s[5] << "\n"; // 0
```

The following code shows another way to create the above bitset:

```cpp
bitset<10> s(string("0010011010")); // from right to left
cout << s[4] << "\n"; // 1
cout << s[5] << "\n"; // 0
```

The function *count* returns the number of ones in the bitset:

```cpp
bitset<10> a(string("0010110110"));
bitset<10> b(string("1011011000"));
cout << (a&b) << "\n"; // 0010010000
cout << (a|b) << "\n"; // 1011111110
cout << (a^b) << "\n"; // 1001101110
```

## Deque

A deque is a dynamic array whose size can be efficiently changed at both ends of the array. Like a vector, a deque provides the functions *push_back* and *pop_back*, but it also includes the functions *push_front* and *pop_front* which are not available in a vector.

The internal implementation of a deque is more complex than that of a vector, and for this reason, a deque is slower than a vector. Still, both adding and removing elements take O(1) time on average at both ends.

## Stack

A stack is a data structure that provides two O(1) time operations: adding an element to the top, and removing an element from the top.

```cpp
stack<int> s;
s.push(3);
s.push(2);
s.push(5);
cout << s.top(); // 5
s.pop();
cout << s.top(); // 2
```

## Queue

A queue also provides two O(1) time operations: adding an element to the end of the queue, and removing the first element in the queue.

```cpp
queue<int> q;
q.push(3);
q.push(2);
q.push(5);
cout << q.front(); // 3
q.pop();
cout << q.front(); // 2
```

## Priority queue

A priority queue maintains a set of elements. The supported operations are insertion and, depending on the type of the queue, retrieval and removal of either the minimum or maximum element.

Insertion and removal take O(logn) time, and retrieval takes O(1) time.
While an ordered set efficiently supports all the operations of a priority queue, the benefit of using a priority queue is that it has smaller constant factors. A priority queue is usually implemented using a heap structure that is much simpler than a balanced binary tree used in an ordered set.

By default, the elements in a C++ priority queue are sorted in decreasing order, and it is possible to find and remove the largest element in the queue.

```cpp
priority_queue<int> q;
q.push(3);
q.push(5);
q.push(7);
q.push(2);
cout << q.top() << "\n"; // 7
q.pop();
cout << q.top() << "\n"; // 5
q.pop();
q.push(6);
cout << q.top() << "\n"; // 6
q.pop();
```

If we want to create a priority queue that supports finding and removing the smallest element, we can do it as follows:

```cpp
priority_queue<int,vector<int>,greater<int>> q;
```