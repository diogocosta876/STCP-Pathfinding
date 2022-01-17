#ifndef AED_TRANSPORTESPUBLICOSPORTO_STOP_H
#define AED_TRANSPORTESPUBLICOSPORTO_STOP_H

#include <string>

using namespace std;

class Stop {

    std::string code;
    std::string name;
    std::string zone;
    double latitude;
    double longitude;

public:
    Stop(const std::string &code, const std::string &name, const std::string &zone, double latitude, double longitude);

    const std::string& getCode() const;
    const std::string& getName() const;
    const std::string& getZone() const;
    double getLatitude() const;
    double getLongitude() const;

    Stop(Stop *pStop);
};


#endif //AED_TRANSPORTESPUBLICOSPORTO_STOP_H
