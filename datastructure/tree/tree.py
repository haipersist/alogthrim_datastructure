__author='whb'

#1.need get the depth of one binary tree
#2.need get the number of nodes of one  binary tree
#3.need get the son node of one node of one common tree

from fabric.colors import *
import copy


class TreeNode:

    def __init__(self,data=None,left=None,right=None):
        self.data=data
        self.left=left
        self.right=right

    def __repr__(self):
        
        return green('''
        root:%s
        left:%s
        right:%s'''%(self.data,self.left,self.right))

    def hasLeftChild(self):
        return self.left

    def hasRightChild(self):
        return self.right




class BinTree():

    def __init__(self,root=None):
        self.root=root

    def isEmpty(self,root):
        if root is None:
            return True
        else:
            return False
    
        

    def get_depth(self):
   
        def _get_tree_depth(root):
            if isEmpty(root):
                return -1
            else:
                try:
                    if not root.hasLeftChild() and not root.hasLeftChild():
                        return 0
                except:
                    print root

                else:
                    left=_get_tree_depth(root.left)
                    right=_get_tree_depth(root.right)
                    return left+1 if left>right else right+1
        
        return _get_tree_depth(self.root)        
        

    def get_tree_count(self):

        def _get_tree_count(root):
            if isEmpty(root):
                return 0
            else:
                return 1 + _get_tree_count(root.left) + _get_tree_count(root.right)
        
        return _get_tree_count(self.root)


    def get_leaf_count(self):

        def _get_leaf_count(root):
            count = 0
            if isEmpty(root):
                return count 
            elif not root.hasLeftChild() and root.hasLeftChild():
                return count+1
            if root.hasLeftChild():
                count += _get_leaf_count(root.left)
            if root.hasLeftChild():
                count += _get_leaf_count(root.right)

            return count
        
        return _get_leaf_count(self.root)

            
    def get_branch_count(self):
        pass

    
    def pre_order_recursive(self):
        '''pre-order traversal for one tree,recursively'''
        def _pre_order(root):
            if isEmpty(root)
                return 
            print root.data
            _pre_order(root.left)
            _pre_order(root.right)

        _pre_order(self.root)

    
    def pre_order_norecursive(self):
        '''pre-order traversal for one tree,non-recursively'''
        stack=[]
        root=self.root
        while root or stack:
            if not isEmpty(root):
                print root.data
                stack.append(root)
                root=root.left
            else:
                root=stack.pop().right


    
    def in_order_recursive(self):
        '''in-order traversal for one tree,recursively'''
        def _in_order(root):
            if isEmpty(root):
                return 
            _in_order(root.left)
            print root.data
            _in_order(root.right)

        _in_order(self.root)

    def in_order_norecursive(self):
        '''in-order traversal for one tree,non-recursively'''
        stack=[]
        root=self.root
        while root or stack:
            if not isEmpty(root):
                stack.append(root)
                root=root.left
            else:
                root=stack.pop()
                print root.data
                root=root.right


    def post_order_recursive(self):
        '''post-order traversal for one tree,recursively'''
        def _post_order(root):
            if isEmpty(root):
                return 
            _post_order(root.left)
            _post_order(root.right)
            print root.data

        _post_order(self.root)

    def post_order_norecursive(self):
        '''post-order traversal for one tree,non-recursively'''
        stack=[]
        ref=None
        root=self.root
        while root or stack:
            if not isEmpty(root):
                stack.append(root)
                root=root.left
            elif stack[-1].right != ref:
                root=stack[-1].right
                ref = None
            else:
                ref=stack.pop()
                print ref.data


if __name__=="__main__":

    tree1=TreeNode(2)
    #print tree1
    tree2=TreeNode(3,tree1)
    tree3=TreeNode(9,tree2)
    tree4=TreeNode(7,tree1,tree3)
    tree=TreeNode(4,tree1,tree4)
    bint=BinTree(tree)
    print 'the tree is:'
    print '''       4
     2   7
       2   9
          3
        2'''
    #print bint.get_depth()
    #print bint.get_leaf_count()
    #print bint.get_tree_count()
    #bint.pre_order_traversal()
    #bint.in_order_traversal()
    bint.pre_order_norecursive()
    print ''
    bint.in_order_norecursive()
    print ''
    bint.post_order_norecursive()
        
            



