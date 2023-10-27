#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <set>

std::vector<std::string> emailFinder(const std::string& input) {
    std::regex emailPattern("[a-zA-Z]+[.]?+[$]?[a-zA-Z0-9]+[@][a-z]+[.][a-z]{2,4}");
    std::smatch match;
    std::vector<std::string> list;
    
    for (std::sregex_iterator it(input.begin(), input.end(), emailPattern); it != std::sregex_iterator(); ++it) {
        list.push_back(it->str());
    }
    
    return list;
}

std::vector<std::string> phoneFinder(const std::string& input) {
    std::regex phonePattern("[6-9]{1}[0-9]{9}");
    std::smatch match;
    std::vector<std::string> list;
    
    for (std::sregex_iterator it(input.begin(), input.end(), phonePattern); it != std::sregex_iterator(); ++it) {
        list.push_back(it->str());
    }
    
    return list;
}

std::vector<std::string> failPhoneFinder(const std::string& input) {
    std::regex failPhonePattern("[0-5]{1}[0-9]{4}[0-9]*");
    std::smatch match;
    std::vector<std::string> list;
    
    for (std::sregex_iterator it(input.begin(), input.end(), failPhonePattern); it != std::sregex_iterator(); ++it) {
        list.push_back(it->str());
    }
    
    return list;
}

int main() {
    clock_t start = clock();

    std::vector<std::string> finalList;
    std::vector<std::string> finalList2;
    std::vector<std::string> failFinalList2;

    try {
        std::ifstream inputFile("/home/hpcsap/my_project/Input/in.txt");
        std::ofstream emailOutputFile("/home/hpcsap/my_project/output/out.txt");
        
        if (inputFile.is_open() && emailOutputFile.is_open()) {
            std::string line;
            
            while (std::getline(inputFile, line)) {
                std::vector<std::string> emailList = emailFinder(line);
                finalList.insert(finalList.end(), emailList.begin(), emailList.end());
            }

            for (int i = 0; i < finalList.size(); ++i) {
                emailOutputFile << i << ") " << finalList[i] << "\n";
            }

            emailOutputFile.close();
            inputFile.close();

            std::ifstream inputFile2("/home/hpcsap/my_project/Input/in.txt");
            std::ofstream phoneOutputFile("/home/hpcsap/my_project/output/out.txt");

            if (inputFile2.is_open() && phoneOutputFile.is_open()) {
                std::string line2;

                while (std::getline(inputFile2, line2)) {
                    std::vector<std::string> phoneList = phoneFinder(line2);
                    finalList2.insert(finalList2.end(), phoneList.begin(), phoneList.end());
                }

                for (int i = 1; i < finalList2.size(); ++i) {
                    phoneOutputFile << i << ") " << finalList2[i] << "\n";
                }

                phoneOutputFile.close();
                inputFile2.close();

                std::ifstream emailFile("/home/hpcsap/my_project/Input/in.txt");
                if (emailFile.is_open()) {
                    std::string line3;

                    while (std::getline(emailFile, line3)) {
                        std::vector<std::string> failPhoneList = failPhoneFinder(line3);
                        failFinalList2.insert(failFinalList2.end(), failPhoneList.begin(), failPhoneList.end());
                    }

                    emailFile.close();

                    std::cout << "*************************** Welcome Ketan Extraction is done ***************************************" << std::endl;
                    std::cout << std::endl;
                    std::cout << "*************** " << finalList.size() << " TOTAL Records OF EmailId are Extracted From file ***********************************" << std::endl;
                    for (const std::string& record : finalList) {
                        std::cout << record << std::endl;
                    }
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::set<std::string> uniqueEmails(finalList.begin(), finalList.end());
                    int filteredCount = uniqueEmails.size();
                    std::cout << "************************** " << filteredCount << " Records of UNIQUE emailID are found ***************************************" << std::endl;
                    std::cout << "Unique email ids are : " << std::endl;
                    for (const std::string& filter : uniqueEmails) {
                        std::cout << filter << std::endl;
                    }
                    std::cout << std::endl;
                    std::cout << "=====================================================================================================================================================================================================" << std::endl;
                    std::cout << std::endl;
                    std::cout << "*********************** " << finalList2.size() << " Records of valid PHONE number are found ***************************************" << std::endl;
                    for (const std::string& record : finalList2) {
                        std::cout << record << std::endl;
                    }
                    std::set<std::string> uniquePhones(finalList2.begin(), finalList2.end());
                    std::cout << "*********************** " << uniquePhones.size() << " Records of UNIQUE Phone Number are found ***************************************" << std::endl;
                    for (const std::string& filter : uniquePhones) {
                        std::cout << filter << std::endl;
                    }
                    std::cout << std::endl;
                    std::cout << "*********************** " << failFinalList2.size() << " Records  of failphon Number are found ***************************************" << std::endl;
                    for (const std::string& record : failFinalList2) {
                        std::cout << record << std::endl;
                    }
                    std::cout << std::endl;
                }
            }
        }

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    clock_t end = clock();
    double executionTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "Execution time: " << executionTime << " seconds" << std::endl;

    return 0;
}
