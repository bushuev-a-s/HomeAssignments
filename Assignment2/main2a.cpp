/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 2a
 * Main file
 */

#include <iostream>

int main() {
    std::ifstream infile;
    infile.open("source.pdf",std::ios::binary|std::ios::in);
    std::ofstream outfile;
    std::outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);
    infile.read((char *)&buffer,sizeof(buffer))
    outfile.write((char *)&buffer,sizeof(buffer));
    infile.close();
    outfile.close();

    
}
