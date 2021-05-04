#include<iostream>
#include<fstream>
#include<conio.h>
#include<math.h>
#include<cstdlib>
using namespace std;
//creation d'une fontion pour effacer la console
void clear_console()
{
    system("cls");
}

//creation d'une fonction pour afficher les options du programme
void print(int x, int y, int z = 0)
{
    if(x == 0 && y == 0)
    {
        cout<<"----------WELCOME TO MULTITACHES APP-------------"<<endl<<endl;
        cout<<"================================================="<<endl;
        cout<<"||1... Operation de codage/decodage/transcodage||"<<endl;
        cout<<"||2... Operations mathematiques                ||"<<endl;
        cout<<"||3... Gestion d'information sur un etudiant   ||"<<endl;
        cout<<"||4... Gestion de date (notre realisation)     ||"<<endl;
        cout<<"================================================="<<endl<<endl;
        cout<<" ---------FAITE UN CHOIX POUR CONTINUER--------- "<<endl;
    }
    else if (x == 1 && y == 1 && z == 0)
    {
        cout<<"========VOUS VOULEZ CONVERTIR QUEL NOMBRE========"<<endl;
        cout<<"||1... Decimal                                 ||"<<endl;
        cout<<"||2... Binaire                                 ||"<<endl;
        cout<<"||3... Hexadecimal                             ||"<<endl;
        cout<<"||4... Octal                                   ||"<<endl;
        cout<<"================================================="<<endl<<endl;
        cout<<" ---------FAITE UN CHOIX POUR CONTINUER--------- "<<endl;
    }
    else if(x == 1 && y == 1 && z == 1)
    {
        cout<<"========VOUS VOULEZ CONVERTIR EN QUOI========"<<endl;
        cout<<"||1... en Binaire                          ||"<<endl;
        cout<<"||2... en Octal                            ||"<<endl;
        cout<<"||3... en Hexadecimal                      ||"<<endl;
        cout<<"============================================="<<endl<<endl;
        cout<<" -------FAITE UN CHOIX POUR CONTINUER------- "<<endl;
    }
    else if(x == 1 && y == 1 && z == 2)
    {
        cout<<"========VOUS VOULEZ CONVERTIR EN QUOI========"<<endl;
        cout<<"||1... en Decimal                          ||"<<endl;
        cout<<"||2... en Octal                            ||"<<endl;
        cout<<"||3... en Hexadecimal                      ||"<<endl;
        cout<<"============================================="<<endl<<endl;
        cout<<" -------FAITE UN CHOIX POUR CONTINUER------- "<<endl;
    }
    else if(x == 1 && y == 1 && z == 3)
    {
        cout<<"========VOUS VOULEZ CONVERTIR EN QUOI========"<<endl;
        cout<<"||1... en Octal                            ||"<<endl;
        cout<<"||2... en Binaire                          ||"<<endl;
        cout<<"||3... en Decimal                          ||"<<endl;
        cout<<"============================================="<<endl<<endl;
        cout<<" -------FAITE UN CHOIX POUR CONTINUER------- "<<endl;
    }
    else if (x == 1 && y == 2)
    {
        cout<<"================VOUS VOULEZ REALISER QUEL OPERATION==============="<<endl;
        cout<<"||1... Carre magique d'ordre pair                               ||"<<endl;
        cout<<"||2... Multiplication de deux matrices                          ||"<<endl;
        cout<<"||3... Resolution d'un systeme d'equation a deux inconnues      ||"<<endl;
        cout<<"||4... le determinant et la transposes d'une matrice quelconque ||"<<endl;
        cout<<"=================================================================="<<endl<<endl;
        cout<<" ---------FAITE UN CHOIX POUR CONTINUER--------- "<<endl;

    }
    else if (x == 1 && y == 3)
    {
        cout<<"================VOUS VOULEZ REALISER QUEL TACHE==============="<<endl;
        cout<<"||1... Saisir les informations sur un etudiants             ||"<<endl;
        cout<<"||2... Affichage des informations du fichier                ||"<<endl;
        cout<<"||3... Afficher les informations par ordre alphabetiques    ||"<<endl;
        cout<<"=============================================================="<<endl<<endl;
        cout<<" ---------FAITE UN CHOIX POUR CONTINUER--------- "<<endl;
    }
    else if(x == 5 && y ==5)
    {
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"||erreur vous devez entre un nombre binaire, reessayer svp||"<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    }
    else if(x == 6 && y == 6)
    {
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"||erreur vous devez entre un nombre hexadecimal, reessayer svp||"<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    }
    //message d'erreur si l'utilisateur choisi option qui n'existe pas
    else
    {
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"||erreur vous devez faire un bon choix, reessayer svp||"<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    }

}

//les fonction de codage/decodage/transcodagge

//fonction conver decimal vers binaire
void decimal_to_binaire()
{

    int x;
    cout<<"entre le nombre decimal: ";
    cin>>x;
    int rest;
    //on a creer une double copie de la valeur du variable pour savoir combien de case reserver dans le table en fonction de nombre de div
    //ensuite pour afficher le nombre que l'utilisteur avait entre avant la convesrion
    int y = x;
    int z = x;
    int n = 0;
    while(y >= 2)
    {
        y = y / 2;
        n++;
    }
    int bin[n];
    for(int i = n; i >= 0; i--)
    {
        rest = x % 2;
        x = x/2;
        bin[i]=rest;
        //cout<<bin[i];

    }
    int i =0;
    cout<<z<<"(dec)"<<" = ";
    while(i <= n)
    {
        cout<<bin[i];
        i++;
    }
    cout<<"(bin)";
    cout<<endl<<"                                         ---------------------------------"<<endl;

}

//fonction conver decimal vers octal
void decimal_to_octal()
{
        int x;
        cout<<"entre le nombre decimal: ";
        cin>>x;
        int rest;
        int z = x;
        int y = x;
        int n = 0;
        while(y >= 8)
        {
            y = y / 8;
            n++;
        }
        int oct[n];
        for(int i = n; i >= 0; i--)
        {
            rest = x % 8;
            x = x/8;
            oct[i]=rest;
            //cout<<bin[i];

        }
        int i =0;
        cout<<z<<"(dec)"<<" = ";
        while(i <= n)
        {
            cout<<oct[i];
            i++;
        }
        cout<<"(oct)";
        cout<<endl<<"                                          ---------------------------------"<<endl;

}

