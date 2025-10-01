#ifndef _java_nio_file_Paths_h_
#define _java_nio_file_Paths_h_
//$ class java.nio.file.Paths
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URI;
	}
}
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

class $import Paths : public ::java::lang::Object {
	$class(Paths, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Paths();
	void init$();
	static ::java::nio::file::Path* get($String* first, $StringArray* more);
	static ::java::nio::file::Path* get(::java::net::URI* uri);
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_Paths_h_