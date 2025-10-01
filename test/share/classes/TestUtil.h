#ifndef _TestUtil_h_
#define _TestUtil_h_
//$ class TestUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export TestUtil : public ::java::lang::Object {
	$class(TestUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestUtil();
	void init$();
	static ::java::nio::file::Path* createDirectoryWithLongPath(::java::nio::file::Path* dir);
	static ::java::nio::file::Path* createTemporaryDirectory($String* where);
	static ::java::nio::file::Path* createTemporaryDirectory();
	static void deleteUnchecked(::java::nio::file::Path* file);
	static void removeAll(::java::nio::file::Path* dir);
	static bool supportsLinks(::java::nio::file::Path* dir);
};

#endif // _TestUtil_h_