//fonction conver decimal vers hexadecimal

void dec_to_hex()
{
    int x;
    cout<<"entre le nombre decimal: ";
    cin>>x;
    int rest;
    int y = x;
    int z = x;
    int n = 0;
    while(y >= 16)
    {
        y = y / 16;
        n++;
    }
    int hex[n];
    for(int i = n; i >= 0; i--)
    {
        rest = x % 16;
        x = x/16;
        hex[i]=rest;
        //cout<<bin[i];

    }
    int i =0;
    cout<<z<<"(dec)"<<" = ";
    while(i <= n)
    {
        switch (hex[i])
        {
            case 10:
            {
                cout<<"A";
            }break;
            case 11:
            {
                cout<<"B";
            }break;
            case 12:
            {
                cout<<"C";
            }break;
            case 13:
            {
                cout<<"D";
            }break;
            case 14:
            {
                cout<<"E";
            }break;
            case 15:
            {
                cout<<"F";
            }break;
            default:
            {
                cout<<hex[i];
            }
        }
        i++;
    }
    cout<<"(hex)";
}

//conver binaire vers decimal
void bin_to_dec()
{
        bool bad_enter = true;
        while (bad_enter)
        {
            int result = 0;
            int i;
            string a;
            cout<<"entre le nombre binaire: ";
            cin>>a;
            int num[a.size()];
            for (i=0;i<a.size();i++)
            {
                if (int(a[i]) >= 48 && int (a[i]) <= 49)//bon entre teste avec le code ascii
                {
                    switch (int (a[i]))
                    {
                        case 48:
                        {
                            num[i]=0;
                        }break;
                        case 49:
                        {
                            num[i]=1;
                        }break;
                    }

                }
                else//mauvaise entre
                {
                    bad_enter = true;
                    break;
                }
                bad_enter = false;
            }
            if (!bad_enter)
            {
                //convers maintenant d'un binaire en decimal positif
                int k = a.size()-1;
                for (int i = a.size()-1; i >=0 ; i--)
                {
                    //cout<<"num"<<"["<<(i-k)*(-1)<<"]"<<" = "<<num[i]<<endl;
                    result = (result + (num[i]*pow(2,(i-k)*(-1))));
                }
                cout<<a<<"(bin)"<<" = ";
                cout<<result;
                cout<<"(dec)";
                cout<<endl<<"                                          ---------------------------------"<<endl;
            }
            else
            {
                print(5,5);
            }
        }
}

