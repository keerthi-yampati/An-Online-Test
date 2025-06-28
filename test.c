#include<stdio.h>
#include<conio.h>
int main()
{
    int score = 0;
    int totalQuestions = 6;
    int choice;
printf("\t\t\t----------HAPPY ENGINEERS DAY ALL------\n");
printf("\t\tHere is a quiz conducting on engineers day\n");
printf("\t\tAre you intrested in participating this quiz(YES=1/NO=0)\n");
printf("YOUR CHOICE=");
scanf("%d",&choice);
if(choice==1)
{
 printf("\t\tTHESE QUESTIONS ARE ALL ABOUT TODAY[--ENGINEER'S DAY--]\n");
 // Question 1
 printf("Question 1: On which day India is celebrated as Engineers day?\n");
 printf("A) 15th september\nB) 4th september\nC) 15th march\nD) 4th march\n");
 char answer1;
 printf("Your answer: ");
 scanf(" %c", &answer1);
 if (answer1 == 'A' || answer1 == 'a')
 {
    printf("Your answer is absoultely Correct!\n");
    score++;
 }
 else
   printf("Wrong Answer.\nThe correct answer is D) 15 th September.\n");
 // Question 2
 printf("Question 2: In India , Engineers Day is celebrated on the birth anniversary of______and on which year he got an award___\n");
 printf("A) Jagdish Chandra Bose,1992\nB) Nikola Tesla,1996\nC) Henry Ford,1987\nD) M.Visvesvaraya,1955\n");
 char answer2;
 printf("Your answer: ");
 scanf(" %c", &answer2);
 if (answer2 == 'D' || answer2 == 'd')
 {
    printf("Your answer is absoultely Correct!\n");
    score++;
 }
 else
   printf("Wrong Answer.\nThe correct answer is D) M.Visvesvaraya,1955.\n\t");
 printf("Reason:- Due to the excellent work done in the field of engineering (dams, reservoirs and hydroelectric projects)\n");
  // Question 3
 printf("\nQuestion 3: When is World Engineering Day celebrated?\n");
 printf("A) 4th March\nB) 15th september\nC) 15th March\nD) 4th September\n");
 char answer3;
 printf("Your answer: ");
 scanf(" %c", &answer3);
 if (answer3 == 'A' || answer3 == 'a')
 {
    printf("Your answer is absoultely Correct!\n");
    score++;
 }
 else
   printf("Wrong Answer.\nThe correct answer is A) 4th March.\n");
 printf("\t\tReason:- World Federation Of Engineering Organizations(WFEO)is leading the proposal to declare 4th March, the anniversary of the founding of WFEO\n");
 // Question 4
 printf("\nQuestion 4: Which branch is called Mother of engineering?\n");
 printf("A) Information Technology\nB) CSE\nC) Civil Engineering\nD) Mechnacial Engineering\n");
 char answer4;
 printf("Your answer: ");
 scanf(" %c", &answer4);
 if (answer4 == 'C' || answer4 == 'c') {
        printf("Your answer is absoultely Correct!\n");
        score++;
 }
 else
   printf("Wrong Answer.\nThe correct answer is C) Civil Engineering.\n");
 // Question 5
 printf("\nQuestion 5: Who is the first lady engineer?\n");
 printf("A) Leelamma George Koshie\nB) Ayyalasomayajula Lalitha \nC) Rajeshwari Chatterjee\nD) Vinita Gupta\n");
 char answer5;
 printf("Your answer: ");
 scanf(" %c", &answer5);
 if (answer5 == 'B' || answer5 == 'b')
 {
    printf("Your answer is absoultely Correct!\n");
    score++;
 }
 else
  printf("Wrong Answer.\nThe correct answer is B) Ayyalasomayajula Lalitha.\n");
 // Question 6
 printf("\nQuestion 6: On which year the government was declared the engineers day?\n");
 printf("A) 1955\nB) 1946 \nC) 1939\nD) 1968\n");
 char answer6;
 printf("Your answer: ");
 scanf(" %c", &answer6);
 if (answer6 == 'D' || answer6 == 'd') {
    printf(" Your answer is absoultely Correct!\n");
    score++;
 }
 else
 {
    printf("Wrong Answer.\nThe correct answer is D)1968.\n");
 }
 // Question 7
 printf("Question 7: What nation among the following observes National Engineers Day?\n");
 printf("A) Sri Lanka\nB) India\nC) Tanzania\nD) All the above\n");
 char answer7;
 printf("Your answer: ");
 scanf(" %c", &answer7);
 if (answer7 == 'D' || answer7 == 'd')
 {
    printf("Your answer is absoultely Correct!\n");
    score++;
 }
 else
   printf("Wrong Answer.\nThe correct answer is D) All the above.\n\t");
 // Question 8
 printf("Question 8: Which is the toughest branch in engineering?\n");
 printf("A) CSE\nB) ECE\nC) Aerospace Engineering\nD) Chemical Engineering\n");
 char answer8;
 printf("Your answer: ");
 scanf(" %c", &answer8);
 if (answer8 == 'D' || answer8 == 'd')
 {
    printf("Your answer is absoultely Correct!\n");
    score++;
 }
 else
   printf("Wrong Answer.\nThe correct answer is D) Chemical Engineering.\n\t");
 printf("\nYour Score: %d/%d\n", score, totalQuestions);
 if(score>=7)
 printf("\n-----YOU DID YOUR BEST AND WISHING YOU TO TRY ANOTHER CULTURAL ACTIVITIES ALSO...---");
 else if(score>=5)
 printf("-----YOU DID IT WELL AND TRY SMART NEXT TIME TOO-----");
 else if(score>=3)
 printf("-----YOU DID UR GOOD AND WISH YOU TO TRY BETTR THAN NOW..-----");
 else
 {
    printf("-----YOU HAD TRIED HARD  AND BETTER NEXT TIME FOR MORE COUNT AND IMROVE YOUR KNOWLEDGE TOO..-----");
 }
 }
else
{
    printf("THANK YOU AND WISH U TO HAVE TO TRY THIS QUIZ NEXT TIME...");
    exit(0);
}
}
