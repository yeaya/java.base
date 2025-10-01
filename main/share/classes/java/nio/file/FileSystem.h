#ifndef _java_nio_file_FileSystem_h_
#define _java_nio_file_FileSystem_h_
//$ class java.nio.file.FileSystem
//$ extends java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
			class PathMatcher;
			class WatchService;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class UserPrincipalLookupService;
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
		class Set;
	}
}

namespace java {
	namespace nio {
		namespace file {

class $export FileSystem : public ::java::io::Closeable {
	$class(FileSystem, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	FileSystem();
	virtual void close() override {}
	void init$();
	virtual ::java::lang::Iterable* getFileStores() {return nullptr;}
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more) {return nullptr;}
	virtual ::java::nio::file::PathMatcher* getPathMatcher($String* syntaxAndPattern) {return nullptr;}
	virtual ::java::lang::Iterable* getRootDirectories() {return nullptr;}
	virtual $String* getSeparator() {return nullptr;}
	virtual ::java::nio::file::attribute::UserPrincipalLookupService* getUserPrincipalLookupService() {return nullptr;}
	virtual bool isOpen() {return false;}
	virtual bool isReadOnly() {return false;}
	virtual ::java::nio::file::WatchService* newWatchService() {return nullptr;}
	virtual ::java::nio::file::spi::FileSystemProvider* provider() {return nullptr;}
	virtual ::java::util::Set* supportedFileAttributeViews() {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileSystem_h_