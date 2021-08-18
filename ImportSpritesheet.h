#ifndef IMPORT_SPRITESHEET
#define IMPORT_SPRITESHEET

#include <string>
#include "modules/texturepackermodule/ImageLoader.h"





class ImportSpritesheet {
	ImageLoader *imageLoader = NULL;
public:
	std::string get_importer_name() const;
	std::string get_visible_name() const;
	std::string get_recognized_extensions() const;
	std::string get_save_extension() const;
	std::string get_resource_type() const;
		
};


#endif

