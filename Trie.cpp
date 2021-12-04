class Trie {//in reverse order
    Trie* chars[26]{};
    bool endsHere = false;
public:    
    void insert(string& s) {                              // inserts a string in Trie
        auto cur = this;
        for(int i = size(s)-1; ~i; i--) {                 // insert in reverse order
            if(!cur -> chars[s[i]-'a'])
                cur -> chars[s[i]-'a'] = new Trie();      // add new node for current character
            cur = cur -> chars[s[i]-'a'];                 // move to that character's node
        }
        cur -> endsHere = true;                           // mark that a word ends at this node
    }
    bool search(string& s) {                              // searches for a suffix of string
        auto cur = this;
        for(int i = size(s)-1; ~i; i--) {
            if(!cur -> chars[s[i]-'a']) return false;     // no letter-link to next character exists
            cur = cur -> chars[s[i]-'a'];
            if(cur -> endsHere) return true;              // found a  word ending at this node => suffix of s found in Trie
        }
        return false;
    }
};
//--------------------------------------------------------------------------------
class trieNode{//normal
    public:
    trieNode*child [26];
    // int weight;
    bool isEnd;

//     constructor
    trieNode()
    {
        // weight = 0;
        for(int i=0;i<26;i++)
        {
            child[i] = NULL;
        }
    }
};

// void insert(string s,int weight,trieNode*root)
void insert(string s,trieNode*root)
{
    //----------iterative------------
    trieNode*curr = root;
    for(int i=0;i<s.length();i++)
    {
        int index = s[i]-'a';       
        // if(curr->weight < weight)
        // {
        //     curr->weight = weight;
        // }
        if(curr->child[index] == NULL)
        {
            curr->child[index] = new trieNode();
            // curr->child[index]->weight = weight;
            curr = curr->child[index];            
        }
        // else
        // {
        //     curr->weight = max(weight,curr->weight);
        //     curr = curr->child[index];
        // }
        
   }
    curr->isEnd =true;
}