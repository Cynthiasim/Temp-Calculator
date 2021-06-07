//  File name: main.cpp
//  Programmer: Cynthia Simon
//  Course: Prorgramming Fundamentals II (COSC 1337)
//  Professor: Isaac K. Gang
//  Institution: Texas A&M University-Commerce

//  Problem: Arrays and Strings
//  Due date: 4/22/19

#include <iostream>
using namespace std;



int const ROW = 12;
int const COL = 2;



void getData(int temperature[ROW][COL]);
void displayTemp(int temperature[ROW][COL]);
void averageHigh(int temperature[ROW][COL]);
void averageLow(int temperature[ROW][COL]);
void indexHighTemp(int temperature[ROW][COL]);
void indexLowTemp(int temperature[ROW][COL]);

int main()
{
    
    int temperature[ROW][COL];
    cout << " Welcome to the temperature calculator. \n";
    getData(temperature);
    displayTemp(temperature);
    averageHigh(temperature);
    averageLow(temperature);
    indexHighTemp(temperature);
    indexLowTemp(temperature);
    
    return 0;
    
}

void getData(int temperature[ROW][COL])

{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (j == 0)
            {
                
                cout << "Input the temperature of Month " << (i + 1) << ": Highest: ";
                cin >> temperature[i][j];
                
            }
            
            if (j == 1)
                
            {
                
                cout << "Input the temperature of Month " << (i + 1) << ": Lowest: ";
                cin >> temperature[i][j];
            }
        }
    }
}

void displayTemp(int temperature[ROW][COL])

{
    cout << "\nHighest\t\tLowest" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << temperature[i][j] << "\t\t\t";
        }
        
        cout << "\n";
    }
}

void averageHigh(int temperature[ROW][COL])

{
    int sumHigh = 0, avgHigh = 0;
    for (int i = 0; i < ROW; i++)
        
    {
        
        sumHigh = sumHigh + temperature[i][0];
        
    }
    
    avgHigh = sumHigh / ROW;
    cout << "The average high temperature is: " << avgHigh << endl;
    
}

void averageLow(int temperature[ROW][COL])

{
    
    int sumLow = 0, avgLow = 0;
    for (int i = 0; i < ROW; i++)
        
    {
        
        sumLow = sumLow + temperature[i][1];
        
    }
    
    avgLow = sumLow / ROW;
    cout << "The average low temperature is: " << avgLow << endl;
    
}

void indexHighTemp(int temperature[ROW][COL])

{
    
    int high = temperature[0][0];
    int indexHigh = 0;
    for (int i = 0; i < ROW; i++)
        
    {
        
        if (high < temperature[i][0])
            
        {
            
            high = temperature[i][0];
            indexHigh = i;
            
        }
        
    }
    
    cout << "The highest temperature is: " << high << endl;
    
}

void indexLowTemp(int temperature[ROW][COL])

{
    
    int low = temperature[0][1];
    int indexLow = 0;
    for (int i = 0; i < ROW; i++)
        
    {
        
        if (low > temperature[i][1])
            
        {
            
            low = temperature[i][1];
            indexLow = i;
            
        }
        
    }
    
    cout << "The lowest temperature is: " << low << endl;
    
}