//convers binaire vers octal
void bin_to_oct()
{
    bool bad_enter = true;
    while (bad_enter)
    {
        int result = 0;
        int i;
        string a;
        cout<<"entre le nombre binaire: ";
        cin>>a;
        int num[a.size()];
            for (i=0;i<a.size();i++)
            {
                if (int(a[i]) >= 48 && int (a[i]) <= 49)//bon entre teste avec le code ascii
                {
                    switch (int (a[i]))
                    {
                        case 48:
                        {
                            num[i]=0;
                        }break;
                        case 49:
                        {
                            num[i]=1;
                        }break;
                    }

                }
                else//mauvaise entre
                {
                    bad_enter = true;
                    break;
                }
                bad_enter = false;
            }
            if (!bad_enter)
            {
                //convers maintenant d'un binaire en decimal positif
                int k = a.size()-1;
                for (int i = a.size()-1; i >=0 ; i--)
                {
                    //cout<<"num"<<"["<<(i-k)*(-1)<<"]"<<" = "<<num[i]<<endl;
                    result = (result + (num[i]*pow(2,(i-k)*(-1))));
                }
                int rest;
                int x = result;
                int y = result;
                int z = result;
                int n = 0;
                while(y >= 8)
                {
                    y = y / 8;
                    n++;
                }
                int oct[n];
                for(int i = n; i >= 0; i--)
                {
                    rest = x % 8;
                    x = x/8;
                    oct[i]=rest;
                    //cout<<bin[i];
                }
                int i =0;
                cout<<z<<"(bin)"<<" = ";
                while(i <= n)
                {
                    cout<<oct[i];
                    i++;
                }
                cout<<"(oct)";
                cout<<endl<<"                                          ---------------------------------"<<endl;
            }
            else
            {
                print(5,5);
            }
    }
}
//fonction conver binaire vers hexadecimal
void bin_to_hex()
{
    bool bad_enter = true;
    while (bad_enter)
    {
        int result = 0;
        int i;
        string a;
        cout<<"entre le nombre binaire: ";
        cin>>a;
        int num[a.size()];
            for (i=0;i<a.size();i++)
            {
                if (int(a[i]) >= 48 && int (a[i]) <= 49)//bon entre teste avec le code ascii
                {
                    switch (int (a[i]))
                    {
                        case 48:
                        {
                            num[i]=0;
                        }break;
                        case 49:
                        {
                            num[i]=1;
                        }break;
                    }

                }
                else//mauvaise entre
                {
                    bad_enter = true;
                    break;
                }
                bad_enter = false;
            }
            if (!bad_enter)
            {
                //convers maintenant d'un binaire en decimal positif
                int k = a.size()-1;
                for (int i = a.size()-1; i >=0 ; i--)
                {
                    //cout<<"num"<<"["<<(i-k)*(-1)<<"]"<<" = "<<num[i]<<endl;
                    result = (result + (num[i]*pow(2,(i-k)*(-1))));
                }
                int rest;
                int x = result;
                int y = result;
                int z = result;
                int n = 0;
                while(y >= 16)
                {
                    y = y / 16;
                    n++;
                }
                int hex[n];
                for(int i = n; i >= 0; i--)
                {
                    rest = x % 16;
                    x = x/16;
                    hex[i]=rest;
                    //cout<<bin[i];

                }
                int i =0;
                cout<<z<<"(bin)"<<" = ";
                while(i <= n)
                {
                    switch (hex[i])
                    {
                        case 10:
                        {
                            cout<<"A";
                        }break;
                        case 11:
                        {
                            cout<<"B";
                        }break;
                        case 12:
                        {
                            cout<<"C";
                        }break;
                        case 13:
                        {
                            cout<<"D";
                        }break;
                        case 14:
                        {
                            cout<<"E";
                        }break;
                        case 15:
                        {
                            cout<<"F";
                        }break;
                        default:
                        {
                            cout<<hex[i];
                        }
                    }
                    i++;
                }
                cout<<"(hex)";
                cout<<endl<<"                                          ---------------------------------"<<endl;
            }
            else
            {
                print(5,5);
            }
    }
}
//fonction conver hex vers decimal
void hex_to_dec()
{
    bool bad_enter = true;
    while (bad_enter)
    {
        int result = 0;
        int i;
        string a;
        cout<<"entre le nombre hexadecimal: ";
        cin>>a;
        int num[a.size()];
            for (i=0;i<a.size();i++)
            {
                bad_enter = false;
                switch (a[i])
                {
                    case 'A':
                    {
                        num[i]=10;
                    }break;
                    case 'B':
                    {
                        num[i]=11;
                    }break;
                    case 'C':
                    {
                        num[i]=12;
                    }break;
                    case 'D':
                    {
                        num[i]=13;
                    }break;
                    case 'E':
                    {
                        num[i]=14;
                    }break;
                    case 'F':
                    {
                        num[i]=15;
                    }break;
                    case 'a':
                    {
                        num[i]=10;
                    }break;
                    case 'b':
                    {
                        num[i]=11;
                    }break;
                    case 'c':
                    {
                        num[i]=12;
                    }break;
                    case 'd':
                    {
                        num[i]=13;
                    }break;
                    case 'e':
                    {
                        num[i]=14;
                    }break;
                    case 'f':
                    {
                        num[i]=15;
                    }break;
                    case '1':
                    {
                        num[i]=1;
                    }break;
                    case '2':
                    {
                        num[i]=2;
                    }break;
                    case '3':
                    {
                        num[i]=3;
                    }break;
                    case '4':
                    {
                        num[i]=4;
                    }break;
                    case '5':
                    {
                        num[i]=5;
                    }break;
                    case '6':
                    {
                        num[i]=6;
                    }break;
                    case '7':
                    {
                        num[i]=7;
                    }break;
                    case '8':
                    {
                        num[i]=8;
                    }break;
                    case '9':
                    {
                        num[i]=9;
                    }break;
                    default: //pour tout mauvais entre
                    {
                        bad_enter = true;
                        break;
                    }break;
                }
            }
            if (!bad_enter)
            {
                //convers maintenant d'un binaire en decimal positif
                int k = a.size()-1;
                for (int i = a.size()-1; i >=0 ; i--)
                {
                    //cout<<"num"<<"["<<(i-k)*(-1)<<"]"<<" = "<<num[i]<<endl;
                    result = (result + (num[i]*pow(16,(i-k)*(-1))));
                }
                cout<<a<<"(hex)"<<" = "<<result<<"(Dec)";
                cout<<endl<<"                                          ---------------------------------"<<endl;
            }
            else
            {
                print(6,6);
            }
    }
}
//fonction conver hex vers octal
void hex_to_oct()
{
    bool bad_enter = true;
    while (bad_enter)
    {
        int result = 0;
        int i;
        string a;
        cout<<"entre le nombre hexadecimal: ";
        cin>>a;
        int num[a.size()];
            for (i=0;i<a.size();i++)
            {
                bad_enter = false;
                switch (a[i])
                {
                    case 'A':
                    {
                        num[i]=10;
                    }break;
                    case 'B':
                    {
                        num[i]=11;
                    }break;
                    case 'C':
                    {
                        num[i]=12;
                    }break;
                    case 'D':
                    {
                        num[i]=13;
                    }break;
                    case 'E':
                    {
                        num[i]=14;
                    }break;
                    case 'F':
                    {
                        num[i]=15;
                    }break;
                    case 'a':
                    {
                        num[i]=10;
                    }break;
                    case 'b':
                    {
                        num[i]=11;
                    }break;
                    case 'c':
                    {
                        num[i]=12;
                    }break;
                    case 'd':
                    {
                        num[i]=13;
                    }break;
                    case 'e':
                    {
                        num[i]=14;
                    }break;
                    case 'f':
                    {
                        num[i]=15;
                    }break;
                    case '1':
                    {
                        num[i]=1;
                    }break;
                    case '2':
                    {
                        num[i]=2;
                    }break;
                    case '3':
                    {
                        num[i]=3;
                    }break;
                    case '4':
                    {
                        num[i]=4;
                    }break;
                    case '5':
                    {
                        num[i]=5;
                    }break;
                    case '6':
                    {
                        num[i]=6;
                    }break;
                    case '7':
                    {
                        num[i]=7;
                    }break;
                    case '8':
                    {
                        num[i]=8;
                    }break;
                    case '9':
                    {
                        num[i]=9;
                    }break;
                    default: //pour tout mauvais entre
                    {
                        bad_enter = true;
                        break;
                    }break;
                }
            }
            if (!bad_enter)
            {
                //convers maintenant d'un binaire en decimal positif
                int k = a.size()-1;
                for (int i = a.size()-1; i >=0 ; i--)
                {
                    //cout<<"num"<<"["<<(i-k)*(-1)<<"]"<<" = "<<num[i]<<endl;
                    result = (result + (num[i]*pow(16,(i-k)*(-1))));
                }
                int rest;
                int x = result;
                int z = result;
                int y = result;
                int n = 0;
                while(y >= 8)
                {
                    y = y / 8;
                    n++;
                }
                int oct[n];
                for(int i = n; i >= 0; i--)
                {
                    rest = x % 8;
                    x = x/8;
                    oct[i]=rest;
                    //cout<<bin[i];
                }
                int i =0;
                cout<<a<<"(hex)"<<" = ";
                while(i <= n)
                {
                    cout<<oct[i];
                    i++;
                }
                cout<<"(Oct)";
                cout<<endl<<"                                          ---------------------------------"<<endl;
            }
            else
            {
                print(6,6);
            }
    }
}
//fonction conver hex vers binaire
void hex_to_bin()
{
    bool bad_enter = true;
    while (bad_enter)
    {
        int result = 0;
        int i;
        string a;
        cout<<"entre le nombre hexadecimal: ";
        cin>>a;
        int num[a.size()];
            for (i=0;i<a.size();i++)
            {
                bad_enter = false;
                switch (a[i])
                {
                    case 'A':
                    {
                        num[i]=10;
                    }break;
                    case 'B':
                    {
                        num[i]=11;
                    }break;
                    case 'C':
                    {
                        num[i]=12;
                    }break;
                    case 'D':
                    {
                        num[i]=13;
                    }break;
                    case 'E':
                    {
                        num[i]=14;
                    }break;
                    case 'F':
                    {
                        num[i]=15;
                    }break;
                    case 'a':
                    {
                        num[i]=10;
                    }break;
                    case 'b':
                    {
                        num[i]=11;
                    }break;
                    case 'c':
                    {
                        num[i]=12;
                    }break;
                    case 'd':
                    {
                        num[i]=13;
                    }break;
                    case 'e':
                    {
                        num[i]=14;
                    }break;
                    case 'f':
                    {
                        num[i]=15;
                    }break;
                    case '1':
                    {
                        num[i]=1;
                    }break;
                    case '2':
                    {
                        num[i]=2;
                    }break;
                    case '3':
                    {
                        num[i]=3;
                    }break;
                    case '4':
                    {
                        num[i]=4;
                    }break;
                    case '5':
                    {
                        num[i]=5;
                    }break;
                    case '6':
                    {
                        num[i]=6;
                    }break;
                    case '7':
                    {
                        num[i]=7;
                    }break;
                    case '8':
                    {
                        num[i]=8;
                    }break;
                    case '9':
                    {
                        num[i]=9;
                    }break;
                    default: //pour tout mauvais entre
                    {
                        bad_enter = true;
                        break;
                    }break;
                }
            }
            if (!bad_enter)
            {
                //convers maintenant d'un binaire en decimal positif
                int k = a.size()-1;
                for (int i = a.size()-1; i >=0 ; i--)
                {
                    //cout<<"num"<<"["<<(i-k)*(-1)<<"]"<<" = "<<num[i]<<endl;
                    result = (result + (num[i]*pow(16,(i-k)*(-1))));
                }
                int rest;
                int x = result;
                int z = result;
                int y = result;
                int n = 0;
                while(y >= 2)
                {
                    y = y / 2;
                    n++;
                }
                int oct[n];
                for(int i = n; i >= 0; i--)
                {
                    rest = x % 2;
                    x = x/2;
                    oct[i]=rest;
                    //cout<<bin[i];
                }
                int i =0;
                cout<<a<<"(hex)"<<" = ";
                while(i <= n)
                {
                    cout<<oct[i];
                    i++;
                }
                cout<<"(Bin)";
                cout<<endl<<"                                          ---------------------------------"<<endl;
            }
            else
            {
                print(6,6);
            }
    }
}
//fonction pour les operations mathematiques
//fonction carre magique
void remplir_tab(int* p,int* tab,int l,int c)
{
    int k=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            p[k]=tab[k];
            k++;
        }
    }
    k=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<tab[k]<<"|";
            k++;
        }
        cout<<endl;
    }
}

