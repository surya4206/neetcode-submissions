class PrefixTree {
public:
    struct node {
        struct node *next[26];
        bool endOfWord;

        node() {
            endOfWord = false;
            for(int i = 0; i < 26; i++) next[i] = nullptr;
        }
    };
    struct node *head, *tmp;
    PrefixTree() {
        head = new node();
        head->endOfWord = true;
    }
    
    void insert(string word) {
        tmp = head;
        for(char c : word) {
            int x = c - 'a';
            if(tmp->next[x] == nullptr) {
                tmp->next[x] = new node();

            }
            tmp = tmp->next[x];
        }
        tmp->endOfWord = true;
    }
    
    bool search(string word) {
        tmp = head;
        for(char c : word) {
            int x = c - 'a';
            if(tmp->next[x] == nullptr) return false;
            tmp = tmp->next[x];
        }
        return tmp->endOfWord;
    }
    
    bool startsWith(string prefix) {
        tmp = head;
        for(char c : prefix) {
            int x = c - 'a';
            if(tmp->next[x] == nullptr) return false;
            tmp = tmp->next[x];
        }
        return true;
    }
};
