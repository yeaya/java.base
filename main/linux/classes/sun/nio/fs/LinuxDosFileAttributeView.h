#ifndef _sun_nio_fs_LinuxDosFileAttributeView_h_
#define _sun_nio_fs_LinuxDosFileAttributeView_h_
//$ class sun.nio.fs.LinuxDosFileAttributeView
//$ extends sun.nio.fs.UnixFileAttributeViews$Basic
//$ implements java.nio.file.attribute.DosFileAttributeView

#include <java/lang/Array.h>
#include <java/nio/file/attribute/DosFileAttributeView.h>
#include <sun/nio/fs/UnixFileAttributeViews$Basic.h>

#pragma push_macro("ARCHIVE_NAME")
#undef ARCHIVE_NAME
#pragma push_macro("DOS_XATTR_ARCHIVE")
#undef DOS_XATTR_ARCHIVE
#pragma push_macro("DOS_XATTR_HIDDEN")
#undef DOS_XATTR_HIDDEN
#pragma push_macro("DOS_XATTR_NAME")
#undef DOS_XATTR_NAME
#pragma push_macro("DOS_XATTR_NAME_AS_BYTES")
#undef DOS_XATTR_NAME_AS_BYTES
#pragma push_macro("DOS_XATTR_READONLY")
#undef DOS_XATTR_READONLY
#pragma push_macro("DOS_XATTR_SYSTEM")
#undef DOS_XATTR_SYSTEM
#pragma push_macro("HIDDEN_NAME")
#undef HIDDEN_NAME
#pragma push_macro("READONLY_NAME")
#undef READONLY_NAME
#pragma push_macro("SYSTEM_NAME")
#undef SYSTEM_NAME

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
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
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxDosFileAttributeView : public ::sun::nio::fs::UnixFileAttributeViews$Basic, public ::java::nio::file::attribute::DosFileAttributeView {
	$class(LinuxDosFileAttributeView, 0, ::sun::nio::fs::UnixFileAttributeViews$Basic, ::java::nio::file::attribute::DosFileAttributeView)
public:
	LinuxDosFileAttributeView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::fs::UnixPath* file, bool followLinks);
	int32_t getDosAttribute(int32_t fd);
	virtual $String* name() override;
	virtual ::java::util::Map* readAttributes($StringArray* attributes) override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual void setArchive(bool value) override;
	virtual void setAttribute($String* attribute, Object$* value) override;
	virtual void setHidden(bool value) override;
	virtual void setReadOnly(bool value) override;
	virtual void setSystem(bool value) override;
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	virtual $String* toString() override;
	void updateDosAttribute(int32_t flag, bool enable);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static $String* READONLY_NAME;
	static $String* ARCHIVE_NAME;
	static $String* SYSTEM_NAME;
	static $String* HIDDEN_NAME;
	static $String* DOS_XATTR_NAME;
	static $bytes* DOS_XATTR_NAME_AS_BYTES;
	static const int32_t DOS_XATTR_READONLY = 1;
	static const int32_t DOS_XATTR_HIDDEN = 2;
	static const int32_t DOS_XATTR_SYSTEM = 4;
	static const int32_t DOS_XATTR_ARCHIVE = 32;
	static ::java::util::Set* dosAttributeNames;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("ARCHIVE_NAME")
#pragma pop_macro("DOS_XATTR_ARCHIVE")
#pragma pop_macro("DOS_XATTR_HIDDEN")
#pragma pop_macro("DOS_XATTR_NAME")
#pragma pop_macro("DOS_XATTR_NAME_AS_BYTES")
#pragma pop_macro("DOS_XATTR_READONLY")
#pragma pop_macro("DOS_XATTR_SYSTEM")
#pragma pop_macro("HIDDEN_NAME")
#pragma pop_macro("READONLY_NAME")
#pragma pop_macro("SYSTEM_NAME")

#endif // _sun_nio_fs_LinuxDosFileAttributeView_h_