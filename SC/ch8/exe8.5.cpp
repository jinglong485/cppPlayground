#include<iostream>
#include<set>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<tuple>

int main(int argc, char* argv[]){
    //first question
    std::map<std::string, int> phonebook = {{"Jenny", 100},{"Bob", 200}};
    //second question
    for(auto c=phonebook.begin(); c!=phonebook.end(); c++){
        std::cout << c->first << " : " << c->second <<std::endl;
    }
    phonebook.insert({"lulala", 300});
    phonebook.insert({"lulala1", 500});
    phonebook.insert({"lulala2", 300});
    phonebook.insert({"lulala3", 700});
    for(auto item:phonebook){
        std::cout << item.first << " : " << item.second <<std::endl;
    }
    for(auto c=phonebook.begin(); c!=phonebook.end(); c++){
        std::cout << c->first << " : " << c->second <<std::endl;
    }
    //third question
    std::cout << phonebook["lulala"] << " : lulala" << std::endl;
    std::for_each(phonebook.begin(), phonebook.end(), [](auto c){std::cout << c.second << std::endl;});
    //fourth question
    std::vector<std::string> names;
    for(auto c = phonebook.begin(); c!= phonebook.end(); c++){
        names.push_back(c->first);
    }
    for(auto c=names.begin(); c!= names.end(); c++){
        std::cout << *c << std::endl;
    }
    //fifth question
    std::set<int> numbers_set;
    std::vector<int> numbers_vector;
    for(auto c=phonebook.begin(); c!=phonebook.end();c++){
        numbers_vector.push_back(c->second);
    }
    for(auto c=numbers_vector.begin(); c!=numbers_vector.end();c++){
        std::cout << *c <<std::endl;
    } 
    for(auto c=numbers_vector.begin(); c!=numbers_vector.end();c++){
        numbers_set.insert(*c);
    }
    if(numbers_set.size() < numbers_vector.size()){
        std::cout << "I find same number!" << std::endl;
    }
    //sixth question
    std::multimap<int, std::string> reverse_phonebook;
    for(auto c = phonebook.begin(); c!=phonebook.end(); c++){
        reverse_phonebook.insert({c->second, c->first});
    }
    for(auto c=reverse_phonebook.begin(); c!=reverse_phonebook.end();c++){
        std::cout << c->first << ":" << c->second <<std::endl;
    }
    //seventh question
    std::map<std::string, std::tuple<int, std::string>> book;
    book.insert({"WTF", std::make_tuple(333333,"holp cowff")});
    book.insert({"WTF1", std::make_tuple(3332333,"holp cowf")});
    book.insert({"WTF2", std::make_tuple(3335323,"holp coafw")});
    book.insert({"WTF3", std::make_tuple(34213433,"holpdfd cow")});
    book.insert({"WTF4", std::make_tuple(32343333,"holp cow3")});
    book.insert({"WTF5", std::make_tuple(33323433,"holp cow3")});
    book.insert({"WTF6", std::make_tuple(33332344,"holp c2ow")});
    book.insert({"WTF7", std::make_tuple(323423333,"holp c2ow")});
    book.insert({"WTF8", std::make_tuple(33423333,"holp 1cow")});
    std::cout << "The length of this map is " << book.size() << std::endl;
    for(auto c=book.begin();c!=book.end();c++){
        std::cout << c->first << " : " << std::get<0>(c->second)\
            << " and " << std::get<1>(c->second) << std::endl;
    }
    return 0;
}
