#ifndef _java_nio_file_Files$1_h_
#define _java_nio_file_Files$1_h_
//$ class java.nio.file.Files$1
//$ extends java.nio.file.DirectoryStream$Filter

#include <java/nio/file/DirectoryStream$Filter.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
			class PathMatcher;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class Files$1 : public ::java::nio::file::DirectoryStream$Filter {
	$class(Files$1, $NO_CLASS_INIT, ::java::nio::file::DirectoryStream$Filter)
public:
	Files$1();
	void init$(::java::nio::file::PathMatcher* val$matcher);
	virtual bool accept(::java::nio::file::Path* entry);
	virtual bool accept(Object$* entry) override;
	::java::nio::file::PathMatcher* val$matcher = nullptr;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_Files$1_h_