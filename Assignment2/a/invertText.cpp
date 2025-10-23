/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 2
 * Text inverting function
 */

#include <fstream>
#include <filesystem>

void invertText(){
    std::instream infile;
    infile.open("source.pdf",std::ios::binary|std::ios::in);

    int filesize=std::filesystem::file_size("source.pdf");
    char* array=new char[filesize];
    infile.read(array,filesize);

    char* reverse=new char[filesize];
    for(int i=0; i<filesize; i++){
        reverse[i]=array[filesize-1-i];
    }

    delete[] array;
    std::ofstream outfile;
    std::outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);
    outfile.write(reverse,filesize);
    delete[] reverse;

    infile.close();
    outfile.close();
}
