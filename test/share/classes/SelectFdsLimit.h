#ifndef _SelectFdsLimit_h_
#define _SelectFdsLimit_h_
//$ class SelectFdsLimit
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FDTOOPEN")
#undef FDTOOPEN
#pragma push_macro("TESTFILE")
#undef TESTFILE

namespace java {
	namespace io {
		class File;
		class FileInputStream;
	}
}

class $export SelectFdsLimit : public ::java::lang::Object {
	$class(SelectFdsLimit, 0, ::java::lang::Object)
public:
	SelectFdsLimit();
	void init$();
	static void main($StringArray* args);
	static void openFiles(int32_t fn, ::java::io::File* f);
	static void prepareTestEnv();
	static const int32_t FDTOOPEN = 1023;
	static $String* TESTFILE;
	static $Array<::java::io::FileInputStream>* testFIS;
};

#pragma pop_macro("FDTOOPEN")
#pragma pop_macro("TESTFILE")

#endif // _SelectFdsLimit_h_