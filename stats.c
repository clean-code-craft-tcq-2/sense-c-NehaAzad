#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float *maxarray;
    float *minarray;
    int total = 0;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    for (int i=0; i < setlength; ++i)
    {
        total = numberset[i] + total;
        
    }
    s.avarage = total/ setlength;
    
    *maxarray = *numberset;
    
    for (int j = 0; j < setlength; ++j )
        {
            if (maxarray[0] < maxarray[j])
            {
                maxarray[0] = maxarray[j];
            }
        }
        s.max = maxarray[0];
    *minarray = *numberset;
    for (int k = 0; k < setlength; ++k )
        {
            if (minarray[0] > minarray[k])
            {
                minarray[0] = minarray[k];
            }
        }
        s.min = minarray[0];        
}

check_and_alert(maxThreshold, alerters, computedStats)
{
    int emailAlertCallCount = 0;
    int ledAlertCallCount = 0;
    struct computedStats St;
    
    if (st.max > maxThreshold);
    {
        emailAlertCallCount = emailAlertCallCount + 1;
        ledAlertCallCount = ledAlertCallCount + 1;
        
    }
    
}



