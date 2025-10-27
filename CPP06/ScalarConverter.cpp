

#include "ScalarConverter.hpp"



void ScalarConverter::convert(const std::string &literal)
{
    int int_;
    double double_;
    float float_;
    char char_;


    if (std::isnan(literal))
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nanf" << std::endl;
    }
    if (literal.size() == 1 && !isdigit(literal[0]))
    {
        char_ = literal[0];
        int_ = static_cast<int>(char_);
        double_ = static_cast<double>(char_);
        float_ = static_cast<float>(char_);
        std::cout << "char : '" << char_ << "'" << std::endl;
        std::cout << "int : " << int_ << std::endl;
        std::cout << "float : " << float_ << std::endl;
        std::cout << "double : " << double_ << std::endl;
        return ;
    }
    if (fromString<int>(literal, int_))
    {
        if (int_ >= 32 && int_ <= 126)
            std::cout << "char : '" << static_cast<char>(int_) << "'" << std::endl;
        else
            std::cout << "non displayable" << std::endl;
        std::cout << "int : " << static_cast<int>(int_) << std::endl;
        std::cout << "float : " << static_cast<float>(int_) << "f" << std::endl;
        std::cout << "double : " << static_cast<double>(int_) << std::endl;
        return ;
    }
    if (fromString<double>(literal, double_))
    {
        if (double_ >= 32 && double_ <= 126)
            std::cout << "char : '" << static_cast<char>(double_) << "'" << std::endl;
        else
            std::cout << "non displayable" << std::endl;
        std::cout << "int : " << static_cast<int>(double_) << std::endl;
        std::cout << "float : " << static_cast<float>(double_) << "f" << std::endl;
        std::cout << "double : " << double_ << std::endl;
        return ;
    }
    if (fromString<float>(literal, float_))
    {
        if (float_ >= 32 && float_ <= 126)
            std::cout << "char : '" << static_cast<char>(float_) << "'" << std::endl;
        else
            std::cout << "non displayable" << std::endl;
        std::cout << "int : " << static_cast<int>(float_) << std::endl;
        std::cout << "float : " << float_ << "f" << std::endl;
        std::cout << "double : " << static_cast<float>(float_) << std::endl;
        return ;
    }
}