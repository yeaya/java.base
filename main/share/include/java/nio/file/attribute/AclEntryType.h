#ifndef _java_nio_file_attribute_AclEntryType_h_
#define _java_nio_file_attribute_AclEntryType_h_
//$ class java.nio.file.attribute.AclEntryType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AUDIT")
#undef AUDIT
#pragma push_macro("DENY")
#undef DENY
#pragma push_macro("ALARM")
#undef ALARM
#pragma push_macro("ALLOW")
#undef ALLOW

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import AclEntryType : public ::java::lang::Enum {
	$class(AclEntryType, 0, ::java::lang::Enum)
public:
	AclEntryType();
	static $Array<::java::nio::file::attribute::AclEntryType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::nio::file::attribute::AclEntryType* valueOf($String* name);
	static $Array<::java::nio::file::attribute::AclEntryType>* values();
	static ::java::nio::file::attribute::AclEntryType* ALLOW;
	static ::java::nio::file::attribute::AclEntryType* DENY;
	static ::java::nio::file::attribute::AclEntryType* AUDIT;
	static ::java::nio::file::attribute::AclEntryType* ALARM;
	static $Array<::java::nio::file::attribute::AclEntryType>* $VALUES;
};

			} // attribute
		} // file
	} // nio
} // java

#pragma pop_macro("AUDIT")
#pragma pop_macro("DENY")
#pragma pop_macro("ALARM")
#pragma pop_macro("ALLOW")

#endif // _java_nio_file_attribute_AclEntryType_h_