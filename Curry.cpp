#include <iostream>

//"using namespace std" -->> USING DIRECTIVES not a best practice, might leads to name conflicts for huge projects.
using std::cout; //USING DECLARATION When outside the main, it is useful for more numerous mains but vice-versa within the main
int main () //main function
{
    cout << "Hello World\n";
    return 0;

}

//Variables
using std::cout; 
int main () 
{   
    int age;
    age = 45;
    int years = age;
    cout << years;
    return 0;

}

//Variables concatenation
using std::cout; 
int main () 
{   
    int age;
    age = 45;
    int years = age;
    cout << "You are " << years << " years old" << std::endl;
    return 0;

// endl and \n are used for breaks i.e move to the next line
}

//User input in C++, just similar to prompt in javascript
using std::cout;
using std::cin;
int main () 
{   
    int age;
    cout << "How old are you?" << std::endl;
    cin >> age;
    cout << "You are " << age << " years old!!" << std::endl;
    return 0;

}

//Exponential calculation
#include <iostream>
#include <cmath  >

using std::cout;
using std::cin;
int main () 
{   
    int base, exponent;
    cout << "What is the base?" << std::endl;
    cin >> base;
    cout << "What is the exponent?" << std::endl;
    cin >> exponent;
    double power = pow(base, exponent);
    cout << "The answer is: " << power << std::endl;
 
}
//Exponential calculation using a function within a function
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;



double power(double base, int exponent) 
{
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);
    cout << "The answer is: " << myPower << std::endl;
}

int main ()
{   
    double base, exponent;
    cout << "What is the base?" << std::endl;
    cin >> base;
    cout << "What is the exponent?" << std::endl;
    cin >> exponent;
    print_pow(base, exponent);
 
}
/*Integral data types: short <= int <= long <= long long
1 byte = 8 bits
short = 2 bytes = 16bits
int = 4 bytes = 32bits (min - 16       max - 32)bytes guaranteed at minimum
long = 8 bytes = 64bits
long long = 8 bytes = 64bits
When the required bytes for a project corresponds to the maximum of a data type, you use the next data type with higher bytes because data types are guaranteed at the minimum bytes
*/
#include <iostream>
using std::cout;

int main ()
{
    cout << sizeof (int) << std::endl;
}
//Char character
#include <iostream>
using std::cout;

int main ()
{
    char x =  'A';//char takes a single quotation ''
    cout << x << std::endl;
    char x = 67;
    cout <<  (int) x << std::endl;
}
//Escape sequence 
#include <iostream>
using std::cout;

int main ()
{
    cout << "Hello\tWorld!" << std::endl;// tab
    cout << "Hello\bWorld!" << std::endl;// backspace 
    cout << "Hello\nWorld!" << std::endl;// next line
    cout << "Hello\vWorld!" << std::endl;// vertical tab 
    cout << "The name of the book is \"The hidden lamp\" " << std::endl;// using quotation within a string 
    /*it also applies for single quotation in the case of char i.e ' \' '
      An additional backslash is added to use a backslash within a quote. i.e " \\ " 
    */

}
//Boolean

#include <iostream>
using std::cout;
int main ()
{
    bool found = true;// 0 represents false while anything apart from that is true
    cout << std::boolalpha << found << std::endl;//std::boolalpha converts the digits to T/F
}

//Floating point data types
#include <iostream>
using std::cout;
int main ()
{
    float a; //float has the least trusted numbers of significant figures 6S.D
    double b;  /*4.3E3 or 4.3*10^3  
    15S.D
    std::fixed converts output in significant form to d.p
    */
    long double c; //18S.D
}

//const, macro and enum
using std::cout;
#define X 10//macro
int main ()
{
    const int x = 10;//const

    enum { x = 10 } //enum

}
//Numeric function
#include <iostream>
#include <cmath>
using std::cout;
int main ()
{
    cout << sqrt(36) << std::endl;
    cout << remainder (10, 3) << std::endl /*Square root of negative will output NAN
    -When the result of a numeric function is too high e.g pow(9, 9999999999), the output is INFINITY
    -Negative INFINITY is also possible
    */
    cout << 10 % 3 << std::endl;//Modulus is similar to remainder, the major difference is that only remainder can output floating data types i.e
    cout << remainder (10, 3.25) << std::endl;
    cout << fmod (10, 3) << std::endl; //fmod is similar to remainder
    cout << fmax (10, 3) << std::endl;
    cout << fmin (10, 3) << std::endl;
    cout << ceil(remainder (10, 3.25)) << std::endl; // 4. goes to the next higher number
    cout << trunc(-3.5) << std::endl;// -3 ceil (always goes up) is similar to trunc with regards to negative values 
    cout << floor(-3.5) << std::endl;// -4 This highlights the major difference between trunc and floor 
    cout << round(-3.5) << std::endl;// round goes to whatever is closest e.g -1.49 = -1 and -1.5 = -2
}
//String concatenation and c strings (array of characters)
#include <iostream>
#include <string>
using std::cout;
//using std::string 
int main ()
{
    std::string greeting = "Hello";
    std::string complete_greeting = greeting + " there";
    cout << complete_greeting + "!" << std::endl;
    cout << complete_greeting.length() << std::

    char name [] = "Adewale";
}

