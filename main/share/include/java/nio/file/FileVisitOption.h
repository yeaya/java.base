#ifndef _java_nio_file_FileVisitOption_h_
#define _java_nio_file_FileVisitOption_h_
//$ class java.nio.file.FileVisitOption
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FOLLOW_LINKS")
#undef FOLLOW_LINKS

namespace java {
	namespace nio {
		namespace file {

class $import FileVisitOption : public ::java::lang::Enum {
	$class(FileVisitOption, 0, ::java::lang::Enum)
public:
	FileVisitOption();
	static $Array<::java::nio::file::FileVisitOption>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::nio::file::FileVisitOption* valueOf($String* name);
	static $Array<::java::nio::file::FileVisitOption>* values();
	static ::java::nio::file::FileVisitOption* FOLLOW_LINKS;
	static $Array<::java::nio::file::FileVisitOption>* $VALUES;
};

		} // file
	} // nio
} // java

#pragma pop_macro("FOLLOW_LINKS")

#endif // _java_nio_file_FileVisitOption_h_