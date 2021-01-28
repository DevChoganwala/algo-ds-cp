# Binary search

[Topcoder tut](https://www.topcoder.com/community/competitive-programming/tutorials/binary-search/)


- *lower_bound* returns a pointer to the first array element whose value is at least x.
- *upper_bound* returns a pointer to the first array element whose value is larger than x.
- *equal_range* returns both above pointers.

For example, the following code finds out whether an array contains an element with value x:

```cpp
auto k = lower_bound(array,array+n,x)-array;
if (k < n && array[k] == x) {
	// x found at index k
}
```

the following code counts the number of elements whose value is x:

```cpp
auto a = lower_bound(array, array+n, x);
auto b = upper_bound(array, array+n, x);
cout << b-a << "\n";
```

Using *equal_range*, the code becomes shorter:

```cpp
auto r = equal_range(array, array+n, x);
cout << r.second-r.first << "\n";
```