void ajout_valeur(int& val1,int& val2,int& val3,int& val4,int i,int j,int k,int L,int x,int n)
{
    if( (i==(L*2)-2 && j==n/2) || (i==(L*2)&& j!=n/2) )//cas de U
    {
        val1=k+3;
        val2=k+2;
        val3=k+1;
        val4=k;
    }
    else if(x-1!=0 && i>=(L*2)+2)//cas de X
    {
        val1=k+3;
        val2=k+1;
        val3=k+2;
        val4=k;
    }
    else//cas de L
    {
        val1=k;
        val2=k+2;
        val3=k+1;
        val4=k+3;
    }
}

void simple_magic_square(int *p,int n)
{
    int tab[n][n],i,j,k;
    int x=((n/2)-1)/2, L=x+1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            tab[i][j]=0;
        }
    }
    i=0;
    j=n/2;
    ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,1,L,x,n);
    for(k=5;k<=n*n;k+=4)
    {
        i-=2;
        j+=2;
        if(i>=0 && j<n && tab[i][j]==0)//case ok
        {
             ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i>=0 && j<n && tab[i][j]!=0)//case occupe
        {
            i+=4;
            j-=2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i<0 && j<n)//debordement en haut
        {
            i=n-2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i>=0 && j>=n)//debordement a droite
        {
            j=1;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else
        {
            i+=4;
            j-=2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
    }
    remplir_tab(p,(int*)tab,n,n);
}
void magic_square()
{
    clear_console();
    cout<<"==========================CONSTRUCTION DE CARRE MAGIQUE============================="<<endl;
    cout<<"||                  Choissisez quel carre magique a construire                    ||"<<endl;
    cout<<"||pour un carre magique simplement pair, un nombre pair qui est divisible par 4   ||"<<endl;
    cout<<"||pour un carre magique simplement pair, entre un nombre pair non divisible par 4 ||"<<endl;
    cout<<"||                Rappelez vous que vous devez entre un nombre pair               ||"<<endl;
    cout<<"===================================================================================="<<endl<<endl;
    int N,k,i,j;
    cout<<"Veuillez entrer le nombre de ligne ou de colonne que votre carre doit avoir"<<endl;
    cin>>N;
    while (N%2 != 0 || N <= 2)
    {
        if (N==2)
        {
            cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
            cout<<"||erreur la valeur entre est trop petit, ressayer, reessayer svp||"<<endl;
            cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
            cin>>N;
        }
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"||erreur la valeur entre n'est pas pair, ressayer, reessayer svp||"<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cin>>N;
    }
    //verification s'il s'agit d'une valeur divisible par 4 ou par 2 pour savoir quel methode de construction utilise simplement pair ou doublement pair
    if (N % 2 == 0)
    {
        if (N%4 != 0)
        {
            //code pour la construction d'une carre magique simplement pair c'est a dire nbre de ligne et colonne divisible par 4
            int k [N*N];
            simple_magic_square(k,N);
        }
        else
        {
                int tab[N][N];
                //initialisation de k a 1 car on commence a compter a 1
                k=1;
                // on a utilise l'incrementation pour remplir le tableau ensuite on a utilise une formule pour permuter toute les valeur des case qui vdoivent etre changer selon la technique de construction
                for(i=0;i<N;i++)
                {
                    for(j=0;j<N;j++)
                    {
                        tab[i][j]=k;
                        k++;
                        //test utilise pour voir comment est ce que le tableau se remplissent
                       // cout<<"["<<tab[i][j]<<"]";
                    }
                    //cout<<endl;
                }
                cout<<"Le carre magique correspondant est: "<<endl;
                for(i=0;i<N;i++)
                {
                    for(j=0;j<N;j++)
                    {
                        bool r1=(i+1)%4==0 || i%4==0;
                        bool r2=(j+1)%4==0 || j%4==0;

                        if((r1 && !r2) || (!r1 && r2))
                        {
                            tab[i][j]=((N*N)+1)-tab[i][j];
                        }
                        cout<<tab[i][j]<<"|";
                    }
                    cout<<endl;
                }
        }
    }

    else
    {
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"||erreur la valeur entre n'est pas pair, ressayer, reessayer svp||"<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    }

}
//fonction multiplication de deux matrice
void mult_mat()
{

    cout<<"==================MULTIPLICATION DE DEUX MATRICE=================="<<endl;
    cout<<"||           Rappelez vous pour multiplier deux matrice         ||"<<endl;
    cout<<"|| le nbre de ligne 1 doit etre egal avec le nbre de colonne 2  ||"<<endl;
    cout<<"=================================================================="<<endl<<endl;
    //L,l:ligne matrice 1 et 2
    //C,c:colonne matrice 1 et 2
    int l,c,C,L;
    cout<<"entre le nombre de ligne de la matrice 1: ";
    cin>>l;
    cout<<endl<<"entre le nombre de colonne de la matrice 1: ";
    cin>>c;
    cout<<"entre le nombre de ligne de la matrice 2: ";
    cin>>L;
    cout<<endl<<"entre le nombre de colonne de la matrice 2: ";
    cin>>C;
    //creation de la matrice 1
    int A[l][c];
    //creation de la matrice 2
    int B[L][C];
    //creation de la matrice produits
    //multiplicatip de ligne matrice 1 et colonne matrice 2
    int F[l][C];
    int s;
    if (c!=L)
    {
        cout<<"multiplication pas possible"<<endl;
    }
    else
    {
        cout<<"entre la matrice 1"<<endl;
        for (int i=0; i<l;i++)
        {
            for (int j=0; j<c; j++)
            {
                cout<<"A"<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>A[i][j];
            }
        }
        cout<<endl<<"entre la matrice 2"<<endl;
        for (int i=0; i<L;i++)
        {
            for (int j=0; j<C; j++)
            {
                cout<<"B"<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>B[i][j];
            }
        }

        for(int i=0;i<l;i++)
        {
            for(int j=0;j<C;j++)
            {
                s = 0;
                for(int k=0;k<c;k++)
                {
                    s = s +A[i][k]*B[k][j];
                }
                F[i][j] = s;
            }
        }
        cout<<"le produit du matrice A et B est: "<<endl;
        for (int i = 0; i<C; i++)
        {
            cout<<"|";
            for (int j = 0; j<l; j++)
            {
                cout<<F[i][j];
                cout<<"|";
            }
            cout<<endl;
        }

    }

}

//fonction systeme d'equation a deux inconu
void double_unkow_function()
{
    float X,X_2,Y,Y_2,Z,Z_2;
    cout<<"...X  + ...Y  = Z"<<endl;
    cout<<"...X' + ...Y' = Z'"<<endl;
    cout<<"entre la valeur de X, X', Y, Y', Z, z'"<<endl;
    cout<<endl<<"X : ";
    cin>>X;
    cout<<endl<<"X': ";
    cin>>X_2;
    cout<<endl<<"Y : ";
    cin>>Y;
    cout<<endl<<"Y': ";
    cin>>Y_2;
    cout<<endl<<"Z : ";
    cin>>Z;
    cout<<endl<<"Z': ";
    cin>>Z_2;
    //clear_console();
    cout<<X<<"X  + "<<Y<<"Y  = "<<Z<<"Z"<<endl;
    cout<<X_2<<"X  + "<<Y_2<<"Y  = "<<Z_2<<"Z"<<endl;
    float det = X*Y_2 - X_2*Y;
    if (det == 0)
    {
        cout<<"pas de solution"<<endl;
    }
    else
    {
        float result_x = (Z*Y_2 - Z_2*Y)/det;
        float result_y = (Z_2*X - Z*X_2)/det;
        cout<<"le resultat est (x,y)"<<"("<<result_x<<","<<result_y<<")"<<endl;
    }
}
int det_mat( int matrix[10][10], int n)
    {
       int det = 0;
       int submatrix[10][10];
       if (n == 2)
       return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
       else
        {
          for (int x = 0; x < n; x++)
          {
             int subi = 0;
             for (int i = 1; i < n; i++)
             {
                int subj = 0;
                for (int j = 0; j < n; j++)
                {
                   if (j == x)
                   continue;
                   submatrix[subi][subj] = matrix[i][j];
                   subj++;
                }
                subi++;
             }
             det = det + (pow(-1, x) * matrix[0][x] *det_mat( submatrix, n - 1 ));
          }
       }
       return det;
    }
//fonction transposé matrice
void trans_mat()
{
    cout<<"==================TRANSPOSE ET DETERMINANT MATRICE=================="<<endl;
    cout<<"||           Rappelez vous la matrice doit etre carre pour        ||"<<endl;
    cout<<"||              pouvoir calculer le determinant                   ||"<<endl;
    cout<<"===================================================================="<<endl<<endl;
    //L,l:ligne matrice 1 et 2
    //C,c:colonne matrice 1 et 2
    int l,c;
    cout<<"entre le nombre de ligne de la matrice 1: ";
    cin>>l;
    cout<<endl<<"entre le nombre de colonne de la matrice 1: ";
    cin>>c;
    int A[10][10];
    for (int i = 0; i<l; i++)
    {
        for (int j = 0; j<c; j++)
        {
            cout<<"A"<<"["<<i<<"]"<<"["<<j<<"]";
            cin>>A[i][j];
        }
    }
    cout<<"le premier matrice est: "<<endl;
    for (int i = 0; i<l; i++)
    {
        cout<<"|";
        for (int j = 0; j<c; j++)
        {
            cout<<A[i][j];
            cout<<"|";
        }
        cout<<endl;
    }
    cout<<"la transposee du matrice est: "<<endl;
    for (int i = 0; i<c; i++)
    {
        cout<<"|";
        for (int j = 0; j<l; j++)
        {
            cout<<A[j][i];
            cout<<"|";
        }
        cout<<endl;
    }
    if (c != l)
    {
        cout<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"||erreur impossible de calculre le determinant, il ne s'agit pas d'une matrice carre||"<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    }
    else
    {
        cout<<"le determinant de la matrice est: ";
        cout<<det_mat(A,c);
    }

}

//gestion d'information sur un etudiants
//cette fonction permet de verifier lors de l'entrée si le code est unique, avant d'nregistrer l'etudiant
bool is_unique(string b)
{
    ifstream verify;
    verify.open("verify.txt", ios::app);
    string line;
    while(getline(verify,line))
    {
        if(line == b)
        {
            return false;
        }
        else
        {
            true;
        }
    }
}
//fonction qui permet de rentre les information sur un etudiants
void add_student()
{
    string nom;
    string prenom;
    string adresse;
    string code;
    //string nom,prenom,adresse;
    cout<<"entre les informations d'un etudiant";
    ofstream fichier;
    ofstream verify;//un autre flux creer pour stocker les codes etudiants dans un fichier a part
    fichier.open("backup.txt",ios::app);
    verify.open("verify.txt", ios::app);
    char k = '0';
    while (int (k) == 48)
    {

            fflush(stdin);
            cout<<endl<<"entre le nom de l'etudiant: ";
            getline(cin,nom);

            cout<<endl<<"entre le prenom de l'etudiant: ";
            getline(cin,prenom);


            cout<<endl<<"entre l'adresse de l'etudiant: ";
            getline(cin,adresse);

            cout<<endl<<"entre le code de l'etudiant: ";
            getline(cin,code);

            if(fichier && verify)
            {
                /*fichier<<nom<<"\t"<<prenom<<"\t"<<adresse<<"\t"<<code;
                fichier<<endl;*/

                if (is_unique(code))
                {
                    fichier<<nom<<"\t"<<prenom<<"\t"<<adresse<<"\t"<<code;
                    fichier<<endl;
                    verify<<code;
                    verify<<endl;
                }
                else
                {
                    cout<<"echec d'eregistrement le code doit etre unique"<<endl;
                }
            }
            else
            {
                cout<<"le fichier n'est pas creer";
            }

        cout<<"appuyer sur 0 pour continuer: "<<endl;
        cin>>k;

    }

}
//fonction pour afficher et imprimer les informations des etudiants
void display_data()
{
    int data = 0;
    string line;
    char print;
    ifstream fichier;
    fichier.open("backup.txt",ios::in);
    while(getline(fichier,line))
    {
        data++;
    }
    fichier.close();
    fichier.open("backup.txt",ios::in);
    if(data>1)
    {
        while(getline(fichier,line))
        {
            cout<<line<<endl;
        }
        cout<<"taper p pour imprimer le fichier"<<endl;
        cin>>print;
        if( int (print)==112 || int(print)==80)
        {
            string f = ("notepad.exe /p backup.txt");
            system(f.c_str());;//commande system utilisé pour imprimer un fichier
        }
    }
    else
    {
        cout<<"la base de donnee est vide, relancer le progrmme et inscrivez des etudiants d'abord"<<endl;
    }
}
//foction classement des etudiant par ordre alphabetique
void class_data()
{
    string line;
    int nb_line = 0;
    char print;
    ifstream fichier;
    int i = 0;
    fichier.open("backup.txt",ios::in);
    while(getline(fichier,line))//determinon la quantite de ligne qu'il y a dans le fichier
    {
        nb_line++;
    }
    fichier.close();
    if(nb_line>1)
    {
        fichier.open("backup.txt",ios::in);
        string backup[nb_line];
        while(getline(fichier,line))//stockons les valeur extrait du fichier dans un tableau
        {
            backup[i] = line;
            //si la premiere caractere du nom est minuscule changer lla en majuscule
            if(int (backup[i][0]) >97 && int (backup[i][0])<122)
            {
               backup[i][0]=char (int (backup[i][0])-32);
            }
            i++;
        }
        fichier.close();
        //trie du tableau par ordre alphabetique
        backup[0]=" ";
        string temp;
        for (int p = 0; p<nb_line;p++)
        {
            for(int i = 0; i<nb_line-p;i++)
            {
                if(backup[i] > backup[i+1])
                {
                    temp=backup[i];
                    backup[i]=backup[i+1];
                    backup[i+1]=temp;
                }
            }
                //cout<<"m deyo";
        }

        cout<<"NOM"<<"\t"<<"PRENOM"<<"\t"<<"ADRESSE"<<"\t"<<"CODE"<<endl;
        for (int i = 0; i<= nb_line; i++)//stockons les valeur extrait du fichier dans un tableau
        {
            cout<<backup[i]<<endl;
        }
        cout<<"taper p pour imprimer le fichier"<<endl;
        cin>>print;
        if( int (print)==112 || int(print)==80)
        {
            string f = ("notepad.exe /p backup.txt");
            system(f.c_str());;//commande system utilisé pour imprimer un fichier
        }
    }
    else
    {
        cout<<"la base de donnee est vide, relancer le progrmme et inscrivez des etudiants d'abord"<<endl;
    }
}
//fonction pour notre realisation
//verifions si la date est valide d'abord avec cette fonction
bool date_is_valide(int day, int month, int year)
{
    bool bissextile;

    //test pour savoir si l'année est bissextile; fev porte 29 jours
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                bissextile = true;
            }
            else
            {
                bissextile = false;
            }
        }
        else
        {
            bissextile = true;
        }
    }
    else
    {
        bissextile = false;
    }
    if(day > 31 || month > 12 || day <= 0 || month <= 0 || year <= 0)
    {
        return false;
    }
    //mois avec 30 jour: avril(4),juin(6),septembre(9),novembre(11)
    else if(month==4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    //mois avec 31 jour: janvier(1),mars(3),mai(5),juillet(7),aout(8),octobre(10),decembre(12)
    else if(month==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day > 31)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    //fevrier
    else if (month == 2)
    {
        if (day <= 28)
        {
            return true;
        }
        else if(day == 29 && bissextile == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
      return false;
    }
}
void day_of_date()
{
    cout<<"============================================================================"<<endl;
    cout<<"||             BIENVENUE SUR NOTRE VERIFICATEUR DE DATE               "<<"||"<<endl;
    cout<<"============================================================================"<<endl<<endl;
    int ab,cd,year,month,day,value_month,value_day,k,q;
    int today_year = 2021;
    int today_month = 05;
    int today_day = 06;
    string temps;

    bool bissextile;
    string name_month,name_day;
    cout<<"entre le jour"<<endl;
    cin>>day;
    cout<<"entre le numero du mois"<<endl;
    cin>>month;
    cout<<"entre l'annee"<<endl;
    cin>>year;
    if (date_is_valide(day, month, year))
    {
        if (year > today_year)
    {
        temps = "futur";
    }
    else if (year < today_year)
    {
        temps = "passe";
    }
    else
    {
        if (month > today_month)
        {
           temps = "futur";
        }
        else if (month < today_month)
        {
            temps = "futur";
        }
        else
        {
            if (day > today_day)
            {
               temps = "futur";
            }
            else if (day < today_day)
            {
                temps = "passe";
            }
            else
            {
                temps = "today";
            }
        }
    }
    //test pour savoir si l'année est bissextile; fev porte 29 jours
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                bissextile = true;
            }
            else
            {
                bissextile = false;
            }
        }
        else
        {
            bissextile = true;
        }
    }
    else
    {
        bissextile = false;
    }
    //attribution de valeur au mois en fontion que si l'année est bissextile ou pas
    if (bissextile == true)
    {
        if(month == 1)
        {
            value_month = 3;
            name_month = "janvier";
        }
        else if (month == 2)
        {
           value_month = 6;
           name_month = "fevrier";
        }
        else if (month == 3)
        {
           value_month = 0;
           name_month = "mars";
        }
        else if (month == 4)
        {
           value_month = 3;
           name_month = "avril";
        }
        else if (month == 5)
        {
           value_month = 5;
           name_month = "mai";
        }
        else if (month == 6)
        {
           value_month = 1;
           name_month = "juin";
        }
        else if (month == 7)
        {
           value_month = 3;
           name_month = "juillet";
        }
        else if (month == 8)
        {
           value_month = 6;
           name_month = "aout";
        }
        else if (month == 9)
        {
           value_month = 2;
           name_month = "septembre";
        }
        else if (month == 10)
        {
           value_month = 4;
           name_month = "octobre";
        }
        else if (month == 11)
        {
           value_month = 0;
           name_month = "novembre";
        }
        else if (month == 12)
        {
           value_month = 2;
           name_month = "decembre";
        }
    }
    else if (bissextile == false)
    {
        if(month == 1)
        {
            value_month = 4;
            name_month = "janvier";
        }
        else if (month == 2)
        {
           value_month = 0;
           name_month = "fevrier";
        }
        else if (month == 3)
        {
           value_month = 0;
           name_month = "mars";
        }
        else if (month == 4)
        {
           value_month = 3;
           name_month = "avril";
        }
        else if (month == 5)
        {
           value_month = 5;
           name_month = "mai";
        }
        else if (month == 6)
        {
           value_month = 1;
           name_month = "juin";
        }
        else if (month == 7)
        {
           value_month = 3;
           name_month = "juillet";
        }
        else if (month == 8)
        {
           value_month = 6;
           name_month = "aout";
        }
        else if (month == 9)
        {
           value_month = 2;
           name_month = "septembre";
        }
        else if (month == 10)
        {
           value_month = 4;
           name_month = "octobre";
        }
        else if (month == 11)
        {
           value_month = 0;
           name_month = "novembre";
        }
        else if (month == 12)
        {
           value_month = 2;
           name_month = "decembre";
        }
    }
    //la valeur du jour (k+cd+m+Q+6ab) mod 7; avec k = E(cd / 4), Q = valeur du jour, m = valeur mois
    //year == abcd ==> 1985 a=1, b=9, c=8, d=5
    ab = int (year / 100);
    cd = int (year % 100);
    k = int ( cd / 4 );

    if (year < 1582)
        {
            value_day = (k + cd + value_month + day + 6*ab) % 7;

        }
    else
        {
            int q = int (ab / 4);
            value_day = (k + q + 2 + cd + value_month + day + 5*ab) % 7;
        }


    //attribution du nom de la journée en fonction de sa valeur
    if (value_day == 1)
    {
        name_day ="lundi";
    }
    else if (value_day == 2)
    {
        name_day ="mardi";
    }
    else if (value_day == 3)
    {
        name_day ="mercredi";
    }
    else if (value_day == 4)
    {
        name_day ="jeudi";
    }
    else if (value_day == 5)
    {
        name_day ="vendredi";
    }
    else if (value_day == 6)
    {
        name_day ="samedi";
    }
    else if (value_day == 0)
    {
        name_day ="dimanche";
    }
    //afficher une reponse a l'utilisateur

    if (temps == "futur")
    {
        cout<<endl;
        cout<<"le "<<day<<"/"<<month<<"/"<<year<<" "<<"sera un "<<name_day<<" "<<day<<" "<<name_month<<" "<<year<<"."<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else if (temps == "passe")
    {
        cout<<endl;
        cout<<"le "<<day<<"/"<<month<<"/"<<year<<" "<<"etait un "<<name_day<<" "<<day<<" "<<name_month<<" "<<year<<"."<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else if (temps == "today")
    {
        cout<<endl;
        cout<<"le "<<day<<"/"<<month<<"/"<<year<<" "<<"est aujourd'hui, "<< "on est le "<<name_day<<" "<<day<<" "<<name_month<<" "<<year<<"."<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    }
    else
    {
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"||votre date est invalide, reessayer avec une date valide svp||"<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    }

}

//fonction principale, toutes les choix sont gere dans la fonction principale
//les choix sont geres avec des structure de switch
int main()
{
    print(0,0);
    char choice_x;
    char choice_y;
    char choice_z;
    while(int(choice_x) <= 48 || int (choice_x) > 52)
    {
        cin>>choice_x;
        switch (int(choice_x))
        {
            //choix 1 dans le menu general, le premier menu
            case 49:
            {
                //si l'option 1 a ete choisi cela signifie que l'utilisateur voudra convertir de nombre
                //cette option comprend un sous menu de 4 choix et chaque choix est a leur tour divise en sous menu de 3 choix
                //d'ou l'utilisation du variable choice_y pour se situer dans le sous menu 1 (quel nombre voudraient ont convertir)
                //d'ou 'utilasation du variable choice_y pour se situer dans le sous menu 2 (en quoi veut on convertir le nombre de categorie (sous nenu 1)
                /*an kreyol pati sa nan program nan se li ki pi subdivize, aprè meni prensipal la, ou antre nan on 2em meni, apres sa ou antre
                nan yon 3em meni apre sa ou choisi denye bagay ou vle realise a. pou sa nou kreye itilize variab choice_x la pou n kontrole choix itilizatè
                itilizatè a nan premye sous meni la jwenn la epi variab choice_z la poun kontrole choix nan 2em sous meni anh*/
                //pour chaque choix de choice_y on a la possibilite de choisir 3 choix de choice_z
                clear_console();
                print(1,1);
                while (int (choice_y) <= 48 || int (choice_y) > 52)
                {
                    cin>>choice_y;
                    switch (int (choice_y))
                    {
                        case 49:
                        {
                            clear_console();
                            print(1,1,1);
                            while (int (choice_z) <= 48 || int (choice_z) > 51)
                            {
                                cin>>choice_z;
                                switch (int (choice_z))
                                    {
                                        case 49:
                                        {
                                            decimal_to_binaire();
                                        }break;
                                        case 50:
                                        {
                                            decimal_to_octal();
                                        }break;
                                        case 51:
                                        {
                                            dec_to_hex();
                                        }break;
                                        default:
                                        {
                                            print(10,10,10);
                                        }
                                    }
                            }
                        }break;
                        case 50:
                        {
                            clear_console();
                            print(1,1,2);
                            while (int(choice_z) <= 48 || int(choice_z) > 51)
                            {
                                cin>>choice_z;
                                switch (int(choice_z))
                                    {
                                        case 49:
                                        {
                                            bin_to_dec();
                                        }break;
                                        case 50:
                                        {
                                            bin_to_oct();
                                        }break;
                                        case 51:
                                        {
                                            bin_to_hex();
                                        }break;
                                        default:
                                        {
                                            cout<<"vous devez faire un bon choix!!"<<endl;
                                        }
                                    }
                            }
                        }break;
                        case 51:
                        {
                            clear_console();
                            print(1,1,3);
                            while (int(choice_z) <= 48 || int(choice_z) > 51)
                            {
                                cin>>choice_z;
                                switch (int(choice_z))
                                    {
                                        case 49:
                                        {
                                            hex_to_oct();
                                        }break;
                                        case 50:
                                        {
                                            hex_to_bin();
                                        }break;
                                        case 51:
                                        {
                                            hex_to_dec();
                                        }break;
                                        default:
                                        {
                                            cout<<"vous devez faire un bon choix!!"<<endl;
                                        }
                                    }
                            }
                        }break;
                        default:
                        {
                            print(10,10,10);
                        }
                    }
                }break;
             //choix 2 dans le menu general, le premier menu
            case 50:
            {
                clear_console();
                print(1,2);
                while (int(choice_y) <=48 || int(choice_y) > 52)
                {
                    cin>>choice_y;
                    switch (choice_y)
                    {
                        case 49:
                            {
                               magic_square();
                            }break;
                        case 50:
                            {
                               clear_console();
                               mult_mat();
                            }break;
                        case 51:
                            {
                                clear_console();
                                double_unkow_function();
                            }break;
                        case 52:
                            {
                                clear_console();
                                trans_mat();
                            }break;
                        default:
                            {
                                print(10,10,10);
                            }
                    }
                }

            }
            break;
             //choix 3 dans le menu general, le premier menu
            case 51:
            {
                clear_console();
                print(1,3);
                while (int(choice_y) <= 48 || int(choice_y) > 51)
                {
                    cin>>choice_y;
                    switch (int(choice_y))
                    {
                        case 49:
                            {
                                add_student();
                            }break;
                        case 50:
                            {
                                display_data();
                            }break;
                        case 51:
                            {
                                class_data();
                            }break;
                        default:
                            {
                                print(10,10,10);
                            }
                    }
                }

            }
            break;
            case 52:
            {
                clear_console();
                day_of_date();
            }break;
            default:
            {
                print(10,10,10);
            }
            break;

            }

        }

    }
    cout<<endl<<"entre 1 pour relancer le programme et 0 pour quitter"<<endl;
    int t = 9;
    while (t != 0 || t != 1)
    {
       cin>>t;
        switch (t)
        {
            case 1:
            {
               clear_console();
               main();
            }break;
            case 0:
            {
                return 0;
                getch();
            }break;
            default:
            {
                print(10,10,10);
            }
        }
    }

}
