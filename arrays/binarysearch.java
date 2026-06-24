package arrays;

public class binarysearch {
    static int search(int arr[],int key,int start,int end){
        if(start>end) return -1;
        int mid=(start+end)/2;
        if(arr[mid]==key) return mid;
        if(key<arr[mid]) return search(arr, key,start,mid-1);
        else return search(arr, key, mid+1, end);


    }
    public static void main(String[] args) {
        int arr[]={1,2,6,8,9,12,35,};
        System.out.println(search(arr, 6, 0, arr.length-1));
    }
    
}
