#ifndef _java_nio_file_Files$AcceptAllFilter_h_
#define _java_nio_file_Files$AcceptAllFilter_h_
//$ class java.nio.file.Files$AcceptAllFilter
//$ extends java.nio.file.DirectoryStream$Filter

#include <java/nio/file/DirectoryStream$Filter.h>

#pragma push_macro("FILTER")
#undef FILTER

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

class Files$AcceptAllFilter : public ::java::nio::file::DirectoryStream$Filter {
	$class(Files$AcceptAllFilter, 0, ::java::nio::file::DirectoryStream$Filter)
public:
	Files$AcceptAllFilter();
	void init$();
	virtual bool accept(::java::nio::file::Path* entry);
	virtual bool accept(Object$* entry) override;
	static ::java::nio::file::Files$AcceptAllFilter* FILTER;
};

		} // file
	} // nio
} // java

#pragma pop_macro("FILTER")

#endif // _java_nio_file_Files$AcceptAllFilter_h_