#ifndef _sun_nio_fs_UnixUserPrincipals$Group_h_
#define _sun_nio_fs_UnixUserPrincipals$Group_h_
//$ class sun.nio.fs.UnixUserPrincipals$Group
//$ extends sun.nio.fs.UnixUserPrincipals$User
//$ implements java.nio.file.attribute.GroupPrincipal

#include <java/nio/file/attribute/GroupPrincipal.h>
#include <sun/nio/fs/UnixUserPrincipals$User.h>

namespace sun {
	namespace nio {
		namespace fs {

class $export UnixUserPrincipals$Group : public ::sun::nio::fs::UnixUserPrincipals$User, public ::java::nio::file::attribute::GroupPrincipal {
	$class(UnixUserPrincipals$Group, $NO_CLASS_INIT, ::sun::nio::fs::UnixUserPrincipals$User, ::java::nio::file::attribute::GroupPrincipal)
public:
	UnixUserPrincipals$Group();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	virtual bool implies(::javax::security::auth::Subject* subject) override;
	void init$(int32_t id, $String* name);
	virtual $String* toString() override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixUserPrincipals$Group_h_