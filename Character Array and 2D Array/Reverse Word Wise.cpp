/*Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.

Input format :
String in a single line

Output format :
Word wise reversed string in a single line

Constraints :
0 <= |S| <= 10^

where |S| represents the length of string, S.

Sample Input 1:
Welcome to Coding Ninjas

Sample Output 1:
Ninjas Coding to Welcome

Sample Input 2:
Always indent your code

Sample Output 2:
code your indent Always*/

----------------------------------------------------------------------------------------------------------------------------------------------------------------
  
int length(char input[])
{
    int len = 0; 
    for(int i = 0; input[i] != '\0'; i++) 
    {
         len++;
    }
        return len; 
}
void reverse(char input[], int start, int end){
    int i = start,
    j = end; 
    while(i < j) 
    { 
        char temp = input[i]; 
        input[i] = input[j]; 
        input[j] = temp; 
        i++; 
        j--; 
    } 
}

void reverseCompleteString(char input[]) { 
    int i = 0, 
    j = length(input) - 1; 
    while(i < j) {
        char temp = input[i]; 
        input[i] = input[j]; 
        input[j] = temp;
         i++; 
        j--; 
    } 
}
void reverseStringWordWise(char input[]){
    reverseCompleteString(input); 
    int start = 0, 
    end = 0, i; 
    for(i = 0; input[i] != '\0'; i++){
         if(input[i] == ' '){
            end = i - 1; 
            reverse(input, start, end);
            start = i + 1; 
        }
    } 
end = i - 1; 
reverse(input, start, end); 
}
