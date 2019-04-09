#include "BinaryTrees.h"


BinaryTrees::BinaryTrees()
{

}
void BinaryTrees::draw(Renderer2D* renderer, TreeNode* selected)
{
	draw(renderer, m_pRoot, 640, 680, 640, selected);

}
void BinaryTrees::draw(aie::Renderer2D* renderer, TreeNode* pNode, int x, int y, int horizontalSpacing, TreeNode* selected)
{
	horizontalSpacing /= 2;
	if (pNode) {
		if (pNode->hasLeft()) {
			renderer->setRenderColour(1, 0, 0);
			renderer->drawLine(x, y, x - horizontalSpacing, y - 80);
			draw(renderer, pNode->getLeft(), x - horizontalSpacing,
				y - 80, horizontalSpacing, selected);
		}
		if (pNode->hasRight()) {
			renderer->setRenderColour(1, 0, 0);
			renderer->drawLine(x, y, x + horizontalSpacing, y - 80);
			draw(renderer, pNode->getRight(), x + horizontalSpacing,
				y - 80, horizontalSpacing, selected);
		}
		pNode->draw(renderer, x, y, (selected == pNode));

	}
}
bool BinaryTrees::isEmpty() const
{

}
void BinaryTrees::insert(int a_nValue)
{
	TreeNode* currentNode;
	TreeNode* parentNode;
	if (isEmpty())
	{
		m_pRoot->setData(a_nValue);
	}
	else
	{
		currentNode = m_pRoot;
	}
	while (currentNode != NULL)
	{
		if (a_nValue < currentNode->getData())
		{
			parentNode = currentNode;
			currentNode = currentNode->getLeft();
			continue;
		}
		else if (currentNode->getData() < a_nValue)
		{
			parentNode = currentNode;
			currentNode = currentNode->getRight();
			continue;
		}
		else if (currentNode->getData() == a_nValue)
			return;
	}
	if (a_nValue < parentNode->getData())
	{
		currentNode->setData(a_nValue);
		parentNode->setLeft(currentNode);
	}
	else
	{
		currentNode->setData(a_nValue);
		parentNode->setRight(currentNode);
	}
}
void BinaryTrees::remove(int a_nValue)
{
	TreeNode* ptrCurrentNode;
	TreeNode* ptrParentNode;
	TreeNode* currentNode;
	TreeNode* ParentNode;
	currentNode = m_pRoot;
	findNode(a_nValue, ptrCurrentNode, ptrParentNode);
	if (ptrCurrentNode->hasRight())
	{
		while (currentNode != NULL)
		{
			ParentNode = currentNode;
			currentNode = currentNode->getLeft();
		}
		while (currentNode->getData() != a_nValue)
		{
			if (ptrParentNode->getData() < a_nValue)
			{
				ptrParentNode->setLeft(currentNode);
			}
			if (ParentNode->getData() > a_nValue)
			{
				ptrParentNode->setRight(currentNode);
			}
		}
	}

	if (!ptrCurrentNode->hasRight())
	{
		if (ptrParentNode->getData() < a_nValue)
		{
			ptrParentNode->setLeft(ptrCurrentNode->getLeft());
		}
		if (ParentNode->getData() > a_nValue)
		{
			ptrParentNode->setLeft(ptrCurrentNode->getLeft());
		}
		if (m_pRoot->getData() == a_nValue)
		{
			currentNode->setLeft(m_pRoot);
		}
	}
}
bool BinaryTrees::findNode(int a_nSearchValue, TreeNode* ppOutNode, TreeNode* ppOutParaent)
{
	TreeNode* currentNode;
	currentNode = m_pRoot;
	while (currentNode != NULL)
	{
		if (a_nSearchValue == currentNode->getData())
			return currentNode;
		else
			if (a_nSearchValue < currentNode->getData())
				currentNode = currentNode->getLeft();
			else 
				currentNode = currentNode->getRight();
	}
	return false;

}
BinaryTrees::~BinaryTrees()
{
}
