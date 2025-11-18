class HashTable {
    private:
        const int size = 10;

        struct Entry {
            string key;
            int value;
            bool isDeleted;
            bool isEmpty;
        };
    
    public:
        Entry Table[size];

        void initialize (Entry Table) {
            for (int i = 0; i < size; i++) {
                Table[i].isEmpty = true;
                Table[i].isDeleted = false;
            }
        }
        
        int hash (string key) {
            int n = key.length();
            int m = 0;
            for (int i = 0; i < n; i++) {
                m += (int)key[i];
            }
            return m % size;
        }

        void insert (string key, int value) {
            int index = hash(key);
            for (int i = 0; i < size; i++) {
                int p = (index + i) % size;
                if (Table[p].isEmpty || Table[p].isDeleted || Table[p].key == key) {
                    Table[p].key = key;
                    Table[p].value = value;
                    Table[p].isEmpty = false;
                    Table[p].isDeleted = false;
                    return;
                }
            }
        }

        void delete (string key) {
            int index = hash(key);
            for (int i = 0 ; i < size; i++) {
                int p = (index + i) % size;
                if (!Table[p].isEmpty || !Table[p].isDeleted || Table[p].key == key) {
                    Table[p].isDeleted = true;
                }
                return;
            }
        }

        void search (string key) {
            int index = hash(key);
            for (int i = 0; i < size; i++) {
                int p = (index + i) % size;
                if (!Table[p].isDeleted && !Table[p].isEmpty && Table[p].key == key) {
                    cout<<value;
                }
            }
        }
}
