# Sortings

```cpp
//sorting a vector
vector<int> v = {4,2,5,3,5,8,3};
sort(v.begin(),v.end());
//sorting in decreasing order
sort(v.rbegin(),v.rend());
//sorting an array
int n = 7; // array size
int a[] = {4,2,5,3,5,8,3};
sort(a,a+n);
//sprting a string
string s = "monkey";
sort(s.begin(), s.end());
//pairs and tupes are sorted acc to first value, if equal second value compared ...
vector<pair<int,int>> v;
v.push_back({1,5});
v.push_back({2,3});
v.push_back({1,2});
sort(v.begin(), v.end());
//output: (1,2), (1,5) and (2,3)
vector<tuple<int,int,int>> v;
v.push_back({2,1,4});
v.push_back({1,5,3});
v.push_back({2,1,3});
sort(v.begin(), v.end());
//output: (1,5,3), (2,1,3) and (2,1,4)
```

## Comparing user defined structs

User-defined structs do not have a comparison operator automatically. The operator should be defined inside the struct as a function operator<, whose parameter is another element of the same type. The operator should return true if the element is smaller than the parameter, and false otherwise.

```cpp
struct P {
	int x, y;
	bool operator<(const P &p) {
		if (x != p.x) return x < p.x;
		else return y < p.y;
	}
};
```

## Comparison functions

It is also possible to give an external comparison function to the sort function as a callback function. For example, the following comparison function comp sorts strings primarily by length and secondarily by alphabetical order:

```cpp
bool comp(string a, string b) {
	if (a.size() != b.size()) return a.size() < b.size();
	return a < b;
}

sort(v.begin(), v.end(), comp);
```