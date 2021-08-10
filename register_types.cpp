/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "modules/texturepackermodule/texturepackermodule.h"

void register_texturepackermodule_types() {
    ClassDB::register_class<TexturepackerModule>();
}

void unregister_texturepackermodule_types() {
   // Nothing to do here in this example.
}
