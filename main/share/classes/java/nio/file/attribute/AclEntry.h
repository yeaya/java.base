#ifndef _java_nio_file_attribute_AclEntry_h_
#define _java_nio_file_attribute_AclEntry_h_
//$ class java.nio.file.attribute.AclEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class AclEntry$Builder;
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

class $export AclEntry : public ::java::lang::Object {
	$class(AclEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AclEntry();
	void init$(::java::nio::file::attribute::AclEntryType* type, ::java::nio::file::attribute::UserPrincipal* who, ::java::util::Set* perms, ::java::util::Set* flags);
	virtual bool equals(Object$* ob) override;
	::java::util::Set* flags();
	static int32_t hash(int32_t h, Object$* o);
	virtual int32_t hashCode() override;
	static ::java::nio::file::attribute::AclEntry$Builder* newBuilder();
	static ::java::nio::file::attribute::AclEntry$Builder* newBuilder(::java::nio::file::attribute::AclEntry* entry);
	::java::util::Set* permissions();
	::java::nio::file::attribute::UserPrincipal* principal();
	virtual $String* toString() override;
	::java::nio::file::attribute::AclEntryType* type();
	::java::nio::file::attribute::AclEntryType* type$ = nullptr;
	::java::nio::file::attribute::UserPrincipal* who = nullptr;
	::java::util::Set* perms = nullptr;
	::java::util::Set* flags$ = nullptr;
	$volatile(int32_t) hash$ = 0;
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_AclEntry_h_