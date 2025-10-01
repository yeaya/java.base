#ifndef _java_nio_file_AccessMode_h_
#define _java_nio_file_AccessMode_h_
//$ class java.nio.file.AccessMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("EXECUTE")
#undef EXECUTE
#pragma push_macro("WRITE")
#undef WRITE

namespace java {
	namespace nio {
		namespace file {

class $export AccessMode : public ::java::lang::Enum {
	$class(AccessMode, 0, ::java::lang::Enum)
public:
	AccessMode();
	static $Array<::java::nio::file::AccessMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::nio::file::AccessMode* valueOf($String* name);
	static $Array<::java::nio::file::AccessMode>* values();
	static ::java::nio::file::AccessMode* READ;
	static ::java::nio::file::AccessMode* WRITE;
	static ::java::nio::file::AccessMode* EXECUTE;
	static $Array<::java::nio::file::AccessMode>* $VALUES;
};

		} // file
	} // nio
} // java

#pragma pop_macro("READ")
#pragma pop_macro("EXECUTE")
#pragma pop_macro("WRITE")

#endif // _java_nio_file_AccessMode_h_