//
// Created by vertog on 03.02.2024.
//

#include "Lesson70_FileStreams.h"
#include "iostream"
#include "fstream"
#include "ios"

void Lesson70_FileStreams::main() {
    // ifstream - reading file stream
    // ofstream - writing file stream
    // fstream - reading and writing file stream

    // also exists for wchar_t
    // wifstream, wofstream, wfstream

    // ios files
    // ios::in - open file for reading
    // ios::out - open file for writing
    // ios::app - file open for after writing, old data don't delete
    // ios::ate - after file opening move pointer to the end
    // ios::trunc - file cut on opening
    // ios::binary - open file with binary format

    std::ofstream out;
    out.open("hello1.txt");

    std::ofstream out2;
    out2.open("hello2.txt", std::ios::app);

    std::ofstream out3;
    out2.open("hello3.txt", std::ios::out | std::ios::trunc);

    std::ifstream in;
    in.open("hello4.txt");

    std::fstream fs;
    fs.open("hello5.txt");


    std::ofstream c_out;
    c_out.open("hello.txt");
    c_out.close();

    std::ifstream c_in;
    c_in.open("hello.txt");
    c_in.close();

    std::fstream c_fs;
    c_fs.open("hello.txt");
    c_fs.close();
}
