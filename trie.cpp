#include<bits/stdc++.h>
#define index s[i]-'a'
using namespace std;


class Trie{
public:

	class Node{
	public:
		Node *nodes[26];
		bool terminating;
		Node(){
			for(int i=0;i<26;++i)nodes[i]=NULL;
			terminating=0;
		}
	};

	Node *root = new Node;

	void insert(string s){
		Node *current = root;
		for(int i=0;i<s.size();++i){
			
			if(current->nodes[index]==NULL)
				current->nodes[index]=new Node;
			if(i==s.size()-1)current->terminating=1;
		
			current=current->nodes[index];
		}
	}

	bool find(string s){

		Node *current = root;
		for(int i=0;i<s.size();++i){

			if(current->nodes[index]==NULL)return 0;

			if(i==s.size()-1 and current->terminating==0)return 0;

			current=current->nodes[index];

		}

		return 1;

	}

};
