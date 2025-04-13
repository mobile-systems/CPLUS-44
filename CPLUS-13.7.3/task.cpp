#include "tree.h"
// удаление узла
void Tree::delNode(int number) {
   // Ваш код должен быть здесь
   Node* findNode = getNodeByNumber(number, root);
   if(findNode->childCount > 0)
   {
      Node *parentNode = findNode->parent; // Получаем указатель на родителя,...
      for(int i=0; i<findNode->childCount; i++) // ...чтобы прикрепить к нему детей
      {
          Node* found = getNodeByNumber(findNode->parent->number, findNode->children[i]);
          if(found)
          {
            found->parent = parentNode;
            findNode->childCount--;
          }
      }
      findNode->childCount = 0;
      int foundIndex = -1;   
      for(int i=0;i<parentNode->childCount; i++)
         if(parentNode->children[i] == findNode)
            foundIndex = i; // нашли индекс удаляемой вершины в массиве

      findNode->delChild(parentNode->children[foundIndex]); // findNode
      for(int i=foundIndex;i<parentNode->childCount; i++)
         parentNode->children[i] = parentNode->children[i+1];
   } else {
      findNode->delChild(findNode);
   }
}
void Tree::Node::delChild(Node* child) {
   // Ваш код должен быть здесь
   delete child;
/*   int foundIndex = -1;
   for(int i=0;i<childCount; i++)
       if(children[i] == child)
           foundIndex = i; // нашли индекс удаляемой вершины в массиве
   delete children[foundIndex]; // удалили вершину
   childCount--; // удалили ее из массива
   for(int i=foundIndex; i< childCount; i++)
       children[i] = children[i+1];
       */
}
