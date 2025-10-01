#ifndef _java_nio_file_attribute_UserPrincipalLookupService_h_
#define _java_nio_file_attribute_UserPrincipalLookupService_h_
//$ class java.nio.file.attribute.UserPrincipalLookupService
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class GroupPrincipal;
				class UserPrincipal;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import UserPrincipalLookupService : public ::java::lang::Object {
	$class(UserPrincipalLookupService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UserPrincipalLookupService();
	void init$();
	virtual ::java::nio::file::attribute::GroupPrincipal* lookupPrincipalByGroupName($String* group) {return nullptr;}
	virtual ::java::nio::file::attribute::UserPrincipal* lookupPrincipalByName($String* name) {return nullptr;}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_UserPrincipalLookupService_h_