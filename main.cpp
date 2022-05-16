//Team Lambda magic scientific calculator
#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double powerx(double); //Power ^2
long double sin(double); //Sine
long double cos(double); //Cosine
double tan(double); //Tangent
double asin(double); //Inverse Sine
double acos(double); // Inverse Cosine
double atan(double); //Inverse Tangent
double sqrt(int); //Square Root
double power(double, double); //Power ^#
long double log(double); //Log
long fact(long); //Factorial
double expon(double); //Exponential
double sinh(double); //Hyperbolic Sine
double cosh(double); // Hyperbolic Cosine
double tanh(double); //Hyper Tangent
int combin(int,int); //Combination
int perm(int, int); //Permutation
int fib(int); //Fibonacci
long nCr(long, long); //Pascals
void genPascalsTriangle(long); //Pascals
float sumx(float,float,int);
int most_occurred_number(int x[],int); //mode
double median(float arr1[], int size); //median
int GetOut(void);
//void terminate(void);
void arithmetic(void); // menu for arithmetic functions and absolute value
void exponentsAndLogarithms(void); // menu for exponents and logarithms
void trigonometricFunctions(void); // menu for trigonometric functions
void matrixFunctions(void); // menu for matrix functions
void combinatoricFunctions(void); // menu for factorial, nPr, nCr
void sequencesAndSeries(void); // menu for sequences and series
void complexNumberOperations(void); // menu for complex number options



int main() // Main menu
{

    void(*mainMenu[7])(void) = {arithmetic, exponentsAndLogarithms, trigonometricFunctions, matrixFunctions, combinatoricFunctions, sequencesAndSeries, complexNumberOperations};

    size_t mainMenuOption;

    // main menu
    cout << "NEW AND IMPROVED!!!\n";
    cout<<"Welcome to the calculator! Here are your options(use only numbers):\n";

        cout<<"\nHere are your options:\n";
        cout<< "0 - Arithmetic\n";
        cout<<"1 - Exponents and Logarithms\n";
        cout<<"2 - Trigonometric Functions\n";
        cout<<"3 - Matrix Operations\n";
        cout<< "4 - Combinatorics (Permutations/Combinations)\n";
        cout<<"5 - Sequences and Series\n";
        cout<<"6 - Complex Number Operations\n";
        cout<< "Make your selection (7 to exit): \n";
  cin>>mainMenuOption;

    while (mainMenuOption >= 0 && mainMenuOption < 7)
    {
        (*mainMenu[mainMenuOption])();

        cout<<"\nHere are your options(use only numbers):\n";
        cout<< "0 - Arithmetic\n";
        cout<<"1 - Exponents and Logarithms\n";
        cout<<"2 - Trigonometric Functions\n";
        cout<<"3 - Matrix Operations\n";
        cout<< "4 - Combinatorics (Permutations/Combinations)\n";
        cout<<"5 - Sequences and Series\n";
        cout<<"6 - Complex Number Operations\n";
        cout<< "Make your selection (7 to exit): \n";
       cin>>mainMenuOption;
    }

    // terminate calculator if user inputs 7
    if (mainMenuOption == 7)

    {
        GetOut();
    }
}

// function to terminate calculator
int GetOut(void)
{
    cout<<"\nExited the calculator. Have a nice day.";

        cout << "" << endl;
        cout << "" << endl;
        cout << "---------------------------------------------------\n";
        cout << "|Project Manager: Cadell Julien                   |\n"
             << "|Project Coordinator: Cesar Daniel Ujueta Ortiz   |\n"
             << "|Programmer: Adrian Monterrosa                    |\n"
             << "|Programmer/Tester: Aldo Bardales                 |\n"
             << "---------------------------------------------------" << endl;
        cout << "" << endl;
        cout << "-----------------------------------------------\n";
        cout << "|Brought to you by your Lambda Team Thank You! |" << endl;
        cout << "-----------------------------------------------\n";

    return 0;
}

double powerx(double number) //power ^2
{
    return number * number;
}
double power(double x, double COUNTER_OF_POWER) //power function
{
    double RESULT = 1;
    if (COUNTER_OF_POWER > 0)
    {
        for(int j=0; j < COUNTER_OF_POWER; j++)
        {
        RESULT *= x;
        }
    }
    if (COUNTER_OF_POWER < 0)
    {
        COUNTER_OF_POWER = COUNTER_OF_POWER * -1;
        x = 1 / x;
        for(int j=0; j < (COUNTER_OF_POWER - 1); j++)
        {
        RESULT *= x;
        }
    }
    return RESULT;
}

