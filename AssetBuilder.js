const fs = require("fs-extra")
const path = require("path")

function copyFolderSync(from, to) {

    fs.remove(to, err => {
        if (err) return console.error(err)
        console.log("# Asset folder exists, purging it.");
        fs.copy(from, to, function (err) {
            console.log("# Building Asset folder");
            if (err) {
                console.error(err);
            } else {
                console.log("# Asset Folder build success!");
            }
        });
    })
}
//console.log("# Asset folder exists, purging it.");
//fs.rmSync(target + "/assets/", { recursive: true, force: true });
copyFolderSync("./sources/assets", "./build/assets");