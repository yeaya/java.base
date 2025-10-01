#ifndef _java_io_WinNTFileSystem_h_
#define _java_io_WinNTFileSystem_h_
//$ class java.io.WinNTFileSystem
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
	namespace lang {
		class StringBuilder;
	}
}

namespace java {
	namespace io {

class WinNTFileSystem : public ::java::io::FileSystem {
	$class(WinNTFileSystem, 0, ::java::io::FileSystem)
public:
	WinNTFileSystem();
	using ::java::io::FileSystem::hashCode;
	void init$();
	bool access($String* path);
	virtual $String* canonicalize($String* path) override;
	$String* canonicalize0($String* path);
	$String* canonicalizeWithPrefix($String* canonicalPrefix, $String* filename);
	$String* canonicalizeWithPrefix0($String* canonicalPrefix, $String* pathWithCanonicalPrefix);
	virtual bool checkAccess(::java::io::File* f, int32_t access) override;
	virtual int32_t compare(::java::io::File* f1, ::java::io::File* f2) override;
	virtual bool createDirectory(::java::io::File* f) override;
	virtual bool createFileExclusively($String* path) override;
	virtual bool delete$(::java::io::File* f) override;
	bool delete0(::java::io::File* f);
	static int32_t driveIndex(char16_t d);
	virtual $String* fromURIPath($String* path) override;
	virtual int32_t getBooleanAttributes(::java::io::File* f) override;
	virtual $String* getDefaultParent() override;
	$String* getDrive($String* path);
	$String* getDriveDirectory(int32_t drive);
	$String* getDriveDirectory(char16_t drive);
	virtual int64_t getLastModifiedTime(::java::io::File* f) override;
	virtual int64_t getLength(::java::io::File* f) override;
	virtual int32_t getNameMax($String* path) override;
	int32_t getNameMax0($String* path);
	virtual char16_t getPathSeparator() override;
	virtual char16_t getSeparator() override;
	virtual int64_t getSpace(::java::io::File* f, int32_t t) override;
	int64_t getSpace0(::java::io::File* f, int32_t t);
	$String* getUserPath();
	virtual int32_t hashCode(::java::io::File* f) override;
	static void initIDs();
	virtual bool isAbsolute(::java::io::File* f) override;
	bool isLetter(char16_t c);
	bool isSlash(char16_t c);
	::java::io::File* lambda$listRoots$0(int32_t i);
	bool lambda$listRoots$1(::java::io::File* f);
	static $Array<::java::io::File>* lambda$listRoots$2(int32_t x$0);
	virtual $StringArray* list(::java::io::File* f) override;
	virtual $Array<::java::io::File>* listRoots() override;
	static int32_t listRoots0();
	virtual $String* normalize($String* path) override;
	$String* normalize($String* path, int32_t len, int32_t off);
	int32_t normalizePrefix($String* path, int32_t len, ::java::lang::StringBuilder* sb);
	static $String* parentOrNull($String* path);
	virtual int32_t prefixLength($String* path) override;
	virtual bool rename(::java::io::File* f1, ::java::io::File* f2) override;
	bool rename0(::java::io::File* f1, ::java::io::File* f2);
	virtual $String* resolve($String* parent, $String* child) override;
	virtual $String* resolve(::java::io::File* f) override;
	virtual bool setLastModifiedTime(::java::io::File* f, int64_t time) override;
	virtual bool setPermission(::java::io::File* f, int32_t access, bool enable, bool owneronly) override;
	virtual bool setReadOnly(::java::io::File* f) override;
	$String* slashify($String* p);
	char16_t slash = 0;
	char16_t altSlash = 0;
	char16_t semicolon = 0;
	$String* userDir = nullptr;
	static $StringArray* driveDirCache;
	::java::io::ExpiringCache* cache = nullptr;
	::java::io::ExpiringCache* prefixCache = nullptr;
};

	} // io
} // java

#endif // _java_io_WinNTFileSystem_h_