//getting user inputs for strings
#include <iostream>
#include <string>
using std::cout;
using std::cin;
int main ()
{
    std::string greeting;
    cout << "Say something!"<< std::endl;
    cin >> greeting;
    getline (cin, greeting);
    cout << greeting << std::endl;
}
#include <iostream>
#include <string>
using std::cout;
int main ()
{
    std::string greeting = "Hello";
    greeting.length();//same as .size()
    greeting.append(" there!");
    greeting.insert(4, " N")
    greeting.erase (4, 2);
    greeting.erase(greeting.length () - 1)//To erase the last character
    greeting.pop_back (); // Deletes the last character
    greeting.replace(0, 4, "Fuck off!"); // Replace starts from a digit lower than the first letter
    greeting.replace(greeting.find("Fuck"), 4, "*****");
    greeting.find_first_of("aeiou");//Give the numbers of the given characters foumd in a string. If not found the a the result is a huge value i.e npos which is eqivalent to not found
    greeting.substr(5, 3); // Cut out for output
    if (greeting === "I miss this") std::cout << "Equals" << std::endl;
    if (greeting.compare("Hello there") === 0 ) std::cout << "Equals" << std::endl;//Really important in JAVA
    cout << greeting << std::endl;
}
/*Hex and Oct
Oct ---> 001 - 007, 010 - 017, 020 - 027
Hex ---> 1 - 9, A - F, 10 - 19, 1A - 1F
*/
using std::cout;
int main ()
{
    int number = 030; //Oct = 8 * 3
    int number = 0x30; //Hex = 16 * 3
    cout << number << std::endl;
    int number = 30;
    cout << std::oct <<  number << std::endl;//36 = (8 * 3) + 6 = 
    cout << std::hex << number << std::endl;// 1e = (16 *  1) + 14 = 24
}
//Control flow: Branching and Looping 
#include <iostream>
using std::cout;
using std::cin;
int main ()
{
    cout << "What is your age?" << std::endl;
    int age;
    cin >> age;
    if (age < 13) {
        cout << "You are too young" << std::endl;
    }  
    else if (age > 13 && age < 20){
        cout << "You are a teenager" << std::endl;
    }
    else {
        cout << "Wow! you are an ADULT!!!!" << std::endl;
    }   
}
//Switch branching
#include <iostream>
using std::cout;
using std::cin;
int main ()
{
    int age;
    cout << "What is your age?" << std::endl;
    cin >> age;
    switch (age)
    {
        case 13 : 
            cout << "You are too young" << std::endl;
            break;
        case 20 :
            cout << "You are a teenager" << std::endl;
            break;
        default :
            cout << "Wow! you are an ADULT!!!!" << std::endl;
            break;
    }

}
//Enum Switch 
#include <iostream>
using std::cout;
using std::cin;
int main ()
{
    cout << "What season are you guys at?" << std::endl;
    enum season {summer, winter, spring, fall}
    cin >> season now;
    switch (now)
    {
        case summer : 
            cout << "it's warm" << std::endl;
            break;
        case winter :
            cout << "so cold here" << std::endl;
            break;
        case fall :
            cout << "rain outpour" << std::endl;
            break;
        default :
            cout << "I don't understand the weather anymore" << std::endl;
            break;
    }

}
//Factorial with for loop
#include <iostream>
using std::cout;
using std::cin;
int main ()
{
    int fact = 6;
    int factorial = fact;
    for (int i = factorial - 1; i > 0; i--) {
        factorial *= i;
    }  
    cout << "Factorial of " << fact << " is: " << factorial << std::endl;

    return 0;
 
}

//Factorial with while loop
#include <iostream>
using std::cout;
using std::cin;
int main () 
                                                                                                                                                                                                                                                                                                                                                                     
