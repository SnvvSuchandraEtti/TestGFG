class Solution {
    // Function to find equilibrium point in the array.
    public static int findEquilibrium(int arr[]) {
        long total = 0;
        for (int num : arr) total += num;
        long leftSum = 0;
        for (int i = 0; i < arr.length; i++) {
            if (leftSum == total - arr[i] - leftSum) return i;
            leftSum += arr[i];
        }
        return -1;
    
        
    }
}
