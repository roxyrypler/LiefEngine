#ifndef ASSETLOADER_H
#define ASSETLOADER_H
#include <iostream>
#include <vector>
#include <map>
#include "raylib.h"

class AssetLoader {
    private: 
        std::map<std::string, std::string> Assets;
        std::map<std::string, Texture2D> LoadedAssets;
    public:

    void AddAsset(std::string name, std::string path);
    void GetAssetList();
    void LoadAllAssets();
    std::string GetAsset(std::string assetName);
    Texture2D GetLoadedAsset(std::string assetName);

        
};

#endif // ASSETLOADER_H