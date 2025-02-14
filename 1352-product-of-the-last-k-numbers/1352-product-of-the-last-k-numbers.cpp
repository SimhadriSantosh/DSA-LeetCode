class ProductOfNumbers {
private:
    // Stores cumulative product of the stream
    vector<int> arr;
    int n = 0;

public:
    ProductOfNumbers() {

        arr.push_back(1);
        n = 0;
    }

    void add(int num) {
        if (num == 0) {
            arr = {1};
            n = 0;
        }else {
            arr.push_back(arr[n] * num);
            n++;
        }
    }

    int getProduct(int k) {

        if (k > n) return 0;
        return arr[n] / arr[n - k];
    }
};