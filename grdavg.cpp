// inclusion of libraries
#include <iostream>
#include <string>

// inclusion of files
//#N/A

// namespace
using namespace std;

int main(){

	/*
	 * Aufgabe Zeugnis
	 * Nach der Eingabe von vier Klausurnoten soll der Schnitt ausgegeben werden. Anschließend soll die Note in alter Zeugnisschreibweise ausgegeben werden.
	 *
	 * 1 - sehr gut
	 * 2 - gut
	 * 3 - befriedigend
	 * 4 - ausreichend
	 * 5 - mangelhaft
	 * 6 - ungenügend
	 */

	// variables
	string clrscr = "\033[2J\033[1;1H";		// clrscr == clear screen; use with cout to clear console.
	float g1 = 0, g2, g3, g4;					// float variables, grade 1 through 4
	float avg;								// average
	string gr;								// grade


	/*										// previous implementation of variable input
	lbl1:									// label 1, used for goto. end with colon instead of semi-colon.
	cout << "Erste Note (1-6): ";	cin >> g1;
	if (g1 < 1.0 || g1 > 6.0)				{
		cout << "# input invalid #" << endl;
		goto lbl1;							// goes back to label 1, new input will overwrite previous input. used in this instance to prevent invalid inputs.
	}	else cout << endl;
	*/
	/**/
	while	(g2 < 1.0 || g2 > 6.0)									{	// "while loop"" - executes code block in curled brackets repeatedly as long as conditions are met
		cout << "\nErste Note (1-6): ";	cin	>> g2;						//		user input line
		if	(g2 < 1.0 || g2 > 6.0)	cout	<< "# input invalid # \n";	//		error message line, output succeeds if value doesn't meet conditions (needs to be at least 1 and at most 6)
	}

	do	{	cout << "\nZweite Note (1-6): ";	cin	>> g2;				// "do while loop" - "do" has no parameters and executes the code ONCE regardless of conditions
			if	(g2 < 1.0 || g2 > 6.0)
				cout	<< "# input invalid # \n";
	}	while	(g2 < 1.0 || g2 > 6.0);									// the follow-up "while" after the curled brackets starts looping the code block if the conditions are met

	do	{	cout << "\nDritte Note (1-6): ";	cin	>> g3;
			if	(g3 < 1.0 || g3 > 6.0)
				cout	<< "# input invalid # \n";
	}	while	(g3 < 1.0 || g3 > 6.0);

	do	{	cout << "\nVierte Note (1-6): ";	cin	>> g4;
			if	(g4 < 1.0 || g4 > 6.0)
				cout	<< "# input invalid # \n";
	}	while	(g4 < 1.0 || g4 > 6.0);
	/**/

	/**/
	avg = (g1 + g2 + g3 + g4) / 4;				// number 4 needs to be put in as 4.0 if using integers for equation (as used in previous solution), so that the calculation is forced to be done as float number.
	cout << "\n"
		 << "Noten: \t\t\t"
		 << g1 << ", "
		 << g2 << ", "
		 << g3 << ", "
		 << g4 << "\n";
	cout << "Notendurchschnitt: \t" << avg << "\n";
	/**/

	/**/
	if		(avg >= 1	&& avg <	1.5)	{
		gr = "sehr gut.";
	}
	else if (avg >= 1.5	&& avg <	2.5)	{
		gr = "gut.";
	}
	else if (avg >= 2.5	&& avg <	3.5)	{
		gr = "befriedigend.";
	}
	else if (avg >= 3.5	&& avg <	4.5)	{
		gr = "ausreichend.";
	}
	else if (avg >= 4.5	&& avg <	5.5)	{
		gr = "mangelhaft.";
	}
	else if (avg >= 5.5	&& avg <=	6)		{
		gr = "ungenügend.";
	}
	else 											{
		gr = "\n\n";
		cout << "what the   F U C K   did you do???";
	}
	/**/

	cout << "Diese Note ist \t\t" << gr << "\n";

	cin.ignore();
	cin.get();
	cout << clrscr;

	return 0;

/*
	compile:
clear && g++ grdavg_charlie.cpp -o grdavg_charlie

	run from console:
./grdavg_charlie

	name meaning:
assignment
grade average
*/

}
