#include <string>
#include <iostream>

using namespace std;

int main()
{
    string konyv;

    cout << "Kerem add meg a kedvenc konyved cimet:\n";
    getline(cin, konyv);

    cout << "Az utolso 4 karakter: ";
    for (int i = konyv.length() - 4; i < konyv.length(); i++)
    {
		cout << konyv[i];
	}
    
    cout << "\nA konyvem cime szerzovel egyutt: " << konyv.length()
        << " hosszu, es ez a kedvenc konyvem" << endl;

    if (konyv.find("egy")) {
		cout << "A konyv cime tartalmazza a 'egy' szot" 
            << endl;
	}
    else {
		cout << "A konyv cime nem tartalmazza az 'egy' szot" 
            << endl;
	}

    string konyv2= "";
    konyv2 = konyv.substr(0,10);
    cout << "Az elso 10 karakter: " << konyv2 << endl;

    return 0;

}
