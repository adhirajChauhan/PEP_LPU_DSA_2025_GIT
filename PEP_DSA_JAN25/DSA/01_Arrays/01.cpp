
    // Online Free C++ compiler to run C++ program online
    #include <iostream>
    using namespace std;
    
    bool linearSearch(int arr[], int size, int key){
        for(int i = 0; i < size; i++){
            if(arr[i] == key){
                return true;
            }
        }
        return false;
    }
    
    int main() {
        int arr[6] = {5,7,2,3,8,4};

        cout << "Enter a key : " ;
        int key;
        cin >> key;

        bool ans = linearSearch(arr,6,key);

        if(ans) cout << "Key found" << endl;
        else cout << "Key not found" << endl;

    }