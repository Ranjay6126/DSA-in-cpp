int arr[] = {10,5,30,20};

int largest = arr[0];

for(int i=1;i<4;i++) {
    if(arr[i] > largest)
        largest = arr[i];
}

cout << largest;