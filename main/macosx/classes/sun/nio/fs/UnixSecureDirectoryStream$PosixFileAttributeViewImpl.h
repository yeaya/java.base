#ifndef _sun_nio_fs_UnixSecureDirectoryStream$PosixFileAttributeViewImpl_h_
#define _sun_nio_fs_UnixSecureDirectoryStream$PosixFileAttributeViewImpl_h_
//$ class sun.nio.fs.UnixSecureDirectoryStream$PosixFileAttributeViewImpl
//$ extends sun.nio.fs.UnixSecureDirectoryStream$BasicFileAttributeViewImpl
//$ implements java.nio.file.attribute.PosixFileAttributeView

#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <sun/nio/fs/UnixSecureDirectoryStream$BasicFileAttributeViewImpl.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class GroupPrincipal;
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
namespace sun {
	namespace nio {
		namespace fs {
			class UnixPath;
			class UnixSecureDirectoryStream;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixSecureDirectoryStream$PosixFileAttributeViewImpl : public ::sun::nio::fs::UnixSecureDirectoryStream$BasicFileAttributeViewImpl, public ::java::nio::file::attribute::PosixFileAttributeView {
	$class(UnixSecureDirectoryStream$PosixFileAttributeViewImpl, $NO_CLASS_INIT, ::sun::nio::fs::UnixSecureDirectoryStream$BasicFileAttributeViewImpl, ::java::nio::file::attribute::PosixFileAttributeView)
public:
	UnixSecureDirectoryStream$PosixFileAttributeViewImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::fs::UnixSecureDirectoryStream* this$0, ::sun::nio::fs::UnixPath* file, bool followLinks);
	void checkWriteAndUserAccess();
	virtual ::java::nio::file::attribute::UserPrincipal* getOwner() override;
	virtual $String* name() override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual void setGroup(::java::nio::file::attribute::GroupPrincipal* group) override;
	virtual void setOwner(::java::nio::file::attribute::UserPrincipal* owner) override;
	void setOwners(int32_t uid, int32_t gid);
	virtual void setPermissions(::java::util::Set* perms) override;
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	virtual $String* toString() override;
	::sun::nio::fs::UnixSecureDirectoryStream* this$0 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixSecureDirectoryStream$PosixFileAttributeViewImpl_h_