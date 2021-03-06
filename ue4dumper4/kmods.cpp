#include "includes.h"
 string pkg("com.tencent.ig");
 const char* lib_name = "libUE4.so";

bool isStartWith(string str, const char* check) {
    return (str.rfind(check, 0) == 0);
}

bool isEqual(char* s1, const char* s2) {
    return (strcmp(s1, s2) == 0);
}

bool isEqual(string s1, const char* check) {
    string s2(check);
    return (s1 == s2);
}

bool isEqual(string s1, string s2) {
    return (s1 == s2);
}

bool isContain(string str, string check) {
    size_t found = str.find(check);
    return (found != string::npos);
}

void trimStr(string& str) {
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}

bool isASCII(const string& s) {
    return !any_of(s.begin(), s.end(), [](char c) {
        return static_cast<unsigned char>(c) > 127;
        });
}

bool isApexLegends() {
    return isEqual(pkg, "com.ea.gp.apexlegendsmobilefps");
}

bool isFortnite() {
    return isEqual(pkg, "com.epicgames.fortnite");
}

bool isARKSurvival() {
    return isEqual(pkg, "com.studiowildcard.wardrumstudios.ark");
}

bool isPUBGNewState() {
    return isEqual(pkg, "com.pubg.newstate") || isEqual(pkg, "com.pubg.newstate.beta");
}

bool isGameOfPeace() {
    return isEqual(pkg, "com.tencent.tmgp.pubgmhd");
}

bool isPUBGLite() {
    return isEqual(pkg, "com.tencent.iglite");
}

bool isBGMIndia() {
    return isEqual(pkg, "com.pubg.imobile");
}

bool isPUBGSeries() {
    return isEqual(pkg, "com.tencent.ig") ||
        isEqual(pkg, "com.tencent.igce") ||
        isEqual(pkg, "com.pubg.krmobile") ||
        isEqual(pkg, "com.vng.pubgmobile") ||
        isEqual(pkg, "com.rekoo.pubgm") || isPUBGLite() || isBGMIndia();
}