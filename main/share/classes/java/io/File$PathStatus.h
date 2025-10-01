#ifndef _java_io_File$PathStatus_h_
#define _java_io_File$PathStatus_h_
//$ class java.io.File$PathStatus
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INVALID")
#undef INVALID
#pragma push_macro("CHECKED")
#undef CHECKED

namespace java {
	namespace io {

class File$PathStatus : public ::java::lang::Enum {
	$class(File$PathStatus, $PRELOAD, ::java::lang::Enum)
public:
	File$PathStatus();
	static $Array<::java::io::File$PathStatus>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::io::File$PathStatus* valueOf($String* name);
	static $Array<::java::io::File$PathStatus>* values();
	static ::java::io::File$PathStatus* INVALID;
	static ::java::io::File$PathStatus* CHECKED;
	static $Array<::java::io::File$PathStatus>* $VALUES;
};

	} // io
} // java

#pragma pop_macro("INVALID")
#pragma pop_macro("CHECKED")

#endif // _java_io_File$PathStatus_h_