#ifndef _java_nio_file_FileTreeWalker$EventType_h_
#define _java_nio_file_FileTreeWalker$EventType_h_
//$ class java.nio.file.FileTreeWalker$EventType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("END_DIRECTORY")
#undef END_DIRECTORY
#pragma push_macro("ENTRY")
#undef ENTRY
#pragma push_macro("START_DIRECTORY")
#undef START_DIRECTORY

namespace java {
	namespace nio {
		namespace file {

class FileTreeWalker$EventType : public ::java::lang::Enum {
	$class(FileTreeWalker$EventType, 0, ::java::lang::Enum)
public:
	FileTreeWalker$EventType();
	static $Array<::java::nio::file::FileTreeWalker$EventType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::nio::file::FileTreeWalker$EventType* valueOf($String* name);
	static $Array<::java::nio::file::FileTreeWalker$EventType>* values();
	static ::java::nio::file::FileTreeWalker$EventType* START_DIRECTORY;
	static ::java::nio::file::FileTreeWalker$EventType* END_DIRECTORY;
	static ::java::nio::file::FileTreeWalker$EventType* ENTRY;
	static $Array<::java::nio::file::FileTreeWalker$EventType>* $VALUES;
};

		} // file
	} // nio
} // java

#pragma pop_macro("END_DIRECTORY")
#pragma pop_macro("ENTRY")
#pragma pop_macro("START_DIRECTORY")

#endif // _java_nio_file_FileTreeWalker$EventType_h_