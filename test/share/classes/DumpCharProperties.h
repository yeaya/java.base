#ifndef _DumpCharProperties_h_
#define _DumpCharProperties_h_
//$ class DumpCharProperties
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
	}
}

class $export DumpCharProperties : public ::java::lang::Object {
	$class(DumpCharProperties, 0, ::java::lang::Object)
public:
	DumpCharProperties();
	void init$();
	static $String* charProps(int32_t i);
	static void main($StringArray* args);
	static ::java::util::Locale* turkish;
};

#endif // _DumpCharProperties_h_