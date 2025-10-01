#ifndef _Patterns_h_
#define _Patterns_h_
//$ class Patterns
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export Patterns : public ::java::lang::Object {
	$class(Patterns, 0, ::java::lang::Object)
public:
	Patterns();
	void init$();
	static void ckn($String* prefix, $String* suffix);
	static void cky($String* prefix, $String* suffix);
	static void main($StringArray* args);
	static ::java::io::File* dir;
};

#endif // _Patterns_h_