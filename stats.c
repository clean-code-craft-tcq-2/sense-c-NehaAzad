#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int total = 0;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    for (int i=0; i < setlength; ++i)
    {
        total = numberset[i] + total;
        
    }
    s.avarage = total/ setlength;
    
    for (int j = 0; j < setlength; ++j )
        {
            if (numberset[0] < numberset[j])
            {
                numberset[0] = numberset[j];
            }
        }
        s.max = numberset[0];
    for (int k = 0; k < setlength; ++k )
        {
            if (numberset[0] > numberset[k])
            {
                numberset[0] = numberset[k];
            }
        }
        s.min = numberset[0];

        
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
