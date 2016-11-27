#CSC340 Advanced Project Leo Wang


##11/27/2016 Status Report:

The following are my status report of my CSC340 advanced project as of 11/27/2016. 

    - Professor approved my project proposal on 10/26/2016. I resubmitted `README.md` on 11/9/2016 to be more specific in milestone

    - I finish coding of "Specification of the application" in UML. Submit following files on 11/16/2016
        `LinkedListInterface.h`
        `HashTableInterface.h`
        `LinkedList.h`
        `hashTable.h`

    - My next milestone is 12/7/2016 to finish coding, word list and preliminary testing and submit following files. The goal is achievable as of today
        `LinkedList.cpp`
        `hashTable.cpp`
        `main.cpp`     
        `dictionary.txt`
        `reading.txt`    

    - I am investigating how the hashkey function can affect the diversity of storage distribution in the hash table.  I tryed several hash key functions and will later summarized in my project report.

    - I found the my XCODE environment has capacity issue. For each word stored in the separate-chaining hash table, the storage needed is a pointer in the hash table array and one linked list (one string and one pointer).  The maximum number of words my XCODE can handle is about 136000 words. The word list I proposed has about 350K words and beyond the XCODE can handle. I found the following word list which has 109582 words and is a very representative good quality word list. I will not affect the scope and effort of the goal of the project. I will use this word list for my project unless I can resolve the XCODE capacity issue.

        wordsEn.txt. 
        by SIL International Linguistics Department
        7500 W. Camp Wisdom Road
        Dallas, TX  75236
        U.S.A.

        This is a list of over 100,000 English words transcribed orthographically. I obtained it from The Interociter bulletin board in Dallas (214/258-1832). The original read.me file said that the list came from Public Brand Software. The original list contained 146,440 words, but I discovered that there were thousands of duplicate words. I resorted the list and removed the duplicates using the Unix utility uniq. The total number of words is now 109,582. 

    - The final milestone is 12/14/2016 to finish detail testing and project report. 
        `project_report.pdf`


