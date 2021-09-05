using System;

namespace TicTacToe
{

    public class Program
    {
        static char[,] lGamePoints =
        {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}
        };

        static bool lResult = false;
        static char[,] lDefaultGamePoints =
        {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}
        };

        static string lPlayer1 = "Ravindra";
        static bool lPlayer1Turn = true;

        static string lPlayer2 = "Dikshya";
        static bool lPlayer2Turn = false;
        static void Main(string[] args)
        {
            int lCountFields = 0;

            GameDesign();

            while (!lResult)
            {
               
                lCountFields++;
                Turn();
                GameDesign();
                GameWin();
            }

        }
        public static void Reset()
        {
            lGamePoints = lDefaultGamePoints;
            GameDesign();
        }

        //Function to change turn of the players
        public static void Turn()
        {
            int lInputField1;
            int lInputField2;
            int lTemp1 = 0;
            int lTemp2 = 0;
            if (lPlayer1Turn == true)
            {
                Console.WriteLine("{0} ! Choose your field : ", lPlayer1);
                lInputField1 = Convert.ToInt32(Console.ReadLine());
                if (lInputField1 != lTemp1) Process(lInputField1, lPlayer1);
                else Console.WriteLine("{0} !Please choose the next field which is not selected!!", lPlayer1);
                lTemp1 = lInputField1;
                lPlayer1Turn = false;
                lPlayer2Turn = true;
            }
            else
            {
                Console.WriteLine("{0} ! Choose your field : ", lPlayer2);
                lInputField2 = Convert.ToInt32(Console.ReadLine());
                if (lInputField2 != lTemp2) Process(lInputField2, lPlayer2);
                else Console.WriteLine("{0} !Please choose the next field which is not selected!!", lPlayer2);
                lTemp1 = lInputField2;
                lPlayer2Turn = false;
                lPlayer1Turn = true;
            }
        }
        public static void Process(int lFields, string Player)
        {
            switch (lFields)
            {
                case 1:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[0, 0] = 'X';
                    }
                    else
                    {
                        lGamePoints[0, 0] = 'O';
                    }
                    break;
                case 2:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[0, 1] = 'X';
                    }
                    else
                    {
                        lGamePoints[0, 1] = 'O';
                    }
                    break;
                case 3:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[0, 2] = 'X';
                    }
                    else
                    {
                        lGamePoints[0, 2] = 'O';
                    }
                    break;
                case 4:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[1, 0] = 'X';
                    }
                    else
                    {
                        lGamePoints[1, 0] = 'O';
                    }
                    break;
                case 5:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[1, 1] = 'X';
                    }
                    else
                    {
                        lGamePoints[1, 1] = 'O';
                    }
                    break;
                case 6:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[1, 2] = 'X';
                    }
                    else
                    {
                        lGamePoints[1, 2] = 'O';
                    }
                    break;
                case 7:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[2, 0] = 'X';
                    }
                    else
                    {
                        lGamePoints[2, 0] = 'O';
                    }
                    break;
                case 8:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[2, 1] = 'X';
                    }
                    else
                    {
                        lGamePoints[2, 1] = 'O';
                    }
                    break;
                case 9:
                    if (Player == lPlayer1)
                    {
                        lGamePoints[2, 2] = 'X';
                    }
                    else
                    {
                        lGamePoints[2, 2] = 'O';
                    }
                    break;
            }

        }
        //Function to display the pattern
        public static void GameDesign()
        {
            Console.Clear();
            Console.WriteLine("   |   |   |");
            Console.WriteLine(" {0} | {1} | {2} |", lGamePoints[0, 0], lGamePoints[0, 1], lGamePoints[0, 2]);
            Console.WriteLine("___|___|___|");
            Console.WriteLine("   |   |   |");
            Console.WriteLine(" {0} | {1} | {2} |", lGamePoints[1, 0], lGamePoints[1, 1], lGamePoints[1, 2]);
            Console.WriteLine("___|___|___|");
            Console.WriteLine("   |   |   |");
            Console.WriteLine(" {0} | {1} | {2} |", lGamePoints[2, 0], lGamePoints[2, 1], lGamePoints[2, 2]);
            Console.WriteLine("___|___|___|");
        }



       public static void GameWin()
        {
            char[] lPlayers = { 'X', 'O' };
 #region Win
            foreach(char lPlayer in lPlayers)
            {
                if( ((lGamePoints[0, 0] == lPlayer) && (lGamePoints[0, 1] == lPlayer) && (lGamePoints[0, 2] == lPlayer))
                  || ((lGamePoints[1, 0] == lPlayer) && (lGamePoints[1, 1] == lPlayer) && (lGamePoints[1, 2] == lPlayer))
                  || ((lGamePoints[2, 0] == lPlayer) && (lGamePoints[2, 1] == lPlayer) && (lGamePoints[2, 2] == lPlayer))
                  || ((lGamePoints[0, 0] == lPlayer) && (lGamePoints[1, 0] == lPlayer) && (lGamePoints[2, 0] == lPlayer))
                  || ((lGamePoints[0, 1] == lPlayer) && (lGamePoints[1, 1] == lPlayer) && (lGamePoints[2, 1] == lPlayer))
                  || ((lGamePoints[0, 2] == lPlayer) && (lGamePoints[1, 2] == lPlayer) && (lGamePoints[2, 2] == lPlayer))
                  || ((lGamePoints[0, 0] == lPlayer) && (lGamePoints[1, 1] == lPlayer) && (lGamePoints[2, 2] == lPlayer))
                  || ((lGamePoints[0, 2] == lPlayer) && (lGamePoints[1, 1] == lPlayer) && (lGamePoints[2, 0] == lPlayer))
                    )
                {
                    if (lPlayer == 'X')
                    {
                        Console.WriteLine("Ravindra wins!!");
                        lResult = true;
                    }
                    else if (lPlayer == 'O')
                    {
                        Console.WriteLine("Dikschya wins!!");
                        lResult = true;
                    }
#region Resetting
                    Console.WriteLine( "Please press any key to reset the game!");
                    Console.ReadKey();
                    Reset();
#endregion Resetting
                    break;
                }

            }
#endregion Win

        }

    }
}
