package arrays;

public class linearsearch {
    public static int search(int arr[],int key){
        for(int i:arr){
            if(i==key && key>10) return key*2;
        }
        return key/2;
    }
    public static void main(String[] args) {
        int arr[]={1,10,12,54,2,3};
        System.out.println(search(arr, 4));
    }
}
