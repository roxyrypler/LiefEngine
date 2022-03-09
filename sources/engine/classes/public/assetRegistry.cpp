#include "AssetRegistry.h"

void AssetRegistry::InitAssetLoad() {
    AssetLoader.AddAsset("testIcon", "./assets/icon.png");
    // Add assets
    // Add assets
    
    AssetLoader.LoadAllAssets();
}