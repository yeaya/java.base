#ifndef _java_io_UnixFileSystem_h_
#define _java_io_UnixFileSystem_h_
//$ class java.io.UnixFileSystem
//$ extends java.io.FileSystem

#include <java/io/FileSystem.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ExpiringCache;
		class File;
	}
}

namespace java {
	namespace io {

class UnixFileSystem : public ::java::io::FileSystem {
	$class(UnixFileSystem, $PRELOAD, ::java::io::FileSystem)
public:
	UnixFileSystem();
	using ::java::io::FileSystem::hashCode;
	void init$();
	virtual $String* canonicalize($String* path) override;
	$String* canonicalize0($String* path);
	virtual bool checkAccess(::java::io::File* f, int32_t access) override;
	virtual int32_t compare(::java::io::File* f1, ::java::io::File* f2) override;
	virtual bool createDirectory(::java::io::File* f) override;
	virtual bool createFileExclusively($String* path) override;
	virtual bool delete$(::java::io::File* f) override;
	bool delete0(::java::io::File* f);
	virtual $String* fromURIPath($String* path) override;
	virtual int32_t getBooleanAttributes(::java::io::File* f) override;
	virtual int32_t getBooleanAttributes0(::java::io::File* f);
	virtual $String* getDefaultParent() override;
	virtual int64_t getLastModifiedTime(::java::io::File* f) override;
	virtual int64_t getLength(::java::io::File* f) override;
	virtual int32_t getNameMax($String* path) override;
	int64_t getNameMax0($String* path);
	virtual char16_t getPathSeparator() override;
	virtual char16_t getSeparator() override;
	virtual int64_t getSpace(::java::io::File* f, int32_t t) override;
	virtual bool hasBooleanAttributes(::java::io::File* f, int32_t attributes) override;
	virtual int32_t hashCode(::java::io::File* f) override;
	static void initIDs();
	virtual bool isAbsolute(::java::io::File* f) override;
	static int32_t isHidden(::java::io::File* f);
	virtual $StringArray* list(::java::io::File* f) override;
	virtual $Array<::java::io::File>* listRoots() override;
	$String* normalize($String* pathname, int32_t off);
	virtual $String* normalize($String* pathname) override;
	static $String* parentOrNull($String* path);
	virtual int32_t prefixLength($String* pathname) override;
	virtual bool rename(::java::io::File* f1, ::java::io::File* f2) override;
	bool rename0(::java::io::File* f1, ::java::io::File* f2);
	virtual $String* resolve($String* parent, $String* child) override;
	virtual $String* resolve(::java::io::File* f) override;
	virtual bool setLastModifiedTime(::java::io::File* f, int64_t time) override;
	virtual bool setPermission(::java::io::File* f, int32_t access, bool enable, bool owneronly) override;
	virtual bool setReadOnly(::java::io::File* f) override;
	char16_t slash = 0;
	char16_t colon = 0;
	$String* javaHome = nullptr;
	$String* userDir = nullptr;
	::java::io::ExpiringCache* cache = nullptr;
	::java::io::ExpiringCache* javaHomePrefixCache = nullptr;
};

	} // io
} // java

#endif // _java_io_UnixFileSystem_h_