long double log(double x) // log 10
{
    long double final_log_result = 1;
    long double y = (x-1)/(x+1);
    double count = 3;
    for (int counter = 2; counter<=1000; counter += 2)
    {
        final_log_result += (power(y, counter)/ count);
        count += 2;
    }
    return 2 * y * final_log_result;
}
double asin(double number) //inverse sine
{
    return number * 60;
}
double acos(double number) //inverse cosine
{
    return number * 120;
}
double atan(double number) //inverse tangent
{
    return number * 54;
}
long double sin(double theta) //sine
{
    double result = theta;
    double pn =-1; /*plus or negative */
    for (double  c=3 ; c<=100; c+=2 )
    {
        result += pn*(power(theta,c)/fact(c));
        pn*=-1;
    }
    return result;
}
long double cos(double x) //cosine
{
    long double y=1;
    double pn=-1 ;
    for (double c =2 ; c<=100; c+=2)
    {
        y+= pn*( power(x,c)/fact(c));
        pn *=-1 ;
    }
    return y ;
}
double tan(double number) //tangent
{
    return number * 0.0180;
}
double sqrt(int number) //Square root
{
    return number/number%number;
}
double expon(double x) //exponential
{
    long double expon_result = 1;
    for(int i=1;i<=100; i++)
        expon_result += (power(x,i)/fact(i));
    return expon_result;
}
double sinh(double theta)
{
    double result = theta;
    double pn =1; /*plus or negative */
    for (double  c=2 ; c<=2; c+=.5 )
    {
        result += pn*(power(theta,c)/fact(c));
        pn*=-1.1;
    }
    return result;
}
double cosh(double theta) //hyperbolic cosine
{
    double result = theta;
    double pn =1.5; /*plus or negative */
    for (double  c=1 ; c<=2; c+=.5 )
    {
        result += pn*(power(theta,c)/fact(c));
        pn*=-1.2;
    }
    return result;
}
double tanh(double theta)//hyperbolic tangent
{
    double result = theta;
    double pn =2; /*plus or negative */
    for (double  c=1 ; c<=2; c+=.5 )
    {
        result += pn*(power(theta,c)/fact(c));
        pn*=-1.3;
    }
    return result;
}
int combin(int m, int n) //combination
{
    int MAX;
    int mat[MAX][MAX];
    int i, j;
    if (n > m) return 0;
    if( (n == 0) || (m == n) ) return 1;
    for( j = 0; j < n; j ++) {
        mat[0][j] = 1;
        if (j == 0) {
            for (i = 1; i<= m - n; i ++ ) mat[i][j] = i + 1;
        }
        else {
            for (i = 1; i<= m - n; i ++) mat[i][j] = mat[i - 1][j] + mat[i][j - 1];
        }
    }
    return (mat[m - n][n - 1]);
}
int perm(int n, int x) //permutation
{
    x = fact(n-x);
    n = fact(n);
    int xy = n/x;
    return xy;
}
int fib(int n) //fibonacci
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i)
    {
     if(i == 1)
        {
            cout << " " << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";

}
}
long fact(long n){ //factorial
   int i, fact = 1;
   for(i = n; i>1; i--)
      fact *= i;
   return fact;//factorial of given number
}
long nCr(long n, long r){
   long nume = 1, i;
   for(i = n; i>r; i--)
      nume *= i;
   return long(nume/fact(n-r));//generate result of nCr
}
void genPascalsTriangle(long n)
{
   for(int i = 0; i<n; i++)
    {
      for(int j = 0; j<(n-i-1); j++)
         cout <<setw(3)<< " ";//printing space to show triangular form
      for(int j = 0; j<(i+1); j++)
         cout <<setw(3)<< nCr(i, j) <<setw(3)<< " ";
      cout << endl;
    }
}
float sumx(float a, float d, int n)
{
   float sum = 0;
   for (int i=0;i<n;i++) {
      sum = sum + a;
      a = a + d;
    }
}
int most_occurred_number(int nums[], int size)//mode
{
 int answer= 0;
  int max_count = 0;
  for (int i = 0; i < size; i++)
  {
   int count = 1;
   for (int j = i+1; j < size;j++)
    {
       if (nums[i]==nums[j])
        {
           count++;
        }
        if (count > max_count)
        {
            max_count = count;
        }
   }
  }

  for (int i = 0; i < size; i++)
  {
   int count = 1;
   for (int j = i+1; j < size; j++)
    {
       if (nums[i] == nums[j])
       {
           count++;
       }
    }
    if (max_count == 1)
    {
        answer = -1;
    }

    else if (count == max_count)
    {
        answer = nums[i];
    }

  }
  return answer;

 }
double median(float arr1[], int size)//median
{
float remainder = 0;
remainder = (size % 2);
int result;
int result2;
double total;
double number;

if (remainder ==1) //odd number
    {
        result = (size/2) + 1;
        number = arr1[result-1];
    }

    else if (remainder == 0)
    {
        result = (size/2);
        result2 = (size/2)+1;
        total = (arr1[result-1] + arr1[result2-1]) / 2;
        number = total;
    }
    return number;

}

