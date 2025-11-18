class HashTable {
    private:
        const int size = 10;
        struct Node {
            string key;
            int value;
            Node* next;
        }

        Node* Table[size];
        for (int i = 0; i < size; i++) {
            Table[i] = nullptr;
        }

    public:

        int hash (string key) {
            int c = 0;
            for (int i = 0 ; i < key.length(); i++) {
                c += (int)key[i];
            }
            return c % size;
        }

        int insert (string key, int value) {
            Node* insert = new Node (key, value, nullptr);
            insert->next = table[hash(key)];
            table[hash(key)] = insert;
        }

        void delete (string key) {
            int index = hash(key);
            Node* current = table[index];
            Node* prev = nullptr;

            while (current) {
                if (current->key == key) {
                    if (prev == nullptr) {
                        table[index] = current->next;
                    }
                    delete current;
                } else {
                    prev->next = current->next;
                }
                delete current;

            }
            prev = current;
            current = current->next;         
        }

        int search(string key) {
            int index = hash(key);
            int current = Table[index];
            while (current) {
                if (current->key == key) {
                    return current->value;
                }
                current = current->next;
            }
            return;
        }
}
