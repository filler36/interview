#include <iostream>

int main() {
    std::cout << "Hello World\n";
    return 0;
}

void check_pass (string password)
{
    string valid_pass = "qwerty123";
    if (password == valid_pass) {
        cout << "Доступ разрешен." << endl;
    } else {
        cout << "Неверный пароль!" << endl;
    }
}
