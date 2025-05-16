$ ./readability 
Text: One fish. Two fish. Red fish. Blue fish.                    
Before Grade 1 

words: 8
letters: 29
sentences: 4

L = 


$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3                                                            
$ ./readability  
Text: Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.
Grade 5

$ ./readability
Text: When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh.                   
Grade 8

$ ./readability   
Text: A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains.
Grade 16+


### Boilerplate
```
#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text


    // L = letters/ words * 100;
    // S = sentences / words * 100;
    // Compute the Coleman-Liau index
    int i = 0.0588 * L - 0.296 * S - 15.8;
    //

    // Print the grade level
}
```

## formula
index = 0.0588 * L - 0.296 * S - 15.8
where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.