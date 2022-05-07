package dataStructure.src.dsLinkedList;

public class LinkedList {
    public class Node {
        private int value;
        private Node next;

        public Node(int value){
            this.value = value;
        }
    }
    private Node first;
    private Node last;

    //addFirst
    public void addFirst(int item){
        var node = new Node(item);

        if(isEmpty()){
            first = last = node;
        }
        else{
            node.next = first;
            first = node;
        }

    }
    //addLast
    public void addLast(int item){
        var node = new Node(item);

        if(isEmpty()){
            first = last = node;
        }
        else{
            last.next = node;
            last = node;
        }
    }
    //deleteFirst
    
    //deleteLast
    //contains
    public boolean contains(int item){
        return indexOf(item) != -1;
    }
    //indexOf
    public int indexOf(int item){
        int index = 0;
        var current = first;
        while(current != null){
            if(current.value == item) return index;
            current = current.next;
            index++;
        }
        return -1;
    }

    private boolean isEmpty(){
        return first == null;
    }

}
