//
// Created by Peter A. Kolski on 26.04.17.
//

#ifndef PATTERNDESIGN_STRINGSINGLETON2_H
#define PATTERNDESIGN_STRINGSINGLETON2_H

#include <string>

/*
 * No static member variable!!!!
 * */

class StringSingleton2
{
public:
    std::string &getText()
    {
        return text_;
    }

    void setText( const std::string &text )
    {
        StringSingleton2::text_ = text;
    }

    static StringSingleton2 & Instance()
    {
        static StringSingleton2 *  instance_ = new StringSingleton2;
        return *instance_;
    }

private:
    StringSingleton2() {};
    StringSingleton2( const StringSingleton2 &old);
    const StringSingleton2 operator=( const StringSingleton2 &old );
    ~StringSingleton2() {}

private:
     std::string text_;
};


#endif //PATTERNDESIGN_STRINGSINGLETON2_H
