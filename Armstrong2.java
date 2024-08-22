import java.util.*;
class Armstrong{
    public static void main(String[] args){
        Scanner sc = new Scanner (System.in);
        int num;
        System.out.println("Enter number :");
        num=sc.nextInt();
        int temp;
        temp = num;
        int rem ,t=0;
        while(temp>0){
            rem =temp % 10;
            temp = temp / 10;
            t++;
        }
        int cal = 0;
        temp=num;
        while(temp>0){
            rem =temp % 10;
            temp = temp / 10;
            cal += Math.pow(rem,t);
        }
        if(num==cal){
            System.out.println("Enterd number is Armstrong ");
        }
        else{
        System.out.println("Enterd number is  not Armstrong "); 
        }
    }
}