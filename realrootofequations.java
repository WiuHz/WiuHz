import java.util.Scanner;

public float linearEquation(float a, float b){
    return -b/a;
}

public float linearSystem(float a11, float a12, float b1, float a21, float a22, float b2){
    float x1;
    float x2; 
    x1 = (b2*(a11/a21) - b1)/(a22*(a11/a21) - a12);
    x2 = (b1*(a21/a11) - b2)/(a12*(a21/a11) - a22);
    return x1;
    return x2;
}

public int determinantsOfMatrix(int a_11, int a_12, int a_21, int a_22){
    int d = a_11*a_22 - a_12*a_21;
    return d.abs();
}

public float delta(float x, float y, float z){
    float d = y^2 - 4*x*z;
    float x1 = (-y + d.sqrt())/2*x;
    float x2 = (-y - d.sqrt())/2*x;
    return x1;
    return x2;
}

public class Main(){
    Scanner inp = new Scanner(System.in);
    float a = inp.nextFloat();
    float b = inp.nextFloat();
    float res1 = linearEquation(a, b);
    System.out.println(res1);
    float a11 = inp.nextFloat();
    float a12 = inp.nextFloat();
    float b1 = inp.nextFloat();
    float a21 = inp.nextFloat();
    float a22 = inp.nextFloat();
    float b2 = inp.nextFloat();
    float res2 = linearSystem(a11, a12, b1, a21, a22, b2);
    System.out.println(res2);
    float a_11 = inp.nextFloat();
    float a_12 = inp.nextFloat();
    float a_21 = inp.nextFloat();
    float a_22 = inp.nextFloat();
    float res3 = determinantsOfMatrix(a_11, a_12, a_21, a_22);
    System.out.println(res3);
    float x = inp.nextFloat();
    float y = inp.nextFloat();
    float z = inp.nextFloat();
    System.out.println(res4);
}