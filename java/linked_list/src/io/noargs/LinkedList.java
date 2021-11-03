package io.noargs;

public class LinkedList {
    private Node head;

    public void show(){
        Node node = head;

        while(node.next != null){
            System.out.println(node.data);
            node = node.next;
        }
        System.out.println(node.data);
    }

    public void insert(int data){
        Node node = new Node();
        node.data = data;

        if(head == null){
            head = node;
        } else {
            Node n = head;

            while(n.next != null){
                n = n.next;
            }
            n.next = node;
        }
    }

    public void insertAtStart(int data){
        Node node = new Node();
        node.data = data;
        node.next = head;
        head = node;
    }

    public void insertAt(int index, int data){
        Node node = new Node();
        node.data = data;

        if(index == 0){
            insertAtStart(data);
        }
        Node n = head;

        for(int i = 0; i < index - 1; i++) {
            n = n.next;
        }
        node.next = n.next;
        n.next = node;
    }

    public int size(){
        Node n = head;
        int size = 0;
        while(n.next != null){
            size++;
            n = n.next;
        }
        return size + 1;
    }
}
