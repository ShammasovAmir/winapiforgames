#include <iostream>

#define NOMINMAX
#include <Windows.h>

int main()
{
    char title[14] = "Dungeon Quest";
    int firstRoomCode = MessageBox(
        0, 
        "You enter the first room of a dungeon. On the side of a room is an ungaurded chest. Will you (YES)ignore it and go to the next room, or will you (NO)open the chest?", 
        title, 
        MB_YESNO);

    if (firstRoomCode == IDNO) {
        MessageBox(
            0,
            "The chest was a mimic! It bites your head off!\nYOU DIED!",
            title,
            MB_OK);
        return 0;
    }
    
    int secondRoomCode = MessageBox(
        0,
        "You enter the second room of the dungeon. A skeleton is drawing a bow. The bow looks magical. Whill you (YES)try to block the arrow with your shield or will you (NO)try to dodge the arrow",
        title,
        MB_YESNO);

    if (secondRoomCode == IDYES) {
        MessageBox(
            0,
            "The arrow is magical! It goes right through your shield and into your heart!\nYOU DIED!",
            title,
            MB_OK);
        return 0;
    } else if (secondRoomCode == IDNO) {
        MessageBox(
            0,
            "You dodge the arrow and break the skeleton's skull into many pieces with your mace.",
            title,
            MB_OK);
    }

    int thirdRoomCode = MessageBox(
        0,
        "You enter the third room of the dungeon. You see a big chest. Whill you (YES)open it and take the loot inside or will you (NO)kermit sudoku?",
        title,
        MB_YESNO);

    if (thirdRoomCode == IDYES) {
        MessageBox(
            0,
            "Congratulations, you're rich! You won the game!",
            title,
            MB_OK);
        return 0;
    } else if (thirdRoomCode == IDNO) {
        MessageBox(
            0,
            "YOU DIED!",
            title,
            MB_OK);
        return 0;
    }
    //SECURITY_ATTRIBUTES att;

    //std::cin.get();
    //return 0;
}

