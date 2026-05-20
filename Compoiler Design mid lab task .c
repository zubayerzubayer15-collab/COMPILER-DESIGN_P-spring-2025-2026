#include <iostream>

using namespace std;

void tokenize(string line)
{
   string token = "";
   cout << "Tokens: ";
   for (char ch : line)
   {

       if (isspace(ch) ||
           ch == '(' || ch == ')' ||
           ch == '{' || ch == '}' ||
           ch == ';' || ch == '=')
       {

           if (!token.empty())
           {
               cout << token << " ";
               token = "";
           }

           if (!isspace(ch))
           {
               cout << ch << " ";
           }
       }
       else
       {
           token += ch;
       }
   }

   if (!token.empty())
   {
       cout << token;
   }
   cout << endl;
}
int main()
{

   ifstream file("code.txt");

   if (!file)
   {
       cout << "Error opening file!" << endl;
       return 1;
   }
   string line;
   cout << "Reading File Content:\n" << endl;

   while (getline(file, line))
   {
       cout << line << endl;

       tokenize(line);
       cout << endl;
   }

   file.close();
   return 0;
}
