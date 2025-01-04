// ïîäêëþ÷åíèå äåðèêòèâû äëÿ ñòàíäàðòà ââîäà \ âûâîäà
#include <iostream> 
#include <string>

int main()
{
    std::cout << "hey, i programm,the string shortener,if you want leave from programm,please write 'l'." << '\n';

    while (true)
    {

        std::string worked{};

        int num_one{};

        int num_two{};

        std::cout << "please,write something,if you want leave from programm,please write 'l'." << '\n';

        std::cin >> worked;

        if (worked == "l")
        {

            break;

        }

        std::cout << "now,please,write num one,that number means, where to start short string,if you want leave from programm,please write 'l'." << '\n';
        
        std::cin >> num_one;

        if (num_one == 'l')
        {

            break;

        }

        std::cout << "now,please,write num two,that number means, how many symbols get,if you want leave from programm,please write 'l'." << '\n';

        std::cin >> num_two;

        if (num_two == 'l')
        {

            break;

        }

        std::cout << worked.substr(num_one, num_two) << '\n';

    }

    return 0;

}
