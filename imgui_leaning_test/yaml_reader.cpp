#include "yaml_reader.h"
#include <fstream>
#include <yaml-cpp/yaml.h>
#include <iostream>
#include <string>
#include <cassert>
bool yaml_file::yaml_parser(const char* path,YAML::Node& doc)
{
    std::cout<<"esgggggggggggg";
    try {
    doc = YAML::Load("/home/sibi/cpp_learning_udemy_beginner_to_beyond/constants/src/sample.yaml");
        return true;
    
    for(auto it=doc.begin();it!=doc.end();++it) {
        std::string key, value;

        std::cout << "Key: ";
    }
    // std::ifstream fin("/home/sibi/cpp_learning_udemy_beginner_to_beyond/constants/src/sample.yaml");
    // YAML::Parser parser(fin);
    
    // YAML::Node doc1 = YAML::LoadAllFromFile(fin);
    // switch (doc.Type()) {
    //     case YAML::NodeType::Null:
    //         std::cout<<" aNull "<<"\n";
    //     case YAML::NodeType::Scalar:
    //         std::cout<<" aScalar "<<"\n";
    //     case YAML::NodeType::Sequence:
    //         std::cout<<" aSequence "<<"\n";
    //     case YAML::NodeType::Map:
    //         std::cout<<"a Map "<<"\n";
    //     case YAML::NodeType::Undefined: 
    //         std::cout<<" aUndefined "<<"\n";
    //     default:
    //         std::cout<<"  "<<doc.Type();
    //     } 
    // config.
    // do stuff
    // /home/sibi/cpp_learning_udemy_beginner_to_beyond/constants/src/config.yaml
    } 
    catch(YAML::ParserException& e) {
        std::cout << e.what() << "\n";
    }
        return false;

}
