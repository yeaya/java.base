#ifndef _java_nio_file_attribute_AclEntry$Builder_h_
#define _java_nio_file_attribute_AclEntry$Builder_h_
//$ class java.nio.file.attribute.AclEntry$Builder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class AclEntry;
				class AclEntryFlag;
				class AclEntryPermission;
				class AclEntryType;
				class UserPrincipal;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import AclEntry$Builder : public ::java::lang::Object {
	$class(AclEntry$Builder, 0, ::java::lang::Object)
public:
	AclEntry$Builder();
	void init$(::java::nio::file::attribute::AclEntryType* type, ::java::nio::file::attribute::UserPrincipal* who, ::java::util::Set* perms, ::java::util::Set* flags);
	::java::nio::file::attribute::AclEntry* build();
	static void checkSet(::java::util::Set* set, $Class* type);
	::java::nio::file::attribute::AclEntry$Builder* setFlags(::java::util::Set* flags);
	::java::nio::file::attribute::AclEntry$Builder* setFlags($Array<::java::nio::file::attribute::AclEntryFlag>* flags);
	::java::nio::file::attribute::AclEntry$Builder* setPermissions(::java::util::Set* perms);
	::java::nio::file::attribute::AclEntry$Builder* setPermissions($Array<::java::nio::file::attribute::AclEntryPermission>* perms);
	::java::nio::file::attribute::AclEntry$Builder* setPrincipal(::java::nio::file::attribute::UserPrincipal* who);
	::java::nio::file::attribute::AclEntry$Builder* setType(::java::nio::file::attribute::AclEntryType* type);
	static bool $assertionsDisabled;
	::java::nio::file::attribute::AclEntryType* type = nullptr;
	::java::nio::file::attribute::UserPrincipal* who = nullptr;
	::java::util::Set* perms = nullptr;
	::java::util::Set* flags = nullptr;
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_AclEntry$Builder_h_