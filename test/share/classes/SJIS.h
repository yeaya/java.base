#ifndef _SJIS_h_
#define _SJIS_h_
//$ class SJIS
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SJIS")
#undef SJIS

namespace java {
	namespace io {
		class File;
	}
}

class $export SJIS : public ::java::lang::Object {
	$class(SJIS, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SJIS();
	void init$();
	static void main($StringArray* args);
	static void rm(::java::io::File* f);
	static void touch(::java::io::File* f);
};

#pragma pop_macro("SJIS")

#endif // _SJIS_h_