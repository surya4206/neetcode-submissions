class WordDictionary {
public:
    struct node {
        struct node *next[26];
        bool end;

        node() {
            for(int i = 0; i < 26; i++)
                next[i] = nullptr;
            end = false;
        }
    };
    struct node *head;
    WordDictionary() {
        head = new node();
    }
    
    void addWord(string word) {
        node *tmp = head;
        for(char c : word) {
            int x = c - 'a';
            if(tmp->next[x] == nullptr) {
                tmp->next[x] = new node();
            }
            tmp = tmp->next[x];
        }
        tmp->end = true;
    }
    
    bool helper(string word, int index, node* curr) {
        if (index == word.length()) return curr->end;
        char c = word[index];
        if (c == '.') {
            for (int i = 0; i < 26; i++) {
                if (curr->next[i] != nullptr && helper(word, index + 1, curr->next[i]))
                    return true;
            }
            return false;
        } else {
            int x = c - 'a';
            if (curr->next[x] == nullptr) return false;
            return helper(word, index + 1, curr->next[x]);
        }
    }

    bool search(string word) {
        return helper(word, 0, head);
    }
};