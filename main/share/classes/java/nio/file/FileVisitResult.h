#ifndef _java_nio_file_FileVisitResult_h_
#define _java_nio_file_FileVisitResult_h_
//$ class java.nio.file.FileVisitResult
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CONTINUE")
#undef CONTINUE
#pragma push_macro("SKIP_SIBLINGS")
#undef SKIP_SIBLINGS
#pragma push_macro("SKIP_SUBTREE")
#undef SKIP_SUBTREE
#pragma push_macro("TERMINATE")
#undef TERMINATE

namespace java {
	namespace nio {
		namespace file {

class $export FileVisitResult : public ::java::lang::Enum {
	$class(FileVisitResult, 0, ::java::lang::Enum)
public:
	FileVisitResult();
	static $Array<::java::nio::file::FileVisitResult>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::nio::file::FileVisitResult* valueOf($String* name);
	static $Array<::java::nio::file::FileVisitResult>* values();
	static ::java::nio::file::FileVisitResult* CONTINUE;
	static ::java::nio::file::FileVisitResult* TERMINATE;
	static ::java::nio::file::FileVisitResult* SKIP_SUBTREE;
	static ::java::nio::file::FileVisitResult* SKIP_SIBLINGS;
	static $Array<::java::nio::file::FileVisitResult>* $VALUES;
};

		} // file
	} // nio
} // java

#pragma pop_macro("CONTINUE")
#pragma pop_macro("SKIP_SIBLINGS")
#pragma pop_macro("SKIP_SUBTREE")
#pragma pop_macro("TERMINATE")

#endif // _java_nio_file_FileVisitResult_h_