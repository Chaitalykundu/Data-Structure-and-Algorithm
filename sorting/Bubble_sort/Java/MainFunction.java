/* Author: Chaitaly Kundu
Date: 16th nov,2020 */

// Implement bubble sort algorithm in a Java program using only one function (main)

public class MainFunction{
    public static void main(String[] args){
        int a[];
        int n;
        int e;
        int i;
        int j;
        int temp;
        int flag;
        System.out.println("Enter the no of element: ");
        System.out.println(n);

        // Take input for Elements
        System.out.println("Elements are: ");
        for(e=0;e<n;e++)
        {
            System.out.println(a[e]);
        }

        // logic of bubble sort algorithm (ascending order)
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    // print sorted array
    System.out.println("Sorted array is: ");
    for(e=0;e<n;e++)
    {
        System.out.println(a[e]);
    }
    }
}