#ifndef _sun_nio_fs_WindowsPath$WindowsPathWithAttributes_h_
#define _sun_nio_fs_WindowsPath$WindowsPathWithAttributes_h_
//$ class sun.nio.fs.WindowsPath$WindowsPathWithAttributes
//$ extends sun.nio.fs.WindowsPath
//$ implements sun.nio.fs.BasicFileAttributesHolder

#include <java/lang/Array.h>
#include <sun/nio/fs/BasicFileAttributesHolder.h>
#include <sun/nio/fs/WindowsPath.h>

namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class LinkOption;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsFileSystem;
			class WindowsPathType;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsPath$WindowsPathWithAttributes : public ::sun::nio::fs::WindowsPath, public ::sun::nio::fs::BasicFileAttributesHolder {
	$class(WindowsPath$WindowsPathWithAttributes, $NO_CLASS_INIT, ::sun::nio::fs::WindowsPath, ::sun::nio::fs::BasicFileAttributesHolder)
public:
	WindowsPath$WindowsPathWithAttributes();
	using ::sun::nio::fs::WindowsPath::endsWith;
	using ::sun::nio::fs::WindowsPath::compareTo;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::fs::WindowsFileSystem* fs, ::sun::nio::fs::WindowsPathType* type, $String* root, $String* path, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual int32_t compareTo(Object$* obj) override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* get() override;
	virtual ::java::nio::file::FileSystem* getFileSystem() override;
	virtual ::sun::nio::fs::WindowsPath* getName(int32_t index) override;
	virtual ::sun::nio::fs::WindowsPath* getParent() override;
	virtual ::sun::nio::fs::WindowsPath* getRoot() override;
	virtual void invalidate() override;
	virtual ::sun::nio::fs::WindowsPath* normalize() override;
	using ::sun::nio::fs::WindowsPath::register$;
	virtual ::sun::nio::fs::WindowsPath* relativize(::java::nio::file::Path* obj) override;
	using ::sun::nio::fs::WindowsPath::resolve;
	virtual ::sun::nio::fs::WindowsPath* resolve(::java::nio::file::Path* obj) override;
	using ::sun::nio::fs::WindowsPath::startsWith;
	virtual ::sun::nio::fs::WindowsPath* subpath(int32_t beginIndex, int32_t endIndex) override;
	virtual ::sun::nio::fs::WindowsPath* toAbsolutePath() override;
	virtual ::sun::nio::fs::WindowsPath* toRealPath($Array<::java::nio::file::LinkOption>* options) override;
	virtual $String* toString() override;
	::java::lang::ref::WeakReference* ref = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsPath$WindowsPathWithAttributes_h_