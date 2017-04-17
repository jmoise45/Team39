#include "Person.h"
#include "Staff.h"
#include "Inventory.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include "food.h"
#include <string>
#include <vector>
#include "stack.h"
#include "menu.h"
#include "invitationCard.h"
using namespace std;

void invitationCard(string partyName, string date, string venueLocation, string time, string venue){

    for(unsigned int i = 0; i < partyName.size(); i++)
    {

        partyName[i] = toupper(partyName[i]);
    }

    cout << "Choose a template design for your invitation card:" << endl;
    cout <<"1. Buildings" << endl;
    cout <<"2. Boats" << endl;
    cout <<"3. Boats and Buildings" << endl;
    cout <<"4. Flamingos"<< endl;
    cout <<"5. Flamingos and Boats"<< endl;

    int n = 0;

    cin >> n;

    ofstream f;

    f.open("Invitation.txt", ofstream::out | ofstream::trunc);

    cout << endl;

    if(n==1)
    {
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒▒▒▒" << endl;
        f << "░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░░░░" << endl;
        f << "░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░░░░" << endl;
        f << "████████▀█████████████████████▀█████████████████████▀█████████████████████▀█████████████████████▀████████████░░░░░" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << " " << endl;
        f << "\t\t\t\t\t\t" << partyName << endl;
        f << "\t\t\t\t\t" << date << " at " << time << endl;
        f << "\t\t\t\t\t" << venue << endl;
        f << "\t\t\t\t\t" << venueLocation << endl;
        f << " " << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒▒▒▒" << endl;
        f << "░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░░░░" << endl;
        f << "░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░░░░" << endl;
        f << "████████▀█████████████████████▀█████████████████████▀█████████████████████▀█████████████████████▀████████████░░░░░" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;

        cout << "Invitation card created successfully." << endl;
    }

    else if(n==2) {

        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "──────────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
        f << "───║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║────────" << endl;
        f << "───║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║────────" << endl;
        f << "───░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║────────" << endl;
        f << "▀███████████████████──▀███████████████████──▀███████████████████──▀███████████████████──▀███████████████████──────" << endl;
        f << "░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░░░░" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << " " << endl;
        f << "\t\t\t\t\t\t" << partyName << endl;
        f << "\t\t\t\t\t" << date << " at " << time << endl;
        f << "\t\t\t\t\t" << venue << endl;
        f << "\t\t\t\t\t" << venueLocation << endl;
        f << " " << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "──────────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
        f << "───║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║────────" << endl;
        f << "───║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║────────" << endl;
        f << "───░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║────────" << endl;
        f << "▀███████████████████──▀███████████████████──▀███████████████████──▀███████████████████──▀███████████████████──────" << endl;
        f << "░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░░░░" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;

        cout << "Invitation card created successfully." << endl;
    }

    else if(n==3) {

        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "──────────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
        f << "───║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║────────" << endl;
        f << "───║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║────────" << endl;
        f << "───░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║────────" << endl;
        f << "▀███████████████████──▀███████████████████──▀███████████████████──▀███████████████████──▀███████████████████──────" << endl;
        f << "░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░░░░" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << " " << endl;
        f << "\t\t\t\t\t\t" << partyName << endl;
        f << "\t\t\t\t\t" << date << " at " << time << endl;
        f << "\t\t\t\t\t" << venue << endl;
        f << "\t\t\t\t\t" << venueLocation << endl;
        f << " " << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒▒▒▒▒" << endl;
        f << "░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░█▀█▀█░█▀██░█▀█░█▄█▄█░░░░░" << endl;
        f << "░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░█▀█▀█░█▀████▀█░█▄█▄█░░░░░" << endl;
        f << "████████▀█████████████████████▀█████████████████████▀█████████████████████▀█████████████████████▀████████████░░░░░" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;

        cout << "Invitation card created successfully." << endl;
    }

    else if(n==4) {

        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "──────────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
        f << "────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄──────────" << endl;
        f << "───▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌─────────" << endl;
        f << "────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀──────────" << endl;
        f << "█▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄█──────" << endl;
        f << "▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████──────" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << " " << endl;
        f << "\t\t\t\t\t\t" << partyName << endl;
        f << "\t\t\t\t\t" << date << " at " << time << endl;
        f << "\t\t\t\t\t" << venue << endl;
        f << "\t\t\t\t\t" << venueLocation << endl;
        f << " " << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "──────────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
        f << "────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄──────────" << endl;
        f << "───▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌─────────" << endl;
        f << "────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀──────────" << endl;
        f << "█▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄█──────" << endl;
        f << "▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████──────" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;

        cout << "Invitation card created successfully." << endl;
    }

    else if(n==5) {

        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "──────────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
        f << "────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄────────▄██▄──▄██▄──────────" << endl;
        f << "───▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌──────▐█─▀▄▌▐▄▀─█▌─────────" << endl;
        f << "────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀────────▀█▄─▌▐─▄█▀──────────" << endl;
        f << "█▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄██▄▄▄▄▄█▌──▐█▄▄▄▄▄█──────" << endl;
        f << "▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████▐█████▀────▀██████──────" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << " " << endl;
        f << "\t\t\t\t\t\t" << partyName << endl;
        f << "\t\t\t\t\t" << date << " at " << time << endl;
        f << "\t\t\t\t\t" << venue << endl;
        f << "\t\t\t\t\t" << venueLocation << endl;
        f << " " << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
        f << "──────────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
        f << "───║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║───────║─▄──▄──▄──▄──║────────" << endl;
        f << "───║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║───────║─▓──▓──▓──▓──║────────" << endl;
        f << "───░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║───────░░░░░░░░░░░░░─║────────" << endl;
        f << "▀███████████████████──▀███████████████████──▀███████████████████──▀███████████████████──▀███████████████████──────" << endl;
        f << "░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░██████████████████▀░░░░░░" << endl;
        f << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;

        cout << "Invitation card created successfully." << endl;
    }
}

/*
 *  ==========================================================
 * 		Node Class Implementations
 * ==========================================================
																			*/
 /* 	Constructor	 	*/
Node::Node(const string &value)
{
	this->next = NULL;
	this->data = value;
}

 /* 	Accessor Method	 	*/
Node * Node::getNext()
{
	return this->next;
}

/* 	Mutator Method	 	*/
void Node::setNext(Node * newptr)
{
	this->next = newptr;
}

/* 	Accessor Method	 	*/
string Node::getData()
{
	return this->data;
}



/*
 *  ==========================================================
 * 		LinkedList Class Implementations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
/* 	Constructor	 	*/
LinkedList::LinkedList()
{
	this->head = NULL;
	this->numNodes = 1;
}

/* 	Accessor Method	 	*/
int LinkedList::getNumNodes()
{
	return this->numNodes;
}

/* 	Accessor Method	 	*/
Node * LinkedList::getHead()
{
	return this->head;
}

/* 	Method that returns the node pointer before
 * 		the indicated value	 								*/
Node * LinkedList::getNodeBefore(string data)
{
	Node * temp = this->head;
	while (temp->getNext() != NULL) // increments through linked list
	{
		if ((temp->getNext())->getData() == data)// if the data of the next variable is equal to 'data'
			return temp;
		temp = temp->getNext();
	}
	return temp;
}

