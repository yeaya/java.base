#ifndef _java_nio_file_CopyMoveHelper_h_
#define _java_nio_file_CopyMoveHelper_h_
//$ class java.nio.file.CopyMoveHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class CopyOption;
			class Path;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class CopyMoveHelper : public ::java::lang::Object {
	$class(CopyMoveHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CopyMoveHelper();
	void init$();
	static $Array<::java::nio::file::CopyOption>* convertMoveToCopyOptions($Array<::java::nio::file::CopyOption>* options);
	static void copyToForeignTarget(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options);
	static void moveToForeignTarget(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options);
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_CopyMoveHelper_h_