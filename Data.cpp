#include "Data.h"
#include <math.h>

namespace Infoledger {
/*************************************************/
void Data::Print() {
    std::cout << "Type: " << type << ", Content: " << content->operator()() << ", Skill: " << skill;
}
/*************************************************/
Data& Data::operator=(Data& d) {
    if(this!=&d) {
        this->type = d.type;
        this->content = d.content;
        this->skill = d.skill;
    }
    return *this;
}
/*************************************************/
DblData& Data::operator/(Data& d) {
    DblData* dd = new DblData;
    Data *denominator, *remiander;
    if ((this->type==d.type)&&(this->content==d.content)) {        
        if(this->skill > d.skill) {
            denominator = new Data(d);
            remiander   = new Data(d);
            remiander->skill =  (this->skill - d.skill);
        } else {
            denominator = nullptr;
            remiander   = new Data(d);
        }
    } else {
        denominator = new Data(DataType::ERROR);
        remiander = nullptr;
    }
    dd->denominator = denominator;
    dd->remainder = remiander;
    return *dd;
}
/*************************************************/
Data& Data::operator*(Data& d) {
    Data* data;
    if ((this->type==d.type)&&(this->content==d.content)) {
        data = this;
        data->skill = (this->skill < d.skill) ? this->skill+std::sqrt(d.skill) : d.skill+std::sqrt(this->skill);
    } else {
        data = new Data(DataType::ERROR);
    }
    return *data;
}
/*************************************************/
Data &Data::operator*=(Data& d) {
    if ((this->type==d.type)&&(this->content==d.content)) {
        this->skill = (this->skill < d.skill) ? this->skill+std::sqrt(d.skill) : d.skill+std::sqrt(this->skill);
    } /*else {
        this->type = DataType::ERROR;
    }*/
    return *this;
}
/*************************************************/
}
