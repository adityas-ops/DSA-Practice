// A heap is a specific kind of data structure in computer science,
//  specifically a type of tree-based data structure. The heap data structure has the
//  property that the element stored at the root of the tree (the "top" of the heap)
//  is either the largest or the smallest among all the elements in the tree, 
// depending on whether it is a "max heap" or a "min heap." The elements stored in 
// the heap are partially ordered, such that each node in the tree has a parent node and
//  zero or more child nodes, and the parent node is either larger or smaller 
// than its children (again, depending on whether it is a max or min heap).


// Heaps are commonly used as an efficient data structure for storing elements that
// need to be retrieved in a specific order, such as in priority queue or graph 
// algorithms. The time complexity for inserting and deleting elements from a heap
//  is typically O(log n), where n is the number of elements in the heap, making heaps
//  an efficient data structure for many use cases.

// A heap is a tree-based data structure that satisfies the heap property:
//  if P is a parent node of C, then the key (the value) of P is either greater than
//  or equal to (in a max heap) or less than or equal to (in a min heap) the key of C.
//  The node at the "top" of the heap (with no parents) is called the root node.


// in question if ask for find kth minimum/smallest element then we make max-heap
// and if ask for find kth maximum/largest element then we make min-heap

// how to make max-heap and min-heap
// max-heap : priority_queue<int> maxHeap
// min-heap : priority_queue<int, vector<int>, greater<int>> minHeap


// question is find kth smallest number 
#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int minEle(vector<int>a,int k){
    priority_queue<int>maxHeap;
    for(int i = 0; i<a.size();i++){
        maxHeap.push(a[i]);
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}

int main(){
    int arr[] = {10,9,43,6,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr, arr+n);
    int k = 3;
    cout<<minEle(a,k)<<endl;


    return 0;
}
