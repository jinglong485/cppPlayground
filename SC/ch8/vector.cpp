#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int main(int argc, char* argv[]){
    std::vector<std::string> destinations;
    destinations.reserve(6);
    destinations.push_back("Paris");
    destinations.push_back("New York");
    destinations.push_back("Singapore");
    std::cout << "Length of vector is " << destinations.size()\
        << std::endl;
    std::cout << "Entries of vector are" << std::endl;
    for(int i = 0; i < 3; i++){
        std::cout << destinations[i] << std::endl;
    }

    std::vector<std::string>::const_iterator c;
    for (c = destinations.begin(); c!=destinations.end(); c++){
        std::cout << *c << std::endl;
    }

    destinations.insert(destinations.begin(), "Sydney");
    destinations.insert(destinations.begin() + 1, "Moscow");
    destinations.push_back("Frankfurt");
    std::cout << "Length of vector is " << destinations.size()\
        << std::endl;
    std::cout << "Entries of vector are" << std::endl;

    for (c=destinations.begin(); c!=destinations.end(); c++){
        std::cout << * c << std::endl;
    }
    destinations.erase(destinations.begin()+3, destinations.end());
    std::cout << "Length of vector is " << destinations.size()\
        << std::endl;
    std::cout << "Entries of vector are" << std::endl;

    for(c=destinations.begin(); c!=destinations.end(); c++){
        std::cout << *c << std::endl;
    }

    sort(destinations.begin(), destinations.end());
    std::cout << "Length of vector is " << destinations.size()\
        << std::endl;
    std::cout << "Entries of vector are" << std::endl;
    
    for(c=destinations.begin(); c!=destinations.end(); c++){
        std::cout << *c << std::endl;
    }

    return 0;
}
