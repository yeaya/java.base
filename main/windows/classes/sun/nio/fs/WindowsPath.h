#ifndef _sun_nio_fs_WindowsPath_h_
#define _sun_nio_fs_WindowsPath_h_
//$ class sun.nio.fs.WindowsPath
//$ extends java.nio.file.Path

#include <java/lang/Array.h>
#include <java/nio/file/Path.h>

#pragma push_macro("MAX_LONG_PATH")
#undef MAX_LONG_PATH
#pragma push_macro("MAX_PATH")
#undef MAX_PATH

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class LinkOption;
			class WatchEvent$Kind;
			class WatchEvent$Modifier;
			class WatchKey;
			class WatchService;
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

class WindowsPath : public ::java::nio::file::Path {
	$class(WindowsPath, $NO_CLASS_INIT, ::java::nio::file::Path)
public:
	WindowsPath();
	using ::java::nio::file::Path::endsWith;
	void init$(::sun::nio::fs::WindowsFileSystem* fs, ::sun::nio::fs::WindowsPathType* type, $String* root, $String* path);
	static $String* addPrefixIfNeeded($String* path);
	virtual void checkDelete();
	virtual void checkRead();
	virtual void checkWrite();
	virtual int32_t compareTo(::java::nio::file::Path* obj) override;
	virtual int32_t compareTo(Object$* obj) override;
	static ::sun::nio::fs::WindowsPath* createFromNormalizedPath(::sun::nio::fs::WindowsFileSystem* fs, $String* path, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	static ::sun::nio::fs::WindowsPath* createFromNormalizedPath(::sun::nio::fs::WindowsFileSystem* fs, $String* path);
	$String* elementAsString(int32_t i);
	::sun::nio::fs::WindowsPath* emptyPath();
	virtual bool endsWith(::java::nio::file::Path* obj) override;
	virtual bool equals(Object$* obj) override;
	$String* getAbsolutePath();
	virtual ::java::nio::file::Path* getFileName() override;
	virtual ::java::nio::file::FileSystem* getFileSystem() override;
	virtual ::sun::nio::fs::WindowsPath* getName(int32_t index) override;
	virtual int32_t getNameCount() override;
	virtual ::sun::nio::fs::WindowsPath* getParent() override;
	virtual $String* getPathForExceptionMessage();
	virtual $String* getPathForPermissionCheck();
	virtual $String* getPathForWin32Calls();
	virtual ::sun::nio::fs::WindowsPath* getRoot() override;
	bool hasDotOrDotDot();
	virtual int32_t hashCode() override;
	void initOffsets();
	virtual bool isAbsolute() override;
	bool isEmpty();
	static bool isSameDrive($String* root1, $String* root2);
	virtual bool isUnc();
	virtual bool needsSlashWhenResolving();
	virtual ::sun::nio::fs::WindowsPath* normalize() override;
	int64_t openFileForReadAttributeAccess(int32_t flags);
	virtual int64_t openForReadAttributeAccess(bool followLinks);
	int64_t openSocketForReadAttributeAccess();
	static ::sun::nio::fs::WindowsPath* parse(::sun::nio::fs::WindowsFileSystem* fs, $String* path);
	using ::java::nio::file::Path::register$;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	virtual ::sun::nio::fs::WindowsPath* relativize(::java::nio::file::Path* obj) override;
	using ::java::nio::file::Path::resolve;
	virtual ::sun::nio::fs::WindowsPath* resolve(::java::nio::file::Path* obj) override;
	using ::java::nio::file::Path::startsWith;
	virtual bool startsWith(::java::nio::file::Path* obj) override;
	virtual ::sun::nio::fs::WindowsPath* subpath(int32_t beginIndex, int32_t endIndex) override;
	virtual ::sun::nio::fs::WindowsPath* toAbsolutePath() override;
	virtual ::sun::nio::fs::WindowsPath* toRealPath($Array<::java::nio::file::LinkOption>* options) override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	static ::sun::nio::fs::WindowsPath* toWindowsPath(::java::nio::file::Path* path);
	virtual ::sun::nio::fs::WindowsPathType* type();
	static const int32_t MAX_PATH = 247;
	static const int32_t MAX_LONG_PATH = 32000;
	::sun::nio::fs::WindowsFileSystem* fs = nullptr;
	::sun::nio::fs::WindowsPathType* type$ = nullptr;
	$String* root = nullptr;
	$String* path = nullptr;
	$volatile(::java::lang::ref::WeakReference*) pathForWin32Calls = nullptr;
	$volatile($Array<::java::lang::Integer>*) offsets = nullptr;
	int32_t hash = 0;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("MAX_LONG_PATH")
#pragma pop_macro("MAX_PATH")

#endif // _sun_nio_fs_WindowsPath_h_