package io.noargs;

public class Main {

    public static void main(String[] args){

        LinkedList linkedList = new LinkedList();
        linkedList.insert(6);
        linkedList.insert(2);
        linkedList.insert(8);
        linkedList.insert(29);

        linkedList.insertAtStart(82);

        linkedList.insertAt(2, 19);

        System.out.println("LinkedList size:" + linkedList.size());
	    linkedList.show();
    }
}
