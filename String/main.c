// String_examples.c : Umutcan Genç
// Description: My solutions to strings section (page 308 to 313) of C programming modern approach book

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdint.h>

// function prototypes
void smallest_largest_word(void);
void reverse_command_line_words(int argc, char* argv[]);
void sum_command_line(int argc, char* argv[]);
int compute_scrabble_value(const char* str);
int compute_vowel_count(const char* sentence);
void reverse_name(char* name);
double compute_average_word_length(const char* sentence);
void reverse_words(const char* sentence);
void encrypt(char* message, int shift);
bool are_anagrams(const char* str1, const char* str2);
void reverse(char* message);
bool is_palindrome(const char* message);
void display_month_name(void);

// gloabal variable
char message[100];

int main(int argc, char* argv[])
{
	//display_month_name();
	//reverse(msg);
	//printf("%d", is_palindrome(msg));
	//printf("%d", are_anagrams("hey", "yey"));
	//encrypt( message,  26);
	//reverse_words("he hey heyy");
	//printf("Average word length: %2.2f", compute_average_word_length("hey corc"));
	//reverse_name("John Doe");
	//printf("Your sentence contains %d vowels.", compute_vowel_count("nabereeou"));
	//printf("Scrabble value:%d",compute_scrabble_value("heyjeybey"));
	//sum_command_line(argc, argv);
	//reverse_command_line_words(argc, argv);
	//smallest_largest_word();
	return 0;
}

// Find smalllest and largest word in inputs. 
// Stop accepting input when four-letter word entered
// and print smallest and largest
void smallest_largest_word(void)
{
	char buf[20] = {0}, smallest[20] = {'z'}, largest[20] = {0};
	while (1)
	{
		printf("Enter word:");
		scanf_s("%s", buf, (unsigned int)sizeof(buf));

		if (strlen(buf) == 4) {
			puts("");
			break;
		}
		else if (strcmp(smallest, buf) > 0)
			strcpy_s(smallest, sizeof(smallest), buf);
		else if (strcmp(largest, buf) < 0)
			strcpy_s(largest, sizeof(largest), buf);
	}

	printf("Smallest word:%s\n"
		"Largest word:%s\n", smallest, largest);

	return;
}

// Print command-line arguments reverse order
void reverse_command_line_words(int argc, char* argv[])
{
	printf("Arguments:%d\n", argc);
	for (int i = argc - 1; i > 0; i--)
	{
		printf("%s\n", argv[i]);
	}
	return;
}

// Sum and print command-line arguments
void sum_command_line(int argc, char* argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("Total:%d\n", sum);
	return;
}

// Example of scrubble game which summing up letters with predefined value
int compute_scrabble_value(const char* str)
{
	int sum = 0;

	switch (toupper(*str)) {
	case 'D': case 'G':
		sum += 2; break;
	case 'B': case 'C': case 'M': case 'P':
		sum += 3; break;
	case 'F': case 'H': case 'V': case 'W': case 'Y':
		sum += 4; break;
	case 'K':
		sum += 5; break;
	case 'J': case 'X':
		sum += 8; break;
	case 'Q': case 'Z':
		sum += 10; break;
	default:
		sum++; break;
	}
	return sum;
}

// Compute vowel count in a sentence
int compute_vowel_count(const char* sentence)
{
    char ch;
	int vowels = 0;

	while (ch = *sentence++) {

		ch = toupper(ch);

		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
			vowels++;
		}
	}
	return vowels;
}

// Reverse name such as "John Doe" to "Doe, J."
void reverse_name(char* name)
{
	char first_name;

	while (isspace(*name++));   // pass white spaces
	first_name = *--name;       // save first letter of name

	while (isalpha(*name++));   // pass first name
	while (isspace(*name++));   // pass white spaces

	printf("%s, %c.", --name, first_name);
	return;
}

// Compute average word length in a sentence
double compute_average_word_length(const char* sentence)
{
	int letterNumber = 0, spaceNumber = 0;

	while (*sentence++) {
		if (*sentence == ' ') {
			spaceNumber++;
			//printf("spacenumber %d\n", spaceNumber);
		}
		else {
			letterNumber++;
			//printf("letterNumber %d\n", letterNumber);
		}
	}
	return 1.0 * (letterNumber) / (spaceNumber + 1);
	//return ((float)letterNumber) / ((float)spaceNumber + 1);
}

// Reverse words order in a sentence
void reverse_words(const char* sentence)
{
	char word_array[30][20] = {NULL};  // every row has a word
	int i = 0, j = 0;

	do {
		word_array[i][j++] = *sentence;
		if (*sentence == ' ')
		{   
			// Go next row if character space
			word_array[i++][j] = '\0';   
			j = 0;
		}
	} while (*sentence++);
	

	for (i; i >= 0; i--)
	{
		printf("%s ", word_array[i]);
	}

	return;
}


// Caesar cipher implementation
void encrypt(char* msg, int shift)
{
	int i = 0;

	if (shift > 25 || shift < 0)
	{
		printf("Invalid amount\n");
		shift = 0;
	}

	// Encryption
	while (msg[i] != '.')
	{
		if (msg[i] >= 65 && msg[i] <= 90)  //For upper-case letter
		{
			msg[i] = ((msg[i] - 'A') + shift) % 26 + 'A';  //wrap-around
			//printf("%c", msg[i]);
		}
		else if ((msg[i] >= 97 && msg[i] <= 122))
		{
			msg[i] = ((msg[i] - 'a') + shift) % 26 + 'a';  //wrap-around
			//printf("%c", msg[i]);
		}
		i++;
	}
	return;
}

// Check two string is anagram
bool are_anagrams(const char* str1, const char* str2)
{
	
	int anagramCounter[25] = { 0 };

	while (*str1)
	{
		if (isalpha(*str1))
			anagramCounter[tolower(*str1++) - 97]++;
	}

	while (*str2)
	{
		if (isalpha(*str2))
			anagramCounter[tolower(*str2++) - 97]--;
	}

	for (int i = 0; i < sizeof(anagramCounter) / sizeof(anagramCounter[0]) ; i++)
	{
		if (anagramCounter[i] != 0)
			return false;
		else if( i == sizeof(anagramCounter) / sizeof(anagramCounter[0]) - 1)
			return true;
	}
	return false;
}

// Reverse any string
void reverse(char* message)
{
	char* first = message;
	char tmp;
	char* last = NULL;

	while (*message++){}  // Go to last character and save adress
	last = message - 2;

	while (first < last) 
	{
		tmp = *first;
		*first++ = *last;
		*last-- = tmp;
	}
}

// Is string palindrome?
bool is_palindrome(const char* message)
{
	const char* first = message;
	const char* last = NULL;

	while (*message++) {}  // Go to last character and save adress
	last = message - 2;

	do {
		if (!isalpha(*first))      // skip non-characters
		{
			first++;
			continue;
		}
		else if (!isalpha(*last))  // skip non-characters
		{
			last--;
			continue;
		}
		else if (*last == *first) 
		{
			first++;
			last--;
			continue;
		}
		else
			return false;
	} while (!(first == last));

	return true;
}
// Change given date to readable format
// Example: Change "01/01/2023" to "January 1, 2023"
void display_month_name(void)
{
	int month, day, year;
	const char* months[12] = { "January", "February", "March",
		                       "April", "May", "June", "July", "August",
		                       "September", "October", "Novermber", "December" };

	printf( "Enter a date (mm/dd/yyyy) : " );
	scanf_s( "%2d/%2d/%4d", &month, &day, &year );

	printf( "You entered the date %s %d, %d", months[month - 1], day, year );
	return;
}
