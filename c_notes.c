
// this is the area where you import  libraries 
#include <stdio.h> //use to get input output 
#include <math.h>  // use to do maths 
#include <stdlib.h> 
#include <time.h>

// function prototyping declaration 

int sum (int vara,int varb); //this is eg from passig values to the function 
int factorial (int x); // eg of recurtation 
 

int main(){

    // -------------------------initialization-------------------------
    // this is how we initialize   a variable
        int tom;

    // ------------------rules-------------------------------------
     
    // you can even initialize  a variable like this with only one special  charater _
    // your variable shoutld not start with number 
    // your variable short with _ if needed 
    // your variable should not contain space in between just put _ if needed
    // defining variable in c is case sensetive 

// types of constant ---------------------------------------

// 1) integer constant = 1,2,3,4
   int i = 8; 
   int d = 5 ;
// 2) real constant = -3.23 , 23 , 7.0
   float f =3.3 ;
// 3) charater constants = 'a' , '$' , 'e'
   char c ='#';


// --------------------------------------------------------------

// keywords -----------------------------------

// rule--------------

// never make a variable which  match this keyword 

// --------------------------------------
// 32 keywords = auto, double, int , struct , break, long , else , switch , case , return 
// ,enum , typedef , char , register, extern , union , const , short , float , unsigned 
// ,continue , signed , for , void , default , sizeof, goto , volatile 
// ,do ,static ,if , while 

// ---------------------------------------------------------------------


// struture of c program -------------------------

// 1) From main() the c exectution starts 
// 2) afer each instruction there should be  a ; (semicolon) to exectute that instruction 
// 3) instrutions are  case sensetative 
// 4) instrution are performend in the same way that they  are written 
// 4) comments start with //
// 5) multi line commentss starts with  /* and end with */ 

// ------------------------------------------------------------------------

// compilation and  execution ------------------

// written code of c  ---> compiled ----> run the compiled file to get output 

// -----------------------------------

// library  fuction ---------------------------

  //1) printf is used to print statements and even print values
  printf("\n-----------------printing----------------"); 
    //int the place of %d , %c ,%f is replaced with values in variable according to their types
   printf("\nthis is integer  %d" , i);   // %d is use for integer 
   printf("\nthis is real  value  %f" , f);  // %f is use got real value
   printf("\nthis is character   %c" , c);  // %c is use for characters


    // 2) accepting input form userr 
    printf("\n-----------------acceptiong  values form  user --------------------");

    // sytntax
    
    // scanf("type here eg = %d,f,c" , &variable name);
    printf("\nplease enter the value of i : ");
    scanf("%d" , &i); // & this is very important because it indicates address
    printf("\nthe value of i is %d" , i );

// ---------------------------------------------------

// instrution and operators---------------------------------------------------------------------

// types of instructions 

//   1)type declation ----------------------------------------------------------------

        int p , k , m ;
// you can even initalize the variable like
         p=k=m=10;

         printf("\n-----TYPE OF DECLARATION---");
         printf("\nthe equated example og p : %d " , p);
         printf("\nthe equated example og k : %d " , k);
         printf("\nthe equated example og m : %d " , m);

//   2) arthimetic instructions------------------------------------------------------

        // we have  operators such as = +,-,*,/,%
        // and operants  are  interger and float 

        //some  arthimetic operations between gives : 
        // int and int = int 
        // int and float = float 
        //float and float = float

        printf("\n------ARTHIMETIC OPEARTIONS--------");

        printf("\nthe sum of i and d is %d" , i+d);
        printf("\nThe substraction of i and d is %d" , i-d);
        printf("\nThe multiplication of i and d is %d" , i*d);
        printf("\nThe division of i and d is %d" , i/d);
        printf("\nThe reminder of i and d is %d " , i%d);

        printf("\nThe 5 raise to 5 is %f" , pow(5,5)); //this comes under math.h
        
        printf("\n----- if you want to assign  value to a varaible we should ----");

        // if you want to assign  value to a varaible we should 
        int a = 3 ;
        int h = 4;
        int b ;

        b = a*h ;
        printf("\nthe value of b is : %d " , b );

    //operator preccedene 

        int x = 4;
        int y = 9;

        printf("\nthe value of 3x-8y : %d" , 3*x-8*y);
        //c never follow  boardmass 

        //operator preccedence decides which operature to execute  first 
        //priority of operators area as follow 
        // 1)*,/,%
        // 2)+,-
        // 3)=

        // if you want to set a priority tou  jsut have to  add a  bracket 

        printf("\nthe value of 3(x-8y) : %d" , 3*(x-8*y)); 
        //in this situation bracket will be execute at first 
        
        printf("\nthe value of 3x/8y : %d" , 3*(x-8/y)); 
        //in this situation bracket will be execute at first 

    // operator associativity 
        //when opertor of equal priority  are presen tin a expression , the tie in case of associativity 

        // x*y/z  = (x*y)/z 
        // x/y*z = (x/y)*z 

        // executes first what comes from left to  right 

//   3) control instructions------------------------------------------------------- 

       //determine the flow  of control in a program 

    //types  of control instructions  =

        // 1) sequential flow ------------------
    
        // 2) decision control instructions-------------
        printf("\n----DECISION CONTROL INSTRUCTIONS----------");

           //--------- if statements---------------

              //    eg = 
                        printf("\n------IF STATEMENTS-----------------------");
                        int var1 ;

                        printf("\nenter a  number : ");
                        scanf("%d", &var1);

                        // &&this is and if both are true it will execute
                        // || this is or one should be satisfied
                        // ! this is not opertor it invert 

                        // operator precidence pirority 
                        
                        // 1)!
                        // 2) *,/,%
                        // 3)+,-
                        // 4)<,>,<=,>= 
                        // 5) == , !=
                        // 6) &&
                        // 7)||
                        // 8)=

                        if((var1==2 && var1>=2)|| !(var1==3))
                        {
                            printf("\nthe value is 2 and you are in a condition");
                        }
                        else if (var1==6)  //this will give you output always
                        {
                            printf("\nyou are in else-if loop");
                        }
                        
                        else
                        {
                            printf("\nyou are in a else loop ");
                        }


                        // conditional operators(oneline if sentence) -------------------------
                        printf("\n---------CONDITIONAL OPEEATORS---------");

                            //syntax 

                                //  (condition) ? action if condition is true : action if false ;   

                            int cond ; 
                            printf("\nthis is  an example of conditional operator enter value : ");
                            scanf("%d" , &cond);
                            (cond<5) ? printf("\ncondit less then 5") : printf("\ncondit is big then 5");

                        //switch case 
                        printf("\n--------------switch case -----------------------");

                        //   use to make chosie between alternative 

                        // syntax

                        // switch (expression or variable which store int)
                        // {
                        // case /* constant-expression */:
                        //     action
                        //     break;
                        // default:
                        //     break;
                        // }
                           

                        //    eg 
                    
                           printf("\nenter  a number between 1 to 5  : ");
                           scanf("%d" , &cond);

                           switch (cond){
                           case 1:
                               printf("\nyou gave 1");
                               break;
                           case 2:
                               printf("\nyou gave 2");  
                                break;
                           case 3:
                               printf("\nyou gave 3");  
                               break;     
                           case 4:
                               printf("\nyou gave 4");
                               break; 
                           case 5:
                               printf("\nyou gave 5");
                               break;
                           default:
                               printf("\ninvalid number");
                               break;
                           }

                          
        // 3) loop  control indstructions

        // loop is used to control the same set of instruction  again and again
        
        printf("\n------------loop control instructions------------------------");

        //while loop-------------------------

            printf("\n---------WHILE LOOP-------------");

            //while loop keeps on execution until condion gets false 

            //syntax

            // while (condition is true)
            // {
            //     action
            // }
            
            // eg=

            printf("\nenter number you want to print from your num to 10 : ");
            scanf("%d" , &cond);

            while (cond<10)
            {
                printf("\n %d",cond);
                cond++;
            }

            printf("\n----INCREMENT AND DECREEMEMNT---------");

            // i++ --> it is used to increment value by 1(print first then increment)
            // ++i --> it is used to increment value by 1(increment first then print)
            // i+= your value --> it is used to increment value by your desired value

            // i-- --> it is used to decrement value by 1(print first then decrement)
            // --i --> it is used to decrement value by 1 (decrement first then print)
            // i-= your value --> it is used to decrement value by your desired value

            
        //do - while loop--------------------

        printf("\n----DO WHILE LOOP---------");

        // do while loop execute the code and then cheak the condition 
        //do while loop is executed minmum one time 

        // syntax 

        // do
        // {
        //     action 
        // } while ( condition );
            
        // eg 
        
        printf("\nEnter a  number from 0-10  : ");
        scanf("%d", &cond);
        do
        {
            printf("\nthe value of condi  : %d" ,cond);
            cond++;
        } while (cond<10);
        

        //for loop----------------------------

        printf("\n--------FOR LOOP------");

        //for loop keeps o execution untill the conditon  get  true 

        // syntax

        // for (initialize ; condition ; increment or decrement )
        // {
        //     action 
        // }
        
        // eg 

        for (i = 0; i < 10; i++)
        {
            printf("\nfor loop running and value of i is %d" , i);
        }
           
        // 4) case control  instructions 



// -----------------------------------------------------------------------------


// to create a random variable in c   


    srand(time(0));
    cond=rand();
    printf("\nyour random genertated number is : %d ", cond);

// ---------------------------------------

// ---------FUNCTIONS and recursion ------------- 

// funtion can return one value at  a time 

void display(){

    printf("\nthis is  a void display function ");  //this is  a creation of function
}

display();  //this is function calling


// function accepting values 

// sum is  a function which accept two var as uinout ad give result as output 
int sum (int vara , int varb){
    cond=vara+varb;
    return cond;
      }

i=sum(2,3);   //using fuctions  by passing values
printf("the sum of passed value form the funtion is : %d",i);

// RECURCATION ------- 

        // recurtation  is the way  of running  a function  inside a  function 

        // eg  :  

        // funtion prototyping on to p 
 
        int factorial (int x) {
            if (x==1 || x==0){
                return 1 ;
            }
            else
            {
                 return x * factorial(x-1);
            }
        }
        
        i=5;
        printf("\nthe value of factorial %d is %d", i , factorial(i));


    return 0 ;
}