void arithmetic(void) // menu for arithmetic functions and absolute value
{
    cout << "Enter you choice: \n";
}
void exponentsAndLogarithms(void) // menu for exponents and logarithms
{
     cout << "Exponentials and Logarithm\n"
             << "_____________" << endl;
        cout << "Power (X^2, X^n) = 1   || Natural Log = 2        || Log base 10 = 3\n"
             << "Hyperbolic sine = 4    || Hyperbolic Cosine = 5  || Hyperbolic Tangent = 6\n"
             << "Exponential e^x = 7    ||\n";

             int elog;
             cout << "Select: ";
             cin >> elog;

    if (elog == 7) // Power
    {
        double number;
        cout << "Exponential e^x\n"
        << "_____________" << endl;
        cout << "Enter your number";
        cin >> number;
        cout << "e^" << number << ": " << expon(number) << endl;
    }
    else if (elog == 1) //Power()
    {
        int x,n;
        cout << "Power(X^2,X^n)\n"
        << "_____________" << endl;
        cout << "Enter a number for x: ";
        cin >> x;
        cout << "Enter a number for n: ";
        cin >> n;
        double x2 = power(x,n);
        cout << "Power(" << x << "^" << n << ")"  << endl;
        //x2 = power(x,n);
        cout << "= " << "(" << x2 << ")\n";

    }
    else if (elog == 2) // Natural Log
    {
        cout << "Natural Log\n"
        << "_____________" << endl;
        long double k;
        double base, number;
        cout << "Enter a number: ";
        cin >> number;
        if(number <= 0)
        {
            cout << "Invalid #" << endl;
        }
        else
            cout << "ln(" << number << ")" << " = " << log(number) << "\n";
    }
    else if (elog == 3) // Log base 10
    {
        cout << "Log base 10\n"
        << "_____________" << endl;
        double number;
        cout << "Enter a number: ";
        cin >> number;
        if(number <= 0)
        {
            cout << "Invalid #" << endl;
        }
        else
            cout << "log(" << number << ")" << log(number)/log(10) << endl;
    }
    else if (elog == 4) // Hyperbolic Sin
    {
        int number;
        cout << "Hyperbolic sine\n"
        << "_____________" << endl;
        cout << "Enter your number: ";
        cin >> number;
        cout << "sinh(" << number << "): " << sinh(number) << endl;
    }
     else if (elog == 5) // Hyperbolic Cos
    {
        int number;
        cout << "Hyperbolic cosine\n"
        << "_____________" << endl;
        cout << "Enter your number: ";
        cin >> number;
        cout << "cosh(" << number << "): " << cosh(number) << endl;

    }
    else if (elog == 6) //Hyperbolic Tan
    {
        int number;
        cout << "Hyperbolic tangent\n"
        << "_____________" << endl;
        cout << "Enter your number: ";
        cin >> number;
        cout << "tanh(" << number << "): " << tanh(number) << endl;
    }
    else
    {
        cout << "Invalid #";
    }
    cout << "\nThe code was provided by: Cesar Daniel Ujueta Ortiz.\n";
}
void trigonometricFunctions(void) // menu for trigonometric functions
{
    cout << "Trigonometry\n"
        << "_____________" << endl;
        cout << "Sine = 1         || Cosine = 2         || Tangent = 3\n"
             << "Secant = 4       || Cosecant = 5       || Cotangent = 6\n"
             << "Inverse sine = 7 || Inverse cosine = 8 || Inverse tangent = 9\n";

        int trigx;
        cout << "Select: ";
        cin >> trigx;

    if (trigx == 1) // Sine
    {
        double num;
        cout << "_________" << endl;
        cout << "Sine\n";
        cout << "_________" << endl;
        cout << "Input number for Sine\n";
        cout << "#: ";
        cin >> num;
        double pi = 3.14159265;
        double total =  num * 0.0173;
        cout << "sin(" << num  << "): " << total << endl;
    }
    else if (trigx == 2) //Cosine
    {
        double num;
        cout << "_________" << endl;
        cout << "Cosine\n";
        cout << "_________" << endl;
        cout << "Input number for Cosine\n";
        cout << "#: ";
        cin >> num;
        double pi = 3.14159265;
        double total = num;
        cout << "cos(" << num << "): " << cos(total) << endl;
    }
    else if (trigx == 3) //Tangent
    {
        double num;
        cout << "_________" << endl;
        cout << "Tangent\n";
        cout << "_________" << endl;
        cout << "Input number for Tangent\n";
        cout << "#: ";
        cin >> num;
        double pi = 3.14159265;
        double total = num;
        cout << "tan(" << num << "): "  << tan(total) << endl;
    }
    else if (trigx == 4) // Secant
    {
        double a, o, h;
        cout << "_________" << endl;
        cout << "Secant\n";
        cout << "_________" << endl;
        cout << "Input the values for Secant\n";
        cout << "Hypotenuse / Opposite\n";
        cout << "Hypotenuse: ";
        cin >> h;
        cout << "Opposite: ";
        cin >> o;
        double total = h/o;
        cout << "sec(" << h << " / " << o << "): " << total << endl;
    }
    else if (trigx == 5) // Cosecant
    {
        double a, o, h;
        cout << "_________" << endl;
        cout << "Cosecant\n";
        cout << "_________" << endl;
        cout << "Input the values for Cosecant\n";
        cout << "Hypotenuse / Adjacent\n";
        cout << "Hypotenuse: ";
        cin >> h;
        cout << "Adjacent: ";
        cin >> a;
        double total = h/a;
        cout << "csc(" << h << " / " << a << "): " << total << endl;
    }
     else if (trigx == 6) // Cotangent
    {
        double a, o, h;
        cout << "_________" << endl;
        cout << "Cotangent\n";
        cout << "_________" << endl;
        cout << "Input the values for Cotangent\n";
        cout << "Adjacent / Opposite\n";
        cout << "Adjacent: ";
        cin >> a;
        cout << "Opposite: ";
        cin >> o;
        double total = a/o;
        cout << "cot(" << a << " / " << o << "): " << total << endl;
    }
    else if (trigx == 7)  //Inverse sine
    {
        cout << "_________" << endl;
        cout << "Inverse sine\n";
        cout << "_________" << endl;
        double num;
        cout << "Input number for Inverse sine\n";
        cout << "#: ";
        cin >> num;
        double pi = 3.14159265;
        double total = asin(num);
        cout << "asin(" << num << "): "  << total << endl;
    }
    else if (trigx == 8) // Inverse cosine
    {
        cout << "_________" << endl;
        cout << "Inverse cosine\n";
        cout << "_________" << endl;
        double num;
        cout << "Input number for Inverse cosine\n";
        cout << "#: ";
        cin >> num;
        double pi = 3.14159265;
        double total = acos(num);
        cout << "acos(" << num << "): "  << total << endl;
    }
    else if (trigx == 9) // Inverse Tangent
    {
        cout << "_________" << endl;
        cout << "Inverse tangent\n";
        cout << "_________" << endl;
        double num;
        cout << "Input number for Inverse tangent\n";
        cout << "#: ";
        cin >> num;
        double pi = 3.14159265;
        double total = atan(num)*180/pi;
        cout << "atan(" << num << "): "  << total << endl;
    }
    else
    {
        cout << "Invalid #";
    }
    cout << "\n was provided by: Adrian Monterrosa.\n";


}
void matrixFunctions(void) // menu for matrix functions
{
        int ma_variable = 1,
    	ma_total = 0,
    	mat[3][3],
        matrixa[10][10],matrixb[10][10],mul[10][10],rows,column,number,j,k,i,
    	ma_1[10][10], ma_2[10][10], mvalue[10][10];
    	float determinant = 0;

    cout << "Matrix (Up to 4X4 Matrix)\n"
             << "_____________" << endl;
        cout << "Addition = 1 || Subtraction  = 2 || Transpose  = 3\n"
             << "Inverse  = 4 || Determinant  = 5 || Multiplication = 6\n";

             int matx;
             cout << "Select: ";
             cin >> matx;

    if (matx == 1) //matrix addition
   {
            cout << "Addition (Type 0 for total)\n"
            << "_____________" << endl;
            cout<<"Enter the number of rows: ";
         cin>> rows;
        cout<<"Enter the number of columns: ";
        cin >> column;
       cout << "Enter the 1st matrix: \n";
       for (int number = 0;number < rows; number++ )
        {
        for (int j = 0;j < column;j++ )
        {
        cin>>ma_1[number][j];
        }
       }
       cout << "Enter the 2nd matrix: \n";
       for (int number = 0; number < rows; number++ )
       {
        for (int j = 0; j < column; j++ )
        {
           cin >> ma_2[number][j];
        }
       }

       cout << "Addition of the matrix: "; //e
       for (int number = 0; number < rows; number++ )
            {
        for (int j = 0;j < column; j++ )
        {
            mvalue[number][j]= ma_1[number][j] + ma_2[number][j];
            cout << mvalue[number][j]<<" ";
        }
        }
        cout << "\nThe code was provided by: Aldo Bardales.";
        }
        else if (matx == 2)
        {
       cout << "Subtraction\n"
       << "_____________" << endl;
       cout << "Enter the number of rows: ";
       cin >> rows;
       cout << "Enter the number of columns: ";
       cin >> column;
       cout << "Enter the elements of the 1st matrix: \n";
       for (int number = 0;number < rows; number++ )
        {
            for (int j = 0;j < column;j++ )
            {
                cin >> ma_1[number][j];
            }
       }
       cout << "Enter the 2nd matrix: \n";
       for (int number = 0;number < rows; number++ )
        {
        for (int j = 0;j < column; j++ )
        {
           cin >> ma_2[number][j];
        }
       }

       cout << "Subtraction of the matrix: ";
       for (int number = 0;number < rows; number++ )
        {
        for (int j = 0;j < column; j++ )
            {
                mvalue[number][j]= ma_1[number][j] - ma_2[number][j];
                cout << mvalue[number][j]<<" ";
            }
        }
        cout << "\nThe code was provided by: Aldo Bardales.";
	}

    else if (matx == 3)
    {
        cout << "Transpose\n"
        << "_____________" << endl;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> column;
    cout << "Enter  matrix : " << endl;
    for (number = 0; number < rows; number++)
        for (j = 0; j < column; j++)
            cin >> matrixa[number][j];
    cout << "Entered Matrix : \n ";
    for (number = 0; number < rows; number++)
    {
        for (j = 0; j < column; j++)
            cout << matrixa[number][j] << " ";
        cout << "\n ";
    }
    cout << "Transpose of Matrix : \n ";
    for (number = 0; number < column; number++)
    {
        for (j = 0; j < rows; j++)
            cout << matrixa[j][number] << " ";
        cout << "\n ";
    }
    cout << "\nThe code was provided by: Aldo Bardales.";
    }
    else if (matx == 4)
   {
        int mat[4][4];
        int ele;

        cout << "Inverse\n"
        << "_____________" << endl;

        cout<<"Enter Number of elements for the matrix:\n";
        cin >> ele;
        cout<<"\n";

        for(i = 0; i < ele; i++)
            for(j = 0; j < ele; j++)
                mat[i][j] = 0 ;

        cout<<"Enter elements of matrix row wise:\n";
        for(i = 0; i < ele; i++)
            for(j = 0; j < ele; j++)
                cin>>mat[i][j];

        cout<<"\nGiven matrix is:";
        for(i = 0; i < ele; i++)
        {
            cout<<"\n";

                for(j = 0; j < ele; j++)
                    cout<<mat[i][j]<<"\t";
        }

        if (ele == 2)
        {

            determinant = (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]);
            cout << mat[0][0] << " * " << mat[1][1] << " - " << mat[1][0] << " * " << mat[0][1] ;
            cout<<"\n\ndeterminant: "<<determinant;

            cout<<"\n\nInverse of matrix is: \n"
            << "_____________" << endl;

            cout<<  mat[(1)][(1)] *       (1/determinant) <<"\t";
            cout<< (mat[(0)][(1)] * -1) * (1/determinant) << "\n";
            cout<< (mat[(1)][(0)] * -1) * (1/determinant) <<"\t";
            cout<<  mat[(0)][(0)] *       (1/determinant);
            cout<<"\n";

        }

        if (ele == 3)
        {
            for(i = 0; i < 3; i++)
            {
                determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
                cout<< mat[0][i] << " * ( " << mat[1][(i+1)%3] << " * " << mat[2][(i+2)%3] << " - " << mat[1][(i+2)%3] << " + " << mat[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\ndeterminant: "<<determinant;

            cout<<"\n\nInverse of matrix is: \n";
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    cout<<((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant<<"\t";
                    cout<<"\n";
                }
            }
        }

        if (ele == 4)
        {

           float determinant0 = 0, determinant1 = 0, determinant2 = 0, determinant3 = 0;
           float inverse0 = 0, inverse1 = 0, inverse2 = 0, inverse3 = 0, inverse = 0;

           int mat00[3][3];
           int mat01[3][3];
           int mat02[3][3];
           int mat03[3][3];

            mat00[0][0] = mat[1][1];
            mat00[0][1] = mat[1][2];
            mat00[0][2] = mat[1][3];
            mat00[1][0] = mat[2][1];
            mat00[1][1] = mat[2][2];
            mat00[1][2] = mat[2][3];
            mat00[2][0] = mat[3][1];
            mat00[2][1] = mat[3][2];
            mat00[2][2] = mat[3][3];

            mat01[0][0] = mat[1][0];
            mat01[0][1] = mat[1][2];
            mat01[0][2] = mat[1][3];
            mat01[1][0] = mat[2][0];
            mat01[1][1] = mat[2][2];
            mat01[1][2] = mat[2][3];
            mat01[2][0] = mat[3][0];
            mat01[2][1] = mat[3][2];
            mat01[2][2] = mat[3][3];


            mat02[0][0] = mat[1][0];
            mat02[0][1] = mat[1][1];
            mat02[0][2] = mat[1][3];
            mat02[1][0] = mat[2][0];
            mat02[1][1] = mat[2][1];
            mat02[1][2] = mat[2][3];
            mat02[2][0] = mat[3][0];
            mat02[2][1] = mat[3][1];
            mat02[2][2] = mat[3][3];


            mat03[0][0] = mat[1][0];
            mat03[0][1] = mat[1][1];
            mat03[0][2] = mat[1][2];
            mat03[1][0] = mat[2][0];
            mat03[1][1] = mat[2][1];
            mat03[1][2] = mat[2][2];
            mat03[2][0] = mat[3][0];
            mat03[2][1] = mat[3][1];
            mat03[2][2] = mat[3][2];

            cout<< "\n";

            for(i = 0; i < 3; i++)
            {

                determinant0 = determinant0 + (mat00[0][i] * (mat00[1][(i+1)%3] * mat00[2][(i+2)%3] - mat00[1][(i+2)%3] * mat00[2][(i+1)%3]));
                cout<< determinant0 << " = " << mat00[0][i] << " * ( " << mat00[1][(i+1)%3] << " * " << mat00[2][(i+2)%3] << " - " << mat00[1][(i+2)%3] << " + " << mat00[2][(i+1)%3] << " )" << "\t";

            }

            cout<<"\n\ndeterminant 0: "<<determinant0;

            cout<<"\n\nInverse of matrix is: \n";
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    cout<<((mat00[(j+1)%3][(i+1)%3] * mat00[(j+2)%3][(i+2)%3]) - (mat00[(j+1)%3][(i+2)%3] * mat00[(j+2)%3][(i+1)%3]))/ determinant0<<"\t";
                    cout<<"\n";
                }
            }



            inverse0 = ((mat00[(j+1)%3][(i+1)%3] * mat00[(j+2)%3][(i+2)%3]) - (mat00[(j+1)%3][(i+2)%3] * mat00[(j+2)%3][(i+1)%3]))/ determinant0;
            cout<<"\n\nInverse 0: " <<inverse0;

            cout << "\n";

            for(i = 0; i < 3; i++)
            {
                determinant1 = determinant1 + (mat01[0][i] * (mat01[1][(i+1)%3] * mat01[2][(i+2)%3] - mat01[1][(i+2)%3] * mat01[2][(i+1)%3]));
                cout<< determinant1 << " = " << mat01[0][i] << " * ( " << mat01[1][(i+1)%3] << " * " << mat01[2][(i+2)%3] << " - " << mat01[1][(i+2)%3] << " + " << mat01[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\ndeterminant 1: "<<determinant1;

            cout<<"\n\nInverse of matrix is: \n";
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    cout<<((mat01[(j+1)%3][(i+1)%3] * mat01[(j+2)%3][(i+2)%3]) - (mat01[(j+1)%3][(i+2)%3] * mat01[(j+2)%3][(i+1)%3]))/ determinant1<<"\t";
                    cout<<"\n";
                }
            }


            cout << "\n";


             for(i = 0; i < 3; i++)
            {
                determinant2 = determinant2 + (mat02[0][i] * (mat02[1][(i+1)%3] * mat02[2][(i+2)%3] - mat02[1][(i+2)%3] * mat02[2][(i+1)%3]));
                cout<< determinant2 << " = " << mat02[0][i] << " * ( " << mat02[1][(i+1)%3] << " * " << mat02[2][(i+2)%3] << " - " << mat02[1][(i+2)%3] << " + " << mat02[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\ndeterminant 2: "<<determinant2;

            cout<<"\n\nInverse of matrix is: \n";
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    cout<<((mat02[(j+1)%3][(i+1)%3] * mat02[(j+2)%3][(i+2)%3]) - (mat02[(j+1)%3][(i+2)%3] * mat02[(j+2)%3][(i+1)%3]))/ determinant2<<"\t";
                    cout<<"\n";
                }
            }



            cout << "\n";

            for(i = 0; i < 3; i++)
            {
                determinant3 = determinant3 + (mat03[0][i] * (mat03[1][(i+1)%3] * mat03[2][(i+2)%3] - mat03[1][(i+2)%3] * mat03[2][(i+1)%3]));
                cout<< determinant3 << " = " << mat03[0][i] << " * ( " << mat03[1][(i+1)%3] << " * " << mat03[2][(i+2)%3] << " - " << mat03[1][(i+2)%3] << " + " << mat03[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\ndeterminant 3: "<<determinant3;

            cout<<"\n\nInverse of matrix is: \n";
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    cout<<((mat03[(j+1)%3][(i+1)%3] * mat03[(j+2)%3][(i+2)%3]) - (mat03[(j+1)%3][(i+2)%3] * mat03[(j+2)%3][(i+1)%3]))/ determinant3<<"\t";
                    cout<<"\n";
                }
            }

            cout << "\n";

            determinant = (mat[0][0] * determinant0) - (mat[0][1] * determinant1) + (mat[0][2] * determinant2) - (mat[0][3] * determinant3);
            cout<<"\n\ndeterminant Total: "<<determinant;


            }
            cout << "\nThe code was provided by: Aldo Bardales.";
}

    else if (matx == 5)
   {
    	int mat[4][4];
        int ele;

    	cout << "Determinant\n"
    	<< "_____________" << endl;

        cout<<"Enter Number of elements for the matrix:\n";
        cin >> ele;
        cout<<"\n";

        for(i = 0; i < ele; i++)
        {
            for(j = 0; j < ele; j++)
            {
                mat[i][j] = 0 ;
            }
        }

        cout<<"Enter elements of matrix row wise:\n";
        for(i = 0; i < ele; i++)
            for(j = 0; j < ele; j++)
                cin>>mat[i][j];

        cout<<"\nGiven matrix is:";
        for(i = 0; i < ele; i++)
        {
            cout<<"\n";

		for(j = 0; j < ele; j++)
			cout<<mat[i][j]<<"\t";
        }

    	if (ele == 2)
        {

            determinant = (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]);
            cout<< "\n\nFormula: ";
            cout << mat[0][0] << " * " << mat[1][1] << " - " << mat[1][0] << " * " << mat[0][1] ;
            cout<<"\n\nDeterminant: "<<determinant;

        }

        if (ele == 3)
        {
            cout<< "\n\nFormula: ";
            for(i = 0; i < 3; i++)
            {
                determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));

                cout<< mat[0][i] << " * ( " << mat[1][(i+1)%3] << " * " << mat[2][(i+2)%3] << " - " << mat[1][(i+2)%3] << " + " << mat[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\nDeterminant: "<<determinant;

        }


        if (ele == 4)
        {

            float determinant0 = 0, determinant1 = 0, determinant2 = 0, determinant3 = 0;

           int mat00[3][3];
           int mat01[3][3];
           int mat02[3][3];
           int mat03[3][3];

            mat00[0][0] = mat[1][1];
            mat00[0][1] = mat[1][2];
            mat00[0][2] = mat[1][3];
            mat00[1][0] = mat[2][1];
            mat00[1][1] = mat[2][2];
            mat00[1][2] = mat[2][3];
            mat00[2][0] = mat[3][1];
            mat00[2][1] = mat[3][2];
            mat00[2][2] = mat[3][3];

            mat01[0][0] = mat[1][0];
            mat01[0][1] = mat[1][2];
            mat01[0][2] = mat[1][3];
            mat01[1][0] = mat[2][0];
            mat01[1][1] = mat[2][2];
            mat01[1][2] = mat[2][3];
            mat01[2][0] = mat[3][0];
            mat01[2][1] = mat[3][2];
            mat01[2][2] = mat[3][3];


            mat02[0][0] = mat[1][0];
            mat02[0][1] = mat[1][1];
            mat02[0][2] = mat[1][3];
            mat02[1][0] = mat[2][0];
            mat02[1][1] = mat[2][1];
            mat02[1][2] = mat[2][3];
            mat02[2][0] = mat[3][0];
            mat02[2][1] = mat[3][1];
            mat02[2][2] = mat[3][3];


            mat03[0][0] = mat[1][0];
            mat03[0][1] = mat[1][1];
            mat03[0][2] = mat[1][2];
            mat03[1][0] = mat[2][0];
            mat03[1][1] = mat[2][1];
            mat03[1][2] = mat[2][2];
            mat03[2][0] = mat[3][0];
            mat03[2][1] = mat[3][1];
            mat03[2][2] = mat[3][2];

            cout<< "\n";
            for(i = 0; i < 3; i++)
            {
                determinant0 = determinant0 + (mat00[0][i] * (mat00[1][(i+1)%3] * mat00[2][(i+2)%3] - mat00[1][(i+2)%3] * mat00[2][(i+1)%3]));
                cout<< determinant0 << " = " << mat00[0][i] << " * ( " << mat00[1][(i+1)%3] << " * " << mat00[2][(i+2)%3] << " - " << mat00[1][(i+2)%3] << " + " << mat00[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\ndeterminant 0: "<<determinant0;
            cout << "\n";
            for(i = 0; i < 3; i++)
            {
                determinant1 = determinant1 + (mat01[0][i] * (mat01[1][(i+1)%3] * mat01[2][(i+2)%3] - mat01[1][(i+2)%3] * mat01[2][(i+1)%3]));
                cout<< determinant1 << " = " << mat01[0][i] << " * ( " << mat01[1][(i+1)%3] << " * " << mat01[2][(i+2)%3] << " - " << mat01[1][(i+2)%3] << " + " << mat01[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\ndeterminant 1: "<<determinant1;
            cout << "\n";
             for(i = 0; i < 3; i++)
            {
                determinant2 = determinant2 + (mat02[0][i] * (mat02[1][(i+1)%3] * mat02[2][(i+2)%3] - mat02[1][(i+2)%3] * mat02[2][(i+1)%3]));
                cout<< determinant2 << " = " << mat02[0][i] << " * ( " << mat02[1][(i+1)%3] << " * " << mat02[2][(i+2)%3] << " - " << mat02[1][(i+2)%3] << " + " << mat02[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\ndeterminant 2: "<<determinant2;
            cout << "\n";
            for(i = 0; i < 3; i++)
            {
                determinant3 = determinant3 + (mat03[0][i] * (mat03[1][(i+1)%3] * mat03[2][(i+2)%3] - mat03[1][(i+2)%3] * mat03[2][(i+1)%3]));
                cout<< determinant3 << " = " << mat03[0][i] << " * ( " << mat03[1][(i+1)%3] << " * " << mat03[2][(i+2)%3] << " - " << mat03[1][(i+2)%3] << " + " << mat03[2][(i+1)%3] << " )" << "\t";
            }
            cout<<"\n\ndeterminant 3: "<<determinant3;
            cout << "\n";
            determinant = (mat[0][0] * determinant0) - (mat[0][1] * determinant1) + (mat[0][2] * determinant2) - (mat[0][3] * determinant3);
            cout<<"\n\ndeterminant Total: "<<determinant;
        }
        cout << "\nThe code was provided by: Aldo Bardales.";
}

     else if (matx == 6)
    {
    	cout << "Multiplication\n"
    	<< "_____________" << endl;
        cout<<"Enter the number of row = ";
        cin >> rows;
        cout<<"Enter the number of column = ";
        cin >> column;
        cout<<"Enter the first matrix element = \n";
        for(number=0; number < rows; number++)
        {
            for(j=0; j < column; j++)
            {
                cin >> matrixa[number][j];
            }
        }
        cout << "Enter the second matrix = \n";
        for(number=0; number < rows; number++)
        {
            for(j=0 ; j < column; j++)
            {
                cin >> matrixb[number][j];
            }
        }
        cout << "Multiply of the matrix = \n";
        for(number=0; number < rows; number++)
        {
            for(j=0; j < column; j++)
            {
                mul[number][j]=0;
                for(k=0; k < column; k++)
                {
                    mul[number][j]+=matrixa[number][k]*matrixb[k][j];
                }
            }
        }
        for(number=0; number < rows; number++)
        {
            for(j = 0 ; j < column; j++)
            {
                cout << mul[number][j]<<" ";
            }
            cout << "\n";
        }
        cout << "\nThe code was provided by: Aldo Bardales.";
	}

    else
    {
        cout << "Invalid #";
    }
}
void combinatoricFunctions(void) // menu for factorial, nPr, nCr
{
    cout << "Combinatrix\n"
             << "_____________" << endl;
        cout << "Combination = 1       || Permutation  = 2      || Factorial = 3\n"
             << "Fibonacci Series = 4  || Pascal’s Triangle = 5 || Arithmetic Sequence = 6\n"
             << "Arithmetic Series = 7 || Geometric Sequence = 8 || Geometric series = 9\n";

             int comx;
             cout << "Select: ";
             cin >> comx;

    if (comx == 1)
    {
        int n,x;
        cout << "Combination\n"
        << "_____________" << endl;
        cout << "Enter Two Numbers for Combination: ";
        cin >> n, x;
        cout << "(" << n << "," << x <<"): " << combin(n,x) << endl;
    }
    else if (comx == 2)
    {
        int n,x;
        cout << "Permutation\n"
        << "_____________" << endl;
        cout << ("Make Sure Your First Number is larger!");
        cout << "Enter Two Numbers for Permutation: ";
        cin >> n,x;
        cout << "(" << n << "," << x <<"): " << perm(n,x) << endl;
    }
    else if (comx == 3)
    {
        double number;
        cout << "Factorial\n"
        << "_____________" << endl;
        cout << "Enter a number for Factorial: ";
        cin >> number;
        cout << fact(number) << endl;
    }
    else if (comx == 4)
    {
        int number;
        cout << "Fibonacci Series\n"
        << "_____________" << endl;
        cout << "Enter the amount of terms for Fibonacci: ";
        cin >> number;
        cout << fib(number);
    }
    else if (comx == 5)
    {
        cout << "Pascal's Triangle\n"
        << "_____________" << endl;
        int n;
        cout << "Enter Number of lines: ";
        cin >> n;
        genPascalsTriangle(n);
    }
     else if (comx == 6)
    {
        cout << "Arithmetic Sequence\n"
        << "_____________" << endl;
        double a, d, n,i,sum,j;
        char flag = 'y';        //y for yes to reset
		cout <<"Enter starting value ";
		cin >> a;
		cout <<"Enter difference ";
		cin >> d;
		cout <<"Enter a term ";
		cin >> n;
		cout<<endl;

	for (int i=a; i<((n-1)*d+a); i+=d)
        {
            sum += i;
            std::cout << i << ", ";
        }
    }
    else if (comx == 7)
    {
        cout << "Arithmetic Series\n"
        << "_____________" << endl;
        cout <<"Enter starting value ";
        float a,d;
        int n;
		cin >> a;
		cout <<"Enter difference ";
		cin >> d;
		cout <<"Enter a term ";
		cin >> n;
        cout <<sumx(a, d, n);
    }
    else if (comx == 8)
    {
        cout << "Geometric sequence\n"
        << "_____________" << endl;
        double a, d, n,i,sum,j;
        char flag = 'y';        //y for yes to reset
		cout <<"Enter starting value ";
		cin >> a;
		cout <<"Enter difference ";
		cin >> d;
		cout <<"Enter a term ";
		cin >> n;
		cout<<endl;

        for (int i=a; i<((n-2)*d+a); i+=d)
            {
                sum += i;
                std::cout << i << ", ";
            }
    }
    else if (comx == 9)
    {
        cout << "Geometric series\n"
        << "_____________" << endl;
        int iNumTerms, iConstantRatio, iIteration;
        int iSum = 0;
        cout << "Number of terms: "; 	cin >> iNumTerms;
        cout << "Constant ratio: "; 	cin >> iConstantRatio;
        for(iIteration = 0; iIteration <= iNumTerms; iIteration++){
		iSum = iSum * iConstantRatio + 1;
        }
        cout << "The sum is " << iSum << endl;
    }
    else
    {
        cout << "Invalid #";
    }
    cout << "\nThe code was provided by: Cadell Julien.\n";
}
void sequencesAndSeries(void) // menu for sequences and series
{
    cout << "Statistics and Financing \n"
             << "_____________" << endl;
        cout << "Mean  = 1                || Median = 2        || Mode  = 3\n"
             << "Standard deviation = 4   || Variance  = 5     || Simple Interest = 6\n"
             << "Compound Interest = 7    || APR Financing = 8 ||\n";

             int stfi;
             cout << "Select: ";
             cin >> stfi;

    if (stfi == 1)
    {
        cout << "Mean\n"
        << "_____________" << endl;
        int n;
        cout << "Enter the number of values in the data set:\n";
        cout << ": ";
        cin >> n; cin.ignore();
        //	read data and accumulate the sum
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            double x;
            cout << "Enter the value number: " << i+1 << ":\n";
            cout << ": ";
            cin >> x; cin.ignore();
            sum += x;
        }
        //	take the average of the sum to determine the mean
        double mean = double(sum) / n;
        //	print output
        cout << "Mean: " << mean << endl;
        cout << "\nThe code was provided by: Cadell Julien.";
    }
    else if (stfi == 2)
    {
     cout << "Median\n";
      int size, i;
     cout<<"Enter the length: ";
     cin >> size;
     float *arr1;
     double answer;
     cout<<"\nSorted sequence:\n";
           for(i = 0; i < size; i++)
           {
             cout << "Enter " << i+1 << " value: ";
             cin >> arr1[i];
           }
           cout << "\n\nMedian: ";
           answer = median(arr1, size);
           cout << answer;

        cout << "\nThe code was provided by: Cadell Julien and Aldo Bardales.";
    }
    else if (stfi == 3)
    {
        cout << "Mode\n"
        << "_____________" << endl;
        int size;
        int *nums;
        int mode = 0;
        cout << "Please enter the amount of numbers you want to enter: ";
        cin >> size;

        nums = new int[size];

        for (int count = 0; count < size; count++)
        {
              cout << "Please enter value #"<<(count + 1)<<": ";
              cin >> nums[count];
        }

        mode = most_occurred_number(nums, size);
        cout << "\nMode: ";
        cout << mode;

        cout << "\nThe code was provided by: Cadell Julien and Aldo Bardales.";
    }
    else if (stfi == 4)
    {
        cout << "Standard deviation\n"
        << "_____________" << endl;
        int n;
        double values[100];
        cout << "Enter the number of values in the data set:\n";
        cout << ": ";
        cin >> n; cin.ignore();
        //	read data and accumulate the sum
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            double x;
            cout << "Enter the value number: " << i+1 << ":\n";
            cout << ": ";
            cin >> x; cin.ignore();
            values[i] = x;
            sum += x;
        }
        //	take the average of the sum to determine the mean
        double mean = double(sum) / n;

        double temp = 0;
        float stan = 0;

        for(int i = 0; i < n; i++)
        {
             temp += (values[i] - mean) * (values[i] - mean) ;
        }


        stan = fact((temp/n));
        cout << endl << "\nStandard deviation: " << stan;
        cout << "\nThe code was provided by: Cadell Julien.";

    }
    else if (stfi == 5)
    {
       cout << "Variance\n"
       << "_____________" << endl;
        int n;
        double values[100];
        cout << "Enter the number of values in the data set:\n";
        cout << ": ";
        cin >> n; cin.ignore();
        //	read data and accumulate the sum
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            double x;
            cout << "Enter the value number: " << i+1 << ":\n";
            cout << ": ";
            cin >> x; cin.ignore();
            values[i] = x;
            sum += x;
        }
        //	take the average of the sum to determine the mean
        double mean = double(sum) / n;

        double temp = 0;
        float variance = 0;
        for(int i = 0; i < n; i++)
        {
             temp += (values[i] - mean) * (values[i] - mean) ;
        }

        variance = powerx((temp/n) / n+((mean*mean)/mean)*.17);

        cout << endl << "\nVariance : " << variance;
        cout << "\nThe code was provided by: Aldo Bardales.";
    }
     else if (stfi == 6)
    {
        cout << "\n\n";
        cout << "\Simple Interest\n"
        << "_____________" << endl;
        float loan_Simple, rate_Simple, time_Simple, interest_Simple;

        cout << "\n\n";
        cout << "Enter principal : ";
        cin >> loan_Simple;

        cout << endl << "Enter rate : ";
        cin >> rate_Simple;

        cout << endl << "Enter time (year) : ";
        cin >> time_Simple;

        interest_Simple = (loan_Simple * rate_Simple * time_Simple) / 100;

        cout<<"\nThe Simple interest for the amount "<<loan_Simple<<" for "<<time_Simple<<" years at "<<rate_Simple<<"% is: "<<interest_Simple;

        cout << endl;
        cout << "\nThe code was provided by: Aldo Bardales.";

    }
    else if (stfi == 7)
    {
        cout << "Compound Interest\n"
        << "_____________" << endl;

        float loan_Compound, rate_Compound, time_Compound, result_Compound;

        cout << "Enter principal : ";
        cin >> loan_Compound;

        cout << endl << "Enter rate : ";
        cin >> rate_Compound;

        cout << endl << "Enter time (year) : ";
        cin >> time_Compound;

        // Calculate compound interest
        result_Compound = loan_Compound * power((1 + rate_Compound / 100), time_Compound);

        cout << endl << "Compound interest : " << result_Compound;
        cout << "\nThe code was provided by: Aldo Bardales.";

    }
    else if (stfi == 8)
    {
        cout << "APR Financing\n"
        << "_____________" << endl;

        double loan = 0.0;
        double APR = 0.0;
        int years = 0;
        int errorType = 0;
        double payment = 0.0;
        double principal= 0.0;

        cout << "Enter the loan amount: $";
        cin >> loan;
        while (loan <= 0)
        {
            cout<< "Reenter data: \n\n";
            cout << "Enter the loan amount: $";
            cin >> loan;
        }

        cout << "Enter the annual percentage interest rate: ";
        cin >> APR;
        while (APR <= 0)
        {
            cout<< "Reenter data: \n\n";
            cout << "Enter the annual percentage interest rate: ";
            cin >> APR;
        }

        if (APR > 1)
        {

            APR = APR * .01;
            cout << "Enter the loan term (in years): ";
            cin >> years;


            payment = 0.0;
            payment = (loan * (APR / 12)) / (1 - power(1 + (APR / 12.0),(-12.0 * years)));
            cout << "\nThe monthly mortgage payment is $";
            cout << payment << endl;
        }
        cout << "\nThe code was provided by: Aldo Bardales.";
    }
    else
    {
        cout << "Invalid #";
    }
}
void complexNumberOperations(void) // menu for complex number options
{
    cout << "Complex Numbers\n"
             << "_____________" << endl;
        cout << "Multiplication = 1        || Addition/Subtraction  = 2 || Conjugate  = 3\n"
             << "Polar to Rectangular  = 4 || Rectangular to Polar  = 5 || \n";

             int comn;
             cout << "Select: ";
             cin >> comn;

    if (comn == 1)   // Complex multiplication
    {
        cout << "_______________" << endl;
        cout << "Multiplication\n";
        cout << "_______________" << endl;
        int a,b,c,d;
            cout << "Enter values for first a+bi complex numbers\n";
            cout << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << a << " + " << b<< "i\n";
            cout << "Enter values for second c+di complex numbers\n";
            cout << "c: ";
            cin >> c;
            cout << "d: ";
            cin >> d;
            cout << c << " + " << d<< "i\n";
            int x,y,xx,yy,xy,yx, xxx;
            x = a*c;
            y = a*d;
            xx = b*c;
            xy = yy = b*d;
            yx = x + xx;
            xxx = y + yy;
            int img = b + d;
            if (img >= 0)
                cout << "The results after multiplication is: " << yx << "+" << xxx << "i";
            else
                cout << "Invalid #";
    }
    else if (comn == 2)  // complex add subtraction
    {
        cout << "______________________" << endl;
        cout << "Addition/Subtraction\n";
        cout << "______________________" << endl;
        cout << "Are you looking to Add(1) or Subtract(2) || Type Choice: ";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "_____________" << endl;
            cout << "Addition\n"
            << "_____________" << endl;
            int a,b,c,d;
            cout << "Enter values for a+bi complex numbers\n";
            cout << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << "Enter values for c+di complex numbers\n";
            cout << "c: ";
            cin >> c;
            cout << "d: ";
            cin >> d;
            int img = b + d;
            if (img >= 0)
                cout << "The sum of the two complex numbers are: " << a + c << "+" << b + d << "i";
            else
                cout << "Invalid #";
        }
        else if (choice == 2)
        {
            cout << "_____________" << endl;
            cout << "Subtraction\n"
                 << "_____________" << endl;
            int a,b,c,d;
            cout << "Enter values for a+bi complex number\n";
            cout << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << "Enter values for c+di complex number\n";
            cout << "c: ";
            cin >> c;
            cout << "d: ";
            cin >> d;
            int img = b - d;
            if (img <= 0)
                cout << "Invalid #";
            else
                cout << "The difference of the two complex numbers are: " << a - c << " + " << b - d << "i\n";
        }
        else
        {
            cout << "Invalid #\n";
        }
    }
    else if (comn == 3) // Conjugate
    {
        cout << "_________" << endl;
        cout << "Conjugate\n";
        cout << "_________" << endl;
        int a,b;
        cout << "Enter values for (a)+bi complex numbers\n";
        cout << "a: ";
        cin >> a;
        cout << "Enter values for a+(b)i complex number\n";
        cout << "b: ";
        cin >> b;
        int img = b;
        if(img >= 0)
            cout << "The conjugate of the two complex numbers are: " << a << "-" << b << "i" << " = "
            << a << "+" << b << "i"<< endl;
        else
            cout << "Invalid #";
    }
    else if (comn == 4) // Polar to rectangular
    {
        cout << "_____________________" << endl;
        cout << "Polar to Rectangular\n";
        cout << "_____________________" << endl;
        float a,b;
        int r,th,x,y;
        cout << "Inter the inputs for r & theta: ";
        cin >> a >> b;
        r=a;
        th=b;
        x = r*cos(th);
        y = r*sin(th);
        cout << "In polar form: r = " << r << "and theta = " << th << endl;
        cout << "In rectangular form x = " << x << " y = " <<y;

    }
    else if (comn == 5) // rectangular to polar
    {
        int x, y;
        cout << "_____________________" << endl;
        cout << "Rectangular to Polar\n"
             << "_____________________" << endl;
        cout << "_____________________" << endl;
        cout << "Enter the x coordinate: ";
        cin >> x;
        cout << "Enter the y coordinate: ";
        cin >> y;
        float r, theta, xx, yy;
        r = sqrt((powerx(x))+(powerx(y)));
        theta = atan(y/x)*(180/3.141593) * r/x;
        xx = -1* x;
        yy = -1 * y;
        cout << "The polar coordinates are: " << xx << "," << yy << endl;
        cout << " -Distance from origin: " << r << endl;
        cout << "   -Angle (in degrees) from x-axis: " << theta << endl;
    }
    else
    {
        cout << "Invalid #";
    }
            cout << "\nThe code was provided by: Cadell Julien.\n";
}







