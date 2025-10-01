#ifndef _ManyFiles_h_
#define _ManyFiles_h_
//$ class ManyFiles
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUM_FILES")
#undef NUM_FILES

namespace java {
	namespace util {
		class List;
	}
}

class $export ManyFiles : public ::java::lang::Object {
	$class(ManyFiles, 0, ::java::lang::Object)
public:
	ManyFiles();
	void init$();
	static void main($StringArray* args);
	static int32_t count;
	static ::java::util::List* files;
	static ::java::util::List* streams;
	static int32_t NUM_FILES;
};

#pragma pop_macro("NUM_FILES")

#endif // _ManyFiles_h_