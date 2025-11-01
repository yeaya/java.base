#ifndef _sun_nio_fs_WindowsFileAttributeViews$Dos_h_
#define _sun_nio_fs_WindowsFileAttributeViews$Dos_h_
//$ class sun.nio.fs.WindowsFileAttributeViews$Dos
//$ extends sun.nio.fs.WindowsFileAttributeViews$Basic
//$ implements java.nio.file.attribute.DosFileAttributeView

#include <java/lang/Array.h>
#include <java/nio/file/attribute/DosFileAttributeView.h>
#include <sun/nio/fs/WindowsFileAttributeViews$Basic.h>

#pragma push_macro("ARCHIVE_NAME")
#undef ARCHIVE_NAME
#pragma push_macro("ATTRIBUTES_NAME")
#undef ATTRIBUTES_NAME
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
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsFileAttributes;
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileAttributeViews$Dos : public ::sun::nio::fs::WindowsFileAttributeViews$Basic, public ::java::nio::file::attribute::DosFileAttributeView {
	$class(WindowsFileAttributeViews$Dos, 0, ::sun::nio::fs::WindowsFileAttributeViews$Basic, ::java::nio::file::attribute::DosFileAttributeView)
public:
	WindowsFileAttributeViews$Dos();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::fs::WindowsPath* file, bool followLinks);
	virtual $String* name() override;
	virtual ::java::util::Map* readAttributes($StringArray* attributes) override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual void setArchive(bool value) override;
	virtual void setAttribute($String* attribute, Object$* value) override;
	virtual void setAttributes(::sun::nio::fs::WindowsFileAttributes* attrs);
	virtual void setHidden(bool value) override;
	virtual void setReadOnly(bool value) override;
	virtual void setSystem(bool value) override;
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	virtual $String* toString() override;
	void updateAttributes(int32_t flag, bool enable);
	static $String* READONLY_NAME;
	static $String* ARCHIVE_NAME;
	static $String* SYSTEM_NAME;
	static $String* HIDDEN_NAME;
	static $String* ATTRIBUTES_NAME;
	static ::java::util::Set* dosAttributeNames;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("ARCHIVE_NAME")
#pragma pop_macro("ATTRIBUTES_NAME")
#pragma pop_macro("HIDDEN_NAME")
#pragma pop_macro("READONLY_NAME")
#pragma pop_macro("SYSTEM_NAME")

#endif // _sun_nio_fs_WindowsFileAttributeViews$Dos_h_