/* 	Method that inserts a new node with a certain value
 * 		at the indicated position	 								*/
void LinkedList::insert(const string &value, int pos)
{
	Node * temp = new Node(value);

	if (head == NULL) // if list is empty
	{
		head = temp;
		numNodes++;
		return;
	}

	Node * last = head;

	if (this->numNodes == pos) // if inserting at end of list
	{
		while (last->getNext() != NULL)
		{
			last = (last->getNext());
		}

		last->setNext(temp);

		numNodes++;
	}
	else
	{
		if (pos == 0) // if inserting at beginning of list
		{
			temp->setNext(last);
			head = temp;
			return;
		}
		// if inserting in middle of list

		Node * prev = head;
		last = last->getNext();

		for (int i = 1; i < pos; i++)  // scroll through until indicated value is found
		{
			last = last->getNext();
			prev = prev->getNext();
		}

		temp->setNext(last);
		prev->setNext(temp);
	}
}

/* 	Method that outputs every element in the node pointers		*/
void LinkedList::traverse()
{
	if (head == NULL)
	{
		cout<< "ERROR - Empty list!\n" << endl;
		return;
	}

	Node * temp = head;

	int counter = 0;

	while (temp->getNext() != NULL)
	{
		cout<< temp->getData() << "\t";
		if ((counter+1) % 8 == 0) // formatting
			cout<< endl;
		counter++;

		temp = (temp->getNext());
	}

	cout<< temp->getData() << "\t\n\n\n";
}


/* 	Method that finds a node with a value of 'value'	*/
int LinkedList::find(string value)
{
	Node * temp = head;

	if (head == NULL)
		return -99;

	int counter = 0;

	while (temp->getData() != value && temp->getNext() != NULL)
	{
		// increment counter until value is found to signify the position
		temp = (temp->getNext());
		counter++;
	}

	if (temp->getData() == value)
	{
		return counter;
	}

	return -99; // if not found return -99
}


/* 	Method that removes a node with a value of 'data'	*/
void LinkedList::remove(string data)
{
	if (head->getData() == data) // if "node before" does not exit (head has value of 'data')
	{
		Node * temp =  head;
		head = head->getNext();
		delete temp;
		return;
	}

	Node * previous = getNodeBefore(data); // calls method "getNodeBefore" to get previous node
	Node * current = previous->getNext();

	previous->setNext(current->getNext());
	delete current;
}


/* 	Method that removes a node with at position of 'value'	*/
void LinkedList::remove(int value)
{
	if (value == 0) // if beginning of list
	{
		Node * temp =  head;
		head = head->getNext();
		delete temp;
		return;
	}

	Node * temp = head;

	int counter = 0;

	while (temp->getNext() != NULL) // icrement through to given position then execute "remove" algorithm
	{
		if ((counter+1) == value)
		{
			Node * previous = temp;
			Node * current = temp->getNext();
			previous->setNext(current->getNext());
			delete current;

			return;
		}
		temp = temp->getNext();
		counter++;
	}
}


/*
 *  ==========================================================
 * 		Stack Class Implementations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
/* 	Constructor	 	*/
Stack::Stack()
{
	this->numObjects = 0;
}


/* 	Pop method that returns the "popped" string 	*/
string Stack::pop()
{
	if (numObjects == 0)
		return "NULL";

	string temp = "";

	temp = (this->list.getHead())->getData();

	this->list.remove(0);

	this->numObjects--;

	return temp;
}


/* 	Push method that adds string to stack	*/
void Stack::push(string element)
{
	this->numObjects++;
	list.insert(element, 0);
}


/* 	Accessor Method 	*/
int Stack::getNumObjects()
{
	return this->numObjects;
}


/* 	Reverse orientation of stack (i.e. stack -> queue and vice versa) 	*/
void Stack::reverseStack()
{
	LinkedList temp;

	int num = this->numObjects;

	for (int i = 0; i < num; i++)
		temp.insert(this->pop(), 0);

	this->numObjects = num;
	this->list = temp;
}


/* 	Prints elements in stack 	*/
void Stack::printStack()
{
	int num = this->numObjects;

	for (int i = 0; i < num; i++)
	{
		std::cout << i << ": "<< this->pop();
		std::cout << '\n';
	}
}

/*
 * ============================================================================================================
 * ============================================================================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */




Food::Food()
{
	this->name = "NULL";
	this->price = 0.0;
	this->foodType = "NULL";
	this->special = false;
}


Food::Food(string aName, double aPrice, string aFoodType, bool aSpecial)
{
	this->name = aName;
	this->price = aPrice;
	this->foodType = aFoodType;
	this->special = aSpecial;
}

string Food::getName()
{
	return this->name;
}

double Food::getPrice()
{
	return this->price;
}

string Food::getFoodType()
{
	return this->foodType;
}

void Food::setPrice(double aPrice)
{
	this->price = aPrice;
}

void Food::setFoodType(string aFoodType)
{
	this->foodType = aFoodType;
}


Menu::Menu()
{
	this->numGuests = 0;
	this->currentBudget = 0.0;
}


/* 	Constructor	 	*/
Menu::Menu(LinkedList aGuestNames, int aNumGuests, double aCurrentBudget)
{
	this->guestNames = aGuestNames;
	this->numGuests = aNumGuests;
	this->currentBudget = aCurrentBudget;
}

/* 	Constructor	 	*/
Menu::Menu(int aNumGuests, double aCurrentBudget)
{
	this->numGuests = aNumGuests;
	this->currentBudget = aCurrentBudget;
}



/* ----------------------------------------------------------------------------
 * 		Accessor Methods
 * ----------------------------------------------------------------------------				*/
vector <Food> Menu::getMenuItems()
{
	return this->menuItems;
}

double Menu::getCurrentBudget()
{
	return this->currentBudget;
}

Food Menu::getChosenAppetizer()
{
	return this->chosenAppetizer;
}

Food Menu::getChosenEntree()
{
	return this->chosenEntree;
}

Food Menu::getChosenDessert()
{
	return this->chosenDessert;
}

Food Menu::getChosenSide()
{
	return this->chosenSide;
}


/* ----------------------------------------------------------------------------
 * 		Mutator Methods
 * ----------------------------------------------------------------------------				*/
void Menu::setMenuItem(Food aMenuItem, int pos)
{
	this->menuItems[pos] = aMenuItem;
}

/* ----------------------------------------------------------------------------
 * 		Useful Methods
 * ----------------------------------------------------------------------------				*/

