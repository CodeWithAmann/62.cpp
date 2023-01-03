#include <iostream>
// #include <time.h>
// using namespace std;
// class Design
// {
// public:
//     void format(char name[20]);
//     void take_input();
//     void match_data(int comp_turn, int your_turn);
// };
// void Design ::format(char name[20])
// {
//     cout << "============= Welcome " << name << "============= \n --->>>> To The Rock Paper Scissor game <<<---- " << endl;
// }
// void Design ::take_input()
// {
//     cout << "\n############# CHOOSE ANY ONE ############# \n * 0 for Rock \n * 1 for Paper \n * 2 for Scissor \n"
//          << endl;
// }
// void Design ::match_data(int comp_turn, int your_turn)
// {
//     while (1)
//     {
//         if (comp_turn == 0 && your_turn == 0)
//         {
//             cout << "Match draw " << endl;
//             cout << "Becouse you choose 'ROCk' and computer choose also 'ROCK' " << endl;
//             break;
//         }
//         if (comp_turn == 1 && your_turn == 1)
//         {
//             cout << "Match draw " << endl;
//             cout << "Becouse you choose 'PAPER' and computer choose also 'PAPER' " << endl;
//             break;
//         }
//         if (comp_turn == 2 && your_turn == 2)
//         {
//             cout << "Match draw " << endl;
//             cout << "Becouse you choose 'scissor' and computer choose also 'scissor' " << endl;
//             break;
//         }
//         if (comp_turn == 1 && your_turn == 0)
//         {
//             cout << " Computer win " << endl;
//             cout << "Becouse you choose 'Rock' and computer chooose 'Paper' " << endl;
//             break;
//         }
//         if (comp_turn == 1 && your_turn == 2)
//         {
//             cout << " You win " << endl;
//             cout << "Becouse you choose 'Scissor' and computer chooose 'Paper' " << endl;
//             break;
//         }
//         if (comp_turn == 2 && your_turn == 0)
//         {
//             cout << " You win " << endl;
//             cout << "Becouse you choose 'Rock' and computer chooose 'scissor' " << endl;
//             break;
//         }
//         if (comp_turn == 2 && your_turn == 1)
//         {
//             cout << " Computer win " << endl;
//             cout << "Becouse you choose 'Scissor' and computer chooose 'paper' " << endl;
//             break;
//         }
//         if (comp_turn == 0 && your_turn == 1)
//         {
//             cout << " You win " << endl;
//             cout << "Becouse you choose 'Paper' and computer chooose 'Rock' " << endl;
//             break;
//         }
//         if (comp_turn == 0 && your_turn == 2)
//         {
//             cout << " Computer win " << endl;
//             cout << "Becouse you choose 'Rock' and computer chooose 'Scissor' " << endl;
//             break;
//         }
//         else
//             cout << " SORRY YOu Have Entered Invalid INput " << endl;
//             exit(1);
//     }
// }
// int main()
// {
//     char input[15];
//     int comp_turn;
//     int your_turn;
//     Design obj1;
//     cout << "\n Enter The Player Name : " << endl;
//     cin >> input;
//     obj1.format(input);
//     obj1.take_input();
//     cout << "It's Your turn Plz Choose any one " << endl;
//     cin>>your_turn;
//     srand(time(NULL));
//     comp_turn = rand() % 3;
//     obj1.match_data(comp_turn, your_turn);
//     return 0;
// }
