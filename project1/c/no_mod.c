int sum() {
    int sum = 0;
    int k = 1;

    for (int i=3; i<1000; i+=3) {
        sum += i;
    }

    for (int i=5; i<1000; i+=5) {
        if (k < 3) {
            sum += i;
            k++;   
        } else {
            k = 1;
        }
    }
    return sum;
}

int main() {
    for(int i=0; i<100000; i++)
        sum();
}
