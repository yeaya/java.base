#ifndef _java_io_FileSystem_h_
#define _java_io_FileSystem_h_
//$ class java.io.FileSystem
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BA_REGULAR")
#undef BA_REGULAR
#pragma push_macro("BA_EXISTS")
#undef BA_EXISTS
#pragma push_macro("ACCESS_WRITE")
#undef ACCESS_WRITE
#pragma push_macro("BA_HIDDEN")
#undef BA_HIDDEN
#pragma push_macro("BA_DIRECTORY")
#undef BA_DIRECTORY
#pragma push_macro("ACCESS_EXECUTE")
#undef ACCESS_EXECUTE
#pragma push_macro("SPACE_TOTAL")
#undef SPACE_TOTAL
#pragma push_macro("ACCESS_READ")
#undef ACCESS_READ
#pragma push_macro("SPACE_USABLE")
#undef SPACE_USABLE
#pragma push_macro("SPACE_FREE")
#undef SPACE_FREE

namespace java {
	namespace io {
		class File;
	}
}

namespace java {
	namespace io {

class FileSystem : public ::java::lang::Object {
	$class(FileSystem, $PRELOAD, ::java::lang::Object)
public:
	FileSystem();
	using ::java::lang::Object::hashCode;
	void init$();
	virtual $String* canonicalize($String* path) {return nullptr;}
	virtual bool checkAccess(::java::io::File* f, int32_t access) {return false;}
	virtual int32_t compare(::java::io::File* f1, ::java::io::File* f2) {return 0;}
	virtual bool createDirectory(::java::io::File* f) {return false;}
	virtual bool createFileExclusively($String* pathname) {return false;}
	virtual bool delete$(::java::io::File* f) {return false;}
	virtual $String* fromURIPath($String* path) {return nullptr;}
	virtual int32_t getBooleanAttributes(::java::io::File* f) {return 0;}
	static bool getBooleanProperty($String* prop, bool defaultVal);
	virtual $String* getDefaultParent() {return nullptr;}
	virtual int64_t getLastModifiedTime(::java::io::File* f) {return 0;}
	virtual int64_t getLength(::java::io::File* f) {return 0;}
	virtual int32_t getNameMax($String* path) {return 0;}
	virtual char16_t getPathSeparator() {return 0;}
	virtual char16_t getSeparator() {return 0;}
	virtual int64_t getSpace(::java::io::File* f, int32_t t) {return 0;}
	virtual bool hasBooleanAttributes(::java::io::File* f, int32_t attributes);
	virtual int32_t hashCode(::java::io::File* f) {return 0;}
	virtual bool isAbsolute(::java::io::File* f) {return false;}
	virtual $StringArray* list(::java::io::File* f) {return nullptr;}
	virtual $Array<::java::io::File>* listRoots() {return nullptr;}
	virtual $String* normalize($String* path) {return nullptr;}
	virtual int32_t prefixLength($String* path) {return 0;}
	virtual bool rename(::java::io::File* f1, ::java::io::File* f2) {return false;}
	virtual $String* resolve($String* parent, $String* child) {return nullptr;}
	virtual $String* resolve(::java::io::File* f) {return nullptr;}
	virtual bool setLastModifiedTime(::java::io::File* f, int64_t time) {return false;}
	virtual bool setPermission(::java::io::File* f, int32_t access, bool enable, bool owneronly) {return false;}
	virtual bool setReadOnly(::java::io::File* f) {return false;}
	static const int32_t BA_EXISTS = 1;
	static const int32_t BA_REGULAR = 2;
	static const int32_t BA_DIRECTORY = 4;
	static const int32_t BA_HIDDEN = 8;
	static const int32_t ACCESS_READ = 4;
	static const int32_t ACCESS_WRITE = 2;
	static const int32_t ACCESS_EXECUTE = 1;
	static const int32_t SPACE_TOTAL = 0;
	static const int32_t SPACE_FREE = 1;
	static const int32_t SPACE_USABLE = 2;
	static bool useCanonCaches;
	static bool useCanonPrefixCache;
};

	} // io
} // java

#pragma pop_macro("BA_REGULAR")
#pragma pop_macro("BA_EXISTS")
#pragma pop_macro("ACCESS_WRITE")
#pragma pop_macro("BA_HIDDEN")
#pragma pop_macro("BA_DIRECTORY")
#pragma pop_macro("ACCESS_EXECUTE")
#pragma pop_macro("SPACE_TOTAL")
#pragma pop_macro("ACCESS_READ")
#pragma pop_macro("SPACE_USABLE")
#pragma pop_macro("SPACE_FREE")

#endif // _java_io_FileSystem_h_