/* Initializes the menu to the default items				*/
void Menu::initializeMenuItems()
{
	//Appetizers
	(this->menuItems).push_back(Food("House Salad", 5.00, "Appetizer", true));
	(this->menuItems).push_back(Food("Mozzarella Sticks", 4.00, "Appetizer", false));
	(this->menuItems).push_back(Food("Ceaser Salad", 5.50, "Appetizer", false));
	(this->menuItems).push_back(Food("Soup of the Day", 3.00, "Appetizer", true));


	//Entrees
	(this->menuItems).push_back(Food("Hamburger", 7.00, "Entree", false));
	(this->menuItems).push_back(Food("Cheeseburger", 7.50, "Entree", false));
	(this->menuItems).push_back(Food("Tilapia", 12.00, "Entree", true));
	(this->menuItems).push_back(Food("Chicken Wings (6)", 7.00, "Entree", false));
	(this->menuItems).push_back(Food("Steak", 13.00, "Entree", false));
	(this->menuItems).push_back(Food("Sushi Sampler", 14.00, "Entree", false));
	(this->menuItems).push_back(Food("Pizza", 9.00, "Entree", false));
	(this->menuItems).push_back(Food("Special Quesadilla", 12.00, "Entree", true));

	//Desserts
	(this->menuItems).push_back(Food("Chocolate Ice Cream", 3.00, "Dessert", false));
	(this->menuItems).push_back(Food("Vanilla Ice Cream", 3.00, "Dessert", false));

	//Sides
	(this->menuItems).push_back(Food("French Fries", 2.00, "Side", false));
	(this->menuItems).push_back(Food("Onion Rings", 2.50, "Side", true));
}


void Menu::printMenu()
{
	std::cout << "\n\n================================================================================" << endl;
	std::cout << "\tMENU\n===============================================================================\n\n";

	int entrees = 0;
	int appetizers = 0;
	int desserts = 0;
	int sides = 0;
	int other = 0;

	for (unsigned int i = 0; i < this->menuItems.size(); i++)
	{
		if (this->menuItems[i].getFoodType() == "Entree")
		{
			entrees++;
		}

		else if (this->menuItems[i].getFoodType() == "Appetizer")
		{
			appetizers++;
		}

		else if (this->menuItems[i].getFoodType() == "Dessert")
		{
			desserts++;
		}

		else if (this->menuItems[i].getFoodType() == "Side")
		{
			sides++;
		}

		else
			other++;
	}

	std::cout << "-------------------------------------------------\n";
	cout<< "Appetizers:\n" << endl;
	for (int k = 0; k < appetizers; k++)
	{
		std::cout<< "|" << k+1 << "|\t" << menuItems[k].getName() << "\t" << menuItems[k].getPrice() << "\t"<< endl;
	}

	std::cout << "\n\n-------------------------------------------------\n\n";
	cout<< "Entrees:\n" << endl;
	for (int j = 0; j < entrees; j++)
	{
		std::cout<< "|" << j+1 << "|\t" << menuItems[j+appetizers].getName() << "\t\t" << menuItems[j+appetizers].getPrice() << "\t\t"<< endl;
	}

	std::cout << "\n\n-------------------------------------------------\n\n";
	cout<< "Desserts:\n" << endl;
	for (int a = 0; a < desserts; a++)
	{
		std::cout<< "|" << a+1 << "|\t" << menuItems[a+appetizers+entrees].getName() << "\t"<< menuItems[a+appetizers+entrees].getPrice() << "\t"<< endl;
	}

	std::cout << "\n\n-------------------------------------------------\n\n";
	cout<< "Sides:\n" << endl;
	for (int b = 0; b < sides; b++)
	{
		std::cout<< "|" << b+1 << "|\t" << menuItems[b+appetizers+entrees+desserts].getName() << "\t\t"<< menuItems[b+appetizers+entrees+desserts].getPrice() << "\t"<< endl;
	}

	if (other != 0)
		std::cout << "\n\nERROR - FOOD ITEM WITH BAD TYPE\n\n";
	std::cout << "\n-------------------------------------------------\n";
	std::cout << "===============================================================================\n\n\n";

	int numAppetizer = -99;
	int numEntree = -99;
	int numDessert = -99;
	int numSide = -99;

	while (numAppetizer <= 0 || numAppetizer > appetizers)
	{
		std::cout << "Please enter an Appetizer: ";
		std::cin>> numAppetizer;

		if (numAppetizer <= 0 || numAppetizer > appetizers)
			std::cout<< "ERROR - Invalid input!" << endl;
	}

	while (numEntree <= 0 || numEntree > entrees)
	{
		std::cout << "Please enter an Entree: ";
		std::cin>> numEntree;

		if (numEntree <= 0 || numEntree > entrees)
			std::cout<< "ERROR - Invalid input!" << endl;
	}

	while (numDessert <= 0 || numDessert > desserts)
	{
		std::cout << "Please enter a Dessert: ";
		std::cin>> numDessert;

		if (numDessert <= 0 || numDessert > desserts)
			std::cout<< "ERROR - Invalid input!" << endl;
	}

	while (numSide <= 0 || numSide > sides)
	{
		std::cout << "Please enter a Side: ";
		std::cin>> numSide;

		if (numSide <= 0 || numSide > sides)
			std::cout<< "ERROR - Invalid input!" << endl;
	}


	this->chosenAppetizer = this->menuItems[numAppetizer - 1];
	this->chosenEntree = this->menuItems[numEntree + numAppetizer - 2];
	this->chosenDessert = this->menuItems[numEntree + numAppetizer + numDessert - 3];
	this->chosenSide = this->menuItems[numEntree + numAppetizer + numDessert + numSide - 4];

	std::cout<< "\n\n--- All data successfully entered! --- " << endl ;
	std::cout<< "You requested:\n" << endl;

	std::cout<< "\nAppetizer: " << (this->menuItems[numAppetizer - 1]).getName() << endl;
	std::cout<< "\nEntree: " << (this->menuItems[numEntree + appetizers - 1].getName()) << endl;
	std::cout<< "\nDessert: " << (this->menuItems[entrees + appetizers + numDessert - 1].getName()) << endl;
	std::cout<< "\nSide: " << (this->menuItems[entrees + appetizers + desserts + numSide - 1].getName()) << endl;

	std::cout << "\n\n===============================================================================\n\n\n";
}




//General Person methods
void Person::setName(std::string &name)
{
    this->name = name;
}

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{

    return age;
}

//Guest methods
Guest::Guest(std::string &name, int &age)
{
    this->age = age;
    this->name = name;
}

void Guest::RSVP(bool &coming)
{
    this->isGoing = coming;
}

void Guest::setAge(int &age)
{
    this->age = age;
}

bool Guest::getRSVPStatus()
{
    return isGoing;
}

int Guest::getAge()
{
    return age;
}

//personList methods
personList::personList()
{
}

void personList::addPerson(Person *person)
{

    personlist.push_back(person);

}

void personList::deletePerson(std::string personName) //removes node, links adjacent nodes, and adds a free space
{

    int control = 0;

    for(unsigned int i = 0; i < personlist.size(); i++)
    {

        if(personlist[i]->getName() == personName)
        {

            personlist.erase (personlist.begin()+i);

            ++control;
        }
    }

    if(control != 0)
    {

        cout << "The person has been removed successfully from the list.\n" << endl;
    }

    else
    {

        cout << "The person does not exist in the list.\n" << endl;
    }
}

void personList::printList()
{

    if(personlist.size() > 0)
    {

        for(unsigned int i = 0; i < personlist.size(); i++)
        {

            cout << (i+1) << ". " << personlist[i]->getName() << " (" << personlist[i]->getAge() << ")" << endl;
        }

        cout << endl;
    }
    else
    {

        cout << "Empty\n" << endl;
    }
}

