#ifndef ALERTER_H
#define ALERTER_H

#define MAX_CELCIUS 45

extern int alertFailureCount;
extern int networkAlertStub(float celcius);
extern float convertFarenhitToCelcius(float farenheit);
extern void alertInCelcius(float farenheit, int (*NetworkAlertPtr)(float));
extern void checkalertInCelcius(float farenheit);
extern void commonAlert(void);

#endif
