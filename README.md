#CSC340 Advanced Project Leo Wang


##Problem statement:

My proposal is to create a fast spelling checker application. The following is the summary of the project.

The checker parse through text document and output a log file showing words that are not in the dictionary. It recognizes large number of words and special common characters. Goal is more than 350k words by using word list in  https://github.com/dwyl/english-words

It provide fast search performance, big-O(1), by separate-chaining hash table template class implementation.

It’s developed with Object Oriented Design principles and practices learned in class by using Unified Modeling Language (UML) and Virtual Methods.

Create or use existing abstract data type (ADT) and Standard Template Library (STL) like hash table, linked list, array, and file I/O.


## Constraints

Design and implement following ADT:

* LinkedList
* HashTable

Design style to follow the Object Oriented Design Priciples.

* The data must be in the private section of the class. All access to these data should from public methods. No leak of data reference to the client programs.  The class should support the string type.

* Methods to be implemented in public section of the class.
Use UML to document the specification (@Pre @Post @Param @Return)
LinkedList:
constructor
destructor
insertNode
removeNode
getNode
getLength
HashTable:
constructor
destructor
insertNode
removeNode
getNodeByKey
getLength
getNumberOfNodes
printStats

* Initialization stage of the program :
The program read the word list from dictionary.txt, generate hash key and store the word in HashTable.

* Spelling stage of the program:
The program read the document from reading.txt and generate the spelling log (words not in dictionary) on screen.

## Files to work on

`README.md`
`LinkedList.h`      : include UML spec and implementation
`hashTable.h`       : include UML spec and implementation
`main.cpp`          : The main program of the spelling checker application
`dictionary.txt`    : The dictionary word list based on wordlist https://github.com/dwyl/english-words
`document.txt`      : The document converted from pdf to text format
`project_report.pdf`: project report file in pdf and editable version (page or word)

## Dictionary file

The first line is the number of words in the file and followed by one world per line.

109588
a
aah
aahed
aahing
aahs
aardvark
aardvarks
aardwolf
ab
abaci
aback
abacus
abacuses
abaft
abalone
abalones
abandon
abandoned
abandonedly
abandonee
abandoner
abandoners
abandoning
abandonment
abandonments
abandons
abase
abased
abasedly
abasement
abaser
abasers
abases
abash
abashed
abashedly
abashes
abashing
abashment
abashments
abasing
abatable
abate
abated
abatement
abatements

## example news article text file

The text file is saved as text from web page in html format. The following is the example of an current news article:

U.S. Officials: Putin Personally Involved in U.S. Election Hack
by William M. Arkin, Ken Dilanian and Cynthia McFadden
U.S. intelligence officials now believe with "a high level of confidence" that Russian President Vladimir Putin became personally involved in the covert Russian campaign to interfere in the U.S. presidential election, senior U.S. intelligence officials told NBC News.
Two senior officials with direct access to the information say new intelligence shows that Putin personally directed how hacked material from Democrats was leaked and otherwise used. The intelligence came from diplomatic sources and spies working for U.S. allies, the officials said.
Putin's objectives were multifaceted, a high-level intelligence source told NBC News. What began as a "vendetta" against Hillary Clinton morphed into an effort to show corruption in American politics and to "split off key American allies by creating the image that [other countries] couldn't depend on the U.S. to be a credible global leader anymore," the official said.
Ultimately, the CIA has assessed, the Russian government wanted to elect Donald Trump. The FBI and other agencies don't fully endorse that view, but few officials would dispute that the Russian operation was intended to harm Clinton's candidacy by leaking embarrassing emails about Democrats.
The latest intelligence said to show Putin's involvement goes much further than the information the U.S. was relying on in October, when all 17 intelligence agencies signed onto a statement attributing the Democratic National Committee hack to Russia.
The statement said officials believed that "only Russia's senior-most officials could have authorized these activities." That was an intelligence judgment based on an understanding of the Russian system of government, which Putin controls with absolute authority.
Now the U.S has solid information tying Putin to the operation, the intelligence officials say. Their use of the term "high confidence" implies that the intelligence is nearly incontrovertible.
"It is most certainly consistent with the Putin that I have watched and used to work with when I was an ambassador and in the government," said Michael McFaul, who was ambassador to Russia from 2012 to 2014.
"He has had a vendetta against Hillary Clinton, that has been known for a long time because of what she said about his elections back in the parliamentary elections of 2011. He wants to discredit American democracy and make us weaker in terms of leading the liberal democratic order. And most certainly he likes President-elect Trump's views on Russia," McFaul added. Clinton cast doubt on the integrity of Russia's elections.
As part of contingency planning for potential retaliation against Russia, according to officials, U.S. intelligence agencies have stepped up their probing into his personal financial empire.
American officials have concluded that Putin's network controls some $85 billion worth of assets, officials told NBC News.
Neither the CIA nor the Office of the Director of National Intelligence would comment.
A former CIA official who worked on Russia told NBC News that it's not clear the U.S. can embarrass Putin, given that many Russians are already familiar with allegations he has grown rich through corruption and has ordered the killings of political adversaries.
But a currently serving U.S. intelligence official said that there are things Putin is sensitive about, including anything that makes him seem weak.
The former CIA official said the Obama administration may feel compelled to respond before it leaves office.
"This whole thing has heated up so much," he said. "I can very easily see them saying, `We can't just say wow, this was terrible and there's nothing we can do.'"


