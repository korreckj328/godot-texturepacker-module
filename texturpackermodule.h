/* 
texturepackermodule.h 
Author: Jeremiah Korreck
*/

#ifndef TEXTUREPACKER_MODULE_H
#define TEXTUREPACKER_MODULE_H

#include "core/reference.h"

class TexturepackerModule : public Reference {
    GDCLASS(TexturepackerModule, Reference);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int p_value);
    void reset();
    int get_total() const;

    TexturepackerModule();
};

#endif // SUMMATOR_H