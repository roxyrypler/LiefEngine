#include "assetloader.h"

void AssetLoader::AddAsset(std::string name, std::string path) {
    Assets.insert({ name, path });
}

void AssetLoader::GetAssetList() {
    for (auto asset : Assets) {
        std::cout << "Asset name: " + asset.first + " Path: " + asset.second << std::endl;
    }
}

std::string AssetLoader::GetAsset(std::string assetName) {
    std::string assetPath = "Did not find an asset named: " + assetName;
    for (auto asset : Assets) {
        if (asset.first == assetName) {
            assetPath = asset.second;
        }
    }
    return assetPath;
}

void AssetLoader::LoadAllAssets() {
    for (auto asset : Assets) {
        LoadedAssets.insert({ asset.first, LoadTexture(asset.second.c_str()) });
    }
}

Texture2D AssetLoader::GetLoadedAsset(std::string assetName) {
    Texture2D LAsset;
    for (auto asset : LoadedAssets) {
        if (asset.first == assetName) {
            LAsset = asset.second;
        }
    }
    return LAsset;
}