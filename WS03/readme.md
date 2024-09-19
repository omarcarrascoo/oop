# Workshop #3: Member Functions and Privacy

In this workshop, you will implement member functions, privacy and a safe empty state for a class.


## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:

- to define a class type
- to privatize data within the class type
- to instantiate an object of class type
- to use member functions to query the state of an object
- to use member functions to change the state of an object
- describe to your instructor what you have learned in completing this workshop

## Submission Policy and Instructions

This workshop is divided into two sections: a coding part with reflection and a DIY section for practice.

The DIY homework is presented at the end; do it on your own for practice (DIY is neither submitted nor marked).

- Part 1 (**LAB**): A step-by-step guided workshop, worth 100% of the workshop’s total mark.
> Please note that Part 1 **is not** to be started in your lab session of the week. You should start it on your own before the day of your lab and then join the lab session to possibly seek assistance to complete your lab. These workshops must be submitted in the lab to receive 100% of the mark.

- Reflection: A non-coding part, to be submitted a few days later (due date decided by your professor). The reflection doesn’t have marks associated with it but can incur a penalty of up to 40% of the whole workshop’s mark if your professor deems it insufficient (you make your marks from the code, but you can lose some on the reflection).

- Part 2 (**DIY**): A Do It Yourself type of practice that is much more open-ended. This part does not need to be submitted to your professor and does not have any marks tied to it. However, you can always test your program using the automated submitter program or ask your professor for help or feedback.


## Due Dates
### Coding
Part 1 coding is due by the end of your lab session and is to be submitted from one of the desktop computers in the lab for 100% of the mark. You will receive 60% of the mark if you submit your code after the lab by midnight. No submissions are accepted after that.

