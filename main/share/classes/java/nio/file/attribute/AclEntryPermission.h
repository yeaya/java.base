#ifndef _java_nio_file_attribute_AclEntryPermission_h_
#define _java_nio_file_attribute_AclEntryPermission_h_
//$ class java.nio.file.attribute.AclEntryPermission
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READ_ACL")
#undef READ_ACL
#pragma push_macro("WRITE_OWNER")
#undef WRITE_OWNER
#pragma push_macro("ADD_SUBDIRECTORY")
#undef ADD_SUBDIRECTORY
#pragma push_macro("ADD_FILE")
#undef ADD_FILE
#pragma push_macro("READ_DATA")
#undef READ_DATA
#pragma push_macro("APPEND_DATA")
#undef APPEND_DATA
#pragma push_macro("WRITE_DATA")
#undef WRITE_DATA
#pragma push_macro("EXECUTE")
#undef EXECUTE
#pragma push_macro("READ_NAMED_ATTRS")
#undef READ_NAMED_ATTRS
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("WRITE_ACL")
#undef WRITE_ACL
#pragma push_macro("SYNCHRONIZE")
#undef SYNCHRONIZE
#pragma push_macro("READ_ATTRIBUTES")
#undef READ_ATTRIBUTES
#pragma push_macro("WRITE_ATTRIBUTES")
#undef WRITE_ATTRIBUTES
#pragma push_macro("DELETE_CHILD")
#undef DELETE_CHILD
#pragma push_macro("LIST_DIRECTORY")
#undef LIST_DIRECTORY
#pragma push_macro("WRITE_NAMED_ATTRS")
#undef WRITE_NAMED_ATTRS

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export AclEntryPermission : public ::java::lang::Enum {
	$class(AclEntryPermission, 0, ::java::lang::Enum)
public:
	AclEntryPermission();
	static $Array<::java::nio::file::attribute::AclEntryPermission>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::nio::file::attribute::AclEntryPermission* valueOf($String* name);
	static $Array<::java::nio::file::attribute::AclEntryPermission>* values();
	static ::java::nio::file::attribute::AclEntryPermission* READ_DATA;
	static ::java::nio::file::attribute::AclEntryPermission* WRITE_DATA;
	static ::java::nio::file::attribute::AclEntryPermission* APPEND_DATA;
	static ::java::nio::file::attribute::AclEntryPermission* READ_NAMED_ATTRS;
	static ::java::nio::file::attribute::AclEntryPermission* WRITE_NAMED_ATTRS;
	static ::java::nio::file::attribute::AclEntryPermission* EXECUTE;
	static ::java::nio::file::attribute::AclEntryPermission* DELETE_CHILD;
	static ::java::nio::file::attribute::AclEntryPermission* READ_ATTRIBUTES;
	static ::java::nio::file::attribute::AclEntryPermission* WRITE_ATTRIBUTES;
	static ::java::nio::file::attribute::AclEntryPermission* DELETE;
	static ::java::nio::file::attribute::AclEntryPermission* READ_ACL;
	static ::java::nio::file::attribute::AclEntryPermission* WRITE_ACL;
	static ::java::nio::file::attribute::AclEntryPermission* WRITE_OWNER;
	static ::java::nio::file::attribute::AclEntryPermission* SYNCHRONIZE;
	static $Array<::java::nio::file::attribute::AclEntryPermission>* $VALUES;
	static ::java::nio::file::attribute::AclEntryPermission* LIST_DIRECTORY;
	static ::java::nio::file::attribute::AclEntryPermission* ADD_FILE;
	static ::java::nio::file::attribute::AclEntryPermission* ADD_SUBDIRECTORY;
};

			} // attribute
		} // file
	} // nio
} // java

#pragma pop_macro("READ_ACL")
#pragma pop_macro("WRITE_OWNER")
#pragma pop_macro("ADD_SUBDIRECTORY")
#pragma pop_macro("ADD_FILE")
#pragma pop_macro("READ_DATA")
#pragma pop_macro("APPEND_DATA")
#pragma pop_macro("WRITE_DATA")
#pragma pop_macro("EXECUTE")
#pragma pop_macro("READ_NAMED_ATTRS")
#pragma pop_macro("DELETE")
#pragma pop_macro("WRITE_ACL")
#pragma pop_macro("SYNCHRONIZE")
#pragma pop_macro("READ_ATTRIBUTES")
#pragma pop_macro("WRITE_ATTRIBUTES")
#pragma pop_macro("DELETE_CHILD")
#pragma pop_macro("LIST_DIRECTORY")
#pragma pop_macro("WRITE_NAMED_ATTRS")

#endif // _java_nio_file_attribute_AclEntryPermission_h_