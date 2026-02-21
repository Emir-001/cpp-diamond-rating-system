#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

class diamond{
    private:
    double carat;
    int clarity;
    int color;
    int cut;



    public:
    


        diamond(double a, int b,int c,int d)
        {
            carat=a;
            clarity=b;
            color=c;
            cut=d;
        }

        
        

        void CalculateScore()
        {
            int i=0;
            double basePrice=5000;
            int colorScore [5] = {10,8,6,4,2};
            int clarityScore[11]= {10,9,8,7,6,5,4,3,2,1,0};
            int cutScore [4] = {7,10,9,8};
            double score = 0;
            double colorPrice [5] = {1.4,1.2,1.0,0.9,0.7};
            double clarityPrice[11]= {1.8,1.7,1.6,1.5,1.3,1.2,1.0,0.9,0.8,0.7,0.6};
            double cutPrice [4] = {0.85,1.2,1.1,1.0};

//-------------------------------------------------------------------------------------------------------            

            
            basePrice *= clarityPrice[clarity-1];
            basePrice *=cutPrice[cut-1];
            basePrice *=colorPrice[color-1];


            if(carat < 0.1)
                basePrice *= carat;
            else if(carat < 1.5)
                basePrice *= carat-(carat/7.5);
            else if (carat < 2.0)
                basePrice *= carat-(carat/6.5);
            else
                basePrice *= carat-(carat/6);
//----------------------------------------------------------------------------------------

            
            
            score +=cutScore[cut-1];
            score += clarityScore[clarity-1];
            score +=colorScore[color-1];

            if(carat < 0.3){score += 3;i=3;}
            else if(carat < 0.5){score += 5;i=5;}
            else if(carat < 0.7){score += 6;i=6;}
            else if(carat < 1.0){score += 7;i=7;}
            else if(carat < 1.5){score += 8;i=8;}
            else if(carat < 2.0){score += 9;i=9;}
            else{score += 10;i=10;}

//--------------------------------------------------------------------------------------------------------
            
            cout << "Your diamonds stats are: ";
            cout << "\nColor Score: " << colorScore[color-1];
            cout << "\nClarity Score: " << clarityScore[clarity-1];
            cout << "\nCut Score: " << cutScore[cut-1];
            cout << "\nCarat Score: " <<  i;
            cout << "\nOverall Score: " << score;
            cout << "\nQuality Level: ";
            if(score >= 35)
             cout << "Premium";
            else if(score >= 28)
                cout << "High";
            else if(score >= 20)
                cout << "Medium";
            else
                cout << "Low";
            cout << "\nPrice: " << basePrice << "$";



        }
    

};
int main()
{
    double carat;
    int clarity,cut,color;
    cout << "Enter the carat weight of your diamond: ";
    cin >> carat;

    cout << "Enter the clarity of your diamond: \n"
     << "(1) FL (Flawless) – No inclusions or blemishes visible under 10x magnification\n"
     << "(2) IF (Internally Flawless) – No internal inclusions, only minor surface blemishes\n"
     << "(3) VVS1 (Very Very Slightly Included 1) – Inclusions are extremely difficult to see under 10x magnification\n"
     << "(4) VVS2 (Very Very Slightly Included 2) – Inclusions are very difficult to see under 10x magnification\n"
     << "(5) VS1 (Very Slightly Included 1) – Inclusions are minor and difficult to see\n"
     << "(6) VS2 (Very Slightly Included 2) – Inclusions are visible but still small\n"
     << "(7) SI1 (Slightly Included 1) – Inclusions are noticeable under 10x magnification\n"
     << "(8) SI2 (Slightly Included 2) – Inclusions are more noticeable\n"
     << "(9) I1 (Included 1) – Inclusions are obvious and may affect transparency\n"
     << "(10) I2 (Included 2) – Inclusions are very obvious and affect appearance\n"
     << "(11) I3 (Included 3) – Inclusions are severe and clearly visible\n";
    cin >> clarity;

    cout << "Enter the color of your diamond: \n"
     <<"(1)D – Completely colorless\n"
     <<"(2)E–F – Very very slight color\n"
     <<"(3)G–H – Slight color\n"
     <<"(4)I–J – Slight yellow tint\n"
     <<"(5)K–Z – Noticeable yellow or brown tint\n";
    cin >> color;

    cout << "Enter the cut of your diamond: \n"
    <<"(1)Cushion – square with rounded corners\n"
    <<"(2)Round Brilliant – round shape\n"
    <<"(3)Princess – square shape\n"
    <<"(4)Oval – oval shape\n";
    cin >> cut;
    diamond test(carat,clarity,color,cut);
    test.CalculateScore();



    return 0;
}