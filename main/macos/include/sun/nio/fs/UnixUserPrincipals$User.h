#ifndef _sun_nio_fs_UnixUserPrincipals$User_h_
#define _sun_nio_fs_UnixUserPrincipals$User_h_
//$ class sun.nio.fs.UnixUserPrincipals$User
//$ extends java.nio.file.attribute.UserPrincipal

#include <java/nio/file/attribute/UserPrincipal.h>

namespace sun {
	namespace nio {
		namespace fs {

class $import UnixUserPrincipals$User : public ::java::nio::file::attribute::UserPrincipal {
	$class(UnixUserPrincipals$User, $NO_CLASS_INIT, ::java::nio::file::attribute::UserPrincipal)
public:
	UnixUserPrincipals$User();
	void init$(int32_t id, bool isGroup, $String* name);
	void init$(int32_t id, $String* name);
	virtual bool equals(Object$* obj) override;
	virtual $String* getName() override;
	virtual int32_t gid();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual int32_t uid();
	int32_t id = 0;
	bool isGroup = false;
	$String* name = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixUserPrincipals$User_h_