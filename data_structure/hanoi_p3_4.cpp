// Program to simulate the tower of Hanoi Problem

#include<iostream>

using namespace std;

class tower
{
    // Private variables are declared
    int NoDisk;
    char FromTower, ToTower, AuxTower;
    
    public:
        void hanoi(int , char, char, char);
};

void tower::hanoi(int NoDisk, char FromTower, char ToTower, char AuxTower)
{
    // If only one disk, make the move and return
    if (NoDisk == 1)
    {
        cout<<"\nMove from disk 1 from tower "<<FromTower<<" to tower "<<ToTower;
        return;
    }
    
    // Move top n-1 disks from X to Y, using Z as auxiliary tower
    hanoi(NoDisk - 1, FromTower, AuxTower, ToTower);
    
    // Move remaining disk from X to Z
    cout<<"\nMove from disk "<<NoDisk<<" from Tower "<<FromTower<<" to tower "<<ToTower;
    
    // Move n-1 disk from Y to Z using X as auxiliary tower
    hanoi(NoDisk-1, AuxTower, ToTower, FromTower);
    
    return;
}

int main()
{
    int No;
    tower Ob;
    cout<<"\n\t\t\t--- Tower of Hanoi ---\n";
    
    // Input the number of disk in the tower
    cout<<"\n\nEnter the number of diskd = ";
    cin>>No;
    
    // We assume that the tower are X, Y, Z
    Ob.hanoi(No, 'X', 'Y', 'Z');
    cout<<"\n\nPress any key to continue........\n";
    
    return 0;
}
