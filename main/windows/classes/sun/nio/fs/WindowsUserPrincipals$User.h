#ifndef _sun_nio_fs_WindowsUserPrincipals$User_h_
#define _sun_nio_fs_WindowsUserPrincipals$User_h_
//$ class sun.nio.fs.WindowsUserPrincipals$User
//$ extends java.nio.file.attribute.UserPrincipal

#include <java/nio/file/attribute/UserPrincipal.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsUserPrincipals$User : public ::java::nio::file::attribute::UserPrincipal {
	$class(WindowsUserPrincipals$User, $NO_CLASS_INIT, ::java::nio::file::attribute::UserPrincipal)
public:
	WindowsUserPrincipals$User();
	void init$($String* sidString, int32_t sidType, $String* accountName);
	virtual bool equals(Object$* obj) override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	virtual $String* sidString();
	virtual $String* toString() override;
	$String* sidString$ = nullptr;
	int32_t sidType = 0;
	$String* accountName = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsUserPrincipals$User_h_