unsigned int personList::getSize()
{

    return personlist.size();
}

//Staff methods

Staff::Staff(string jobTitle, double hireCost)
{
    this->jobTitle = jobTitle;
    this->hireCost = hireCost;
}

void Staff::setJobTitle(string jobTitle)
{
    this->jobTitle = jobTitle;
}

void Staff::setHireCost(double hireCost)
{
    this->hireCost = hireCost;
}


string Staff::getJobTitle()
{
    return jobTitle;
}

double Staff::getHireCost()
{
    return hireCost;
}
bool checkBudget(double tempMoneySpent, double budget, double moneyLeft);


Furniture::Furniture(string name, int amount)
{
    this->name = name;
    this->price = 0;
    this->amount = amount;
    this->description = "";
}

string Furniture::getName()
{

    return name;
}

double Furniture::getPrice()
{

    return price;
}

void Furniture::setPrice(double &price)
{

    this->price = price;
}

int Furniture::getAmount()
{

    return amount;
}

void Furniture::setAmount(int &amount)
{
    this->amount = amount;
}

string Furniture::getDescription()
{

    return description;
}

void Furniture::setDescription(string &description)
{

    this->description = description;
}

Inventory::Inventory()
{

}

vector<Furniture*> Inventory::getInventory()
{
    return inventory;
}
unsigned int Inventory::getInventorySize()
{

    return inventory.size();
}

void Inventory::addFurniture(Furniture *furniture)
{
    int control = 0;

    if(inventory.empty() == false)
    {
        for(unsigned int i = 0; i < inventory.size(); i++)
        {
            if(inventory[i]->getName() == furniture->getName())
            {
                ++control;
                cout << "This type of furniture already exists in the inventory" << endl;
                cout << endl;
            }
        }
    }
    if(control == 0)
    {
        inventory.push_back(furniture);
    }
}

void Inventory::removeFurniture(string &name)
{

    int control = 0;

    for(unsigned int i = 0; i < inventory.size(); i++)
    {

        if(inventory[i]->getName() == name)
        {

            inventory.erase (inventory.begin()+i);

            ++control;
        }
    }

    if(control != 0)
    {

        cout << "The given type of furniture has been removed successfully.\n" << endl;
    }

    else
    {

        cout << "The given type of furniture does not exist in the inventory.\n" << endl;
    }
}

void Inventory::printFurnitureDetail()
{

    if(inventory.size() > 0)
    {

        for(unsigned int i = 0; i < inventory.size(); i++)
        {

            cout << (i+1) << ". " << inventory[i]->getName() << endl;

            cout << "  (i) Quantity: " << inventory[i]->getAmount() << endl;

            cout << "  (ii) Total Price: " << inventory[i]->getPrice() << endl;

            cout << "  (iii) Description: " << inventory[i]->getDescription() << endl;
        }

        cout << endl;
    }
    else
    {

        cout << "Empty\n" << endl;
    }
}

void Inventory::printFurnitureNames()
{

    if(inventory.size() > 0)
    {

        for(unsigned int i = 0; i < inventory.size(); i++)
        {

            cout << (i+1) << ". " << inventory[i]->getName() << endl;
        }

        cout << endl;
    }
    else
    {

        cout << "Empty\n" << endl;
    }
}
//This method is used to modify the information for a given furniture in the inventory (either Quantity or Description)
void Inventory::modify(int &choice)
{

    if(choice <= 0 || choice > inventory.size())
    {

        cout << "Invalid input.\n" << endl;
    }

    else
    {

        int condition = true;

        int choice2 = 0;

        int quantity = 0;

        double price = 0;

        string description = "";

        cout << "Which component of the furniture do you want to modify?\n" << endl;

        cout << "1.Quantity" << endl;

        cout << "2.Description\n" << endl;

        cin >> choice2;

        if(cin.fail())
        {

            cout << endl;

            cerr << "Invalid input." << endl;

            cout << endl;

            cin.clear();

            cin.ignore(256,'\n');

            return;
        }

        cout << endl;
        //The quantity determines the price of the item if it is not free
        if (choice2 == 1)
        {

            cout << "Quantity: ";

            cin >> quantity;

            if(cin.fail())
            {
                cout << endl;

                cerr << "Invalid input." << endl;

                cout << endl;

                cin.clear();

                cin.ignore(256,'\n');

                return;
            }

            cout << endl;
		
	    //Only assign a price to items that are not free in the inventory	
            if(inventory[choice-1]->getName() == "Dining Table" || inventory[choice-1]->getName() == "Chair" ||
                    inventory[choice-1]->getName() == "Drapes" || inventory[choice-1]->getName() == "Lamp" ||
                    inventory[choice-1]->getName() == "Chandelier" || inventory[choice-1]->getName() == "Luxury Couch")
            {

                price = 0;

            }

            else
            {
                //Each item (that is not free) will get a price of $100     
                price = 100*quantity;
            }

            inventory[choice-1]->setPrice(price);
            inventory[choice-1]->setAmount(quantity);
        }

        else if(choice2 == 2)
        {
            cout << "Description: ";

            getline(cin, description);

            cout << endl;

            inventory[choice-1]->setDescription(description);
        }

        else
        {

            cout << "Invalid input.\n" << endl;
        }
    }
}

//Get the total cost of inventory items
double Inventory::currencyTotal()
{

    double sum = 0;

    if(inventory.size() != 0)
    {
        for(unsigned int i = 0; i < inventory.size(); i++)
        {
            sum += inventory[i]->getPrice();
        }
    }

    return sum;
}

void printBudgetBreakdown (string partyName, double totalPriceOfStaff, double budget, double moneyLeft, double moneySpent, double venuePrice, double entertainmentPrice,
                           double furniturePrice, double foodPrice, bool locationIsSelected, bool entertainmentIsSelected,
                           bool furnitureIsSelected, bool foodIsSelected);

void makeItineraryFile(string partyName, string partyTime, string partyDate, int hoursOfParty, string partyLocation, int numOfGuests,
                       int numOfWaiters, int numOfBartenders, Menu* myMenu, string entertainmentChoice, Inventory* inventory,
                       double totalPriceOfStaff, double venuePrice, double entertainmentPrice, double furniturePrice, double foodPrice);
