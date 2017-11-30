//
// Created by Peter A. Kolski on 21.04.17.
//

#ifndef PATTERNDESIGN_SIGNLETONBASE_H
#define PATTERNDESIGN_SIGNLETONBASE_H


#include <string>

class StringSingleton
{
public:
    std::string getString() const
    {
        return mString;
    }

    void setString( const std::string &mString )
    {
        StringSingleton::mString = mString;
    }

    static StringSingleton& Instance()
    {
        static StringSingleton *instance = new StringSingleton; // TODO Why does this only run once? Static?
        return *instance; //return adress
    }

private:
    StringSingleton() {}    //default const only for members or friends
    StringSingleton( const StringSingleton &old); // no copy-cTor
    const StringSingleton &operator=( const StringSingleton &old ); // no assignment OP
    ~StringSingleton() {}

private:     // members
    std::string mString;
};


#endif //PATTERNDESIGN_SIGNLETONBASE_H
