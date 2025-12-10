/*
CSC 134
M6HW1- Choose Your Own Adventure 
Gold Tier
Michael Berrios
12/9/2025
This program is to be a Choose your own adventrue that takes inspiration from M5LAB1
*/

#include <iomanip>
#include <iostream>
using namespace std;

//Function declaration
void leaveHouse();
string mentorIntro();
void leftRight(string playerName);
void beginTraining(string playerName);
void buyItems(string playerName);
void healingQuarters(string playerName);
void teleportIsland(string playerName);
void back_in_time(string playerName);
void congratsPlayer(string playerName);

int main()
{
    leaveHouse();
    string playerName = mentorIntro();
    leftRight(playerName);
    return 0;
}

void leaveHouse()
{
    cout << "Hello player. Welcome to the world of Caos. It's time to set off on your adventure." << endl;
    cout << "(Player has left the house)" << endl;
    cout << " " << endl;
}

string mentorIntro()
{
    //Delcare variables
    string playerName;
    
    cout << "(Player bumps into an old man carrying a rare battle axe.)" << endl;
    cout << "Oh hoh! Pardon me! I'm usually a lot aware of where I'm going!" << endl;
    cout << "(Old man recognizes golden pin on player's coat and smirks)" << endl;
    cout << "Ahh. It's you! I was on my way over to the office to see you but this works too. Here, take this" << endl;
    cout << "(Player received 1 Battle ID and 1 Gem7 sword)" << endl;
    cout << "Ah!! Where are my manners! My name is Proffessor Rye. What is your name?" << endl;
    cout << " " << endl;
    cin >> playerName;
    return playerName;
}

void leftRight(string playerName)
{
    string directionChoice;
    cout << " " << endl;
    cout << "Pleasure to meet you " << playerName << ". I won't keep you standing here forever. ";
    cout << "Will you go straight for Healing Quarters, left for Training Zone, or right for Guild Market? " << endl;
    cin >> directionChoice;
        
    // split story depending on left or right
    if (directionChoice == "straight")
    {
        cout << "Ah, nice choice! I'll let you get going then. Good luck on your adventure " << playerName << "!" << endl;
        healingQuarters(playerName);
    }
    else if (directionChoice == "left")
    {
        cout << "Ah, nice choice! I'll let you get going then. Good luck on your adventure " << playerName << "!" << endl;
        beginTraining(playerName);
    }
    else if (directionChoice == "right")
    {
        cout << "Ah, nice choice! I'll let you get going then. Good luck on your adventure " << playerName << "!" << endl;
        buyItems(playerName);
    }
}

void healingQuarters(string playerName)
{
    // Declare variables
    string restChoice;

    cout << " " << endl;
    cout << "Welcome to the Healing Quarters, " << playerName << "! Here you can recover your health after tough battles." << endl;
    cout << "Would you like to rest now? " << endl;
    cin >> restChoice;

    if (restChoice == "yes")
    {
        cout << "Ok. " << playerName << ". Your health bar has now returned to full health." << endl;
    }
    else
    {
        cout << "Very well, " << playerName << ". Remember to take care of yourself out there!" << endl;
    }
    back_in_time(playerName);
}

void beginTraining(string playerName)
{
    cout << " " << endl;
    cout << "(" << playerName << " has entered the Training Zone)"<< endl;
    cout << "(A wizard appears and offers to train you in the art of spell casting.)" << endl;
    cout << "Hello there, young adventurer! I see great potential in you. ";
    cout << "But first, let me test your combat skills. " << endl;
    cout << "Prepare to face a training golem! " << endl;
    cout << "(After a fierce battle, " << playerName << " emerges victorious!)" << endl;
    back_in_time(playerName);
}

void buyItems(string playerName)
{
    cout << " " << endl;
    cout << "(" << playerName << " has entered the Guild Market) " << endl;
    cout << "Welcome to the Guild Market, " << playerName << "! Here you can purchase various items to aid you on your journey." << endl;
    cout << "(" << playerName << " finds a mysterious KEY on the shelf and touches it. " << playerName << " is instantly transported somewhere else.)" << endl;
    teleportIsland(playerName);

}

void teleportIsland(string playerName)
{
    cout << " " << endl;
    cout << "(" << playerName << " has been teleported to a mysterious island)" << endl;
    cout << "(A voice echoes around " << playerName << ") " << endl;
    cout << "Find the hidden treasure to return home, " << playerName << "!" << endl;
    cout << "(" << playerName << " yells back)" << endl;
    cout << "Who are you? Where am I? " << endl;
    cout << "(Mysterious voice responds)" << endl;
    cout << "All will be revealed in time, " << playerName << ". Now, begin your search!" << endl;
    cout << "(" << playerName << " looks around the island and finds a worn treasure chest buried in the sand.)" << endl;
    cout << "(" << playerName << " digs up the chest and puts KEY in the lock. The chest creaks open to reveal a glowing portal.)" << endl;
    cout << "(" << playerName << " steps through the portal and finds themselves back at the Guild Market.)" << endl;
    congratsPlayer(playerName);
}

void back_in_time(string playerName)
{
    string directionChoice;

    cout << " " << endl;
    cout << "(Random voice in " << playerName << "'s head) " << endl;
    cout << "Your adventure still needs to continue. ";
    cout << "TELEPORT ENGAGE" << endl;
    
    cout << "(" << playerName << " has been teleported back in time to when he met Professor Rye.)" << endl;
    cout << "  " << endl;
    cout << "Pleasure to meet you " << playerName << ". I won't keep you standing here forever. ";
    cout << "Will you go straight for Healing Quarters, left for Training Zone, or right for Guild Market? " << endl;
    cin >> directionChoice;
        
    // split story depending on left or right
    if (directionChoice == "straight")
    {
        cout << "Ah, nice choice! I'll let you get going then. Good luck on your adventure " << playerName << "!" << endl;
        healingQuarters(playerName);
    }
    else if (directionChoice == "left")
    {
        cout << "Ah, nice choice! I'll let you get going then. Good luck on your adventure " << playerName << "!" << endl;
        beginTraining(playerName);
    }
    else if (directionChoice == "right")
    {
        cout << "Ah, nice choice! I'll let you get going then. Good luck on your adventure " << playerName << "!" << endl;
        buyItems(playerName);
    }
}

void congratsPlayer(string playerName)
{
    cout << " " << endl;
    cout << "(Mysterious voice speaks again) " << endl;
    cout << "Congratulations " << playerName << "! You have completed your adventure in Caos... for now... " << endl;
}