int main()
{

    //The total budget of the user
    double budget;
    //This variable controls how much money has been spent on options in the checklist	
    double moneySpent = 0;
    //This is the name of the file that will contain the first name of guests and their age
    string guestFileName;
    string choices[15];
    double priceOfChoices[15];
    //This variable holds the number of hours of how long the party will go on
    int hoursOfParty;
    //This variable controls how much money is left for the user to spend on options in the checklist
    double moneyLeft;
    //This variable contains the date of the party
    string date;
    //This variable contains the time that the party begins
    string time;
    //This variable is used to calculate how much money is spent for a certain option
    double tempMoneySpent=0;
    //This variable is used to calculate how much money is left after spending money on a certain option
    double tempMoneyLeft=0;
    //The name of the party being held
    string partyName;

    cout << "Welcome to the Party Planner!" << endl;
    cout << "Please enter the name of your party: " << endl;

    getline(cin, partyName);
    cout << "Please enter your budget for " << partyName << ": " << endl;
    cin >> budget;
    cout << "How many hours will the party be?" << endl;
    cin >> hoursOfParty;

    cout << "Enter the date of the party in the form month day year" << endl;
    cin.ignore();
    getline(cin, date);
    cout << "Enter the time of the party in the form 00:00 AM/PM" << endl;

    getline(cin, time);
    cout << "How many guests will be attending the party? Please enter a \".txt\" file "
         << "with the first and last names of the guests: " << endl;
    string s = " ";
    moneyLeft = budget;
    string filename = " ";
    //This object will contain all the guests attending the party
    personList *guestList = new personList();

    cin >> filename;

    ifstream file;

    file.open(filename.c_str(), std::ifstream::in);

    string name = " ";

    int age = 0;


    if (file.is_open())
    {
        while(file >> name)
        {

            file >> age;

            Guest *guest = new Guest(name, age);

            guestList->addPerson(guest);
        }

        guestList->printList();
        unsigned int numOfGuests = guestList->getSize();

        //take in guest names and ages and then put them into the guest list personList


        //determine the number of staff needed for the event
        int numOfWaiters = numOfGuests / 15;
        int numOfBartenders = numOfGuests / 40;


        //create a staff list
        personList *staffList = new personList();

        for (int i = 0; i <= numOfWaiters; i++)
        {
            Staff *staffPointer = new Staff("waiter", 20);
            staffList->addPerson(staffPointer);
        }

        int hourlyPriceOfStaff = (numOfWaiters * 20) + (numOfBartenders * 25);



        int totalPriceOfStaff = hourlyPriceOfStaff * hoursOfParty;

        moneySpent += totalPriceOfStaff;

        moneyLeft = budget - moneySpent;

        if(moneySpent > budget )
        {
            cout << "Sorry, you are $" << moneySpent - budget << " over your budget. You have too many guests for your budget. " << endl;
            return 0;
        }
        else
        {
            cout << "You have spent $" << totalPriceOfStaff << " on the staff for the event. You have $"
                 << moneyLeft <<" left to spend." << endl;
        }
        //go into a loop to set the location, menu, furniture, and the entertainment
        int mainLoopChoice;
	//Contains the amount of money used for entertainment
        double entertainmentPrice;
	//This variable determines if the party checklist's sections are all complete(entertainment, furniture, etc.)
        bool partyIsSet = false;
	//The chosen venue 
        int venueChoice;
	//Contains the amount of money used for venue
        double venuePrice;
	//The location of the venue
        string venueLocation;
	//The name of the venue
        string venue;
        double foodPrice;
        double furniturePrice;
	//The name of the entertainment group
        string entertainment;
        bool foodIsSelected = false;
        bool furnitureIsSelected = false;
        bool entertainmentIsSelected = false;
        bool locationIsSelected = false;
        Menu *myMenu = new Menu(numOfGuests, budget);
        Inventory *in = new Inventory();
        while (!partyIsSet)
        {
            cout << "Please pick what you would like to determine next: " << endl;
            cout << "1) Location " << endl;
            cout << "2) Entertainment " << endl;
            cout << "3) Furniture " << endl;
            cout << "4) Menu Items " << endl;
            cin >> mainLoopChoice;
	    //Location
            if (mainLoopChoice == 1)
            {
		//If the user has previously made a choice
                if(locationIsSelected)
                {
                    string selection;
                    cout << "Would you like to select a new location? Yes or No?"<< endl;
                    cin>> selection;
                    if(selection == "Yes")
                    {
                        moneySpent = moneySpent - venuePrice;
                        moneyLeft = moneyLeft + venuePrice;
                        locationIsSelected = false;
                        venuePrice = 0;
                        venueLocation = "";
                        venue = "";
                    }
                }
		//If user has not previously made a choice for the venue's location, i.e., this is the user's first time choosing
                while(locationIsSelected == false)
                {
                    int locationChoice;
                    cout << "Where would you like " << partyName << " to be located?"<< endl;
                    cout << "1. Gainesville, Florida"<< endl;
                    cout << "2. Los Angeles, California"<< endl;
                    cout << "3. New York City, New York"<< endl;
                    cout << "4. Austin, Texas" << endl;
                    cout << "5. New Orleans, Louisiana" << endl;
                    cin >> locationChoice;

                    bool x = true;

                    while(x)
                    {
                        if(locationChoice == 1)
                        {
                            venueLocation = "Gainesville, Florida";
                            cout<< "Please select a venue in your price range"<< endl;
                            cout << "1. Oak $2000" << endl;
                            cout << "2. The Hampton $5000" << endl;
                            cout << "3. University of Florida Hilton $10000" << endl;
                            cin >> venueChoice;
                            if(venueChoice == 1)
                            {
                                venue = "Oak";
                                venuePrice = 2000;
                            }
                            else if(venueChoice == 2)
                            {
                                venue = "The Hampton";
                                venuePrice = 5000;
                            }
                            else
                            {
                                venue = "University of Florida Hilton";
                                venuePrice = 10000;
                            }
                            tempMoneySpent = moneySpent + venuePrice;
                            tempMoneyLeft = moneyLeft - venuePrice;
                            if(checkBudget(tempMoneySpent, budget, tempMoneyLeft))
                            {
                                moneySpent += venuePrice;
                                moneyLeft -= venuePrice;
                                locationIsSelected = true;
                            }
                            x=false;
                        }

                        else if(locationChoice == 2)
                        {
                            venueLocation = "Los Angeles, California";
                            cout<< "Please select a venue in your price range"<<endl;
                            cout << "1. The Hilton Hotel $2000" << endl;
                            cout << "2. The Hampton $5000" << endl;
                            cout << "3. The Ritz-Carlton $10000" << endl;
                            cin>> venueChoice;
                            if(venueChoice == 1)
                            {
                                venue = "The Hilton Hotel";
                                venuePrice = 2000;
                            }
                            else if(venueChoice == 2)
                            {
                                venue = "The Hampton";
                                venuePrice = 5000;
                            }
                            else
                            {
                                venue = "The Ritz-Carlton";
                                venuePrice = 10000;
                            }
                            tempMoneySpent = moneySpent + venuePrice;
                            tempMoneyLeft = moneyLeft - venuePrice;
                            if(checkBudget(tempMoneySpent, budget, tempMoneyLeft))
                            {
                                moneySpent += venuePrice;
                                moneyLeft -= venuePrice;
                                locationIsSelected = true;
                            }
                            x=false;
                        }
                        else if(locationChoice == 3)
                        {
                            venueLocation = "New York City, New York";
                            cout<< "Please select a venue in your price range"<<endl;
                            cout << "1. The Hilton Hotel $2000" << endl;
                            cout << "2. The Hampton $5000" << endl;
                            cout << "3. The Ritz-Carlton $10000" << endl;
                            cin>> venueChoice;
                            if(venueChoice == 1)
                            {
                                venue = "The Hilton Hotel";
                                venuePrice = 2000;
                                checkBudget(tempMoneySpent, budget, moneyLeft);
                            }
                            else if(venueChoice == 2)
                            {
                                venue = "The Hampton";
                                venuePrice = 5000;
                            }
                            else
                            {
                                venue = "The Ritz-Carlton";
                                venuePrice = 10000;
                            }
                            tempMoneySpent = moneySpent + venuePrice;
                            tempMoneyLeft = moneyLeft - venuePrice;
                            if(checkBudget(tempMoneySpent, budget, tempMoneyLeft))
                            {
                                moneySpent += venuePrice;
                                moneyLeft -= venuePrice;
                                locationIsSelected = true;
                            }
                            x=false;
                        }
                        else if(locationChoice == 4)
                        {
                            venueLocation = "Austin, Texas";
                            cout<< "Please select a venue in your price range"<<endl;
                            cout << "1. The Hilton Hotel $2000" << endl;
                            cout << "2. The Hampton $5000" << endl;
                            cout << "3. The Ritz-Carlton $10000" << endl;
                            cin>> venueChoice;
                            if(venueChoice == 1)
                            {
                                venue = "The Hilton Hotel";
                                venuePrice = 2000;
                            }
                            else if(venueChoice == 2)
                            {
                                venue = "The Hampton";
                                venuePrice = 5000;
                            }
                            else
                            {
                                venue = "The Ritz-Carlton";
                                venuePrice = 10000;
                            }
                            tempMoneySpent = moneySpent + venuePrice;
                            tempMoneyLeft = moneyLeft - venuePrice;
                            if(checkBudget(tempMoneySpent, budget, tempMoneyLeft))
                            {
                                moneySpent += venuePrice;
                                moneyLeft -= venuePrice;
                                locationIsSelected = true;
                            }
                            x=false;
                        }
                        else if(locationChoice == 5)
                        {
                            venueLocation = "New Orleans, Louisiana";
                            cout<< "Please select a venue in your price range"<<endl;
                            cout << "1. The Hilton Hotel $2000" << endl;
                            cout << "2. The Hampton $5000" << endl;
                            cout << "3. The Ritz-Carlton $10000" << endl;
                            cin>> venueChoice;
                            if(venueChoice == 1)
                            {
                                venue = "The Hilton Hotel";
                                venuePrice = 2000;
                            }
                            else if(venueChoice == 2)
                            {
                                venue = "The Hampton";
                                venuePrice = 5000;
                            }
                            else
                            {
                                venue = "The Ritz-Carlton";
                                venuePrice = 10000;
                            }
                            tempMoneySpent = moneySpent + venuePrice;
                            tempMoneyLeft = moneyLeft - venuePrice;
                            if(checkBudget(tempMoneySpent, budget, tempMoneyLeft))
                            {
                                moneySpent += venuePrice;
                                moneyLeft -= venuePrice;
                                locationIsSelected = true;
                            }
                            x=false;
                        }
                        else
                        {
                            cout<< "Please choose a valid selection.";
                        }

                    }
                }
		//Prints out the user's budget status and expenses
                printBudgetBreakdown(partyName, totalPriceOfStaff, budget, moneyLeft, moneySpent, venuePrice, entertainmentPrice, furniturePrice, foodPrice, locationIsSelected, entertainmentIsSelected, furnitureIsSelected, foodIsSelected);

            }
	    //Entertainment
            else if (mainLoopChoice == 2)
            {


                bool e = false;
               //If the user has previously made a choice
               if(entertainmentIsSelected)
                {
                    string selection;
                    cout << "Would you like to select a new entertainer? Yes or No?"<< endl;
                    cin>> selection;
                    if(selection == "Yes")
                    {
                        moneySpent = moneySpent - entertainmentPrice;
                        moneyLeft = moneyLeft + entertainmentPrice;
                        entertainmentIsSelected = false;
                        entertainmentPrice = 0;
                        entertainment = "";
                    }

                }
                while(entertainmentIsSelected == false)
                {
                    int entertainmentChoice;
                    cout << "Please choose your entertainment for the event: " << endl;
                    cout << "1) Rock Band - $1,000" << endl;
                    cout << "2) Jazz Band - $1,250" << endl;
                    cout << "3) DJ - $800" << endl;
                    cout << "4) Acrobats - $950" << endl;

                    cin >> entertainmentChoice;
                    while (!e)
                    {
                        if (entertainmentChoice == 1)
                        {
                            entertainmentIsSelected = true;
                            entertainmentPrice = 1000;
                            entertainment = "Rock Band";
                            e = true;
                            tempMoneySpent = moneySpent + entertainmentPrice;
                            if(checkBudget(tempMoneySpent, budget, moneyLeft))
                            {
                                moneySpent += entertainmentPrice;
                                moneyLeft -= entertainmentPrice;
                            }

                        }
                        else if (entertainmentChoice == 2)
                        {
                            entertainmentIsSelected = true;
                            entertainmentPrice = 1250;
                            entertainment = "Jazz Band";
                            e = true;
                            tempMoneySpent = moneySpent + entertainmentPrice;
                            if(checkBudget(tempMoneySpent, budget, moneyLeft))
                            {
                                moneySpent += entertainmentPrice;
                                moneyLeft -= entertainmentPrice;
                            }
                        }
                        else if (entertainmentChoice == 3)
                        {
                            entertainment = "DJ";
                            entertainmentIsSelected = true;
                            entertainmentPrice = 800;
                            e = true;
                            tempMoneySpent = moneySpent + entertainmentPrice;
                            if(checkBudget(tempMoneySpent, budget, moneyLeft))
                            {
                                moneySpent += entertainmentPrice;
                                moneyLeft -= entertainmentPrice;
                            }
                        }
                        else if (entertainmentChoice == 4)
                        {
                            entertainment = "Acrobats";
                            entertainmentIsSelected = true;
                            entertainmentPrice = 950;
                            e = true;
                            tempMoneySpent = moneySpent + entertainmentPrice;
                            if(checkBudget(tempMoneySpent, budget, moneyLeft))
                            {
                                moneySpent += entertainmentPrice;
                                moneyLeft -= entertainmentPrice;
                            }
                        }
                        else
                        {
                            cout << "Invalid input. Pick another option.";

                        }
                    }
                }
		 //Prints out the user's budget status and expenses
                 printBudgetBreakdown(partyName, totalPriceOfStaff, budget, moneyLeft, moneySpent,  venuePrice, entertainmentPrice, furniturePrice, foodPrice, locationIsSelected, entertainmentIsSelected, furnitureIsSelected, foodIsSelected);
            }
            //Furniture
            else if (mainLoopChoice == 3)
            {
		//Holds the choice from the first list
                string d;
		//Holds the choice from the second list
                string n;
		//control variable for the first while loop
                bool c = true;
		//control variable for the second while loop
                bool control = true;
		//This variable will contain the total cost of items in the inventory
                double cost=0;
		//The list in the while loop contains inventory items that are free of charge(offered by venues), i.e., all have price of $0
                while(c == true)
                {

                    cout << "What would you like to add to your inventory?" << endl;
                    cout << endl;
                    cout << "1. Dining Table" << endl;
                    cout << "2. Chair" << endl;
                    cout << "3. Drapes" << endl;
                    cout << "4. Lamp" << endl;
                    cout << "5. Chandelier" << endl;
                    cout << "6. Luxury Couch" << endl;
                    cout << "7. None of these" << endl;
                    cout << "8. Done adding" << endl;
                    cin >> d;
                    cout << endl;

                    if(d == "1")
                    {

                        string name = "Dining Table (for 8 people) ";

                        int amount = (ceil(numOfGuests) / 8);

                        cout << "Quantity: " << amount << endl;

                        if(cin.fail())
                        {

                            cout << endl;

                            cerr << "Invalid input." << endl;

                            cout << endl;

                            cin.clear();

                            cin.ignore(256,'\n');

                            continue;
                        }

                        cout << endl;

                        Furniture *furn = new Furniture(name, amount);

                        in->addFurniture(furn);
                    }

                    else if(d=="2")
                    {

                        string name = "Chair";

                        int amount = numOfGuests;

                        cout << "Quantity: " << amount << endl;

                        if(cin.fail())
                        {

                            cout << endl;

                            cerr << "Invalid input." << endl;

                            cout << endl;

                            cin.clear();

                            cin.ignore(256,'\n');

                            continue;
                        }

                        cout << endl;

                        Furniture *furn = new Furniture(name, amount);

                        in->addFurniture(furn);
                    }

                    else if(d=="3")
                    {

                        string name = "Drapes";

                        int amount;

                        cout << "Quantity: ";

                        cin >> amount;

                        if(cin.fail())
                        {

                            cout << endl;

                            cerr << "Invalid input." << endl;

                            cout << endl;

                            cin.clear();

                            cin.ignore(256,'\n');

                            continue;
                        }

                        cout << endl;

                        Furniture *furn = new Furniture(name, amount);

                        in->addFurniture(furn);
                    }

                    else if(d == "4")
                    {

                        string name = "Lamp";

                        int amount;

                        cout << "Quantity: ";

                        cin >> amount;

                        if(cin.fail())
                        {

                            cout << endl;

                            cerr << "Invalid input." << endl;

                            cout << endl;

                            cin.clear();

                            cin.ignore(256,'\n');

                            continue;
                        }

                        cout << endl;

                        Furniture *furn = new Furniture(name, amount);

                        in->addFurniture(furn);
                    }

                    else if(d=="5")
                    {

                        string name = "Chandelier";

                        int amount;

                        cout << "Quantity: ";

                        cin >> amount;

                        if(cin.fail())
                        {

                            cout << endl;

                            cerr << "Invalid input." << endl;

                            cout << endl;

                            cin.clear();

                            cin.ignore(256,'\n');

                            continue;
                        }

                        cout << endl;

                        Furniture *furn = new Furniture(name, amount);

                        in->addFurniture(furn);
                    }

                    else if(d=="6")
                    {

                        string name = "Luxury Couch";

                        int amount;

                        cout << "Quantity: ";

                        cin >> amount;

                        if(cin.fail())
                        {

                            cout << endl;

                            cerr << "Invalid input." << endl;

                            cout << endl;

                            cin.clear();

                            cin.ignore(256,'\n');

                            continue;
                        }

                        cout << endl;

                        Furniture *furn = new Furniture(name, amount);

                        in->addFurniture(furn);
                    }

                    else if(d=="7")
                    {

                        c = false;
                    }

                    else if(d=="8")
                    {

                        c = false;
                    }

                    else
                    {
                        cout << "Invalid input, try again.\n" << endl;

                        cin.clear();
                    }

                }
                while(control == true)
                {
                    cout << "1.Add Furniture" << endl;
                    cout << "2.Remove Furniture" << endl;
                    cout << "3.Print Furniture Detail" << endl;
                    cout << "4.Modify Furniture Detail" << endl;
                    cout << "5.Total Cost of Items" << endl;
                    cout << "6.Exit\n" << endl;
                    cin >> n;
                    cout << endl;

                    if(n == "1")
                    {

                        cout << "Name of furniture: ";

                        string name;

                        int amount;

                        cin >> name;

                        cout << endl;

                        cout << "Quantity: ";

                        cin >> amount;

                        if(cin.fail())
                        {

                            cout << endl;

                            cerr << "Invalid input." << endl;

                            cout << endl;

                            cin.clear();

                            cin.ignore(256,'\n');

                            continue;
                        }

                        cout << endl;

                        double price = amount*100;

                        Furniture *furn = new Furniture(name, amount);

                        furn->setPrice(price);

                        in->addFurniture(furn);
                    }

                    else if(n == "2")
                    {

                        cout << "Input the name of the furniture: ";
                        string name;
                        cin >> name;
                        cout << endl;

                        in->removeFurniture(name);
                    }

                    else if(n == "3")
                    {

                        in->printFurnitureDetail();
                    }

                    else if(n == "4")
                    {

                        if(in->getInventorySize() == 0)
                        {

                            cout << "Empty\n" << endl;

                            continue;
                        }

                        else
                        {

                            cout << "Choose the type of furniture that you want to modify:\n" << endl;

                            in->printFurnitureNames();

                            int choice = 0;

                            cin >> choice;

                            if(cin.fail())
                            {

                                cout << endl;

                                cerr << "Invalid input." << endl;

                                cout << endl;

                                cin.clear();

                                cin.ignore(256,'\n');

                                continue;
                            }

                            cout << endl;

                            in->modify(choice);

                        }
                    }

                    else if(n == "5")
                    {

                        cost = in->currencyTotal();

                        cout << "Total: " << cost << endl;

                        cout << endl;
                    }

                    else if (n == "6")
                    {
                        tempMoneyLeft = moneyLeft- cost;
                        tempMoneySpent = moneySpent + cost;
                        furniturePrice = cost;
                        if(checkBudget(tempMoneyLeft, budget, tempMoneySpent))
                        {
                            control = false;
                            furnitureIsSelected = true;
                        }
                        else
                        {
                            cout << "Please modify your furniture selections"<<endl;
                        }
                    }

                    else
                    {

                        cout << "Invalid input, try again.\n" << endl;

                        cin.clear();
                    }
                }
                printBudgetBreakdown(partyName, totalPriceOfStaff, budget, moneyLeft, moneySpent,  venuePrice, entertainmentPrice, furniturePrice, foodPrice, locationIsSelected, entertainmentIsSelected, furnitureIsSelected, foodIsSelected);

            }
            else if (mainLoopChoice == 4)
            {
                int editFood;

                if (foodIsSelected)
                {
                    cout << "Would you like to edit the food selections? (1 = yes, 2 = no): " << endl;
                    cin >> editFood;
                    if (editFood == 1)
                    {
                        continue;
                    }
                    else
                    {
                        cout << "Going back to the main menu." << endl;
                    }
                }
                if (editFood == 1 || !foodIsSelected)
                {
                    //create a menu item

                myMenu->initializeMenuItems();

                //have the user choose the food and print out the menu items
                myMenu->printMenu();

                //get the total price of the menu items
                double totalAppPrice = numOfGuests * myMenu->getChosenAppetizer().getPrice();
                double totalEntPrice = numOfGuests * myMenu->getChosenEntree().getPrice();
                double totalDesPrice = numOfGuests * myMenu->getChosenDessert().getPrice();
                double totalSidePrice = numOfGuests * myMenu->getChosenSide().getPrice();
                foodPrice = totalAppPrice + totalEntPrice + totalDesPrice + totalSidePrice;

                tempMoneySpent = moneySpent + foodPrice;
                tempMoneyLeft= moneyLeft - foodPrice;
                    if(checkBudget(tempMoneySpent, budget, tempMoneyLeft))
                    {
                        moneySpent += foodPrice;
                        moneyLeft -= foodPrice;
                        foodIsSelected = true;
                    }

                printBudgetBreakdown(partyName, totalPriceOfStaff, budget, moneyLeft, moneySpent,  venuePrice, entertainmentPrice, furniturePrice, foodPrice, locationIsSelected, entertainmentIsSelected, furnitureIsSelected, foodIsSelected);
                }
            }
            else
            {
                cout<< "You have chosen an incorrect option"<<endl;
            }

            if(furnitureIsSelected && entertainmentIsSelected && locationIsSelected && foodIsSelected)
            {
                invitationCard(partyName, date, venueLocation, time, venue);
                makeItineraryFile(partyName, time, date, hoursOfParty, venueLocation, numOfGuests,
                       numOfWaiters, numOfBartenders, myMenu, entertainment, in,
                       totalPriceOfStaff, venuePrice, entertainmentPrice, furniturePrice, foodPrice);
                partyIsSet = true;
                break;
            }
        }
    }
    else
    {
        cout << "File was not opened.";
    }


}
bool checkBudget(double tempMoneySpent, double budget, double moneyLeft)
{
    if(tempMoneySpent > budget )
    {
        cout <<endl;
        cout << "Sorry, you are $" << tempMoneySpent - budget << " over your budget. Please select a cheaper option. " << endl;
        cout <<endl;
        return false;
    }
    else
    {
        return true;
    }
}

