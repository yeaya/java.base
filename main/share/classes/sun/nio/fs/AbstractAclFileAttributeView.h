#ifndef _sun_nio_fs_AbstractAclFileAttributeView_h_
#define _sun_nio_fs_AbstractAclFileAttributeView_h_
//$ class sun.nio.fs.AbstractAclFileAttributeView
//$ extends java.nio.file.attribute.AclFileAttributeView
//$ implements sun.nio.fs.DynamicFileAttributeView

#include <java/lang/Array.h>
#include <java/nio/file/attribute/AclFileAttributeView.h>
#include <sun/nio/fs/DynamicFileAttributeView.h>

#pragma push_macro("ACL_NAME")
#undef ACL_NAME
#pragma push_macro("OWNER_NAME")
#undef OWNER_NAME

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractAclFileAttributeView : public ::java::nio::file::attribute::AclFileAttributeView, public ::sun::nio::fs::DynamicFileAttributeView {
	$class(AbstractAclFileAttributeView, 0, ::java::nio::file::attribute::AclFileAttributeView, ::sun::nio::fs::DynamicFileAttributeView)
public:
	AbstractAclFileAttributeView();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* name() override;
	virtual ::java::util::Map* readAttributes($StringArray* attributes) override;
	virtual void setAttribute($String* attribute, Object$* value) override;
	virtual $String* toString() override;
	static $String* OWNER_NAME;
	static $String* ACL_NAME;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("ACL_NAME")
#pragma pop_macro("OWNER_NAME")

#endif // _sun_nio_fs_AbstractAclFileAttributeView_h_