#include "quotes.h"
#include <time.h>

int main() {
    /*
    char * quotes[MAX_QUOTES] = {
        "Programmer - An organism that turns caffeine into code",
        "Why do programmers prefer dark mode? Because light attracts bugs.",
        "If debugging is the process of removing software bugs, then programming must be the process of putting them in.",
        "I don't always test my code, but when I do, I do it in production.",
        "Why do programmers always mix up Christmas and Halloween? Because Oct 31 == Dec 25!",
        "Why did the programmer quit his job? Because he didn't get arrays.",
        "Why do programmers prefer iOS development? Because the Swift.",
        "Why do programmers prefer dogs over cats? Because dogs have fetch and cats have catch.",
        "Why do programmers hate nature? It has too many bugs.",
        "There are only 10 types of people in the world: Those who understand binary and those who don't."
    };

    srand(time(NULL));
    print_quote(quotes, 2);
    print_random_quote(quotes);
    */

    char ** quotes = NULL;
    quotes = (char **) malloc(MAX_QUOTES * sizeof(char *));
    quotes[0] = "Programmer - An organism that turns caffeine into code";
    quotes[1] = "Why do programmers prefer dark mode? Because light attracts bugs.";
    quotes[2] = "If debugging is the process of removing software bugs, then programming must be the process of putting them in.";
    quotes[3] = "I don't always test my code, but when I do, I do it in production.";
    quotes[4] = "Why do programmers always mix up Christmas and Halloween? Because Oct 31 == Dec 25!";
    quotes[5] = "Why did the programmer quit his job? Because he didn't get arrays.";
    quotes[6] = "Why do programmers prefer iOS development? Because the Swift.";
    quotes[7] = "Why do programmers prefer dogs over cats? Because dogs have fetch and cats have catch.";
    quotes[8] = "Why do programmers hate nature? It has too many bugs.";
    quotes[9] = "There are only 10 types of people in the world: Those who understand binary and those who don't.";


    return 0;
}