## Running tests

* To run the program in command line:
main /your-full-path/dictionary.txt /your-full-path/reading.txt <enter>

* To run the program in XCODE
Add the command line arguments in following click path
Product -> Scheme -> Edit Scheme -> Run -> Arguments
For example:
Add :/Users/wang_family/Desktop/C++/CSC340-extra/dictionary.txt
/Users/wang_family/Desktop/C++/CSC340-extra/reading.txt

* To run the tests using Clion:


## The following is the screen output

argc : 3
argv[0] : /Users/wang_family/Library/Developer/Xcode/DerivedData/CSC340-extra-emofllkbvzrzvncpzszwqxlxykuw/Build/Products/Debug/CSC340-extra
argv[1] : /Users/wang_family/Desktop/C++/CSC340-extra/dictionary.txt
argv[2] : /Users/wang_family/Desktop/C++/CSC340-extra/document.txt


Open /Users/wang_family/Desktop/C++/CSC340-extra/dictionary.txt

**********************************************************

Start Dictionary Hashtable Insertion, total 109588 words

Finished Dictionary Hashtable Insertion, total 109588words

Hash Table Contains 109588 linked-list nodes in total.

Maximum chain length : 7
Minimum chain length : 0
Mean chain length :    1
chain length = 0   40374 hashtable entries
chain length = 1   40231 hashtable entries
chain length = 2   20095 hashtable entries
chain length = 3   6805 hashtable entries
chain length = 4   1728 hashtable entries
chain length = 5   298 hashtable entries
chain length = 6   49 hashtable entries
chain length = 7   8 hashtable entries

*******************************************************

Start to use the dictionary to check article text file.


Opening article file /Users/wang_family/Desktop/C++/CSC340-extra/document.txt

The following words are NOT found in the speeling check dictionary:
putin m arkin dilanian cynthia mcfadden vladimir putin putin putins hillary clinton morphed couldnt dont clintons putins 17 russias seniormost putin putin putin mcfaul 2012 2014 hillary clinton 2011 presidentelect mcfaul clinton russias putins 85 putin putin obama

Total 38 words Not in spelling check dictionary.
Total 545 words found in spelling check dictionary.

Program ended with exit code: 0

## Note

Milestone Schedule:

10/26/2016 Approval by Professor (Proposal reviewed by Prefossor 10/26 done)

10/31/2016 Send README file for professor review. Submit following files:
`README.md` (revised 11/9/2016 for specifics in milestone)

11/16/2016 Finish "Specification of the application" in UML. Submit following files:
`LinkedList.h`      : include UML spec
`hashTable.h`       : include UML spec

12/15/2016  Finish coding, word list and preliminary testing. Submit following files:
`LinkedList.h`      : include UML spec and implementation
`hashTable.h`       : include UML spec and implementation
`main.cpp`
`dictionary.txt`
`document.txt`

12/15/2016 Finish detail testing and project report. Submit following files:
`project_report.pdf`

End Of File
