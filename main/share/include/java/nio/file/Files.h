#ifndef _java_nio_file_Files_h_
#define _java_nio_file_Files_h_
//$ class java.nio.file.Files
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_CREATE_OPTIONS")
#undef DEFAULT_CREATE_OPTIONS
#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("JLA")
#undef JLA

namespace java {
	namespace io {
		class BufferedReader;
		class BufferedWriter;
		class Closeable;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
		class Iterable;
		class Runnable;
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
		namespace charset {
			class Charset;
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
			class FileChannelLinesSpliterator;
			class FileStore;
			class FileTreeWalker$Event;
			class FileVisitOption;
			class FileVisitor;
			class LinkOption;
			class OpenOption;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileAttribute;
				class FileAttributeView;
				class FileTime;
				class UserPrincipal;
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace spi {
				class FileSystemProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiPredicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
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

namespace java {
	namespace nio {
		namespace file {

class $import Files : public ::java::lang::Object {
	$class(Files, 0, ::java::lang::Object)
public:
	Files();
	void init$();
	static ::java::lang::Runnable* asUncheckedRunnable(::java::io::Closeable* c);
	static ::java::nio::file::Path* copy(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options);
	static int64_t copy(::java::io::InputStream* in, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options);
	static int64_t copy(::java::nio::file::Path* source, ::java::io::OutputStream* out);
	static void createAndCheckIsDirectory(::java::nio::file::Path* dir, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::util::stream::Stream* createBufferedReaderLinesStream(::java::io::BufferedReader* br);
	static ::java::nio::file::Path* createDirectories(::java::nio::file::Path* dir, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* createDirectory(::java::nio::file::Path* dir, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* createFile(::java::nio::file::Path* path, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::util::stream::Stream* createFileChannelLinesStream(::java::nio::channels::FileChannel* fc, ::java::nio::charset::Charset* cs);
	static ::java::nio::file::Path* createLink(::java::nio::file::Path* link, ::java::nio::file::Path* existing);
	static ::java::nio::file::Path* createSymbolicLink(::java::nio::file::Path* link, ::java::nio::file::Path* target, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* createTempDirectory(::java::nio::file::Path* dir, $String* prefix, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* createTempDirectory($String* prefix, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* createTempFile(::java::nio::file::Path* dir, $String* prefix, $String* suffix, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* createTempFile($String* prefix, $String* suffix, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static void delete$(::java::nio::file::Path* path);
	static bool deleteIfExists(::java::nio::file::Path* path);
	static bool exists(::java::nio::file::Path* path, $Array<::java::nio::file::LinkOption>* options);
	static ::java::util::stream::Stream* find(::java::nio::file::Path* start, int32_t maxDepth, ::java::util::function::BiPredicate* matcher, $Array<::java::nio::file::FileVisitOption>* options);
	static bool followLinks($Array<::java::nio::file::LinkOption>* options);
	static $Object* getAttribute(::java::nio::file::Path* path, $String* attribute, $Array<::java::nio::file::LinkOption>* options);
	static ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options);
	static ::java::nio::file::FileStore* getFileStore(::java::nio::file::Path* path);
	static ::java::nio::file::attribute::FileTime* getLastModifiedTime(::java::nio::file::Path* path, $Array<::java::nio::file::LinkOption>* options);
	static ::java::nio::file::attribute::UserPrincipal* getOwner(::java::nio::file::Path* path, $Array<::java::nio::file::LinkOption>* options);
	static ::java::util::Set* getPosixFilePermissions(::java::nio::file::Path* path, $Array<::java::nio::file::LinkOption>* options);
	static bool isAccessible(::java::nio::file::Path* path, $Array<::java::nio::file::AccessMode>* modes);
	static bool isDirectory(::java::nio::file::Path* path, $Array<::java::nio::file::LinkOption>* options);
	static bool isExecutable(::java::nio::file::Path* path);
	static bool isHidden(::java::nio::file::Path* path);
	static bool isReadable(::java::nio::file::Path* path);
	static bool isRegularFile(::java::nio::file::Path* path, $Array<::java::nio::file::LinkOption>* options);
	static bool isSameFile(::java::nio::file::Path* path, ::java::nio::file::Path* path2);
	static bool isSymbolicLink(::java::nio::file::Path* path);
	static bool isWritable(::java::nio::file::Path* path);
	static void lambda$asUncheckedRunnable$0(::java::io::Closeable* c);
	static void lambda$createFileChannelLinesStream$4(::java::nio::file::FileChannelLinesSpliterator* fcls);
	static bool lambda$find$2(::java::util::function::BiPredicate* matcher, ::java::nio::file::FileTreeWalker$Event* entry);
	static ::java::nio::file::Path* lambda$walk$1(::java::nio::file::FileTreeWalker$Event* entry);
	static ::java::util::stream::Stream* lines(::java::nio::file::Path* path, ::java::nio::charset::Charset* cs);
	static ::java::util::stream::Stream* lines(::java::nio::file::Path* path);
	static ::java::util::stream::Stream* list(::java::nio::file::Path* dir);
	static int64_t mismatch(::java::nio::file::Path* path, ::java::nio::file::Path* path2);
	static ::java::nio::file::Path* move(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options);
	static ::java::io::BufferedReader* newBufferedReader(::java::nio::file::Path* path, ::java::nio::charset::Charset* cs);
	static ::java::io::BufferedReader* newBufferedReader(::java::nio::file::Path* path);
	static ::java::io::BufferedWriter* newBufferedWriter(::java::nio::file::Path* path, ::java::nio::charset::Charset* cs, $Array<::java::nio::file::OpenOption>* options);
	static ::java::io::BufferedWriter* newBufferedWriter(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options);
	static ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options);
	static ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* dir);
	static ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* dir, $String* glob);
	static ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* dir, ::java::nio::file::DirectoryStream$Filter* filter);
	static ::java::io::InputStream* newInputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options);
	static ::java::io::OutputStream* newOutputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options);
	static bool notExists(::java::nio::file::Path* path, $Array<::java::nio::file::LinkOption>* options);
	static $String* probeContentType(::java::nio::file::Path* path);
	static ::java::nio::file::spi::FileSystemProvider* provider(::java::nio::file::Path* path);
	static $bytes* read(::java::io::InputStream* source, int32_t initialSize);
	static $bytes* readAllBytes(::java::nio::file::Path* path);
	static ::java::util::List* readAllLines(::java::nio::file::Path* path, ::java::nio::charset::Charset* cs);
	static ::java::util::List* readAllLines(::java::nio::file::Path* path);
	static ::java::nio::file::attribute::BasicFileAttributes* readAttributes(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options);
	static ::java::util::Map* readAttributes(::java::nio::file::Path* path, $String* attributes, $Array<::java::nio::file::LinkOption>* options);
	static $String* readString(::java::nio::file::Path* path);
	static $String* readString(::java::nio::file::Path* path, ::java::nio::charset::Charset* cs);
	static ::java::nio::file::Path* readSymbolicLink(::java::nio::file::Path* link);
	static ::java::nio::file::Path* setAttribute(::java::nio::file::Path* path, $String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options);
	static ::java::nio::file::Path* setLastModifiedTime(::java::nio::file::Path* path, ::java::nio::file::attribute::FileTime* time);
	static ::java::nio::file::Path* setOwner(::java::nio::file::Path* path, ::java::nio::file::attribute::UserPrincipal* owner);
	static ::java::nio::file::Path* setPosixFilePermissions(::java::nio::file::Path* path, ::java::util::Set* perms);
	static int64_t size(::java::nio::file::Path* path);
	static ::java::util::stream::Stream* walk(::java::nio::file::Path* start, int32_t maxDepth, $Array<::java::nio::file::FileVisitOption>* options);
	static ::java::util::stream::Stream* walk(::java::nio::file::Path* start, $Array<::java::nio::file::FileVisitOption>* options);
	static ::java::nio::file::Path* walkFileTree(::java::nio::file::Path* start, ::java::util::Set* options, int32_t maxDepth, ::java::nio::file::FileVisitor* visitor);
	static ::java::nio::file::Path* walkFileTree(::java::nio::file::Path* start, ::java::nio::file::FileVisitor* visitor);
	static ::java::nio::file::Path* write(::java::nio::file::Path* path, $bytes* bytes, $Array<::java::nio::file::OpenOption>* options);
	static ::java::nio::file::Path* write(::java::nio::file::Path* path, ::java::lang::Iterable* lines, ::java::nio::charset::Charset* cs, $Array<::java::nio::file::OpenOption>* options);
	static ::java::nio::file::Path* write(::java::nio::file::Path* path, ::java::lang::Iterable* lines, $Array<::java::nio::file::OpenOption>* options);
	static ::java::nio::file::Path* writeString(::java::nio::file::Path* path, ::java::lang::CharSequence* csq, $Array<::java::nio::file::OpenOption>* options);
	static ::java::nio::file::Path* writeString(::java::nio::file::Path* path, ::java::lang::CharSequence* csq, ::java::nio::charset::Charset* cs, $Array<::java::nio::file::OpenOption>* options);
	static bool $assertionsDisabled;
	static const int32_t BUFFER_SIZE = 8192;
	static ::java::util::Set* DEFAULT_CREATE_OPTIONS;
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

		} // file
	} // nio
} // java

#pragma pop_macro("DEFAULT_CREATE_OPTIONS")
#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("JLA")

#endif // _java_nio_file_Files_h_