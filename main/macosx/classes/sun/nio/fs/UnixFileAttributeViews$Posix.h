#ifndef _sun_nio_fs_UnixFileAttributeViews$Posix_h_
#define _sun_nio_fs_UnixFileAttributeViews$Posix_h_
//$ class sun.nio.fs.UnixFileAttributeViews$Posix
//$ extends sun.nio.fs.UnixFileAttributeViews$Basic
//$ implements java.nio.file.attribute.PosixFileAttributeView

#include <java/lang/Array.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <sun/nio/fs/UnixFileAttributeViews$Basic.h>

#pragma push_macro("GROUP_NAME")
#undef GROUP_NAME
#pragma push_macro("PERMISSIONS_NAME")
#undef PERMISSIONS_NAME
#pragma push_macro("OWNER_NAME")
#undef OWNER_NAME

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class GroupPrincipal;
				class PosixFileAttributes;
				class UserPrincipal;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class AbstractBasicFileAttributeView$AttributesBuilder;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileAttributeViews$Posix : public ::sun::nio::fs::UnixFileAttributeViews$Basic, public ::java::nio::file::attribute::PosixFileAttributeView {
	$class(UnixFileAttributeViews$Posix, 0, ::sun::nio::fs::UnixFileAttributeViews$Basic, ::java::nio::file::attribute::PosixFileAttributeView)
public:
	UnixFileAttributeViews$Posix();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::fs::UnixPath* file, bool followLinks);
	void addRequestedPosixAttributes(::java::nio::file::attribute::PosixFileAttributes* attrs, ::sun::nio::fs::AbstractBasicFileAttributeView$AttributesBuilder* builder);
	void checkReadExtended();
	void checkWriteExtended();
	virtual ::java::nio::file::attribute::UserPrincipal* getOwner() override;
	virtual $String* name() override;
	virtual ::java::util::Map* readAttributes($StringArray* requested) override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual void setAttribute($String* attribute, Object$* value) override;
	virtual void setGroup(::java::nio::file::attribute::GroupPrincipal* group) override;
	void setMode(int32_t mode);
	virtual void setOwner(::java::nio::file::attribute::UserPrincipal* owner) override;
	void setOwners(int32_t uid, int32_t gid);
	virtual void setPermissions(::java::util::Set* perms) override;
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	virtual $String* toString() override;
	static $String* PERMISSIONS_NAME;
	static $String* OWNER_NAME;
	static $String* GROUP_NAME;
	static ::java::util::Set* posixAttributeNames;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("GROUP_NAME")
#pragma pop_macro("PERMISSIONS_NAME")
#pragma pop_macro("OWNER_NAME")

#endif // _sun_nio_fs_UnixFileAttributeViews$Posix_h_