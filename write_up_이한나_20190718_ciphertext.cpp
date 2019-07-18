#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ciphertext[1000]="oWdnreuf.lY uoc nar ae dht eemssga eaw yebttrew eh nht eelttre sra enic roertco drre . Ihtni koy uowlu dilekt  oes eoyrup sawsro don:wg nbmhdnndds.n";
	char tmp;
	int key=2;
	for (int i=0; i<strlen(ciphertext); i++){
		if(key){
			tmp = ciphertext[i]; ciphertext[i]=ciphertext[i+key-1];
			ciphertext[i+key-1]=tmp;
			key=0;
		}
		else key=2;
	}
	cout << ciphertext;
	return 0;
}
