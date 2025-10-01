#ifndef _FailingConstructors_h_
#define _FailingConstructors_h_
//$ class FailingConstructors
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("UNSUPPORTED_CHARSET")
#undef UNSUPPORTED_CHARSET
#pragma push_macro("FILE_CONTENTS")
#undef FILE_CONTENTS

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

class $export FailingConstructors : public ::java::lang::Object {
	$class(FailingConstructors, 0, ::java::lang::Object)
public:
	FailingConstructors();
	void init$();
	static void check(bool exists, ::java::io::File* file);
	static void fail();
	static void fail($String* message);
	static void main($StringArray* args);
	static void pass();
	static void realMain($StringArray* args);
	static void test(bool exists, ::java::io::File* file);
	static void unexpected($Throwable* t);
	static void verifyContents(::java::io::File* file);
	static $String* fileName;
	static $String* UNSUPPORTED_CHARSET;
	static $String* FILE_CONTENTS;
	static $volatile(int32_t) passed;
	static $volatile(int32_t) failed;
};

#pragma pop_macro("UNSUPPORTED_CHARSET")
#pragma pop_macro("FILE_CONTENTS")

#endif // _FailingConstructors_h_