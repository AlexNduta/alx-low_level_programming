- This is a data structure used to store data.
- it has a `key` and a `value`
- it used to implement an associative array where you can use the key to lookup the value quickly
	- Traditional arrays use indices to access the element, associative arrays allow you to use any datatype as the key
	- Associative arrays allow you to look up data quickly in `constant time` compared to traditional arrays that take `linear time` to retrieve data
	- Associative array examples linclude, maps, dictionaries and hash tables
	- they are mainly used in:
		1. Dictionaries: store words and their definitions
		2. Cache: storing frequently accessed data for easy retrieval
		3. Configuration: storing settings or configuration options with meaningful names
		4. Database indexing: Accelarating database queries by indexing data with keys
		5. Counting occurences: Counting the frequency of an element in a collection
-Creating a hashtable requires a hash function that looks at a certain and determine wheren in our array we can store the value
```
Key:Paul
value:phone_number

Hash(key) -> index

Hash(paul)->3//store in index 3
```

-`collison` occurs when the hash table returns a the same hash value of two different keys.
-The hash table attempts to tore them in the ame place known as a bucket or slot in the table.
-Since a slot can only store one key-value pair, collision can lead to how to store and retrieve the data
## Collision can lead to:
1. Data Overwritting:when a table attemps to store in a slot that already has a keyvalue stored, it can lead to data loss which can cause inconsistencies when rretrieving data
2. Reduced performance: Handling a collision requires extra work such as searching for an empty bucket or using a collision resolution strategy such as(chaining, open addressing), these operations can slow down a hash table and increase the time complexity

## Solution to a collition
1. *Chaining*: each bucket contains a linkedlist(or another data structure eg array or tree) to store the key-value pairs that have collided
	-when collision occurs, the ne key value pair is added to the keyvalue pair in the corresponding bucket
2. *Open Addressing* ; when it occurs, the algorith searches for the next availble slot(by probbing or linear probbing) to store the colliidng key-value pair. This continues until an empty slot is found
3. *Double hashing* : This is a variation of open addressing where a secondary hash function is used to determine the step size for probbing. This helps reduce clustering  and improve collision resolution. 

# Hash function
-This is any function that can be used to map data of different size to fixed-size values
-In simple terms, hash functions are used to map the keys to specific location  within the table
-values returned by has functions are are called `hash values, hash codes, digests, hashes`
-The values are are usually used to index a fixed-size table called a `hash table`
-Using a hash function ti index a hash table is called `hashing` or `scatter storage addressing`
-Hash functiona and their associated hash tables are used are used to in data storage and retrieval

## characterstics of a good hash function
1. *Deterministic*: given the same input, it should always produce the same output
2. *Fast* : It should be computationally efficient to calculate the hash code
3. *Uniform distribution* should be evenly distributed across a range of possible hash values so as to minimise collision
4. *Minimises collision*: It should reduce the likelihood of producing the same hash value for different inputs

## Example of a Hash  function
```C
unsigned int simple_has(cost char *key, int table_size)
{
	unsigned int hash = 0;
	
	while (*key != '\0'){
		hash = (hash * 31 + (*key) %table_size);
		key++;
	}
	return hash;
}
```
- Our hash function above takes a key(string) and the size of the table as arguments
- It calculates the hash code by iterating through each charactre of the key and multiplying each value by 31 adding the ASCII value to the  of the character and taking the result of modulo table size.

## Hash function testing:
- Lets have fun with hash functions
```C
# include <stdio.h>
unnsigned int simple_hash(const char *key, int table_size);

int main(){
	const char *keys[] = {"Apple", "bananana", "Mango", "Orange", "lemon"};
	int table_size = 10;
	int i = 0;
	unsigned int hash_code;
	for(i = 0; 1 < 5; i++){
		hash_code = simple_hash(key[1], table_size);
		printf("key: %s, has code: %u\n", key[i], hash_code);
	}
	return (0);
}
```
- Our main function defines an array of keys , iterates through the array and on each iteration, it calculates the hash value by calling the `simple_hash()` and prints their value