{ 
    int fact = 6;
    int factorial = fact;
    int i = factorial - 1;
    while ( i > 0) {
        factorial *= i;
        i--;
    }  
    cout << "Factorial of " << fact << " is: " << factorial << std::endl;

    return 0;
 
}
//Factorial with Do while loop
#include <iostream>
using std::cout;
using std::cin;
int main ()
{ 
    int fact = 6;
    int factorial = fact;
    int i = factorial - 1;
    do 
    {
        factorial *= i;
        i--;
    }while ( i > 0);
    cout << "Factorial of " << fact << " is: " << factorial << std::endl;

    return 0;
 
}
#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main ()
{ 
    string password = "Adewale134";
    string guess;
    do 
    {
        cout << "Guess your password" << std::endl;
        cin >> guess;
    }while (guess != password);
 
}
#include <iostream>
using std::cout;
using std::string;
int main ()
{
    string greeting = "Hello everyone";
    for (int i = 0; i < greeting.size(); i++)
    {
        cout << greeting[i] << std::endl;
        if (greeting[i] == 'e') 
        {
            cout << "Found e!" << std::endl;
            continue;
        }
    }
    

}
//Single line conditional statement
#include <iostream>
using std::cout;
using std::string;
int main ()
{
    int birth_day = 4;
    string day = "Guess my birth day";
    int guess;
    cin >> guess;
    
    guess == birth_day ? cout << "Great job\n" : cout << "Try again dummy"; 
}
//Guessing game with array
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
void print_array (int array[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << array[i] <<'\t';

    }
     cout << " " << std::endl;

}
void play_game ()
{
    int guesses[251];
    int guess_count = 0;
    int random = rand() % 21;
    cout << random << std::endl;
    cout << "Guess a number\n";
    
    while(true)
    {
        int guess;
        cin >> guess;
        guesses[guess_count++] = guess;
        if (guess == random){
            cout << "You win!!!!\n";
            break;
        }
        else if (guess < random){
            cout << "Too low\n";
        }
        else{
            cout << "Too high\n";
        }
    }
    print_array (guesses, guess_count);
}
int main ()
{   
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit Game" << std::endl << "1. Play Game \n";
        //cout << "0. Quit Game\n 1. Play Game \n";
        cin >> choice;
        switch (choice)
        {
            case 0 : //If choice = 0, output.....
                cout << "You give up easily!!! \n";
                break;
            case 1 :
               play_game();
                break;
        }
    }while (choice != 0);
}

//Array and Vectors
#include <iostream>
using std::cout;
using std::cin;
int main ()
{
    int guesses [20];//size of an array
    cout << "Guess my birth day" << std::endl;
    cin >> guesses[0];
    cout << guesses[0] << std::endl;//using input as the first item of the array
}

#include <iostream>
using std::cout;
using std::cin;
int main ()
{
    int guesses [] = {23, 89, 12, 28, 90};
    //Calculating the size of the array
    int size = sizeof(guesses) / sizeof(guesses [0]);// Unlike JS where guessses.length() would reveal the size of the array, this formular is used in C++
    for (int i = 0; i < size; i++)
    {
        cout << guesses[i] << '\t';

    }
}
//Array within a function
#include <iostream>
using std::cout;
using std::cin;
void print_array (int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << '\t';
    }
}
int main ()
{   
    int guesses[] = {23, 67, 12, 23, 23};
    int size = sizeof(guesses) / sizeof(guesses[0]);
    print_array(gueusses, size);

}
//Vectors 
#include <iostream>
#include <vector>
int main ()
{
    std::vector <int> data = {38, 14,2};
    data.push_back (12);
    std::cout << data[data.size() - 1] << std::endl;
    data.pop_back();
    std::cout << data.size() << std::endl;
}
//Guessing game with vector
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
void print_vector (std::vector <int>  vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << '\t';

    }
    cout << " " << std::endl;

}
void play_game ()
{
    std::vector <int> guesses;
    int random = rand() % 21;
    cout << random << std::endl;
    cout << "Guess a number\n";
    
    while(true)
    {
        int guess;
        cin >> guess;
        guesses.push_back(guess);
        if (guess == random){
            cout << "You win!!!!\n";
            break;
        }
        else if (guess < random){
            cout << "Too low\n";
        }
        else{
            cout << "Too high\n";
        }
    }
    print_vector(guesses);
}
int main ()
{   
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit Game" << std::endl << "1. Play Game \n";
        //cout << "0. Quit Game\n 1. Play Game \n";
        cin >> choice;
        switch (choice)
        {
            case 0 : //If choice = 0, output.....
                cout << "You give up easily!!! \n";
                break;
            case 1 :
               play_game();
                break;
        }
    }while (choice != 0);
}

//Templitized array
#include <iostream>
#include <vector>
#include <array>
using std::cout;
using std::cin;
void print_array (std::array <int, 15>  ages)
{
    for (int i = 0; i < ages.size(); i++)
    {
        cout << ages[i] << '\t';

    }

}
int main ()
{
    std::array <int, 15> ages = {23, 12, 2, 8};
    print_array(ages);

}
//Random based for loop called for each loop in other programming languages
#include <iostream>
#include <vector>
#include  <array>
using std::cout;
using std::vector;
int main ()
{
    vector <int> data = {2, 3, 2, 9};
    for(int n : data) 
    {
        cout << n << '\t';
    }
}//Also works for c based and templatized arrays but it's limited to a function

//Writing to files with ofstream
#include <iostream>
#include <fstream>
#include <vector>
int main ()
{
    std::ofstream << file;
    file.open("Hey");
    std::vector <std::strings> names = {};
    names.push_back("Adewale");
    names.push_back("Temitope");
    names.push_back("Justin");
    names.push_back("Mariam");
    names.push_back("Folashade");

    file << names << std::endl;
}