/* 
texturepackermodule.h 
Author: Jeremiah Korreck
*/

#ifndef TEXTUREPACKER_MODULE_H
#define TEXTUREPACKER_MODULE_H

#include "core/resource.h"
#include <string.h>
#include "modules/texturepackermodule/ImportTilesheet.h"
#include "modules/texturepackermodule/ImportSpritesheet.h"

class TexturepackerModule : public Resource {
    GDCLASS(TexturepackerModule, Resource);

    ImportTilesheet *importTilesheet = nullptr;
	ImportSpritesheet *importSpritesheet = nullptr;


protected:
    static void _bind_methods();

public:
	std::string get_name() const;

    void reset();

    TexturepackerModule();
};

#endif // SUMMATOR_H
