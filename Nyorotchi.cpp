#include "Nyorotchi.h"
#include <string>
#include <iostream>

const string Nyorotchi::defaultName = "Nyorotchi";
const string Nyorotchi::description = "He resembles Kuchitamatchi with a blue head and a long, wriggling tail-like body.";

Nyorotchi::Nyorotchi() : Pet(defaultName, defaultName) {}

Nyorotchi::Nyorotchi(string _name) : Pet(_name, defaultName) {}

void Nyorotchi::feed() {
    interaction(-60, 10, 0, -10);
    cout << endl;
    cout << "$$$$$$$$$$NMMIVVVVVVVVVVVFIMN$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$MIV*******************VIM$$$$$$$$$$$$$$$$$$\n$$$$$MV*************************VM$$$$$$$$$$$$$$$$\n$$$MF*****************************I$$$$$$$$$$$$$$$\n$$MV**********************VFIIV***VI$$$$$NMMMMMN$$\n$MV***********************VIIIV****VIMMIV*******I$\nNF**********************************************VI\nIV**********VIIIV********************************I\nI**********VIIIIV*******************************IN\nI************VV*********************VFIIMMMMMMMN$$\nI***********************************FN$$$$$$$$$$$$\nMV***********::..:::****************I$$$$$$$$$$$$$\n$I*********:........:***************VVVVVVVVVVVIN$\n$NI********:........:***************************FN\n$$NIV*******:.......:***************V***********FN\n$$$$MIV******::::::***************VINMVV******VFM$\n$$$$$$NMIVV****************VVVVIMN$$$$$NMMIIMMN$$$\n$$$$$$$$$$$$NNNIIIIMNNNNNN$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$NFIII$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$IIIIM$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$NNN$$NMIIIIM$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$IIIIIM$$$NNIII$$$$$$$$$$$$$$$$$$$$$$$$$$$\nNIIIM$$NIFIMMIIIMNNNIIIN$$$$$$$$$$$$$$$$$$$$$$$$$$\nNIIFIIIIIN$$$MIIIIIIIIIN$$$$$$$$$$$$$$$$$$$$$$$$$$\n$NMIIIIM$$$$$$$MIIIIIM$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << endl << endl;
    cout << name << " is happily eating!";
    cout << endl;
}

void Nyorotchi::play() {
    interaction(10, 20, -15, -50);
    cout << endl;
    cout << "$$$$$$$$$$$$$NMN$$$NMIMN$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$MV*FMN$IV:VI$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$IV..II$I**IM$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$NMVIMMIMMN$$$$$$$$MIVVIN$$$\n$$$$$$$$$$$$$$$NMM$$MNN$$$$$$NI*..:IM$$$\n$$$$$$$$$$$NNNMIIIIIIIIMMNNN$MMIIIMM$$$$\n$$$$$$$$$$NNF*************VNMN$$$$$$N$$$\n$$NNNNN$NMN**IF*************INN$MMIV*VFM\nNMMV*VVIII***VV**************MN$NMMVV*VM\nMMI*****************MNV******VNM$$$NNMN$\nNNMIIIIIIF***********V********NM$$$$$$$$\n$$$$$$NNVNV******************VNM$$$$$$$$\n$NNMIIIIMM*******************MN$$$$$$$$$\n$NM*****VV******************MN$$$$$$$$$$\n$$NMIIMINMNIFVV********VVVIN$$$$$$$$$$$$\n$$$$NNN$$$$MMMNNNM$MN$NNNNN$$$$$$$$$$$$$\n$$$$$$$$$$$$$NNNNN$M$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$M$NMNN$$$$$$$$$$$$$$$$$$$$$$\n$$$MMN$$$$$$$NNMMNNNN$$$$$$$$$NMN$$$$$$$\n$$$$NNMN$$$$$$$$NNM$$N$$$$$$NMM$$$$$$$$$\n$$NN$$NNNN$$$NN$$NMN$$$$$$NNN$$NN$$$$$$$\n$$$NNN$$NM$$$$NNNNMNN$N$$$NN$$NMN$$$$$$$\n$$$$NNM$$$$$$$$$$$NN$N$$$$$$MNM$$$$$$$$$\n$$$$$$$$$$$$$$$N$$NN$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$N$NM$$$$$$$$$$$$$$$$$$$";
    cout << endl << endl;
    cout << name << " is excitedly playing!";
    cout << endl;
}

void Nyorotchi::sleep() {
    interaction(20, -60, 0, 0);
    cout << endl << endl;
    cout << "*::.........::.:*********V**F******\n:*********::::.*************V******\n**:VV****V*:::**************V******\n..:V******FVVVVFVVV***VVV**V*****::\n:::VV*********************VV***::::\n...VVV*******************:::*****::\n**:V*V************V*********:**V*::\nVVV***V*************************V::\n***VVV*VV***********************V::\n::::::**V***********************V::\n::******************************V::\n******************************:**::\n:*****V**********************:*V*::\n:::::*VVV***********************:::\n::::::***VV****************:***::::\n::::::::::*IVV****************:::::\n::::::::**MNNMVV************:::::::\n:::::::*VM$MV*:::::::***:::::::::::\n::::::*VNNI*:::::::::::::::::::::::\n::::::VNNI*::*VIMV*::::::::::::::::\n:::::*INN****IN$$N**:::::::::::::::\n:::::*MNNV*VN$NVN$F*:::::::::::::::\n::::::VNNNN$$M**F$N***:::::::::::::\n:::::::*VINNI*::*VMMM**::::::::::::\n:::::::::::::::::::::::::::::::::::";
    cout << endl;
    cout << name << " is asleep and loudly snoring.";
    cout << endl;
}

void Nyorotchi::nextHour() {
    changeStat(4, 4, 4, 4);
	hoursAged = hoursAged + 1;
}