void printBudgetBreakdown (string partyName, double totalPriceOfStaff, double budget, double moneyLeft, double moneySpent, double venuePrice, double entertainmentPrice,
                           double furniturePrice, double foodPrice, bool locationIsSelected, bool entertainmentIsSelected,
                           bool furnitureIsSelected, bool foodIsSelected)
{
    /*This method will print out how the budget is being used throughout the program.
       It will be used after the Guest List based calculations are made,and also after all of the
       user based selections are inputted. This method will help the user keep track of where their
       money is being used.
       */
    cout << "=====================================" << endl;
    cout << "Budget Breakdown for " << partyName << " : " << endl;
    cout << endl;
    cout << "Staff price (determined by the number of guests) : $" << totalPriceOfStaff << endl;

    if (locationIsSelected)
    {
        cout << "Location Price: $" << venuePrice << endl;
    }
    else
    {
        cout << "Please set the location of the party."<<endl;
    }
    if (entertainmentIsSelected)
    {
        cout << "Entertainment Price:  $" << entertainmentPrice << endl;
    }
    else
    {
        cout << "Please set the entertainment for the party."<<endl;
    }
    if (furnitureIsSelected)
    {
        cout << "Furniture Price: $" << furniturePrice << endl;
    }
    else
    {
        cout << "Please set the furniture for the party."<<endl;
    }
    if (foodIsSelected)
    {
        cout << "Food Price: $" << foodPrice << endl;
    }
    else
    {
        cout << "Please set the food for the party."<<endl;
    }
    cout << "You have spent $" << moneySpent <<endl;
    cout << "There is $" << moneyLeft << " left to spend" <<endl;
    cout << "=====================================" << endl;
    cout<<endl;
}

