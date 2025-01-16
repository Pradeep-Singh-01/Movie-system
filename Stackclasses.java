import java.util.Stack; 

public class Stackclasses {

    public static void main(String[] args) {
        Stack<Integer> st = new Stack<Integer>();
        st.push(3);
        st.push(2);
        st.push(6);
        st.push(9);
        //System.out.println("at index" + st.elementAt(2));
       System.out.println( "pop element" + st.pop());
        // while(!st.isEmpty()){
        //     System.out.println(st.pop());
        //     // st.pop();

        // }
        // System.out.println(st.capacity());
        // System.out.println(st.getFirst());
    }
}
