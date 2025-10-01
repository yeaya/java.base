#ifndef _ReadParams_h_
#define _ReadParams_h_
//$ class ReadParams
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Reader;
	}
}

class $export ReadParams : public ::java::lang::Object {
	$class(ReadParams, 0, ::java::lang::Object)
public:
	ReadParams();
	void init$();
	static void main($StringArray* args);
	static void test(::java::io::Reader* rdr);
	static $ints* values;
	static $Array<char16_t, 2>* b;
};

#endif // _ReadParams_h_