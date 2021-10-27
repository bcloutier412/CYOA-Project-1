// cyoa.cpp
// Name: Brandon Cloutier
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <cstdlib>
#include <iostream>
using namespace std;
void game_over_treasure() {
  cout << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
  cout << "███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀" << endl;
  cout << "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼" << endl;
  cout << "██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀" << endl;
  cout << "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼" << endl;
  cout << "███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄" << endl;
  cout << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
  cout << "███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼" << endl;
  cout << "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼" << endl;
  cout << "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼" << endl;
  cout << "██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼" << endl;
  cout << "███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄" << endl;
  cout << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
  cout << "    < YOU BROKE THE GUILD CODE>" << endl;
  cout << "         < DONT BE GREEDY>" << endl;
}
void game_over() {
  cout << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
  cout << "███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀" << endl;
  cout << "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼" << endl;
  cout << "██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀" << endl;
  cout << "██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼" << endl;
  cout << "███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄" << endl;
  cout << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
  cout << "███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼" << endl;
  cout << "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼" << endl;
  cout << "██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼" << endl;
  cout << "██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼" << endl;
  cout << "███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄" << endl;
  cout << "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼" << endl;
}
void print_dragon(string dragon_health) {
  cout << "                                                   __----~~~~~~~~~~~------___" 
       << endl;
  cout << "                                      .  .   ~~//====......          __--~ ~~" 
       << endl;
  cout << "                      -.            |_|//     |||\\  ~~~~~~::::... /~" 
       << endl;
  cout << "                   ___-==_       _-~o~  ||    |||  \\            _/~~-" 
       << endl;
  cout << "           __---~~~.==~|||=_    -_--~/_-~|-   |\\   \\        _/~" 
       << endl;
  cout << "       _-~~     .=~    |  \\-_    '-~7  /-   /  ||    |      /" 
       << endl;
  cout << "     .~       .~       |   \\ -_    /  /-   /   ||      |   /" 
       << endl;
  cout << "    /  ____  /         |     \\ ~-_/  /|- _/   .||       | /" 
       << endl;
  cout << "    |~~    ~~|--~~~~--_ |     ~==-/   | |~--===~~        .\"" 
       << endl;
  cout << "             '         ~-|      /|    |-~~~       __--~~" 
       << endl;
  cout << "                         |-~~-_/ |    |   ~|_   _-~            /\"" 
       << endl;
  cout << "                              /  |     |__   |/~                |__" 
       << endl;
  cout << "                          _--~ _/ | .-~~____--~-/                  ~~==." 
       << endl;
  cout << "                         ((->/~   '.|||' -_|    ~~-/ ,              . _||" 
       << endl;
  cout << "                                    -_     ~|      ~~---l__i__i__i--~~_/" 
       << endl;
  cout << "                                    _-~-__   ~)  |--______________--~~" 
       << endl;
  cout << "" << endl;
  cout << "                           <: HEALTH: " << dragon_health << ":>" 
       << endl;
}
void print_goblin(string goblin_health) {
cout << "                                        -- --" << endl;
cout << "                                   .-',,^,,'." << endl;
cout << "                                  / |(0)(0)/ |" << endl;
cout << "                                  )/( ,_`_,)\(" << endl;
cout << "                                  `  >-`~(   '" << endl;
cout << "                                _N| |(`| |___" << endl;
cout << "                                \' |/ | |/_-,)" << endl;
cout << "                                 '.(  |`|_<" << endl;
cout << "                                    | _||" << endl;
cout << "                                     | |_|_" << endl;
cout << "                                     |_,_>-'" << endl;
cout << "                               <: HEALTH: " << goblin_health << ":>" << endl;
}
void print_player(string player_health) {
cout << "        _,." << endl;
cout << "    ,` -.)" << endl;
cout << "   ( _/-\\-._" << endl;
cout << "  /,|`--._,-^|            ," << endl;
cout << "  |_| |`-._/||          ,'|" << endl;
cout << "    |  `-, / |         /  /" << endl;
cout << "    |     || |        /  /" << endl;
cout << "     `r-._||/   __   /  /               |1. ATTACK    | " << endl;
cout << " __,-<_     )`-/  `./  /                |2. DODGE     | " << endl;
cout << "'  |   `---'   |   /  /                 |3. HEAL      | " << endl;
cout << "    |           |./  /                  type 1, 2, or 3" << endl;
cout << "    /           //  /" << endl;
cout << "|_/' |         |/  /" << endl;
cout << " |    |   _,^-'/  /" << endl;
cout << " |    , ``  (|/  /" << endl;
cout << "  |,.->._   |X-=/^" << endl;
cout << "  (  /   `-._//^" << endl;
cout << "   `Y-.____(__}" << endl;
cout << "    |     {__)" << endl;
cout << "         ()" << endl;
cout <<"<: HEALTH: " << player_health << ":>" << endl;
}
void print_train() {
cout << "         ,',                                   ,'," << endl;
cout << "      ', ,'                                 ', ,'" << endl;
cout << "   ,----'--------------------------.     ,----'--------------------------.         ------" << endl;
cout << "  ('''|```|```|```|```|```|```|``|` |   ('''|```|```|```|```|```|```|``|``|          -" << endl;
cout << "  |---'---'---'---'---'---'---'--'--|   |---'---'---'---'---'---'---'--'--|   --- - - ---" << endl;
cout << "--,-    ======           ======     |--,_    ======           ======     |==       -----" << endl;
cout << "   '---'(O)(O)'---------'(O)(O)'---'     '---'(O)(O)'---------'(O)(O)'---'         - ---------- "<< endl;
}
bool goblin_fight(){
  string goblin_health = "<3 <3 ";
  string player_health = "<3 <3 <3 ";

  while (true) { //dragon_health.length() >= 0 && player_health.length() >= 0
    // if (dragon_health.length())
    print_goblin(goblin_health);
    print_player(player_health);
    if (goblin_health.length() == 0) {
      cout << "You defeated the Goblin" << endl;
      return true;
    } else if (player_health.length() == 0) {
      cout << "You died..." << endl;
      return false;
    }
    //receive random number for the dragon move set
    int goblin_number;
    int lower = 1,upper = 2;
    srand(time(NULL));
    goblin_number = (rand() % (upper - lower + 1)) + lower;
    // get user input
    int player_answer; // Maniax (39) http://www.cplusplus.com/forum/beginner/58833/
    while (!(cin >> player_answer) || player_answer < 1 || player_answer > 3){
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Please Input 1, 2, or 3" << endl;
    }
    //cout << dragon_number << endl;
    if (player_answer == 1 && goblin_number == 1) {
      cout << "You ATTACKED the Goblin" << endl;
      sleep(1);
      cout << "Goblin Health - <3" << endl;
      goblin_health.pop_back();
      goblin_health.pop_back();
      goblin_health.pop_back();
      sleep(1);
      if (goblin_health.length() <= 0) {
        cout << "You defeated the Goblin" << endl;
        return true;
      }
      cout << "The Goblin ATTACKED" << endl;
      sleep(1);
      cout << "Players Health - <3" << endl;
      player_health.pop_back();
      player_health.pop_back();
      player_health.pop_back();
      sleep(2);
      if (player_health.length() <= 0) {
        cout << "You Died..." << endl;
        return false;
      }
    } else if (player_answer == 1 && goblin_number == 2) {
      cout << "You ATTACKED the Goblin" << endl;
      sleep(1);
      cout << "Goblin Health -<3" << endl;
      goblin_health.pop_back();
      goblin_health.pop_back();
      goblin_health.pop_back();
      sleep(1);
      cout << "The Goblin ATTACKED" << endl;
      sleep(2);
      cout << "The Goblins ATTACK missed" << endl;
    } else if (player_answer == 2 && goblin_number == 1) {
      cout << "The Goblin ATTACKED" << endl;
      sleep(1);
      cout << "You DOGGED the ATTACK" << endl;
    } else if (player_answer == 2 && goblin_number == 2) {
      cout << "The Goblin ATTACKED" << endl;
      sleep(1);
      cout << "You DOGGED the ATTACK" << endl;
    } else if (player_answer == 3 && goblin_number == 1) {
      cout << "You HEALED" << endl;
      player_health += "<3 ";
      sleep(1);
      cout << "The Goblin ATTACKED" << endl;
      sleep(1);
      cout << "You were hurt by the Goblin" << endl;
      player_health.pop_back();
      player_health.pop_back();
      player_health.pop_back();
    } else if (player_answer == 3 && goblin_number == 2) {
      cout << "You HEALED" << endl;
      player_health += "<3 ";
      sleep(1);
      cout << "The Goblin ATTACKED" << endl;
      sleep(1);
      cout << "The Goblin ATTACK missed" << endl;
    }
    sleep(2);
  } 
  return false;
}
bool monster_fight(){
  string dragon_health = "<3 <3 <3 <3 <3 ";
  string player_health = "<3 <3 <3 ";

  while (true) { //dragon_health.length() >= 0 && player_health.length() >= 0
    // if (dragon_health.length())
    print_dragon(dragon_health);
    print_player(player_health);
    if (dragon_health.length() == 0) {
      cout << "You defeated the dragon" << endl;
      return true;
    } else if (player_health.length() == 0) {
      cout << "You died..." << endl;
      sleep(4);
      game_over();
      return false;
    }
    //receive random number for the dragon move set
    int dragon_number;
    int lower = 1,upper = 3;
    srand(time(NULL));
    dragon_number = (rand() % (upper - lower + 1)) + lower;
    // get user input
    int player_answer; // Maniax (39) http://www.cplusplus.com/forum/beginner/58833/
    while (!(cin >> player_answer) || player_answer < 1 || player_answer > 3){
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Please Input 1, 2, or 3" << endl;
    }
    //cout << dragon_number << endl;
    if (player_answer == 1 && dragon_number == 1) {
      cout << "You ATTACKED the Dragon" << endl;
      sleep(1);
      cout << "Dragon Health - <3" << endl;
      dragon_health.pop_back();
      dragon_health.pop_back();
      dragon_health.pop_back();
      sleep(1);
      if (dragon_health.length() <= 0) {
        cout << "You defeated the Dragon" << endl;
        return true;
      }
      cout << "The Dragon ATTACKED" << endl;
      sleep(1);
      cout << "Players Health - <3" << endl;
      player_health.pop_back();
      player_health.pop_back();
      player_health.pop_back();
      if (player_health.length() <= 0) {
        cout << "You Died..." << endl;
        sleep(4);
        game_over();
        return false;
      }
    } else if (player_answer == 1 && dragon_number == 2) {
      cout << "You ATTACKED the Dragon" << endl;
      sleep(1);
      cout << "Dragon Health -<3" << endl;
      dragon_health.pop_back();
      dragon_health.pop_back();
      dragon_health.pop_back();
      sleep(1);
      cout << "The Dragon ATTACKED" << endl;
      sleep(2);
      cout << "The Dragons ATTACK missed" << endl;
    } else if (player_answer == 1 && dragon_number == 3) {
      cout << "You ATTACKED the Dragon" << endl;
      sleep(1);
      cout << "The Dragon shielded the ATTACK" << endl;
    } else if (player_answer == 2 && dragon_number == 1) {
      cout << "The Dragon ATTACKED" << endl;
      sleep(1);
      cout << "You DOGGED the ATTACK" << endl;
    } else if (player_answer == 2 && dragon_number == 2) {
      cout << "The Dragon ATTACKED" << endl;
      sleep(1);
      cout << "You DOGGED the ATTACK" << endl;
    } else if (player_answer == 2 && dragon_number == 3) {
      cout << "The Dragon ATTACKED" << endl;
      sleep(1);
      cout << "You DOGGED the ATTACK" << endl;
    } else if (player_answer == 3 && dragon_number == 1) {
      cout << "You HEALED" << endl;
      player_health += "<3 ";
      sleep(1);
      cout << "The Dragon ATTACKED" << endl;
      sleep(1);
      cout << "You were hurt by the Dragon" << endl;
      player_health.pop_back();
      player_health.pop_back();
      player_health.pop_back();
    } else if (player_answer == 3 && dragon_number == 2) {
      cout << "You HEALED" << endl;
      player_health += "<3 ";
      sleep(1);
      cout << "The Dragon ATTACKED" << endl;
      sleep(1);
      cout << "The Dragons ATTACK missed" << endl;
    } else if (player_answer == 3 && dragon_number == 3) {
      cout << "You HEALED" << endl;
      player_health += "<3 ";
      sleep(1);
      cout << "The Dragon ATTACKED" << endl;
      sleep(1);
      cout << "The Dragons ATTACK missed" << endl;
    }
    sleep(2);
  } 
  return false;
}
bool get_orb_answer() {
  cout << "  *******************************************************************************" << endl;
  cout << "          |                   |                  |                     |" << endl;
  cout << " _________|________________.=""_;=.______________|_____________________|_______" << endl;
  cout << "|                   |  ,- _,=""     ` =.|                  |" << endl;
  cout << "|___________________|__=._o`-._         `=.______________|___________________" << endl;
  cout << "          |                ` =._o` =._      _` =._                     |" << endl;
  cout << " _________|_____________________:=._o  =._. _.-= ' =.__________________|_______" << endl;
  cout << "|                   |    __.--  , ; ` =._o.  ,-   -._  .   |" << endl;
  cout << "|___________________|_._   ,. .`o` `` ,  ` -._ -._    . '__|___________________" << endl;
  cout << "          |           |o` =._` ,  ` `; . . ,   -._ -._; ;              |" << endl;
  cout << " _________|___________| ;`-.o` =._; .  ` '`. |` .  -._ /_______________|_______" << endl;
  cout << "|                   | |o;    ` -.o` =._``  '`   ,__.--o;   |" << endl;
  cout << "|___________________|_| ;     (#) `-.o ``=.`_.--`_o.-; ;___|___________________" << endl;
  cout << "____/______/______/___|o;._    `      ``.o|o_.--`    ;o;____/______/______/____" << endl;
  cout << "/______/______/______/_`=._o--._        ; | ;        ; ;/______/______/______/_" << endl;
  cout << "____/______/______/______/__`=._o--._   ;o|o;     _._;o;____/______/______/____" << endl;
  cout << "/______/______/______/______/____`=._o._; | ;_.--`o.--`_/______/______/______/_" << endl;
  cout << "____/______/______/______/______/_____`=.o|o_.--``___/______/______/______/____" << endl;
  cout << "/______/______/______/______/______/______/______/______/______/______/_____/__" << endl;
  cout << "*******************************************************************************" << endl;
  cout << "                          | 1. REACH INTO THE CHEST |                             " << endl;
  cout << "                          | 2. LEAVE THE DUNGEON    |                             " << endl;
  cout << "                                  TYPE 1 or 2                                     " << endl;
  int player_answer; // Maniax (39) http://www.cplusplus.com/forum/beginner/58833/
    while (!(cin >> player_answer) || player_answer < 1 || player_answer > 2){
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Please Input 1 or 2" << endl;
    }
  if (player_answer == 1) {
    return true;
  } else if (player_answer == 2) {
    return false;
  }
  return false;
}
int get_door_answer() {
  cout << "                            " << endl;
  cout << "   ,-' ;  ! `-.          ,-' ;  ! `-." << endl;
  cout << "  / :  !  :  . |        / :  !  :  . |" << endl;
  cout << " |- ;   --:  ;  |      |- ;   --:  ;  |" << endl;
  cout << " )| .  :)(.  !  |      )| .  :)(.  !  |" << endl;
  cout << " |`    (##)  -  |      |`    (##)  -  |" << endl;
  cout << " |  :  ;`'  (-) (      |  :  ;`'  (-) (" << endl;
  cout << " |  :  :  .     |      |  :  :  .     |" << endl;
  cout << " )- !  ,  ;  ;  |      )- !  ,  ;  ;  |" << endl;
  cout << " || .  .  :  :  |      || .  .  :  :  |" << endl;
  cout << " |` .  |  :  .  |      |` .  |  :  .  |" << endl;
  cout << " |----;----.----|      |----;----.----|" << endl;
  cout << "      DOOR 1                DOOR 2     " << endl;
  cout << " " << endl;
  cout << "           | 1. DOOR 1 |           " << endl;
  cout << "           | 2. DOOR 2 |           " << endl;
  cout << "            TYPE 1 or 2            " << endl;
  int player_answer; // Maniax (39) http://www.cplusplus.com/forum/beginner/58833/
    while (!(cin >> player_answer) || player_answer < 1 || player_answer > 2){
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Please Input 1 or 2" << endl;
    }
  if (player_answer == 1) {
    return 1;
  } else if (player_answer == 2) {
    return 2;
  }
  return 2;
}
int door_decision() {
  // two doors in front of you, you must choose one
  int door_answer = get_door_answer();
  if (door_answer == 1) {
    sleep(2);
    cout << "| I proceed to open the first door |" << endl;
    cout << " " << endl;
    sleep(2);
    cout << "| The instant smell of death flare my up |" << endl;
    cout << "| nostrils and my eyes begin to water    |" << endl;
    cout << " " << endl;
    sleep(4);
    cout << "| Suddenly a large flame appears from the distance |" << endl;
    cout << "| getting closer and closer and closer |" << endl;
    cout << " " << endl;
    sleep(4);
    cout << "| I jump out of the way and draw my sword |" << endl;
    sleep(3);
    bool monster_fight_win = monster_fight();
    if (monster_fight_win == true) {
      cout << " " << endl;
      cout << " " << endl;
      cout << " " << endl;
      sleep(3);
      cout << "| With the Dragon successfully defeated |" << endl;
      cout << "| we made our way out of the Dungeon    |" << endl;
      cout << "| and back to the Hunters Guild         |" << endl;
      cout << "| Headquarters                          |" << endl;
      sleep(5);
      cout << " " << endl;
      cout << "| I was promoted to a S rank Hunter for |" << endl;
      cout << "| defeating the Dragon                  |" << endl;
      sleep(3);
      cout << " " << endl;
      cout << "                                | TO BE CONTINUED....  |" << endl;
      return 1;

    } else if (monster_fight_win == false) {
      game_over();
    }
  } else if (door_answer == 2) {
      sleep(2);
      cout << "| I proceed to open the second door |" << endl;
      cout << " " << endl;
      sleep(2);
      cout << "| My eyes widen as the golden room |" << endl;
      cout << "| shimmers before us               |" << endl;
      cout << " " << endl;
      sleep(4);
      cout << "| A single chest is sits in the |" << endl;
      cout << "| middle of the room, waiting   |" << endl;
      cout << "| to be taken                   |" << endl;
      sleep(4);
    bool orb_answer = get_orb_answer();
    if (orb_answer == true) {
      sleep(3);
      cout << "| I reach into the chest  |" << endl;
      cout << "| to collect the treasure |" << endl;
      cout << " " << endl;
      sleep(4);
      cout << "| I slowly feel my body being sucked |" << endl;
      cout << "| into the chest...                  |" << endl;
      cout << " " << endl;
      cout << " " << endl;
      cout << " " << endl;
      sleep(5);
      game_over_treasure();
      return 3;
    } else if (orb_answer == false) {
      sleep(4);
      cout << "| No I cant... |" << endl;
      sleep(2);
      cout << " " << endl;
      cout << "| I remember back to my hunter    |" << endl;
      cout << "| training. All dungeon treasure  |" << endl;
      cout << "| are cursed to stay in the caves |" << endl;
      sleep(5);
      cout << " " << endl;
      cout << "| I would have died if I touched it |" << endl;
      sleep(2);
      cout << " " << endl;
      cout << "| We made our way out of the Dungeon    |" << endl;
      cout << "| and back to the Hunters Guild         |" << endl;
      cout << "| Headquarters                          |" << endl;
      sleep(3);
      cout << " " << endl;
      cout << "                                | TO BE CONTINUED....  |" << endl;
      return 4;
    }
  }
  return 2;
}
void paragraph_1(string name) {
  cout << "Beep!" << endl;
  sleep(1);
  cout << "" << endl;
  cout << "Beep!!" << endl;
  sleep(1);
  cout << "" << endl;
  cout << "Beep!!!" << endl;
  sleep(2);
  cout << "" << endl;
  cout << "| ughhh this early already,                  |" << endl;
  cout << "| I think to myself as I gain consciousness  |" << endl;
  cout << "| and reach for the snooze button            |" << endl;
  sleep(4);
  cout << " " << endl;
  cout << "                        ***THE DOOR SWINGS OPEN***" << endl;
  sleep(3);
  cout << "" << endl;
  cout << "                                             | HAPPY 18th Birthday " << name << "!!!!                " << endl;
  cout << "                                             | my mother announces with presents          " << endl;
  cout << "                                             | in her hand                                " << endl;
  sleep(4);
  cout << "| It then occurs to me…   |" << endl;
  sleep(2);
  cout << "| Today is the day…       |" << endl;
  sleep(2);
  cout << "| Today is the day I join |" << endl;
  cout << "| the Hunters Guild       |" << endl;
  sleep(3);
  cout << " " << endl;
  cout << "| I jump up, kiss my mother on the |" << endl;
  cout << "| cheek and race out the door      |" << endl;
  sleep(4);
  cout << " " << endl;
  cout << "| “This is the day that ive been waiting for” |" << endl;
  cout << "| I think to myself as I race down the street |" << endl;
  cout << "| to the nearest train                        |" << endl;
  sleep(5);
  cout << " " << endl;
  cout << "| I board on the closest train and |" << endl;
  cout << "| make my way to the capital city  |" << endl;
  sleep(4);
  cout << " " << endl;
  cout << " " << endl;
  print_train();
  cout << " " << endl;
  sleep(3);
  cout << "                                 CAPITAL CITY" << endl;
  sleep(4);
  cout << " " << endl;
  cout << " " << endl;
  cout << "| As I walk to the large golden doors  |" << endl;
  cout << "| that say Hunters Guild Corp. I Think |" << endl;
  cout << "| to myself... Am I ready?             |" << endl;
  sleep(3);
  cout << "                                | TYPE Yes or No |" << endl;
  string answer;
  cin >> answer;
  while(answer != "Yes" && answer != "yes") {
    if (answer == "Yes" || answer == "yes") {
      break;
    } else {
      cout << "Think again" << endl;
      cin >> answer;
    }
  }
  sleep(2);
  cout << "| I open the door and make  |" << endl;
  cout << "| my way to the front desk  |" << endl;
  sleep(3);
  cout << "| “Hey! I'm here to sign    |" << endl;
  cout << "| up for the Hunters Guild” |" << endl;
  sleep(4);
  cout << " " << endl;
  cout << "                                             | The lady responds… okay first you need " << endl;
  cout << "                                             | to repeat the Hunters Guild Oath       " << endl;
  sleep(4);
  cout << "                                             | 'Dont be greedy, dont be a coward, protect the guild'" << endl;
  sleep(2);
  cout << "                                | TYPE the Oath |" << endl;
  while(getchar()=='\n');
  sleep(2);
  cout << "                                             | Welcome to the guild… " << endl;
  sleep(2);
  cout << "                                             | As a Hunter, your duty is to protect" << endl;
  cout << "                                             | the outside world from the monsters in the cave." << endl;
  cout << "                                             | Any treasure inside the caves are cursed and" << endl;
  cout << "                                             | should not be taken or picked up" << endl;
  cout << " " << endl;
  sleep(6);
  cout << "                                             | You may begin your training       " << endl; 
  sleep(4);
  cout << " " << endl;
  cout << " " << endl;
  cout << " " << endl;
  cout << " " << endl;
  cout << "                                 3 YEARS LATER" << endl;
  sleep(3);
  cout << " " << endl;
  cout << " " << endl;
  cout << " " << endl;
  cout << " " << endl;
  cout << "| This by far has been the worst day |" << endl;
  cout << "| protecting the Guild from the      |" << endl;
  cout << "| monsters in the caves              |" << endl;
  cout << " " << endl;
  sleep(4);
  cout << "| After 5 days we have finally made it |" << endl;
  cout << "| to the last dungeon, however I fear  |" << endl;
  cout << "| this is only the beginning           |" << endl;
  cout << " " << endl;
  sleep(5);
  cout << "| I think to myself if I should abandon |" << endl;
  cout << "| this mission and save myself          |" << endl;
  cout << " " << endl;
  sleep(4);
  cout << "| Before I could decide the captian interupts |" << endl;
  sleep(3);
  cout << " " << endl;
  cout << "                                             | Okay men we need some of you to stay " << endl;
  cout << "                                             | and protect the wounded. The rest of " << endl;
  cout << "                                             | you will follow me to defeat the Dungeon " << endl;
  cout << " " << endl;
  cout << " " << endl;
  sleep(4);
  cout << "                                | 1. Defeat the Dungeon  |" << endl;
  cout << "                                | 2. Protect the Wounded |" << endl;
  cout << "                                | 3. Run Away            |" << endl;
  cout << "                                     TYPE 1, 2, or 3       " << endl;
}
int main() {
  cout << "              <Please Enter a Name: >              " << endl;
  string name;
  cin >> name;
  cout << " " << endl;
  sleep(1);
  cout << "                 Welcome " << name << endl;
  cout << "     THIS IS A CHOOSE YOUR OWN ADVENTURE STORY" << endl;
  cout << "               by Brandon Cloutier" << endl;
  cout << " " << endl;
  cout << " " << endl;
  cout << "     | Throughout the story you will be given |" << endl;
  cout << "     | different choices that will affect the |" << endl;
  cout << "     |           path that you take           |" << endl;
  cout << " " << endl;
  cout << " | Artwork by Orca, Jgs, Mt-2, TomekK, Julek Gedek |" << endl;
  cout << "           | ascii.co.uk and asciiart.eu |             " << endl;
  cout << "             | Youtube.com/LearningLad |   " << endl;
  cout << "   | EXPAND THE CONSOLE FOR THE BEST EXPERIENCE |" << endl;
  sleep(8);
  cout << " " << endl;
  cout << "            TYPE START + ENTER TO CONTINUE" << endl;
  string nothing;
  cin >> nothing;
  cout << " " << endl;
  cout << " " << endl;
  cout << " " << endl;
  cout << " " << endl;
  cout << " " << endl;
  cout << " " << endl;
  sleep(4);
  paragraph_1(name);
  int first_answer; // Maniax (39) http://www.cplusplus.com/forum/beginner/58833/
  while (!(cin >> first_answer) || first_answer < 1 || first_answer > 3) {
    cin.clear();
    while (cin.get() != '\n') continue;
    cout << "Please Input 1, 2, or 3" << endl;
  }
  if (first_answer == 1) { //go into the dungeon
    sleep(3);
    cout << "| As we make our way into the Dungeon,  |" << endl;
    cout << "| a sense of terror runs down my spine. |" << endl;
    cout << " " << endl;
    sleep(3);
    cout << "| The sounds of broken bones echo through |" << endl;
    cout << "| the massive hell hole that we found     |" << endl;
    cout << "| ourselves in                            |" << endl;
    cout << " " << endl;
    cout << " " << endl;
    sleep(3);
    cout << "         *CRACK* " << endl;
    sleep(2);
    cout << "                                                        *CRACK*" << endl;
    sleep(2);
    cout << "                            *CRACK*" << endl;
    cout << " " << endl;
    sleep(2);
    cout << "| We finally reach a fork in the road |" << endl;
    cout << " " << endl;
    sleep(2);
    cout << "| Two doors lay before us             | " << endl;
    sleep(2);
    cout << "                                             | Its time to choose, which door to enter " << endl;
    cout << "                                             | Our injured men don't have enough time " << endl;
    cout << "                                             | we must only choose one " << endl;
    sleep(3);
    door_decision(); 
    ///
    //
    //
    //
  } else if (first_answer == 2) { // defend the injured
    sleep(3);
    cout << "| As I decided to stay back and  |" << endl;
    cout << "| protect the wounded, a feeling |" << endl;
    cout << "| relief came over me...         |" << endl;
    sleep(4);
    cout << " " << endl;
    cout << "| I thought to myself...     |" << endl;
    cout << "| This will be all over soon |" << endl;
    sleep(4);
    cout << " " << endl;
    cout << "| Out of nowhere a goblin slashes         |" << endl;
    cout << "| his sword and barely grazes my shoulder |" << endl;
    sleep(4);
    cout << " " << endl;
    cout << "| I draw my sword and prepare to |" << endl;
    cout << "| defend my wounded brothers     |" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    sleep(4);
    bool goblin_fight_win = goblin_fight();// true == win false == lose
    if (goblin_fight_win == false) {
      sleep(4);
      game_over();
      return 3;
    }
    sleep(4);
    cout << " " << endl;
    cout << " " << endl;
    cout << "| As I slay the last monster, |" << endl;
    cout << "| it goes quite in the cave   |" << endl;
    cout << " " << endl;
    sleep(4);
    cout << "                                             | Hey, we need some backup choosing  " << endl;
    cout << "                                             | which door to open or you can continue  " << endl;
    cout << "                                             | protect the injured " << endl;
    cout << " " << endl;
    sleep(4);
    cout << "                                | 1. Join the others     |" << endl;
    cout << "                                | 2. Protect the Wounded |" << endl;
    cout << "                                       TYPE 1 or 2       " << endl;

    int second_answer; // Maniax (39) http://www.cplusplus.com/forum/beginner/58833/
    while (!(cin >> second_answer) || second_answer < 1 || second_answer > 2) {
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Please Input 1 or 2" << endl;
    }
    if (second_answer == 2) {
      sleep(4);
      cout << " " << endl;
      cout << "| I continue to protect the wounded |" << endl;
      cout << " " << endl;
      sleep(3);
      cout << "                                 3 HOURS LATER" << endl;
      cout << " " << endl;
      sleep(3);
      cout << "| Finally the rest of the team returned      |" << endl;
      cout << "| and they successfully defeated the dungeon |" << endl;
      cout << " " << endl;
      sleep(4);
      cout << "| We make our way back to the Hunters Headquaters |" << endl;
      sleep(3);
      cout << " " << endl;
      cout << "                                | TO BE CONTINUED....  |" << endl;
      return 5;
    } else if (second_answer == 1) {
      sleep(4);
      cout << " " << endl;
      cout << "| As we make our way into the Dungeon,  |" << endl;
      cout << "| a sense of terror runs down my spine. |" << endl;
      cout << " " << endl;
      sleep(3);
      cout << "| The sounds of broken bones echo through |" << endl;
      cout << "| the massive hell hole that we found     |" << endl;
      cout << "| ourselves in                            |" << endl;
      cout << " " << endl;
      cout << " " << endl;
      sleep(3);
      cout << "         *CRACK* " << endl;
      sleep(2);
      cout << "                                                        *CRACK*" << endl;
      sleep(2);
      cout << "                            *CRACK*" << endl;
      cout << " " << endl;
      sleep(2);
      cout << "| We finally reach a fork in the road |" << endl;
      cout << " " << endl;
      sleep(2);
      cout << "| Two doors lay before us             | " << endl;
      sleep(2);
      cout << "                                             | Its time to choose, which door to enter " << endl;
      cout << "                                             | Our injured men don't have enough time " << endl;
      cout << "                                             | we must only choose one " << endl;
      sleep(3);
      door_decision();
    }
  } else if (first_answer == 3) { // run away from the fight    
    sleep(4);
      cout << " " << endl;
      cout << "| As the rest of the men prepare to |" << endl;
      cout << "| enter the dungeon I slipped away  |" << endl;
      cout << "| and made my way out of the caves  |" << endl;
      cout << " " << endl;
      sleep(4);
      cout << "| As I am about to leave the cave |" << endl;
      cout << "| I think to myself, Should I be  |" << endl;
      cout << "| leaving my men behind           |" << endl;
      cout << " " << endl;
      sleep(4);
      cout << "                                | 1. Leave the cave  |" << endl;
      cout << "                                | 2. Join the others |" << endl;
      cout << "                                     TYPE 1 or 2       " << endl;
    int third_answer; // Maniax (39) http://www.cplusplus.com/forum/beginner/58833/
    while (!(cin >> third_answer) || third_answer < 1 || third_answer > 2) {
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Please Input 1 or 2" << endl;
    }
    if (third_answer == 1) {
      sleep(4);
      cout << " " << endl;
      cout << "| I made my way back to the Hunters Headquarters |" << endl;
      cout << "| I immediately found the chief and told him     |" << endl;
      cout << "| what happened and that he needs to send        |" << endl;
      cout << "| reinforcements                                 |" << endl;
      cout << " " << endl;
      sleep(5);
      cout << "                        ***THE CHIEF RAISES HIS SWORD***" << endl;
      sleep(3);
      cout << "                                  ***SLASH***" << endl;
      sleep(4);
      cout << " " << endl;
      cout << " " << endl;
      cout << " " << endl;
      game_over();
      cout << "    < YOU BROKE THE GUILD CODE>" << endl;
      cout << "        < DONT BE A COWARD>" << endl;
      return 6;
      // int fourth_answer; // Maniax (39) http://www.cplusplus.com/forum/beginner/58833/
      // while (!(cin >> fourth_answer) || fourth_answer < 1 || fourth_answer > 2) {
      //   cin.clear();
      //   while (cin.get() != '\n') continue;
      //   cout << "Please Input 1 or 2" << endl;
      // }
      // if (fourth_answer == 1) {
      //   sleep(4);
      //   cout << " " << endl;
      //   cout << " " << endl;
      //   cout << "| I made my way out of the cave and to |" << endl;
      //   cout << "| the Hunters Headquarters to call for |" << endl;
      //   cout << "| help                                 |" << endl;
      // } else if (fourth_answer == 2) {
      //   // you die by the public... dont be a coward. GAME OVER
      // }
    } else if (third_answer == 2) {
      sleep(4);
      cout << " " << endl;
      cout << "| I make my way back to the group |" << endl;
      cout << "| before they enter the dungeon   |" << endl;
      sleep(4);
      cout << " " << endl;
      cout << "| As we make our way into the Dungeon,  |" << endl;
      cout << "| a sense of terror runs down my spine. |" << endl;
      cout << " " << endl;
      sleep(3);
      cout << "| The sounds of broken bones echo through |" << endl;
      cout << "| the massive hell hole that we found     |" << endl;
      cout << "| ourselves in                            |" << endl;
      cout << " " << endl;
      cout << " " << endl;
      sleep(3);
      cout << "         *CRACK* " << endl;
      sleep(2);
      cout << "                                                        *CRACK*" << endl;
      sleep(2);
      cout << "                            *CRACK*" << endl;
      cout << " " << endl;
      sleep(2);
      cout << "| We finally reach a fork in the road |" << endl;
      cout << " " << endl;
      sleep(2);
      cout << "| Two doors lay before us             | " << endl;
      sleep(2);
      cout << "                                             | Its time to choose, which door to enter " << endl;
      cout << "                                             | Our injured men don't have enough time " << endl;
      cout << "                                             | we must only choose one " << endl;
      sleep(3);
      door_decision();
    }
  }
  return 0;
}