import java.util.*;

public class StackMain{
      public static void main(String[] args){
          System.out.println("enter the size of stack");
          Scanner sc=new Scanner(System.in);
          int b=sc.nextInt();
          Stacks s=new Stacks(b);
          while((b--) != 0){
              System.out.println("enter the value to push");
              int c=sc.nextInt();
              s.push(c);
          }
          while(s.isempty() != 1){
              System.out.println(s.pop());
          }
        }
}


class Stacks{
    public int top;
    int[] s;

    Stacks(int size){
        s=new int[size];
        top=-1;
    }

    void push(int value){
       top++;
       s[top]=value;
    }
    int pop(){
        int z=s[top];
        top--;
        return z;
    }

    int isEmpty(){
        if(top == -1)
            return 1;
        else
            return 0;
    }

}
