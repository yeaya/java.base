#ifndef _MacVolumesTest_h_
#define _MacVolumesTest_h_
//$ class MacVolumesTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FIRMLINKS")
#undef FIRMLINKS
#pragma push_macro("SYSTEM_VOLUME")
#undef SYSTEM_VOLUME
#pragma push_macro("DATA_VOLUME")
#undef DATA_VOLUME

class $export MacVolumesTest : public ::java::lang::Object {
	$class(MacVolumesTest, 0, ::java::lang::Object)
public:
	MacVolumesTest();
	void init$();
	static void checkDataVolume();
	static void checkFirmlinks();
	static void checkSystemVolume();
	static void main($StringArray* args);
	static $String* SYSTEM_VOLUME;
	static $String* DATA_VOLUME;
	static $String* FIRMLINKS;
};

#pragma pop_macro("FIRMLINKS")
#pragma pop_macro("SYSTEM_VOLUME")
#pragma pop_macro("DATA_VOLUME")

#endif // _MacVolumesTest_h_