#ifndef _DeleteInterference_h_
#define _DeleteInterference_h_
//$ class DeleteInterference
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ITERATIONS_COUNT")
#undef ITERATIONS_COUNT

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export DeleteInterference : public ::java::lang::Object {
	$class(DeleteInterference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeleteInterference();
	void init$();
	static void deleteAndRecreateDirectory(::java::nio::file::Path* dir);
	static void deleteFileTree(::java::nio::file::Path* file);
	static void lambda$main$0(::java::nio::file::Path* dir);
	static void lambda$main$1(::java::nio::file::Path* dir);
	static void main($StringArray* args);
	static void openAndCloseWatcher(::java::nio::file::Path* dir);
	static const int32_t ITERATIONS_COUNT = 1024;
};

#pragma pop_macro("ITERATIONS_COUNT")

#endif // _DeleteInterference_h_