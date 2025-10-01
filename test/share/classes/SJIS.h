#ifndef _SJIS_h_
#define _SJIS_h_
//$ class SJIS
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

#endif // _SJIS_h_