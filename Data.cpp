#include "Data.h"

namespace Infoledger {
/*************************************************/
void Data::Print() {
    std::cout << "Type: " << type << ", Content: " << content->operator()() << ", Skill: " << skill;
}
/*************************************************/
std::vector<Data> Data::operator/(Data& d) const {
    // -- find common denominator; if none return
    std::vector<Data> vd;
    if(this->content==d.content) {
        if(this->type==d.type) {
            vd.push_back(d);
            vd[0].skill = (this->skill < d.skill) ? this->skill : d.skill;
        }
        else {
            // return 2 datas
        }
    }
    return vd;
}
/*************************************************/
std::vector<Data> Data::operator*(Data& d) const {

}
/*************************************************/
}
