#ifndef _BlockDeviceSize_h_
#define _BlockDeviceSize_h_
//$ class BlockDeviceSize
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLK_FNAME")
#undef BLK_FNAME
#pragma push_macro("BLK_PATH")
#undef BLK_PATH

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export BlockDeviceSize : public ::java::lang::Object {
	$class(BlockDeviceSize, 0, ::java::lang::Object)
public:
	BlockDeviceSize();
	void init$();
	static void main($StringArray* args);
	static $String* BLK_FNAME;
	static ::java::nio::file::Path* BLK_PATH;
};

#pragma pop_macro("BLK_FNAME")
#pragma pop_macro("BLK_PATH")

#endif // _BlockDeviceSize_h_