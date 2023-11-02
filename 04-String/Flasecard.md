# String Operations and Functions

## Concatenation:

Strings can be concatenated using the `+` operator or the `+=` compound assignment operator.

### Example:

```cpp
string str1 = "Hello";
string str2 = "World";
string result = str1 + " " + str2;
```

&nbsp;

&nbsp;

## Length:

The length of a string can be obtained using the `length()` or `size()` member functions.

### Example:

```cpp
string str = "Hello, World!";
int len = str.length();
```

&nbsp;

&nbsp;

## Substrings:

Substrings can be extracted from a string using the `substr()` member function.

### Example:

```cpp
string str = "Hello, World!";
string sub = str.substr(7, 5); (Extracts substring starting from index 7 with length 5)
```

&nbsp;

&nbsp;

## Comparisons:

Strings can be compared using the relational operators `(==, !=, <, >, <=, >=)`.

### Example:

```cpp
string str1 = "Hello";
string str2 = "World";
bool isEqual = (str1 == str2);
```

&nbsp;

&nbsp;

## Searching:

The `find()` function can be used to search for a specific substring within a string.

### Example:

```cpp
string str = "Hello, World!";
size_t found = str.find("World"); (Returns the index where "World" is found)
```

&nbsp;

&nbsp;

## Replacing:

The `replace()` function allows replacing a portion of the string with another substring.

### Example:

```cpp
string str = "Hello, World!";
str.replace(7, 5, "Universe"); (Replaces substring starting from index 7 with "Universe")
```

&nbsp;

&nbsp;

## Conversion:

C++ provides functions to convert strings to numerical types, such as stoi() (string to integer) and stof() (string to float).

### Example:

```cpp
string str = "123";
int num = stoi(str);
```

&nbsp;

&nbsp;

## Case Conversion:

The `tolower()` and `toupper()` functions can be used to convert the case of characters in a string.

### Example:

```cpp
string str = "Hello, World!";
transform(str.begin(), str.end(), str.begin(), ::tolower);
```

&nbsp;

&nbsp;

## Sorting:

Strings can be sorted using the `sort()` function from the `<algorithm>` header.

### Example:

```cpp
string str = "Hello, World!";
sort(str.begin(), str.end()); // Sorts the characters in the string
cout << str << endl; // Output: " !,HWdellloor"
```

&nbsp;

&nbsp;

&nbsp;

# Use Cases of Strings

Strings are versatile data structures used extensively in coding questions and programming problems.

They offer a wide range of functionalities for manipulating and processing textual data.

&nbsp;

## Here are some common use cases and examples of how strings are utilized:

### String Manipulation:

String manipulation involves various operations such as concatenation, substring extraction, character replacements, and case conversions. These operations allow you to modify and transform strings as required by the problem.

&nbsp;

### Palindrome Check:

A popular problem involving strings is checking whether a given string is a palindrome, meaning it reads the same forwards and backwards. By comparing characters from both ends of the string, you can determine if it is a palindrome or not.

&nbsp;

### Anagram Check:

In an anagram problem, you need to determine if two strings are anagrams of each other, meaning they contain the same characters but in a different order. This typically involves comparing the frequency count of each character in the strings.

&nbsp;

### String Matching and Searching:

String matching and searching problems involve finding patterns or specific substrings within a larger string. Techniques like the Knuth-Morris-Pratt (KMP) algorithm or the Boyer-Moore algorithm are commonly used to efficiently solve such problems.

&nbsp;

### String Parsing:

String parsing refers to extracting meaningful information from a string that follows a specific format or structure. This is often accomplished using techniques like tokenization or regular expressions.
