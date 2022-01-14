#include <iostream>
using namespace std;

#define _LENGTH 5

//const int LENGTH = 10;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Test{
	private:
		int x;
		float y;
			
	public:
		Test(){
			x = 100; y = 200;
		}
		
		int get_x(){
			return x;
		}
		void set_x(int x1){
			x = x1;
		}
		float get_y(){
			return y;
		}
		void set_y(float x1){
			y = x1;
		}
};

class MyArray{
	private:
		int arr[_LENGTH];
		int size;
		
	public:
		void print_arr(){
			for(int i=0; i<size; i++){ // to print all value
				cout << arr[i] << "\t";
			}
		}
		
		void set_arr(int N){
			// hint:using cin >>
			size = N;
			for(int i=0; i<size ; i++){
				cin >> arr[i];
			}
		}
		
};

class My2DArray{
	private:
		int arr[_LENGTH][_LENGTH];
		int rows, cols;
	
	public:
		void print_arr(){
			for(int i=0; i<rows; i++){
				for(int j=0; j<cols; j++){
					cout << arr[i][j] << ' ';
				}
				cout << endl;
			}
		}	
		void set_arr(int r, int c){
			rows = r;
			cols = c;
			
			for(int i=0; i<rows; i++){
				for(int j=0; j<cols; j++){
					cin >> arr[i][j];
				}
			}
		}	
};

class MyStack{
	private:
		int arr[_LENGTH];
		int top;
		
	public:
		MyStack(){
			top = 0;
		}
		
		int push(int x){
			if(top == _LENGTH){
				return -1; // -1 means FAILED
			}
			arr[top] = x;
			top++;
			return 0; // 0 means SECCESS
		}
		
		int pop(){
			if (top == 0){ // when stack is empty
				return -1; // -1 Mean FALSE
			}
			top--;
			return arr[top];
		}
		
		void print_arr(){
			cout << "TOP : " << top << endl;
			for(int i=0; i<top; i++){ // to print all value
				cout << arr[i] << "\t";
			}
			cout << endl;
		}
};

class MyQueue{
	private:
		int arr[_LENGTH];
		int head, tail, size;
	
	public:
		MyQueue(){
			head = 0; tail = 0; size = 0;
		}
		
		int enqueue(int x){
			// CHECK FULL QUEUE?
			if(size == _LENGTH){
				cout << "THIS QUEUE IS FULL FOOL!" << endl;
				return -1;
			}
			arr[tail] = x;
			tail++;
			size++;
			if(tail == _LENGTH){
				tail = 0;
			}
			return 0; // 0 means SUCCESSFUL	
		}
		
		int dequeue(){
			if(size == 0){
				return -1; // -1 mean FAILURE
			}
			int x = arr[head];
			head++;
			size--;
			if(head == _LENGTH){
				head = 0;
			}
			return x;
		}
		void print_arr(){
			cout << " Head : " << head << "\t Tail : " << tail << endl;
			for(int i=0, j=head ; i<size ; i++){ // to print all value
				cout << arr[j] << "\t";
				j++;
				if(j == _LENGTH){
					j=0;
				}
			}
			cout << endl;
		}
};

int main(int argc, char** argv) {
	
	// create opject from class
	
	/*Test obj1, obj2;
	
	cout << "x is " << obj1.get_x() << endl;
	
	cout << "y is " << obj1.get_y() << endl;

	obj1.set_x(5);
	
	cout << "x is " << obj1.get_x() << endl;*/
	
	// array 1d
	/*MyArray obj3;
	
	obj3.set_arr(7);
	obj3.print_arr();*/
	
	// array 2d
	/*My2DArray obj4;
	
	obj4.set_arr(2, 3);
	obj4.print_arr();*/
	
	// Stack
	/*MyStack stack;
	cout << "POP : " << stack.pop() << endl;
	stack.push(12); stack.print_arr();
	stack.push(30); stack.print_arr();
	stack.push(5);  stack.print_arr();
	
	cout << "POP : " << stack.pop() << endl;
	cout << "POP : " << stack.pop() << endl;
	cout << "POP : " << stack.pop() << endl;*/
	
	MyQueue queue;
	queue.enqueue(1); queue.print_arr();
	queue.enqueue(2); queue.print_arr();
	queue.enqueue(3); queue.print_arr();
	queue.enqueue(4); queue.print_arr();
	queue.enqueue(5); queue.print_arr();
	queue.enqueue(6); queue.print_arr();
	cout << "DEQUEUE : " << queue.dequeue(); queue.print_arr();
	cout << "DEQUEUE : " << queue.dequeue(); queue.print_arr();
	cout << "DEQUEUE : " << queue.dequeue(); queue.print_arr();
	cout << "DEQUEUE : " << queue.dequeue(); queue.print_arr();
	cout << "DEQUEUE : " << queue.dequeue(); queue.print_arr();

	return 0;
}
