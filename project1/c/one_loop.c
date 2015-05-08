int sum() {
    int sum = 0;
    int k = 1;
    int j = 5;
    int s = 0;

    for (int i=3; i<1000; i+=3) {
        sum += i;
        
        if (j < 1000 && k < 3) {
            sum += j;
            j += 5;
            k++;
        } else {
            k = 1;
            j += 5;
        }
    }
    return sum;
}

int main() {
    for(int i=0; i<100000; i++)
        sum();
}
