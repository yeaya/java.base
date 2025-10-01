#ifndef _sun_nio_fs_UnixPath_h_
#define _sun_nio_fs_UnixPath_h_
//$ class sun.nio.fs.UnixPath
//$ extends java.nio.file.Path

#include <java/lang/Array.h>
#include <java/nio/file/Path.h>

#pragma push_macro("JLA")
#undef JLA

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
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixFileSystem;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixPath : public ::java::nio::file::Path {
	$class(UnixPath, 0, ::java::nio::file::Path)
public:
	UnixPath();
	using ::java::nio::file::Path::endsWith;
	void init$(::sun::nio::fs::UnixFileSystem* fs, $bytes* path);
	void init$(::sun::nio::fs::UnixFileSystem* fs, $String* input);
	virtual $bytes* asByteArray();
	virtual void checkDelete();
	static void checkNotNul($String* input, char16_t c);
	virtual void checkRead();
	virtual void checkWrite();
	virtual int32_t compareTo(::java::nio::file::Path* other) override;
	virtual int32_t compareTo(Object$* other) override;
	::sun::nio::fs::UnixPath* emptyPath();
	static $bytes* encode(::sun::nio::fs::UnixFileSystem* fs, $String* input);
	virtual bool endsWith(::java::nio::file::Path* other) override;
	virtual bool equals(Object$* ob) override;
	virtual $bytes* getByteArrayForSysCalls();
	virtual ::sun::nio::fs::UnixPath* getFileName() override;
	virtual ::java::nio::file::FileSystem* getFileSystem() override;
	virtual ::sun::nio::fs::UnixPath* getName(int32_t index) override;
	virtual int32_t getNameCount() override;
	virtual ::sun::nio::fs::UnixPath* getParent() override;
	virtual $String* getPathForExceptionMessage();
	virtual $String* getPathForPermissionCheck();
	virtual ::sun::nio::fs::UnixPath* getRoot() override;
	bool hasDotOrDotDot();
	virtual int32_t hashCode() override;
	void initOffsets();
	virtual bool isAbsolute() override;
	virtual bool isEmpty();
	static $String* normalize($String* input, int32_t len, int32_t off);
	virtual ::sun::nio::fs::UnixPath* normalize() override;
	static $String* normalizeAndCheck($String* input);
	virtual int32_t openForAttributeAccess(bool followLinks);
	using ::java::nio::file::Path::register$;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	virtual ::sun::nio::fs::UnixPath* relativize(::java::nio::file::Path* obj) override;
	using ::java::nio::file::Path::resolve;
	static $bytes* resolve($bytes* base, $bytes* child);
	virtual ::sun::nio::fs::UnixPath* resolve(::java::nio::file::Path* obj) override;
	virtual ::sun::nio::fs::UnixPath* resolve($bytes* other);
	using ::java::nio::file::Path::startsWith;
	virtual bool startsWith(::java::nio::file::Path* other) override;
	virtual ::sun::nio::fs::UnixPath* subpath(int32_t beginIndex, int32_t endIndex) override;
	virtual ::sun::nio::fs::UnixPath* toAbsolutePath() override;
	virtual ::java::nio::file::Path* toRealPath($Array<::java::nio::file::LinkOption>* options) override;
	virtual $String* toString() override;
	static ::sun::nio::fs::UnixPath* toUnixPath(::java::nio::file::Path* obj);
	virtual ::java::net::URI* toUri() override;
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangAccess* JLA;
	::sun::nio::fs::UnixFileSystem* fs = nullptr;
	$bytes* path = nullptr;
	$volatile($String*) stringValue = nullptr;
	int32_t hash = 0;
	$volatile($ints*) offsets = nullptr;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("JLA")

#endif // _sun_nio_fs_UnixPath_h_