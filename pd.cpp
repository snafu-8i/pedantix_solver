#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>


void enter(){
    INPUT input_enter[2] = {};
    input_enter[0].type = INPUT_KEYBOARD;
    input_enter[0].ki.wVk = 0x0D;
    input_enter[0+1].type = INPUT_KEYBOARD;
    input_enter[0+1].ki.wVk = 0x0D;
    input_enter[0+1].ki.dwFlags = KEYEVENTF_KEYUP;  
    SendInput(2,input_enter,sizeof(INPUT));
    SendInput(2,input_enter,sizeof(INPUT));
    SendInput(2,input_enter,sizeof(INPUT));
    SendInput(2,input_enter,sizeof(INPUT));
    SendInput(2,input_enter,sizeof(INPUT));
}


int main(){
    std::string pedantix = "start https://pedantix.certitudes.org/";
    system(pedantix.c_str());
    Sleep(15000);

    const std::string debut = "alphabet/";
    const std::string fin = ".txt";

    for(int o = 0; o < 26 ; o++){
        int i = 0;
        std::string myText;
        char milieu = 'A' + o;
        std::string total= debut + milieu + fin ;
        std::ifstream file(total);
        while (i<=26) {
            std::getline (file, myText);
            i++;
        }
        while (std::getline (file, myText)) {
            INPUT input[(myText.size()*2)] = {};
            for(int i =0;i<myText.size()*2;i+=2){
                input[i].type = INPUT_KEYBOARD;
                input[i].ki.wVk = VkKeyScan(myText[i/2]);
                input[i+1].type = INPUT_KEYBOARD;
                input[i+1].ki.wVk = VkKeyScan(myText[i/2]);
                input[i+1].ki.dwFlags = KEYEVENTF_KEYUP;  
            }
            SendInput((myText.size()*2),input,sizeof(INPUT));
            Sleep(30);
            enter();
            enter();
            Sleep(25);
            enter();
            enter();
            Sleep(25);
            enter();
            enter();
            Sleep(25);
            enter();
            enter();
        }
        file.close();
    }
    return 0;
}