> You have to submit your code using an SSH terminal client logged into the Matrix cluster from one of the desktop computers in the lab (we recommend using [PuTTY](https://www.putty.org/)). Note that you must only have one connection to the Matrix client; before logging into Matrix to submit your lab, make sure you are logged off all other terminal client sessions.

## Late Penalties
You are allowed to submit your workshop by midnight on the same day of your lab session with a 40% penalty. No submission is accepted after that.


## Citation
Every file that you submit must contain (as a comment) at the top:<br />
**your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

### For work that is done entirely by you (ONLY YOU)

If the file contains only your work or the work provided to you by your professor, add the following message as a comment at the top of the file:

> I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

### For work that is done partially by you.

If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which part of the assignment is given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrongdoing.

> - Add the citation to the file in which you have the borrowed code
> - In the 'reflect.txt` submission of part 2 (DIY), add exactly what is added to which file and from where (or whom).

> :warning: This [Submission Policy](#submission-policy) only applies to the workshops. All other assessments in this subject have their own submission policies.

### If you have helped someone with your code

If you have helped someone by providing part of your code. Let them know of these regulations and in your 'reflect.txt' for reflection submission, write exactly which part of your code was copied and who was the recipient of this code.<br />By doing this you will be clear of any wrongdoing if the code recipient does not honour these regulations.


## Compiling and Testing Your Program

All your code should be compiled using this command on `matrix`:

```bash
g++ -Wall -std=c++11 -g -o ws file1.cpp file2.cpp ...
```

- `-Wall`: the compiler will report all warnings
- `-std=c++11`: the code will be compiled using the C++11 standard
- `-g`: the executable file will contain debugging symbols, allowing *valgrind* to create better reports
- `-o ws`: the compiled application will be named `ws`

After compiling and testing your code, run your program as follows to check for possible memory leaks (assuming your executable name is `ws`):

```bash
valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ws
```

- `--show-error-list=yes`: show the list of detected errors
- `--leak-check=full`: check for all types of memory problems
- `--show-leak-kinds=all`: show all types of memory leaks identified (enabled by the previous flag)
- `--track-origins=yes`: tracks the origin of uninitialized values (`g++` must use `-g` flag for compilation, so the information displayed here is meaningful).

To check the output, use a program that can compare text files.  Search online for such a program for your platform, or use *diff* available on `matrix`.

> Note: All the code written in workshops and the project must be implemented in the **seneca** namespace unless instructed otherwise.

## Submission

### Lab Submission
```bash
~profname.proflastname/submit 2??/wX/lab_sss <ENTER>
```
- Replace **??** with your subject code (`00 or 44`)
- Replace **X** with Workshop number: [`1 to 10`]
- Replace **sss** with the section: [`naa, nbb, nra, zaa, etc...`]

### Reflection Submission
```bash
~profname.proflastname/submit 2??/wX/ref_sss <ENTER>
```
- Replace **??** with your subject code (`00 or 44`)
- Replace **X** with Workshop number: [`1 to 10`]
- Replace **sss** with the section: [`naa, nbb, nra, zaa, etc...`]

### DIY Testing (No Submission)
DIY does not need submission and is for practice only, however, if you want to test your solution you can use the submit command as follows.
 
>This will not submit anything and only tests your program

```bash
~profname.proflastname/submit 2??/wX/diy_sss <ENTER>
```
- Replace **??** with your subject code (`00 or 44`)
- Replace **X** with Workshop number: [`1 to 10`]
- Replace **sss** with the section: [`naa, nbb, nra, zaa, etc...`]


### Custom code submission

If you have any additional custom code, (i.e. functions, classes etc) that you want to reuse in the workshop save them under a module called Utils (`utils.cpp and utils.h`) and submit them with your workshop using the following instructions.

To have your custom Utils module compiled with your workshop, add a **u** to the submission name of your workshop (i.e **u**lab_sss or **u**diy_sss) and issue the submission:

Example:
```bash
~profname.proflastname/submit 2??/wX/ulab_sss  <ENTER>
~profname.proflastname/submit 2??/wX/udiy_sss  <ENTER>
```

- Replace **??** with your subject code (`00 or 44`)
- Replace **X** with Workshop number: [`1 to 10`]
- Replace **sss** with the section: [`naa, nbb, nra, zaa, etc...`]

### Testing Your lab before submission opens
You can always test your code before submission is open (providing your professor makes it available) and after submission is closed using the `-feedback` option:


Example:
```bash
~profname.proflastname/submit 2??/wX/lab_sss -feedback <ENTER>
~profname.proflastname/submit 2??/wX/ulab_sss -feedback <ENTER>
```

### submission options

To see all the options for submission issue the submit command with no arguments

Example:
```bash
~profname.proflastname/submit <ENTER>
```


# Part 1 - LAB (100%)

Your task for part one of workshop 3 is to create a class called "CC" that encapsulates a Credit Card (in CC.h and CC.cpp) and displays the credit card information.

## the `cstr` module
The `cstr` is provided and is fully functional to be used for Cstring-related operations and memory allocation.

Study this module and understand how it works. Use the functions provided in this module for your dynamic Cstring allocation and deallocation as well as other string actions like copying and length extraction. Do not include the `<cstring>` header file or use dynamic memory allocation statements since this module provides all the functionalities you need for these matters. 

## Implementing the CC class
### Private Attributes
This class must keep the following information:

- **The cardholder's name:** that is held dynamically in a C string.  (`char *`)
- **CVV**, **expiry month**, and **expiry year**: that are all held in short integers. (`short`)
- **Credit card number**: that is held in an unsigned long long integer (`unsigned long long`)

### Private Methods
The CC class has the following private methods.
- display 
- validate
- prnNumber
These methods cannot modify the CC class and therefore must be constant.


#### display (with five arguments)
Since formatting the output using `ostream` is not covered yet, the private method `display` is provided below to be added to the `CC` class. 

```c++
void display(const char* name, unsigned long long number, short expYear, short expMon, short cvv) const{
   char lname[31]{};
   strcpy(lname, name, 30); // declared in "cstr.h"
   cout << "| ";
   cout.width(30);
   cout.fill(' ');
   cout.setf(ios::left);
   cout << lname << " | ";
   prnNumber(number);
   cout << " | " << cvv << " | ";
   cout.unsetf(ios::left);
   cout.setf(ios::right);
   cout.width(2);
   cout << expMon << "/" << expYear << " |" << endl;
   cout.unsetf(ios::right);
}
```
 
#### validate

```C++
bool validate(const char* name, 
              unsigned long long cardNo, 
              short cvv, 
              short expMon, 
              short expYear)const;
```
Implement this private method to validate the credit card information received through the argument list as follows:
- name: should not be a null pointer and should be more than 2 characters long
- cardNo: values between 4000000000000000ull and 4099999999999999ull 
  > `ull` makes the literal number an `unsigned long long integer`)
- cvv: a three-digit number
- expMon: values between 1 and 12
- expYear: values between 24 and 32
  
The method should return true if all the conditions are met, otherwise, it will return false

This function does not modify the object (is constant).

#### prnNumber

```C++
void prnNumber(unsigned long long CCnum)const;
```
This function prints a 16-digit number in a set of 4-digit numbers separated by spaces.

For example:  

`4098645375646543` will be printed as `4098 6453 7564 6543`

You can accomplish this by utilizing repeated division and modulus operations. 

- Divide the number by 1000000000000ull to get the left four digits and print it. 
- Add a space. 
- Extract the right 12 digits (remainder) by using modulus and now Divide id by 100000000ull and repeat until all the numbers are printed.

This function does not modify the object (is constant).

### Public methods

#### set
```C++
void set();
```
Sets the object to a safe empty state by setting all the values to zero and the name pointer to `nullptr`.

#### clearUp
```C++
void cleanUp();
```
First, it will deallocate the cardholder's (using `freeMem in cstr.h`) name and then it will call the `set()` method to set the object to a safe empty state.

#### isEmpty
```C++
bool isEmpty() const;
```
Returns if the CC object is in a safe empty state or not; by returning true if the cardholder name pointer attribute of the object is `nullptr`, otherwise, it will return false.

#### set (overloaded with five arguments)
```C++
void set(const char* cc_name, 
         unsigned long long cc_no, 
         short m_cvv, 
         short m_expMon, 
         short m_expYear);
```
First, it will `cleanUp()` the object to a safe empty state. Then if all the arguments are valid using `validate()`, it will dynamically keep a copy of the name in the name attribute (using `alocpy function in cstr.h`) and then sets the rest of the attributes to their corresponding values. 

If validation fails, nothing will be set.

#### display (overload with no arguments)
```C++
void display() const;
```
If the object `isEmpty()`, print `"Invalid Credit Card Record"` and go to newline;

If it is not in a safe empty state, display the `CC` class using the private `display` method.

This method does not modify the class. (it is constant)

## The tester program.
[main.cpp](./lab/main.cpp)

## Expected output

[correct_output.txt](./lab/correct_output.txt)

## LAB Submission (part 1)

### Files to submit:  
```Text
cstr.h
cstr.cpp
CC.h
CC.cpp
main.cpp
cc.csv
```

### Data Entry

No data entry is needed

### Submission Process


Upload your source code to your `matrix` account. Compile and run your code using the `g++` compiler as shown in [Compiling and Testing Your Program](#compiling-and-testing-your-program) and make sure everything works properly.

Then, run the submission command from your matrix account.


#### Submitting Utils Module

See [Custom Code Submission](#custom-code-submission) section for more detail


> **⚠️Important:** Please note: a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

## Reflection

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure you have understood the concepts covered by this workshop.  **This should take around 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.

### Reflection Submission.
Transfer your `reflect.txt` to the matrix cluster and issue the submit command.



# DIY  (Practice only)

Your task for the DIY section is to create a NameTag class to hold a name up to 50 chars (not dynamic) and print it with a frame around it. 

Then you must create a class called TagList that holds a dynamic array of NameTags and prints all the tags with the frame size matching the longest name in the list.

## NameTag class
A name tag holding "Fred Soley" is printed as follows:

Smallest frame possible:
```text
**************
* Fred Soley *
**************
```
Or it can be printed with a bigger frame as follows:
```text
*******************************
* Fred Soley                  *
*******************************
```

The length of the frame must be modifiable (using a modifier method) so the TagList can change it, to set all the frames to the same size.


### Methods of NameTag used in the main.
Only one method of the NameTag is used in the main function:  
  
```C++
void set(const chat* name).
```
This method sets the name, held by the NameTag object.

The rest of the methods or attributes of NameTag are to be designed by you. 

## TagList

TagList needs to have the following methods:

```C++
void set();
```
Sets the TagList to an empty state
```C++
void set(int num);
```
Calls `CleanUp()` and then dynamically creates an array of `num` NameTags.

```C++
void add(const NameTag& nt);
```
Adds a NameTag to the TagList up to `num` (of the set method) NameTags.
```C++
void print();
```
Prints all the tags with the same size which is the frame size of the longest name in the list.
```C++
void cleanup();
```
Deallocates the NameTags and puts the TagList back in a safe empty state. 

## Tester Program

[main.cpp](DIY/main.cpp)

## Execution Sample

[correct_output.txt](DIY/correct_output.txt)


## DIY Testing

### Files needed to test with the submit command:  

```Text
NameTag.h
NameTag.cpp
TagList.h
TagList.cpp
main.cpp
simpsons.txt
```


### Data Entry

No data entry is needed!

### Testing Process

Upload your source code to your `matrix` account. Compile and run your code using the `g++` compiler as shown in [Compiling and Testing Your Program](#compiling-and-testing-your-program) and make sure that everything works properly.

Then, run the submit command from your matrix account to test the execution of your DIY section.
