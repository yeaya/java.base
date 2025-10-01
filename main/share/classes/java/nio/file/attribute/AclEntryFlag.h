#ifndef _java_nio_file_attribute_AclEntryFlag_h_
#define _java_nio_file_attribute_AclEntryFlag_h_
//$ class java.nio.file.attribute.AclEntryFlag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NO_PROPAGATE_INHERIT")
#undef NO_PROPAGATE_INHERIT
#pragma push_macro("FILE_INHERIT")
#undef FILE_INHERIT
#pragma push_macro("DIRECTORY_INHERIT")
#undef DIRECTORY_INHERIT
#pragma push_macro("INHERIT_ONLY")
#undef INHERIT_ONLY

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export AclEntryFlag : public ::java::lang::Enum {
	$class(AclEntryFlag, 0, ::java::lang::Enum)
public:
	AclEntryFlag();
	static $Array<::java::nio::file::attribute::AclEntryFlag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::nio::file::attribute::AclEntryFlag* valueOf($String* name);
	static $Array<::java::nio::file::attribute::AclEntryFlag>* values();
	static ::java::nio::file::attribute::AclEntryFlag* FILE_INHERIT;
	static ::java::nio::file::attribute::AclEntryFlag* DIRECTORY_INHERIT;
	static ::java::nio::file::attribute::AclEntryFlag* NO_PROPAGATE_INHERIT;
	static ::java::nio::file::attribute::AclEntryFlag* INHERIT_ONLY;
	static $Array<::java::nio::file::attribute::AclEntryFlag>* $VALUES;
};

			} // attribute
		} // file
	} // nio
} // java

#pragma pop_macro("NO_PROPAGATE_INHERIT")
#pragma pop_macro("FILE_INHERIT")
#pragma pop_macro("DIRECTORY_INHERIT")
#pragma pop_macro("INHERIT_ONLY")

#endif // _java_nio_file_attribute_AclEntryFlag_h_