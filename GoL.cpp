#include <iostream>

using std::cout, std::cin;

int field[20][20] = {0};

void display()
{
    for (int i = 0; i < 20; i ++)
    {
        for (int j = 0; j < 20; j ++)
        {
            cout << field[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n\n\n";
    cin.get();

}

void reproduction()
{
    int nf[20][20];

    for (int i = 0; i < 20; i ++)
    {
        for (int j = 0; j < 20; j ++)
        {
            nf[i][j] = field[i][j];
        }
    }

    for (int i = 0; i < 20; i ++)
    {
        for (int j = 0; j < 20; j ++)
        {
            if (field[i][j] == 1)
            {
                nf[i-1][j-1] = nf[i-1][j] = nf[i-1][j+1] = nf[i][j-1] = nf[i][j+1] = nf[i+1][j-1] = nf[i+1][j] = nf[i+1][j+1] = 1;
            }
        }
    }

    for (int i = 0; i < 20; i ++)
    {
        for (int j = 0; j < 20; j ++)
        {
            field[i][j] = nf[i][j];
        }
    }
}

void death()
{
    int nf[20][20];

    for (int i = 0; i < 20; i ++)
    {
        for (int j = 0; j < 20; j ++)
        {
            nf[i][j] = field[i][j];
        }
    }

    for (int i = 0; i < 20; i ++)
    {
        for (int j = 0; j < 20; j ++)
        {
            if (field[i-1][j-1] == field[i-1][j] == field[i-1][j+1] == field[i][j-1] == field[i][j+1] == field[i+1][j-1] == field[i+1][j] == field[i+1][j+1] == 1)
            {
                nf[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 20; i ++)
    {
        for (int j = 0; j < 20; j ++)
        {
            field[i][j] = nf[i][j];
        }
    }
}

bool edgesFree()
{
    for (int i = 0; i < 20; i ++)
    {
        if ((field[i][0] == 1) || (field[i][19] == 1) || (field[0][i] == 1) || (field[19][i] == 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    unsigned int x, y;

    cout << "Please enter start coordinates of the bacteria colony\n";
    while (x < 1 || x > 18)
    {
        cout << "x = ";
        cin >> x;
    }
    while (y < 1 || y > 18)
    {
        cout << "y = ";
        cin >> y;
    }
    field[y][x] = 1;

    cin.get();


    short int control = 1;

    while (edgesFree())
    {
        display();
        if (control == 1)
        {
            reproduction();
        } else
        {
            death();
        }

        control *= -1;
    }

    display();

    cout << "The bacteria have overcome the field!";

    return 0;
}
