#ifndef _sun_nio_fs_UnixUserPrincipals_h_
#define _sun_nio_fs_UnixUserPrincipals_h_
//$ class sun.nio.fs.UnixUserPrincipals
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SPECIAL_EVERYONE")
#undef SPECIAL_EVERYONE
#pragma push_macro("SPECIAL_GROUP")
#undef SPECIAL_GROUP
#pragma push_macro("SPECIAL_OWNER")
#undef SPECIAL_OWNER

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
namespace sun {
	namespace nio {
		namespace fs {
			class UnixUserPrincipals$Group;
			class UnixUserPrincipals$User;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class $export UnixUserPrincipals : public ::java::lang::Object {
	$class(UnixUserPrincipals, 0, ::java::lang::Object)
public:
	UnixUserPrincipals();
	void init$();
	static ::sun::nio::fs::UnixUserPrincipals$User* createSpecial($String* name);
	static ::sun::nio::fs::UnixUserPrincipals$Group* fromGid(int32_t gid);
	static ::sun::nio::fs::UnixUserPrincipals$User* fromUid(int32_t uid);
	static ::java::nio::file::attribute::GroupPrincipal* lookupGroup($String* group);
	static int32_t lookupName($String* name, bool isGroup);
	static ::java::nio::file::attribute::UserPrincipal* lookupUser($String* name);
	static ::sun::nio::fs::UnixUserPrincipals$User* SPECIAL_OWNER;
	static ::sun::nio::fs::UnixUserPrincipals$User* SPECIAL_GROUP;
	static ::sun::nio::fs::UnixUserPrincipals$User* SPECIAL_EVERYONE;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("SPECIAL_EVERYONE")
#pragma pop_macro("SPECIAL_GROUP")
#pragma pop_macro("SPECIAL_OWNER")

#endif // _sun_nio_fs_UnixUserPrincipals_h_