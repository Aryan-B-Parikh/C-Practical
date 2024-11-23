/* Documentation :Home Minister of India want to calculate the count illiterate men and women they gives India's population in 2024 , saprated
  man and women population and their literacy. the output of illiteracy of India's men and women.
*/
// header file.
#include <stdio.h>
void main()
{

    // calculation of literate and illiterate population of india.

    int Poi = 1985632123;                 // Poi is Population of india.
    int pow_ = (1985632123 * 46.4) / 100; // pow is population of women.
    int pom = (1985632123 * 53.6) / 100;  // pom is population of men.
    int Tl = (1985632123 * 85.95) / 100;  // Tl is total literacy.
    int TIL = Poi - Tl;                   // Total Illiterate men and women.

    // Output of Total illiteracy.
    printf("\n>>TOTAL ILLITERACY IS : %d", TIL);

    int lom = (pom * 85.35) / 100;  // low is literacy of men.
    int low = (pow_ * 69.64) / 100; //  low is literacy of women.

    int ilm = pom - lom; // ilm is illiteracy of men.

    // Output of Total Men illiteracy.
    printf("\n>>TOTAL ILLITRACY OF MEN : %d", ilm);
    int wil = pow_ - low; // wil is women illiteracy.

    // Output of Total women illiteracy.
    printf("\n>>TOTAL ILLITRACY OF WOMEN : %d", wil);

    printf("\n_______________________________________________________________");
    printf("\n\n24CE070_ARYAN");
}
