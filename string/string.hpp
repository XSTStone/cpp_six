//
//  string.hpp
//  string
//
//  Created by stone on 2020/2/15.
//  Copyright © 2020 Stone. All rights reserved.
//

#ifndef string_hpp
#define string_hpp
#include <iostream>

class String {
private:
    char* str;
    int len;
    static int numStrings;
public:
    static const int CINLIM = 80;
    String();
    String(const char*);
    String(const String &);
    ~String();
    int length() const {return len;}
    String & operator=(const String &);
    String & operator=(const char*);
    char & operator[] (int);
    const char & operator[](int) const;
    friend bool operator<(const String &, const String &);
    friend bool operator>(const String &, const String &);
    friend bool operator==(const String &, const String &);
    friend std::istream & operator>>(std::istream &, String &);
    friend std::ostream & operator<<(std::ostream &, const String &);
    static int howMany();
};

#endif /* string_hpp */
