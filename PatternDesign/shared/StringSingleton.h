//
// Created by Peter A. Kolski on 21.04.17.
//

#ifndef PATTERNDESIGN_SIGNLETONBASE_H
#define PATTERNDESIGN_SIGNLETONBASE_H


#include <string>

class StringSingleton
{
public:
    std::string  getString() const;
    void         setString( const std::string &mString );


    // methods
private:

    // members
private:

    std::string mString;
};


#endif //PATTERNDESIGN_SIGNLETONBASE_H
