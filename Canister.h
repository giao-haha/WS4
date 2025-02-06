#ifndef SENECA_CANISTER_H
#define SENECA_CANISTER_H
#include <iostream>
namespace seneca {
    class Canister {
        char* m_contentName;
        double m_diameter; // in centimeters 
        double m_height;   // in centimeters
        double m_contentVolume;  // in CCs

        void setToUnusable();
        bool isEmpty()const;
        bool usable()const;
        bool hasSameContent(const Canister& C)const;
        double capacity()const;
        double volume()const;
    public:
        Canister();
        Canister(const char* contentName);
        Canister(double height, double diameter, const char* contentName = nullptr);
        ~Canister();
        Canister& clear();
        Canister& setContent(const char* contentName);
        Canister& pour(double quantity);
        Canister& pour(Canister& can);
        std::ostream& display()const;
    };
}

#endif // !SENECA_CANISTER_H