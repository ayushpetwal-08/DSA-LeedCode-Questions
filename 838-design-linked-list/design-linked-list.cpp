class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = nullptr;
    }
};

class MyLinkedList {
    Node* head;
    Node* tail;

public:
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    int get(int index) {
        if (head == nullptr || index < 0) {
            return -1;
        }
        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
            if (temp == nullptr) {
                return -1;
            }
        }
        return temp->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index < 0) {
            return;
        }
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
            if (temp == nullptr) {
                return;
            }
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == nullptr) {
            tail = newNode;
        }
    }

    void deleteAtIndex(int index) {
        if (head == nullptr || index < 0) {
            return;
        }

        if (index == 0) {
            Node* toDelete = head;
            head = head->next;
            if (head == nullptr) {
                tail = nullptr;
            }
            delete toDelete;
            return;
        }

        Node* prev = head;
        for (int i = 0; i < index - 1; i++) {
            prev = prev->next;
            if (prev == nullptr || prev->next == nullptr) {
                return;
            }
        }

        if (prev->next == nullptr) {
            return;
        }

        Node* toDelete = prev->next;
        prev->next = toDelete->next;
        if (prev->next == nullptr) {
            tail = prev;
        }
        delete toDelete;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */