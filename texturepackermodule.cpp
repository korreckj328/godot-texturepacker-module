/* 
texturepackermodule.h 
Author: Jeremiah Korreck
*/

#include "modules/texturepackermodule/texturepackermodule.h"

void TexturepackerModule::add(int p_value) {
    count += p_value;
}

void TexturepackerModule::reset() {
    count = 0;
}

int TexturepackerModule::get_total() const {
    return count;
}

void TexturepackerModule::_bind_methods() {
    ClassDB::bind_method(D_METHOD("add", "value"), 
			&TexturepackerModule::add);
    ClassDB::bind_method(D_METHOD("reset"), 
			&TexturepackerModule::reset);
    ClassDB::bind_method(D_METHOD("get_total"), 
			&TexturepackerModule::get_total);
}

TexturepackerModule::TexturepackerModule() {
    count = 0;
}
