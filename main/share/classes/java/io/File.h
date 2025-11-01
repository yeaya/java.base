#ifndef _java_io_File_h_
#define _java_io_File_h_
//$ class java.io.File
//$ extends java.io.Serializable
//$ implements java.lang.Comparable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

#pragma push_macro("PATH_OFFSET")
#undef PATH_OFFSET
#pragma push_macro("PREFIX_LENGTH_OFFSET")
#undef PREFIX_LENGTH_OFFSET
#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace io {
		class File$PathStatus;
		class FileFilter;
		class FileSystem;
		class FilenameFilter;
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace net {
		class URI;
		class URL;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace io {

class $export File : public ::java::io::Serializable, public ::java::lang::Comparable {
	$class(File, $PRELOAD, ::java::io::Serializable, ::java::lang::Comparable)
public:
	File();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* pathname, int32_t prefixLength);
	void init$($String* child, ::java::io::File* parent);
	void init$($String* pathname);
	void init$($String* parent, $String* child);
	void init$(::java::io::File* parent, $String* child);
	void init$(::java::net::URI* uri);
	virtual bool canExecute();
	virtual bool canRead();
	virtual bool canWrite();
	virtual int32_t compareTo(::java::io::File* pathname);
	virtual int32_t compareTo(Object$* pathname) override;
	virtual bool createNewFile();
	static ::java::io::File* createTempFile($String* prefix, $String* suffix, ::java::io::File* directory);
	static ::java::io::File* createTempFile($String* prefix, $String* suffix);
	virtual bool delete$();
	virtual void deleteOnExit();
	virtual bool equals(Object$* obj) override;
	virtual bool exists();
	virtual ::java::io::File* getAbsoluteFile();
	virtual $String* getAbsolutePath();
	virtual ::java::io::File* getCanonicalFile();
	virtual $String* getCanonicalPath();
	virtual int64_t getFreeSpace();
	virtual $String* getName();
	virtual $String* getParent();
	virtual ::java::io::File* getParentFile();
	virtual $String* getPath();
	virtual int32_t getPrefixLength();
	virtual int64_t getTotalSpace();
	virtual int64_t getUsableSpace();
	virtual int32_t hashCode() override;
	virtual bool isAbsolute();
	virtual bool isDirectory();
	virtual bool isFile();
	virtual bool isHidden();
	bool isInvalid();
	virtual int64_t lastModified();
	virtual int64_t length();
	virtual $StringArray* list();
	virtual $StringArray* list(::java::io::FilenameFilter* filter);
	virtual $Array<::java::io::File>* listFiles();
	virtual $Array<::java::io::File>* listFiles(::java::io::FilenameFilter* filter);
	virtual $Array<::java::io::File>* listFiles(::java::io::FileFilter* filter);
	static $Array<::java::io::File>* listRoots();
	virtual bool mkdir();
	virtual bool mkdirs();
	$StringArray* normalizedList();
	void readObject(::java::io::ObjectInputStream* s);
	virtual bool renameTo(::java::io::File* dest);
	virtual bool setExecutable(bool executable, bool ownerOnly);
	virtual bool setExecutable(bool executable);
	virtual bool setLastModified(int64_t time);
	virtual bool setReadOnly();
	virtual bool setReadable(bool readable, bool ownerOnly);
	virtual bool setReadable(bool readable);
	virtual bool setWritable(bool writable, bool ownerOnly);
	virtual bool setWritable(bool writable);
	static $String* slashify($String* path, bool isDirectory);
	virtual ::java::nio::file::Path* toPath();
	virtual $String* toString() override;
	virtual ::java::net::URI* toURI();
	virtual ::java::net::URL* toURL();
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	static ::java::io::FileSystem* fs;
	$String* path = nullptr;
	::java::io::File$PathStatus* status = nullptr;
	int32_t prefixLength = 0;
	static char16_t separatorChar;
	static $String* separator;
	static char16_t pathSeparatorChar;
	static $String* pathSeparator;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int64_t PATH_OFFSET;
	static int64_t PREFIX_LENGTH_OFFSET;
	static const int64_t serialVersionUID = (int64_t)0x042DA4450E0DE4FF;
	$volatile(::java::nio::file::Path*) filePath = nullptr;
};

	} // io
} // java

#pragma pop_macro("PATH_OFFSET")
#pragma pop_macro("PREFIX_LENGTH_OFFSET")
#pragma pop_macro("UNSAFE")

#endif // _java_io_File_h_