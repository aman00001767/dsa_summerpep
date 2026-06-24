package arrays;

public class largestinarray {
    public static void main(String[] args) {
        int arr[]={4,5,6,7,84,0,2};
        System.out.println(largest(arr));
    }
    public static int largest(int[] arr) {
        // code here
        int largest=arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]>largest)
            largest=arr[i];
        } 
        return largest;
    }
}
