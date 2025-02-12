/*Design a HashMap without using any built-in hash table libraries.

Implement the MyHashMap class:

MyHashMap() initializes the object with an empty map.
void put(int key, int value) inserts a (key, value) pair into the HashMap. If the key already exists in the map, update the corresponding value.
int get(int key) returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
void remove(key) removes the key and its corresponding value if the map contains the mapping for the key.*/

//(6KYU) MyHash map

class MyHashMap {
private:
    static const int SIZE = 1000;  // Number of buckets
    vector<list<pair<int, int>>> table;

    // Simple hash function
    int hashFunction(int key) {
        return key % SIZE;
    }
public:
    MyHashMap() {
        table.resize(SIZE);
    }
    
    void put(int key, int value) {
        int index = hashFunction(key);
        for( auto &pair : table[index]){
            if(pair.first == key){
                pair.second = value;
                return;
            }
        }
        table[index].push_back({key,value});
    }
    
    int get(int key) {
        int index = hashFunction(key);
        for( auto &pair : table[index]){
            if(pair.first == key){
                return pair.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove_if([key](const pair<int, int> &p) { return p.first == key; });
    }
};