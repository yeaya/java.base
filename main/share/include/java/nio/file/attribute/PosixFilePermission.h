#ifndef _java_nio_file_attribute_PosixFilePermission_h_
#define _java_nio_file_attribute_PosixFilePermission_h_
//$ class java.nio.file.attribute.PosixFilePermission
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("OWNER_READ")
#undef OWNER_READ
#pragma push_macro("GROUP_WRITE")
#undef GROUP_WRITE
#pragma push_macro("GROUP_READ")
#undef GROUP_READ
#pragma push_macro("OTHERS_WRITE")
#undef OTHERS_WRITE
#pragma push_macro("OWNER_WRITE")
#undef OWNER_WRITE
#pragma push_macro("OTHERS_READ")
#undef OTHERS_READ
#pragma push_macro("OTHERS_EXECUTE")
#undef OTHERS_EXECUTE
#pragma push_macro("OWNER_EXECUTE")
#undef OWNER_EXECUTE
#pragma push_macro("GROUP_EXECUTE")
#undef GROUP_EXECUTE

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import PosixFilePermission : public ::java::lang::Enum {
	$class(PosixFilePermission, 0, ::java::lang::Enum)
public:
	PosixFilePermission();
	static $Array<::java::nio::file::attribute::PosixFilePermission>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::nio::file::attribute::PosixFilePermission* valueOf($String* name);
	static $Array<::java::nio::file::attribute::PosixFilePermission>* values();
	static ::java::nio::file::attribute::PosixFilePermission* OWNER_READ;
	static ::java::nio::file::attribute::PosixFilePermission* OWNER_WRITE;
	static ::java::nio::file::attribute::PosixFilePermission* OWNER_EXECUTE;
	static ::java::nio::file::attribute::PosixFilePermission* GROUP_READ;
	static ::java::nio::file::attribute::PosixFilePermission* GROUP_WRITE;
	static ::java::nio::file::attribute::PosixFilePermission* GROUP_EXECUTE;
	static ::java::nio::file::attribute::PosixFilePermission* OTHERS_READ;
	static ::java::nio::file::attribute::PosixFilePermission* OTHERS_WRITE;
	static ::java::nio::file::attribute::PosixFilePermission* OTHERS_EXECUTE;
	static $Array<::java::nio::file::attribute::PosixFilePermission>* $VALUES;
};

			} // attribute
		} // file
	} // nio
} // java

#pragma pop_macro("OWNER_READ")
#pragma pop_macro("GROUP_WRITE")
#pragma pop_macro("GROUP_READ")
#pragma pop_macro("OTHERS_WRITE")
#pragma pop_macro("OWNER_WRITE")
#pragma pop_macro("OTHERS_READ")
#pragma pop_macro("OTHERS_EXECUTE")
#pragma pop_macro("OWNER_EXECUTE")
#pragma pop_macro("GROUP_EXECUTE")

#endif // _java_nio_file_attribute_PosixFilePermission_h_