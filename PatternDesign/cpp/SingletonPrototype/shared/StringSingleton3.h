//
// Created by Peter A. Kolski on 27.04.17.
//

#ifndef PATTERNDESIGN_STRINGSINGLETON3_H
#define PATTERNDESIGN_STRINGSINGLETON3_H


#include <string>

class StringSingleton3
{
public:
    const std::string &getText() const
    {
        return text_;
    }

    void setText( const std::string &text_ )
    {
        StringSingleton3::text_ = text_;
    }

    static StringSingleton3 &Instance()
    {
        static StringSingleton3 *instance_ = new StringSingleton3;
        return *instance_;
    }

private:
    StringSingleton3() {}
    ~StringSingleton3() {}
    StringSingleton3( const StringSingleton3 &old ) {}
    StringSingleton3 operator=( const StringSingleton3 &old ) {}

private:
    std::string     text_;
};


#endif //PATTERNDESIGN_STRINGSINGLETON3_H
