#ifndef _sun_nio_fs_WindowsUserPrincipals$Group_h_
#define _sun_nio_fs_WindowsUserPrincipals$Group_h_
//$ class sun.nio.fs.WindowsUserPrincipals$Group
//$ extends sun.nio.fs.WindowsUserPrincipals$User
//$ implements java.nio.file.attribute.GroupPrincipal

#include <java/nio/file/attribute/GroupPrincipal.h>
#include <sun/nio/fs/WindowsUserPrincipals$User.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsUserPrincipals$Group : public ::sun::nio::fs::WindowsUserPrincipals$User, public ::java::nio::file::attribute::GroupPrincipal {
	$class(WindowsUserPrincipals$Group, $NO_CLASS_INIT, ::sun::nio::fs::WindowsUserPrincipals$User, ::java::nio::file::attribute::GroupPrincipal)
public:
	WindowsUserPrincipals$Group();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	virtual bool implies(::javax::security::auth::Subject* subject) override;
	void init$($String* sidString, int32_t sidType, $String* accountName);
	virtual $String* toString() override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsUserPrincipals$Group_h_