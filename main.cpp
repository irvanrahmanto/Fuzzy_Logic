#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;

double pendapatanrendah(double sallary){
    double valuesallaryrendah;
    if(sallary < 0.25){
        valuesallaryrendah = 1;
    }
    return valuesallaryrendah;
}

double pendapatantengah(double sallary){
    double valuesallaryrendah;
    double valuesallarysedang;
    double valuesallarytinggi;
    if((sallary > 0.25) && (sallary < 0.5)){
        valuesallaryrendah = ((sallary - 0.25)/(0.5 - 0.25));
        valuesallarysedang = ((0.5 - sallary)/(0.5 - 0.25));
    }
    else if((sallary >= 0.5) && (sallary <= 0.75)){
        valuesallarysedang = 1;
    }
    else if((sallary >= 0.75) && (sallary < 1)){
        valuesallarysedang = ((sallary - 0.75)/(1 - 0.75));
        valuesallarytinggi = ((0.75 - sallary)/(1 - 0.75));
    }
    return valuesallarysedang, valuesallaryrendah , valuesallarytinggi;
}

double pendapatantinggi(double sallary){
    double valuesallarytinggi;

    if(sallary > 1){
        valuesallarytinggi = 1;
    }
    return valuesallarytinggi;
}

double hutangrendah(double debt){
    double valuehutangrendah;

    if(debt < 20){
        valuehutangrendah = 1;
    }
    return valuehutangrendah;
}

double hutangsedang(double debt){
    double valuehutangrendah;
    double valuehutangsedang;
    double valuehutangtinggi;

    if((debt > 20)&&(debt <40)){
        valuehutangrendah = ((debt - 20)/(40 - 20));
        valuehutangsedang = ((40 - debt)/(40 - 20));
    }
    else if((debt >= 40)&&(debt <= 60)){
        valuehutangsedang = 1;
    }
    else if((debt >= 60)&&(debt < 80)){
        valuehutangsedang = ((debt - 60)/(80 - 60));
        valuehutangtinggi = ((80 - debt)/(80 - 60));
    }
    return valuehutangrendah, valuehutangsedang, valuehutangtinggi;
}

double hutangtinggi(double debt){
    double valuehutangtinggi;

    if(debt > 80){
        valuehutangtinggi = 1;
    }
    return valuehutangtinggi;
}

double infrencetable(double pendapatanrendah, double pendapatantengah, double pendapatantinggi, double hutangrendah, double hutangtinggi, double hutangsedang){
    //Penginisialisasi an sallary nya ke dalam variable bertipe double agar bisa dioperasikan
    double x = pendapatanrendah;
    double y = pendapatantengah;
    double z = pendapatantinggi;

    //Penginisialisasi an debt nya ke dalam variable bertipe double agar bisa dioperasi
    double a = hutangrendah;
    double b = hutangsedang;
    double c = hutangtinggi;

    if(x = 1){
        if(a=1){
            cout<<" ACCEPTED "<<endl;
        }
        else if(b=1){
            cout<<" CONSIDERED "<<endl;
        }
        else if(c=1){
            cout<<" REJECTED "<<endl;
        }
    }
    else if(y = 1){
        if(a=1){
            cout<<" ACCEPTED "<<endl;
        }
        else if(b=1){
            cout<<" CONSIDERED "<<endl;
        }
        else if(c=1){
            cout<<" REJECTED "<<endl;
        }
    }
    else if(z = 1){
        if(a=1){
            cout<<" ACCEPTED "<<endl;
        }
        else if(b=1){
            cout<<" CONSIDERED "<<endl;
        }
        else if(c=1){
            cout<<" REJECTED "<<endl;
        }
    }
    return x,y,z;
}

//Mengkonversi dari string ke double
double konversi(string x){
    int hasil;
    stringstream convert(x);
    if(!convert >> hasil){
        hasil = 0;
    }
    double y = hasil;
}

int main()
{
    ifstream file("DataTugas2.csv");
    string convert;
    //double tmp;
    konversi(convert);
//    infrencetable(tmp);
    while(file.good()){
        getline(file, convert, ',' );
        cout<<convert;
        //cout<<tmp;
    }
    file.close();
}
