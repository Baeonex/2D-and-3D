#pragma once
#include "TreeNode.h"


class BinaryTrees
{
public:
	BinaryTrees();
	~BinaryTrees();
	bool isEmpty() const;
	void insert(int a_nValue);
	void remove(int a_nValue);
	TreeNode* find(int a_nValue);
	void draw(Renderer2D* renderer, TreeNode* selected = nullptr);
private:
	bool findNode(int a_nSearchValue, TreeNode* ppOutNode, TreeNode* ppOutParaent);
	void draw(aie::Renderer2D* renderer, TreeNode* pNode ,int x, int y, int horizontalSpacing, TreeNode* selected = nullptr);

	TreeNode* m_pRoot;

};

