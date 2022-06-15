import java.util.NoSuchElementException;

public class LinkedList{
    private class Node{
        private int value;
        private Node next;

        public Node(int value){
            this.value = value;
        }
    }
    private Node first;
    private Node last;
    private int size;
    public void addLast(int item){
        var node = new Node(item);
        if(isEmpty())
            first = last = node;
        else{
            last.next = node;
            last = node;
        }
        size++;
    }
    public void addFirst(int item){
        var node = new Node(item);
        if(isEmpty())
            first = last = node;
        else{
            node.next = first;
            first = node;
        }
        size++;
    }
    public int indexOf(int item){
        int index =0;
        var current = first;
        while(current!=null){
            if(current.value == item)
                return index;
            current = current.next;
            index++;
        }
        return -1;
    }
    public void removeFirst(){
        if(isEmpty())
            throw new NoSuchElementException();
        if(first==last) {
            first = last = null;
            return;
        }
        else{
            var second = first.next;
            first.next = null;
            first = second;
        }
        size--;
    }
    public void removeLast(){
        if(isEmpty())
            throw new NoSuchElementException();
        if(first == last){
            first = last = null;
            return;
        }
        else{
            var previous = getPrevious(last);
            last = previous;
            last.next = null;
        }
        size--;
    }
    public void remove(int item){
        if(isEmpty())
            throw new NoSuchElementException();
        if(first.value == item){
            removeFirst();
            return;
        }
        if(last.value == item){
            removeLast();
            return;
        }
        var current = first.next;
        while (current!=null) {
            if(current.value == item){
                getPrevious(current).next = current.next;
                current = null;
                size--;
                break;
            }
            current = current.next;
        }
    }
    public boolean contains(int item){
        return indexOf(item)!= -1;
    }
    public int size(){
        return size;
    }
    public int[] toArray(){
        int[] array = new int[size];
        var current = first;
        var index = 0;
        while(current != null){
            array[index++] = current.value;
            current = current.next;
        }
        return array;
    }
    public void reverse(){
        if(isEmpty()) return;
        if(first == last) return;
        var previous = first;
        var current = first.next;
        while(current != null){
            var next = current.next;
            current.next = previous;
            previous = current;
            current = next;
        }
        last = first;
        last.next = null;
        first = previous;
    }
    public int getKthFromTheEnd(int k){
        if(isEmpty())
            throw new IllegalStateException();
        if(k<0 || k==0){
            System.err.println("Invalid value of k!\nk must be greater than 0 and less than size of the linkedlist.");
            throw new IllegalArgumentException();
        }
        var previous = first;
        var next = first;
        for(int i=0; i<k; i++) {
            next = next.next;
            if(next==null){
                System.err.println("Invalid value of k!\nk must be greater than 0 and less than size of the linkedlist.");
                throw new IllegalArgumentException();
            }
        }
        while(next!=null){
            previous = previous.next;
            next = next.next;
        }
        return previous.value;
    }
    private boolean isEmpty(){
        return first==null;
    }
    private Node getPrevious(Node node){
        var current = first;
        while(current != null){
            if(current.next == node) return current;
            current = current.next;
        }
        return null;
    }
}
