#include "Maskutchi.h"
#include <string>
#include <iostream>

const string Maskutchi::defaultName = "Maskutchi";
const string Maskutchi::description = "Maskutchi has a bean-shaped body with a pair of violet ears on top, and wears a violet mask.";

Maskutchi::Maskutchi() : Pet(defaultName, defaultName) {}

Maskutchi::Maskutchi(string _name) : Pet(_name, defaultName) {}

void Maskutchi::feed() {
    interaction(-50, 10, 0, -20);
    cout << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$NNNNMMMMNNN$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$NIIVVVVVVVVFFIMN$$$$$$$$$\n$$$$$$$$NNMMMMN$$$$$MIV**********VII$$$$$$$$$\n$$$$NMIIVVVVVVIM$$$$MIV********VVVVIN$$$$$$$$\n$NMIFVV*******VIM$$$MIVVVVVFIFVVVVFIN$$$$$$$$\n$MIV**********VIIIIIIIIVVVV*****:.*IM$$$$$$$$\n$MFVVVVVVVVVVVVVFVV**VVVIIFVVVVVF*:II$$$$$$$$\n$NIFVV****VIIIIIVVVVIVVIIVV**VVFVFVVIN$$$$$$$\n$$NF:.:*VIFFFFFFIFVVVVIF**V*..:FIVI*IMN$$$$$$\n$$$N**IIVVFI**:.:*FFVVIV:*VV::*FIVVV:*IM$$$$$\n$$$$IFIVVII*VII*..VIV*VVIV**VIIVVVFV..:*IM$$$\n$$$MVVIVVFI*:**::VIIV***VVVVVV**VFV.....*IM$$\n$$NI**IV*VVFVVVVFFVVVVVVVVVVVVVV**......:II$$\n$$MF:.:*VVVVVVVVVFIV**:::::.............*IIN$\n$$IV:...:**VVVVV**:.....................VIIN$\n$$NI*..................................:FII$$\n$$$MI*................................:*IIM$$\n$$$$NIV:..........................:**VIIMN$$$\n$$$$$NIV:......................*VIIIIFIM$$$$$\n$$$$$$$IIV*******:::::::*****VIIMN$IIIII$$$$$\n$$$$$$$$NNNMIIFIIIMMMMMMMNNNN$$$$NMIVFIIIIM$$\n$$$$$$$$$$$NMIVFIN$$$$$$$$$$$$$$$NMIIIIFIIN$$\n$$$$$$$$$$$NNMIIVII$$$$$$$$$$$$$$$$$$$$$NN$$$\n$$$$$$$$$$IIIIIIIMN$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$NMMMN$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << endl << endl;
    cout << name << " is munching on their food!";
    cout << endl;
}

void Maskutchi::play() {
    interaction(10, 20, -80, -40);
    cout << endl;
    cout << "$$$$$$$$$$NNNN$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$MIVVVVIM$$$$$$$$$$NNNNN$$$$$$$$\n$$$$$$$IVVVVVVVVM$$$$$$$NFVVVVVVM$$$$$$\n$$$$$$MVVVVVVVVVIN$$$$NMFVVVVVVVI$$$$$$\n$$$$$N:::************************$$$$$$\n$$$$$V..........................:$$$$$$\n$$$$M*..**VVFVVVVVVVVVVIIFV**...:$$$$$$\n$$$$V..*MMVVVFMIVVVVVMMVVVIMI*..:$$$$$$\n$$$$*.*IM*....:MIVVVMF:....:NI*.:$$$$$$\n$$$$:.*MV...*$NVMVVVN*...MN*FM*..$$$$$$\n$$$N..*MV:...**FMVVVM*...:*:MI*..N$$$$$\n$$$I..:FNI****FMFVVVINV***VIMV...I$$$$$\n$$$F...*VIIMMIIVVVVVVFIIMMIV*:...*N$$$$\n$$$V.....:**************::........:F$$$\n$$$V...............................:N$$\n$$$I................................M$$\n$$$$V:.............................:$$$\n$$$$$$V*.........................:VN$$$\n$$$$$$$$NIV*::..............:**VI$$$$$$\n$$$$$$$$$$$$$NMIFVVVVVVVFIIMN$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << endl << endl;
    cout << name << " is playing hide and seek!";
    cout << endl;
}

void Maskutchi::sleep() {
    interaction(10, -60, 0, 0);
    cout << endl;
    cout << "$$$$$$$$$$$NNNNN$$$$$$$$$$$$NMIFFFIIMN$$$$$$$$$$$$\n$$$$$$$NMIVVVVVVVIMN$$$$$$NIV********VFM$$$$$$$$$$\n$$$$$$MVV*********VIN$$$$NI************VM$$$$$$$$$\n$$$$$IV************VM$$$$MV*************I$$$$$$$$$\n$$$$MV*************VMNMMIVV*************VN$$$$$$$$\n$$$$M********************::::******::...*M$$$$$$$$\n$$$$M*.....::****::::::****VVVVVVVVV**..*M$$$$$$$$\n$$$$$M*.:****VVVVVVVVV****VI*.::*:*VIV*.*M$$$$$$$$\n$$$$$NV:***VIV*:::..:VF**VM:.*V**I:.*I***M$$$$$$$$\n$$$$$M*****I*.:F**V*.:MV**I*.*V..**.VF**:M$$$$$$$$\n$$$$NV.****I*.*V..*V.*I***VIV*::::*VF***.*IN$$$$$$\n$$$$I:.****VVV******VFV*****VVVVVVVV***....*IN$$$$\n$$$NV...******VVVVVV*****************:......:I$$$$\n$$$M*....:*********:::::....:::::::..........VN$$$\n$$$NF........................................VN$$$\n$$$$M:.......................................VN$$$\n$$$$MV......................................*M$$$$\n$$$$$M*....................................*M$$$$$\n$$$$$$NV*................................*VN$$$$$$\n$$$$$$$$NMFV**:......................:*VIN$$$$$$$$\n$$$$$$$$$$$$MIIIIIFVVV************VVIIFMN$$$$$$$$$\n$$$$$$$$$$NIVVIMN$$$$$$$$$$$$$$$$$$$NIVVM$$$$$$$$$\n$$$$$$$$$$$MIVVIMN$$$$$$$$$$$$$$$$NMFFIMN$$$$$$$$$\n$$$$$$$$$NNNMIVVIM$$$$$$$$$$$$$$$NIVVVVVVFIN$$$$$$\n$$$$$$$$NIIIIIMNN$$$$$$$$$$$$$$$$$$NNNNNNNN$$$$$$$";
    cout << endl << endl;
    cout << name << " is sound asleep.";
    cout << endl;
}

void Maskutchi::nextHour() {
    changeStat(3, 3, 3, 3);
	hoursAged = hoursAged + 1;
}
