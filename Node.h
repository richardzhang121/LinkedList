// Node.h
// Node class for creating linked lists with a pointer to a Student class and a second pointer to the next node

class Student;

class Node{
	private:
		Node* next;
		Student* student;
	public:
		Node();
		Node(Student*);
		~Node();
		Node* getNext();
		Student* getStudent();
		void setNext(Node*);
		void setStudent(Student*);
};
