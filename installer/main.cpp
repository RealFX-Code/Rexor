#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#pragma comment(lib, "urlmon.lib")

using namespace std;

int main()
{
    system("md Temp");
    system("attrib +h Temp");
    HRESULT hr;
    std::cout << "Started Download Process.\n";
    string dwnld_URL = "https://github.com/RealFX-Code/RealFX-Code.github.io/raw/main/etc/rexor/7za.dll";
    string savepath = ".\\Temp\\7za.dll";
    hr = URLDownloadToFile(NULL, dwnld_URL.c_str(), savepath.c_str(), 0, NULL);
    switch (hr)
    {
    case S_OK:
        std::cout << "Downloaded sucsessfully!\n";
        std::cout << "Saved file to .\\7za.dll\n";
        break;
    case E_OUTOFMEMORY:
        std::cout << "Download failed, Out of memory!\n";
        break;
    case INET_E_DOWNLOAD_FAILURE:
        std::cout << "Download failed, Couldn't access file!\n";
        break;
    default:
        std::cout << "Download failed, Unknown error!\n";
        break;
    }
    string dwnld_URL1 = "https://github.com/RealFX-Code/RealFX-Code.github.io/raw/main/etc/rexor/7za.exe";
    string savepath1 = ".\\Temp\\7za.exe";
    hr = URLDownloadToFile(NULL, dwnld_URL1.c_str(), savepath1.c_str(), 0, NULL);
    switch (hr)
    {
    case S_OK:
        std::cout << "Downloaded sucsessfully!\n";
        std::cout << "Saved file to .\\7za.exe\n";
        break;
    case E_OUTOFMEMORY:
        std::cout << "Download failed, Out of memory!\n";
        break;
    case INET_E_DOWNLOAD_FAILURE:
        std::cout << "Download failed, Couldn't access file!\n";
        break;
    default:
        std::cout << "Download failed, Unknown error!\n";
        break;
    }
    string dwnld_URL2 = "https://github.com/RealFX-Code/RealFX-Code.github.io/raw/main/etc/rexor/7zxa.dll";
    string savepath2 = ".\\Temp\\7zxa.dll";
    hr = URLDownloadToFile(NULL, dwnld_URL2.c_str(), savepath2.c_str(), 0, NULL);
    switch (hr)
    {
    case S_OK:
        std::cout << "Downloaded sucsessfully!\n";
        std::cout << "Saved file to .\\7zxa.dll\n";
        break;
    case E_OUTOFMEMORY:
        std::cout << "Download failed, Out of memory!\n";
        break;
    case INET_E_DOWNLOAD_FAILURE:
        std::cout << "Download failed, Couldn't access file!\n";
        break;
    default:
        std::cout << "Download failed, Unknown error!\n";
        break;
    }
    string dwnld_URL3 = "https://github.com/RealFX-Code/RealFX-Code.github.io/raw/main/etc/rexor/Libs.compressed";
    string savepath3 = ".\\Temp\\Libs.compressed";
    hr = URLDownloadToFile(NULL, dwnld_URL3.c_str(), savepath3.c_str(), 0, NULL);
    switch (hr)
    {
    case S_OK:
        std::cout << "Downloaded sucsessfully!\n";
        std::cout << "Saved file to .\\Libs.compressed\n";
        break;
    case E_OUTOFMEMORY:
        std::cout << "Download failed, Out of memory!\n";
        break;
    case INET_E_DOWNLOAD_FAILURE:
        std::cout << "Download failed, Couldn't access file!\n";
        break;
    default:
        std::cout << "Download failed, Unknown error!\n";
        break;
    }
    string dwnld_URL4 = "https://github.com/RealFX-Code/RealFX-Code.github.io/raw/main/etc/rexor/installer.bat";
    string savepath4 = ".\\Temp\\Install.bat";
    hr = URLDownloadToFile(NULL, dwnld_URL4.c_str(), savepath4.c_str(), 0, NULL);
    switch (hr)
    {
    case S_OK:
        std::cout << "Downloaded sucsessfully!\n";
        std::cout << "Saved file to .\\Install.bat\n";
        break;
    case E_OUTOFMEMORY:
        std::cout << "Download failed, Out of memory!\n";
        break;
    case INET_E_DOWNLOAD_FAILURE:
        std::cout << "Download failed, Couldn't access file!\n";
        break;
    default:
        std::cout << "Download failed, Unknown error!\n";
        break;
    }
    string dwnld_URL5 = "https://github.com/RealFX-Code/RealFX-Code.github.io/raw/main/etc/rexor/run.bat";
    string savepath5 = ".\\Temp\\run.bat";
    hr = URLDownloadToFile(NULL, dwnld_URL5.c_str(), savepath5.c_str(), 0, NULL);
    switch (hr)
    {
    case S_OK:
        std::cout << "Downloaded sucsessfully!\n";
        std::cout << "Saved file to .\\Run.bat\n";
        break;
    case E_OUTOFMEMORY:
        std::cout << "Download failed, Out of memory!\n";
        break;
    case INET_E_DOWNLOAD_FAILURE:
        std::cout << "Download failed, Couldn't access file!\n";
        break;
    default:
        std::cout << "Download failed, Unknown error!\n";
        break;
    }
    system("start .\\Temp\\run.bat");
    return 0;
}
