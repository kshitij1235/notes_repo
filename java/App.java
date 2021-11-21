// pakages


import java.util.Scanner; //using this pakage for accpeting values 


//java notes 

//naming convestion 

// 1)for class you are more likely to use pascal convention (the first word is always captial)
// 2)for object you are more likely to use camel case conventon 

// public claas
public class App {

    //funtion constist of : 
    //1)access modifer it make sure weather to keep data public , priavte
    //2)static makes it possible to run this fuction in class without any obj 
    //3)void returns no value of the fuctions but int does 
    //4)main is the the main fuction of the program
    public static void main(String[] args){

        System.out.println("========================PRINTING STATEMENTS====================================");
        //printing hello world 
        System.out.println("Hello, World!");
        
        //data types in java 
        
        //there are two types of data types 
        // 1) primitive data type
        //int,long , double,short,byte,float,char,bool
        // 2) non primitive data type
        
        
        //rules for picking up names for variables 
        // 1)must not start with a digit 
        // 2)name is case sensitie 
        // 3)should not be a keyword 
        // 4)white space is not allowed 
        // 5)can contain alphabets , characters , _, and a digit 
        // 6)dont use keywords 
        
        System.out.println("========================PREMAITIVE VARIABLES====================================");
        //decaring premitive  a variable 
        
        // 1) int 
            //int is all about integer but it can cover certain amount of digits 
        
        int integer_=7;
        System.out.println("integers : "+integer_);
        
        // 2) double  
             //double carry more digit after point more than float values , so it makes it more accurate
        
        double double_=7.37127831273;
        System.out.println("double : "+double_);
        
        // 3) short  
        
        short short_=1;
        System.out.println("short : "+short_);
        
 
        // 4) byte  
        
        byte byte_=1;
        System.out.println("byte : "+byte_);
        
 
        // 5) bool  
            //boolean contains values in true and false

        boolean boolean_=true;
        System.out.println("bool : "+boolean_);
 
        // 6) float  
            //flout contains point values
        
        float float_=2;
        System.out.println("bool : "+float_);
        
        // 6) float  
            //character contains string values 
        char ch='y';
        System.out.println("character : "+ch);

        //converting variables
        System.out.println("==========================CONVERSION AND TYPE CASTING AKA VAIABLE CONVERSION==========================");
        

        //for demonstation we will be using 3 types of variables 
        // 1)byte_
        // 2)int
        // 3)double 

        byte b;
        int integer_1=257;
        double d = 323.3213;

        ///here how we convert vars 
        
        //syntaX 
        // A VAR OF THE DATA TYPE TO CONVERT = (IN WHICH DATATYPE TO CONVERT)WHICH INTEGER TO CONVERT 
        
        // 1) how to convert int to byte 
        
        System.out.println("CONVERTING INT TO BYTE");
        b=(byte)integer_1;

        System.out.println("intger to byte convertion "+ "previous integer : "+integer_1+" current byte "+b);
        

        // 2)CONVERTING DOUBLE TO INT

        System.out.println("CONVERTING DOUBLE TO INT ");
        d = (int)integer_1;
        
        System.out.println("intger to byte convertion "+ "previous  double  : "+d+" current int "+integer_1);

        // 3)CONVERTING DOUBLE TO BYTE 

        System.out.println("CONVERTING DOUBLE TO BYTE");
        b = (byte)d;
        
        System.out.println("intger to byte convertion "+ "previous  double  : "+d+" current byte "+b);



        // control statments in java 
        System.out.println("-===================CONTROL STATMENTS==========================================");



        //for using control statements in java you need to know about comparasing operators 

        // 1) <  less than opereator  
        // 2) >  greater than operator 
        // 3) == equal to operator



        // 1)if statments 
        System.out.println("IF STATEMENTS");
        
        //MAKING TWO VARS TO COMAPRE 
        Scanner sc = new Scanner(System.in);//making a scaner to accept value from user


        //ACCEPTING VALUES FROM THE USER
        System.out.println("enter var 1 ");
        int var1=sc.nextInt();
        System.out.println("enter var 2 ");
        int var2=sc.nextInt();

        //SYNTAX OF IF STATEMENTS 

        // if(conditon)
        // {
        // block of code to execute when the condion is true 
        // }
            
        //SYNTAX OF LADDER IF ELSE STATEMENTS 
        
        // else if (condition)
        // {
        // block of code to execute when the condion is true 
        // }
            
        //SYNTAX OF ELSE CONDITION
            
        // else{
        // block of code to execute  
        // }
            
        
        //if condition 1
        if (var1>var2) {System.out.println("var 1 is greater");}
        
        //else if condition 
        else if (var1<var2) {System.out.println("var 2 is greater"); }
        
        //else condtion
        else{System.out.println("equal values");}


        System.out.println("=======================WHILE LOOPS=========================================");

        //creating a variable for loop 
        int x = 10;


        //FOR LOOP
        System.out.print("FOR LOOP\n");
        
        //SYNTAX FOR FOR LOOP 
        
        // for(initial value, condtion , increment or decrement)
        // {
        //block of code to be executed 
        // }
            
            
        for(x=0;x<=10;x=x+1)
        {
            System.out.println("bang!! the loop is running for the "+x+"th time");
        }
            
        //WHILE LOOP
        System.out.print("WHILE LOOP\n");

        //SYNTAX FOR WHILE LOOP 
        
        // while(condtion)
        // {
        //block of code to be executed 
        // }

        while (x>=1) {
            x=x-1;
         System.out.println("Bang while loop is running until "+x+"th time ");   
        }


        System.out.println("==============ARRAYS===========================");


        /// there are different types of arrays 

        // 1)single dimension array 


        // for example 
        
        //mention the type of arry you wanna make to create a arry var
        int months_days [];

        //then write array_ var= new datatype[size];
        months_days = new int [12];

        //manually allocate values from the mention size note that it stats from 0 
        months_days[1]=28;

        //you can baicly print anything you stored but just mention the length priting values of array 
        System.out.println(months_days [1]);






    


    }
}
