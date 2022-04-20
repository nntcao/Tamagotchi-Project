#include "Tarakotchi.h"
#include <string>
#include <iostream>

const string Tarakotchi::defaultName = "Tarakotchi";
const string Tarakotchi::description = "Tarakotchi has thin legs but no arms, a small tuft of hair, and a bean-shaped body.";

Tarakotchi::Tarakotchi() : Pet(defaultName, defaultName) {}

Tarakotchi::Tarakotchi(string _name) : Pet(_name, defaultName) {}

void Tarakotchi::feed() {
    interaction(-70, 20, 0, -20);
    cout << endl;
    cout << "$$$$$$$$$$$$$NIIIMMIVI$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$FIFIIVVFIMN$$$$$$$$$$$$$$$\n$$$$$$$$$$$NIIIIIFFFIIFIMN$$$$$$$$$$$$\n$$$$$$$NMVV****VVVVV**::***FMN$$$$$$$$\n$$$$$NI**:::::::::::::::::::**IN$$$$$$\n$$$NI*::::::::::::::::::::::::*FM$$$$$\n$$NI*::::::::::::::::::::::::::*FN$$$$\n$$IV::::::::::::::::::::::::::::*I$$$$\n$$F*:::::::::::::::::::::::::::::*I$$$\n$$I*:::::::::::::::::::::::::::::*IN$$\n$$IV::::::::::::::::::::::::::::::MN$$\n$$I*::::::::::::::::::::::::::::::VI$$\n$MV:::::::::::::::::::::::::::::::*FM$\nMI*::::::::::::::::::::::::::::::::*IN\nIF::::::::::::::::::::::::::::::::::*M\nVV::::::::::::::::::::::::::::::::::*M\nFV::::::::::::::::::::::::::::::::::VM\nMI*::::::::::::::::::::::::::::::::*M$\n$$IV*:..::::::::::::::::::::::::**VM$$\n$$$MMV*:::::::::::**:::::::::**VMNIM$$\n$$$$$IIMIVV*****VVIFVV***VVVINN$$$IM$$\n$$$$$VM$$$$NNNN$$$$$$NNN$$$$$$$$MIM$$$\n$$$$$MIN$$$$$$$$$$$$$$$$$$$$$$$MIN$$$$\n$$$$$$NIM$$$$$$$$$$$$$$$$$$$$$IMIMMIIM\n$$$MIMMMMMM$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << endl << endl;
    cout << name << " is eating the food you gave them!";
    cout << endl;
}

void Tarakotchi::play() {
    interaction(5, 10, -10, -70);
    cout << endl;
    cout << "..........................::***.....................\n......................*VIIMMIMN:....................\n....................:VII$$$$NNV.....................\n.................:**I$N$$NMMMFV**:..................\n..............:*VIIVIFVVV******VIIV:................\n............*IIV*******************MV:*VVVV*........\n..........:VM***********************II*******.......\n.........:IM*******FIIIV*************FNFVVVV*.......\n.........II**************************VINVVVV*.......\n...:**VVVNMF***************************NVV***.......\n.:VMFVVVVVVFN**************************MMFVV*.......\n.:MIVVVVVVVVMV*************************VNMIFV*:.....\n..*MMMMMN$VVMV***************************MNVVV*.....\n..*NIVVVVVVVN*****************************V$VVV*....\n..*NIVVVVVIMF******************************M**VV*...\n...*VVVVV*II*******************************VV.......\n..........*NV******************************I*:::....\n...........VM*****************************VM::II:...\n...........:M***************************FMV:.*MVM*:.\n...........:*NV***********************VNNV**VI*.**:.\n.........:VI**VMIV*************VVVVIFV*.:****.......\n.........:VM*..:*VFFFFVVVVVVVVVVV**:................\n.........::VM:.....:::..............................\n.........*VVINV:....................................\n...........::**.....................................";
    cout << endl << endl;
    cout << name << " is running around endlessly.";
    cout << endl;
}

void Tarakotchi::sleep() {
    interaction(5, -65, 0, 0);
    cout << endl;
    cout << ".............................................**::...........\n.............................................*VFFV*.........\n...............................................::VN.........\n.................................................*N.........\n.........................................:.......VI.........\n....................*MMMMV*..........:VIMMMMMMV:.N*..*IV*:..\n...................:NFVVVNNV**::.:**VMIVVVVVVVMMV$:..:*VIM:.\n...............:*VINMVVVVVNMFIMMIMIIVVIMMIVVVVVVMN:....:*N:.\n.............:VNNVVNIVVVVVMI*VVVVVVVVNMIF$V****VVMM:...*NV..\n............VMM$$V*MIVVVVVMNIVV*****MMVVVNV*******NV:.:NN:..\n..........:IMV*VMV*MI*VVVVM$$$$$NIVIN*VVV$*********$V:MV:...\n......:VIVVN*******IM*VVVVM$$$$$$$$$FVVVVN*********NNMV.....\n.....:N$$$$$V******VNVVVVVN$$$$$$$$$VVV*MI*********M$:......\n......I$$$NMI******VNVVVVFN$$$$$$$$N*VVVNV*********M$.......\n....*MMN$$$$I*******$VVVVVM$$$$$$$NV*VVIN**********NM.......\n....VN$N$$N$********$VVVV*VIMNNNNMVVVVM$V**********$I.......\n.:*.VNN$$NV*****INV*VMMIVVVV**VVVV*VVNI***********VN*.......\n.:MFIMMV$M*****V$MV***VVIIIMMIIIIIMMMV************MV:.......\n..:***:.N$*****M$************VVVVVV***************$:........\n........*NV*************************************VN*.........\n........:*N************************************MN*..........\n..........*NV*******************************VMV*:...........\n...........*MMV*************************VFIIV*..............\n.............:*FIIIFVVVVVFIIIIIIIFFFVVVV*:..................\n................:***VVVV*****::::...........................";
    cout << endl << endl;
    cout << name << " laid down and fell asleep in 5 seconds.";
    cout << endl;
}

void Tarakotchi::nextHour() {
    changeStat(1, 1, 1, 1);
	hoursAged = hoursAged + 1;
}
