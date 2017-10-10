#include <vector>
#include <iostream>

using namespace std;

int main(){


vector< vector <int> > mult;
mult.resize(13);
for (int i = 0; i < mult.size(); i++){
    mult[i].resize(13);
    }
    mult[0][0] = 0;
    for (int i = 1; i <mult.size(); i++){
        mult[i][0] = i;
            mult[0][i] = i;
            }
            for (int i = 1; i < mult.size(); i++){

                for (int o = 1; o < mult[i].size(); o++){
                        mult[i][o] = i * o;
                            }
                            }
                            for (int i = 0; i < mult.size(); i++){
                                for (int o = 0; o < mult[i].size(); o++){
                                        cout<<mult[i][o]<<" ";
                                            }
                                                cout<<endl;
                                                }
                                                return 0;
                                                }
