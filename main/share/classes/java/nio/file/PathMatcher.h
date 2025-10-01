#ifndef _java_nio_file_PathMatcher_h_
#define _java_nio_file_PathMatcher_h_
//$ interface java.nio.file.PathMatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class $export PathMatcher : public ::java::lang::Object {
	$interface(PathMatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool matches(::java::nio::file::Path* path) {return false;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_PathMatcher_h_