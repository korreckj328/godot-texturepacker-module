/* 
texturepackermodule.h 
Author: Jeremiah Korreck
*/

#include "texturepackermodule.h"

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
    ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
    ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}

TexturepackerModule::Summator() {
    count = 0;
}