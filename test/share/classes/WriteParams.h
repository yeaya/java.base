#ifndef _WriteParams_h_
#define _WriteParams_h_
//$ class WriteParams
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Writer;
	}
}

class $export WriteParams : public ::java::lang::Object {
	$class(WriteParams, 0, ::java::lang::Object)
public:
	WriteParams();
	void init$();
	static void main($StringArray* args);
	static void test(::java::io::Writer* wtr);
	static $ints* values;
	static $Array<char16_t, 2>* b;
};

#endif // _WriteParams_h_