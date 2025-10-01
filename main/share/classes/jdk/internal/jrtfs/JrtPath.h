#ifndef _jdk_internal_jrtfs_JrtPath_h_
#define _jdk_internal_jrtfs_JrtPath_h_
//$ class jdk.internal.jrtfs.JrtPath
//$ extends java.nio.file.Path

#include <java/lang/Array.h>
#include <java/nio/file/Path.h>

#pragma push_macro("H_PATH")
#undef H_PATH
#pragma push_macro("L_ALPHA")
#undef L_ALPHA
#pragma push_macro("L_PATH")
#undef L_PATH
#pragma push_macro("L_ALPHANUM")
#undef L_ALPHANUM
#pragma push_macro("H_DIGIT")
#undef H_DIGIT
#pragma push_macro("L_DIGIT")
#undef L_DIGIT
#pragma push_macro("H_UNRESERVED")
#undef H_UNRESERVED
#pragma push_macro("H_PCHAR")
#undef H_PCHAR
#pragma push_macro("L_MARK")
#undef L_MARK
#pragma push_macro("L_UNRESERVED")
#undef L_UNRESERVED
#pragma push_macro("L_PCHAR")
#undef L_PCHAR
#pragma push_macro("H_ALPHA")
#undef H_ALPHA
#pragma push_macro("H_ALPHANUM")
#undef H_ALPHANUM
#pragma push_macro("H_UPALPHA")
#undef H_UPALPHA
#pragma push_macro("L_LOWALPHA")
#undef L_LOWALPHA
#pragma push_macro("L_UPALPHA")
#undef L_UPALPHA
#pragma push_macro("H_LOWALPHA")
#undef H_LOWALPHA
#pragma push_macro("H_MARK")
#undef H_MARK

namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
			class SeekableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class AccessMode;
			class CopyOption;
			class DirectoryStream;
			class DirectoryStream$Filter;
			class FileStore;
			class FileSystem;
			class LinkOption;
			class OpenOption;
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
				class FileAttribute;
				class FileTime;
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtFileAttributes;
			class JrtFileSystem;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtPath : public ::java::nio::file::Path {
	$class(JrtPath, 0, ::java::nio::file::Path)
public:
	JrtPath();
	void init$(::jdk::internal::jrtfs::JrtFileSystem* jrtfs, $String* path);
	void init$(::jdk::internal::jrtfs::JrtFileSystem* jrtfs, $String* path, bool normalized);
	void checkAccess($Array<::java::nio::file::AccessMode>* modes);
	::jdk::internal::jrtfs::JrtPath* checkPath(::java::nio::file::Path* path);
	virtual int32_t compareTo(::java::nio::file::Path* other) override;
	virtual int32_t compareTo(Object$* other) override;
	void copy(::jdk::internal::jrtfs::JrtPath* target, $Array<::java::nio::file::CopyOption>* options);
	void copyToTarget(::jdk::internal::jrtfs::JrtPath* target, $Array<::java::nio::file::CopyOption>* options);
	void createDirectory($Array<::java::nio::file::attribute::FileAttribute>* attrs);
	void delete$();
	void deleteIfExists();
	virtual bool endsWith(::java::nio::file::Path* other) override;
	virtual bool endsWith($String* other) override;
	virtual bool equals(Object$* obj) override;
	bool equalsNameAt(::jdk::internal::jrtfs::JrtPath* other, int32_t index);
	bool exists();
	::jdk::internal::jrtfs::JrtFileAttributes* getAttributes($Array<::java::nio::file::LinkOption>* options);
	virtual ::jdk::internal::jrtfs::JrtPath* getFileName() override;
	::java::nio::file::FileStore* getFileStore();
	virtual ::java::nio::file::FileSystem* getFileSystem() override;
	$String* getName();
	virtual ::jdk::internal::jrtfs::JrtPath* getName(int32_t index) override;
	virtual int32_t getNameCount() override;
	virtual ::jdk::internal::jrtfs::JrtPath* getParent() override;
	$String* getResolved();
	$String* getResolvedPath();
	virtual ::jdk::internal::jrtfs::JrtPath* getRoot() override;
	virtual int32_t hashCode() override;
	static int64_t highMask($String* chars);
	static int64_t highMask(char16_t first, char16_t last);
	void initOffsets();
	virtual bool isAbsolute() override;
	bool isHidden();
	bool isSameFile(::java::nio::file::Path* other);
	virtual ::java::util::Iterator* iterator() override;
	static int64_t lowMask($String* chars);
	static int64_t lowMask(char16_t first, char16_t last);
	static bool match(char16_t c, int64_t lowMask, int64_t highMask);
	void move(::jdk::internal::jrtfs::JrtPath* target, $Array<::java::nio::file::CopyOption>* options);
	::java::nio::channels::SeekableByteChannel* newByteChannel(::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::DirectoryStream$Filter* filter);
	::java::nio::channels::FileChannel* newFileChannel(::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	::java::io::InputStream* newInputStream($Array<::java::nio::file::OpenOption>* options);
	::java::io::OutputStream* newOutputStream($Array<::java::nio::file::OpenOption>* options);
	virtual ::jdk::internal::jrtfs::JrtPath* normalize() override;
	static $String* normalize($String* path);
	static $String* normalize($String* path, int32_t off);
	::java::util::Map* readAttributes($String* attributes, $Array<::java::nio::file::LinkOption>* options);
	::jdk::internal::jrtfs::JrtPath* readSymbolicLink();
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events) override;
	virtual ::jdk::internal::jrtfs::JrtPath* relativize(::java::nio::file::Path* other) override;
	virtual ::jdk::internal::jrtfs::JrtPath* resolve(::java::nio::file::Path* other) override;
	virtual ::jdk::internal::jrtfs::JrtPath* resolve($String* other) override;
	$String* resolvePath();
	virtual ::java::nio::file::Path* resolveSibling(::java::nio::file::Path* other) override;
	virtual ::java::nio::file::Path* resolveSibling($String* other) override;
	void setAttribute($String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options);
	void setTimes(::java::nio::file::attribute::FileTime* mtime, ::java::nio::file::attribute::FileTime* atime, ::java::nio::file::attribute::FileTime* ctime);
	virtual bool startsWith(::java::nio::file::Path* other) override;
	virtual bool startsWith($String* other) override;
	virtual ::jdk::internal::jrtfs::JrtPath* subpath(int32_t beginIndex, int32_t endIndex) override;
	virtual ::jdk::internal::jrtfs::JrtPath* toAbsolutePath() override;
	virtual ::java::io::File* toFile() override;
	virtual ::jdk::internal::jrtfs::JrtPath* toRealPath($Array<::java::nio::file::LinkOption>* options) override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	static ::java::net::URI* toUri($String* str);
	static bool $assertionsDisabled;
	::jdk::internal::jrtfs::JrtFileSystem* jrtfs = nullptr;
	$String* path = nullptr;
	$volatile($ints*) offsets = nullptr;
	$volatile($String*) resolved = nullptr;
	static int64_t L_DIGIT;
	static const int64_t H_DIGIT = (int64_t)0;
	static const int64_t L_UPALPHA = (int64_t)0;
	static int64_t H_UPALPHA;
	static const int64_t L_LOWALPHA = (int64_t)0;
	static int64_t H_LOWALPHA;
	static const int64_t L_ALPHA = 0; // L_LOWALPHA | L_UPALPHA
	static int64_t H_ALPHA;
	static int64_t L_ALPHANUM;
	static int64_t H_ALPHANUM;
	static int64_t L_MARK;
	static int64_t H_MARK;
	static int64_t L_UNRESERVED;
	static int64_t H_UNRESERVED;
	static int64_t L_PCHAR;
	static int64_t H_PCHAR;
	static int64_t L_PATH;
	static int64_t H_PATH;
	static $chars* hexDigits;
};

		} // jrtfs
	} // internal
} // jdk

#pragma pop_macro("H_PATH")
#pragma pop_macro("L_ALPHA")
#pragma pop_macro("L_PATH")
#pragma pop_macro("L_ALPHANUM")
#pragma pop_macro("H_DIGIT")
#pragma pop_macro("L_DIGIT")
#pragma pop_macro("H_UNRESERVED")
#pragma pop_macro("H_PCHAR")
#pragma pop_macro("L_MARK")
#pragma pop_macro("L_UNRESERVED")
#pragma pop_macro("L_PCHAR")
#pragma pop_macro("H_ALPHA")
#pragma pop_macro("H_ALPHANUM")
#pragma pop_macro("H_UPALPHA")
#pragma pop_macro("L_LOWALPHA")
#pragma pop_macro("L_UPALPHA")
#pragma pop_macro("H_LOWALPHA")
#pragma pop_macro("H_MARK")

#endif // _jdk_internal_jrtfs_JrtPath_h_