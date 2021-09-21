/*

Original Question: You are given an array (which will have a length of at least 3, but could be very large) containing integers. 
The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write 
a method that takes the array as an argument and returns this "outlier" N.

*/

int FindOutlier(std::vector<int> arr) {
    int result = 0;
    int evenCount = 0;
    for (int i = 0; i < 3; i++)
        if (arr[i] % 2 == 0)
            evenCount++;
    if (evenCount > 1) {
        for (int i = 0; i < arr.size(); i++)
            if (arr[i] % 2 != 0)
                return arr[i];
    } else {
                for (int i = 0; i < arr.size(); i++)
                    if (arr[i] % 2 == 0)
                        return arr[i];
    }
}
