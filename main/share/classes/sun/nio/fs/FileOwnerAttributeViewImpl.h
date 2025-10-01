#ifndef _sun_nio_fs_FileOwnerAttributeViewImpl_h_
#define _sun_nio_fs_FileOwnerAttributeViewImpl_h_
//$ class sun.nio.fs.FileOwnerAttributeViewImpl
//$ extends java.nio.file.attribute.FileOwnerAttributeView
//$ implements sun.nio.fs.DynamicFileAttributeView

#include <java/lang/Array.h>
#include <java/nio/file/attribute/FileOwnerAttributeView.h>
#include <sun/nio/fs/DynamicFileAttributeView.h>

#pragma push_macro("OWNER_NAME")
#undef OWNER_NAME

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class AclFileAttributeView;
				class FileAttributeView;
				class PosixFileAttributeView;
				class UserPrincipal;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class FileOwnerAttributeViewImpl : public ::java::nio::file::attribute::FileOwnerAttributeView, public ::sun::nio::fs::DynamicFileAttributeView {
	$class(FileOwnerAttributeViewImpl, 0, ::java::nio::file::attribute::FileOwnerAttributeView, ::sun::nio::fs::DynamicFileAttributeView)
public:
	FileOwnerAttributeViewImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::file::attribute::PosixFileAttributeView* view);
	void init$(::java::nio::file::attribute::AclFileAttributeView* view);
	virtual ::java::nio::file::attribute::UserPrincipal* getOwner() override;
	virtual $String* name() override;
	virtual ::java::util::Map* readAttributes($StringArray* attributes) override;
	virtual void setAttribute($String* attribute, Object$* value) override;
	virtual void setOwner(::java::nio::file::attribute::UserPrincipal* owner) override;
	virtual $String* toString() override;
	static $String* OWNER_NAME;
	::java::nio::file::attribute::FileAttributeView* view = nullptr;
	bool isPosixView = false;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("OWNER_NAME")

#endif // _sun_nio_fs_FileOwnerAttributeViewImpl_h_