#include<iostream>

using namespace std;

class Array{
    int size, length;
    int *arr;

    bool isOverflow(){
        if(this->size == this->length){
            cout << "\nThe Array is full. Please try deleting some item and insert." << endl;
            return true;
        }

        return false;
    }

    bool isUnderflow(){
        if(this->length < 1){
            cout << "\nThe Array is empty. Please try adding some item." << endl;
            return true;
        }

        return false;
    }

    public:
        Array(int size){
            this->size = size;
            arr = new int[size];

            cout << "\nEnter the no. of elements in the Array: ";
            cin >> this->length;

            cout << "Enter " << this->length << " values space seperated: ";
            for (int i = 0; i < this->length; ++i){
                cin >> arr[i];
            }
        }

        void traversal(){
            cout << "The current array is: ";
            for (int i = 0; i < this->length; ++i){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        // inserting at the end of the array
        void insert(int value){
            if(!isOverflow()){
                arr[this->length] = value;
                this->length++;

                cout << "Successfully inserted at the end of the Array." << endl;
            }
        }

        void insert(int position, int value){
            if(!isOverflow() && (position >= 0 && position <= this->length + 1)){
                for (int i = length; i >= position; --i){
                    arr[i] = arr[i - 1];
                }
                arr[position - 1] = value;
                this->length++;

                cout << "Successfully inserted at " << position << " position" << endl;
            }
        }

        int deleteElement(int position){
            int deletedItem = -1;
            if(!isUnderflow() && (position >= 0 && position <= this->length)){
                deletedItem = arr[position - 1];
                for (int i = position - 1; i < this->length - 1; ++i){
                    arr[i] = arr[i + 1];
                }
                if(position == this->length){
                    arr[position] = 0;
                }
                this->length--;

                cout << "Successfully deleted at " << position << " position" << endl;
            }
            return deletedItem;
        }

        int search(int item){
            int position = -1;
            for (int i = 0; i < this->length; ++i){
                if(arr[i] == item){
                    position = i + 1;
                    break;
                }
            }

            return position;
        }

        void sortElements(){
            cout << "Array after Sorting: ";
            sort(arr, arr + this->length);
        }
};

int main(){
    int size = 0;
    cout << "Enter the total size of an Array: ";
    cin >> size;

    Array *a1 = new Array(size);

    int operation = 0;
    while(operation != 7){
        cout << "\n1. Insert element at end of the Array" << endl;
        cout << "2. Insert element at any given position" << endl;
        cout << "3. Delete element at any given position" << endl;
        cout << "4. Display the Array" << endl;
        cout << "5. Search an element in the Array" << endl;
        cout << "6. Sort the Array" << endl;
        cout << "7. Exit" << endl;
        cout << "\nSelect an operation: ";
        cin >> operation;

        int value = 0, position = 0;

        switch(operation){
            case 1:
                // insertion at end of the array
                cout << "Enter the value you want to insert: ";
                cin >> value;
                a1->insert(value);
                break;
            case 2:
                // insertion at any given position
                cout << "Enter the position: ";
                cin >> position;
                cout << "Enter the value: ";
                cin >> value;
                a1->insert(position, value);
                break;
            case 3:
                // delete at any given position
                cout << "Enter the position: ";
                cin >> position;
                a1->deleteElement(position);
                break;
            case 4:
                // traversal of an array
                a1->traversal();
                break;
            case 5:
                // searching an element in an array
                cout << "Enter the value to search: ";
                cin >> value;
                position = a1->search(value);
                cout << "Array Element found in " << position << " position" << endl;
                break;
            case 6:
                // sort an array
                a1->sortElements();
                a1->traversal();
                break;
            case 7:
                // exit
                break;
            default:
                // wrong input
                cout << "Invalid operation. Please try again." << endl;
            }
    }

    cout << "\nThank You. We'll see you soon again." << endl;

    return 0;
}