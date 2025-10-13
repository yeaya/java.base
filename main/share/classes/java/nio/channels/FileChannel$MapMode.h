#ifndef _java_nio_channels_FileChannel$MapMode_h_
#define _java_nio_channels_FileChannel$MapMode_h_
//$ class java.nio.channels.FileChannel$MapMode
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("READ_ONLY")
#undef READ_ONLY
#pragma push_macro("READ_WRITE")
#undef READ_WRITE

namespace java {
	namespace nio {
		namespace channels {

class $export FileChannel$MapMode : public ::java::lang::Object {
	$class(FileChannel$MapMode, 0, ::java::lang::Object)
public:
	FileChannel$MapMode();
	void init$($String* name);
	virtual $String* toString() override;
	static ::java::nio::channels::FileChannel$MapMode* READ_ONLY;
	static ::java::nio::channels::FileChannel$MapMode* READ_WRITE;
	static ::java::nio::channels::FileChannel$MapMode* PRIVATE;
	$String* name = nullptr;
};

		} // channels
	} // nio
} // java

#pragma pop_macro("PRIVATE")
#pragma pop_macro("READ_ONLY")
#pragma pop_macro("READ_WRITE")

#endif // _java_nio_channels_FileChannel$MapMode_h_