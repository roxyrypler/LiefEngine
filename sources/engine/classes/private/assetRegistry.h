#ifndef ASSETREGISTRY_H
#define ASSETREGISTRY_H

#include "raylib.h"
#include "assetloader.h"

class AssetRegistry {
    public:
    AssetLoader AssetLoader;

    void InitAssetLoad();
};

#endif // ASSETREGISTRY_H