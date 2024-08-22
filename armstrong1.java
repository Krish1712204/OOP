import java.util.Scanner;
public class armstrong1 
{
    public static void main(String[]args){
        Scanner Sc =new Scanner(System.in);
        int num,originalnum,rem,result=0;
        
        System.out.println("enter the num:");
        num=Sc.nextInt();
        
        originalnum=num;

        while(originalnum!=0){
            rem=originalnum%10;
            result=result+rem*rem*rem;
            originalnum=originalnum/10;
        }
        if(result==num){
            System.out.println("is armstrong number");
        }
        else{
            System.out.println("is not armstrong number");
        }
    }
}