void makeItineraryFile(string partyName, string partyTime, string partyDate, int hoursOfParty, string partyLocation, int numOfGuests,
                       int numOfWaiters, int numOfBartenders, Menu* myMenu, string entertainmentChoice, Inventory* inventory,
                       double totalPriceOfStaff, double venuePrice, double entertainmentPrice, double furniturePrice, double foodPrice)
{
    /*This method will print out all of the necessary information for the party to a file.
    *It will start with a header with the party name and times, then go to a location.
    *then print the staff and the food options as well as the entertainment.
    */
    ofstream outputFile;
    outputFile.open("EventItinerary.txt");
    outputFile << "><><><><><><><><><><><><><><><><><><><" << endl;
    outputFile << partyName << endl;
    outputFile << "><><><><><><><><><><><><><><><><><><><" << endl;
    outputFile << endl;
    outputFile << endl;
    outputFile << "When: " << partyTime << endl;
    outputFile << endl;
    outputFile << "Length of Party: " << hoursOfParty << endl;
    outputFile << endl;
    outputFile << partyDate <<endl;
    outputFile << endl;
    outputFile << "Where: " << partyLocation << endl;
    outputFile << endl;
    outputFile << numOfGuests << " people will be attending the event.";
    outputFile << endl;
    outputFile << endl;
    outputFile << "><><><><><><><><><><><><><><><><><><><" << endl;
    outputFile << endl;
    outputFile << "STAFF: " << endl;
    outputFile << numOfWaiters << " waiters and " << numOfBartenders << " bartenders will be working the event. " << endl;
    outputFile << endl;
    outputFile << "><><><><><><><><><><><><><><><><><><><" << endl;
    outputFile << endl;
    outputFile << "MENU: " << endl;
    outputFile << "Appetizer: " << myMenu->getChosenAppetizer().getName() << endl;
    outputFile << "Entree: " << myMenu->getChosenEntree().getName() << endl;
    outputFile << "Side: " << myMenu->getChosenSide().getName() << endl;
    outputFile << "Dessert: " << myMenu->getChosenDessert().getName() << endl;
    outputFile << endl;
    outputFile << "><><><><><><><><><><><><><><><><><><><" << endl;
    outputFile << endl;
    outputFile << "ENTERTAINMENT: " << endl;
    outputFile << entertainmentChoice << endl;
    outputFile << endl;
    outputFile << "><><><><><><><><><><><><><><><><><><><" << endl;
    outputFile << endl;
    outputFile << "FURNITURE: " << endl;
    //print furniture
    vector <Furniture*> rInvent= inventory->getInventory();
    for (int i = 0; i < rInvent.size(); i++)
    {
        outputFile << i + 1 << ") " << rInvent[i]->getName() << "  " << rInvent[i]->getAmount() << endl;
    }
    outputFile << endl;
    outputFile << "><><><><><><><><><><><><><><><><><><><" << endl;
    outputFile << endl;
    outputFile << "BUDGET BREAKDOWN: " << endl;
    //put the prices of the categories in this part
    outputFile << "Staff price : $" << totalPriceOfStaff << endl;
    outputFile << "Location Price: $" << venuePrice << endl;
    outputFile << "Entertainment Price:  $" << entertainmentPrice << endl;
    outputFile << "Furniture Price: $" << furniturePrice << endl;
    outputFile << "Food Price: $" << foodPrice << endl;
    outputFile << endl;
    outputFile << "><><><><><><><><><><><><><><><><><><><" << endl;
    //use check budget method to print out the breakdown of the event
    outputFile << "Thank you for using Event Planner software. Thanks to us, " << partyName << " will be a success!" << endl;

    outputFile.close();
}
