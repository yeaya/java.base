#ifndef _PassThroughFileSystem_h_
#define _PassThroughFileSystem_h_
//$ class PassThroughFileSystem
//$ extends java.nio.file.FileSystem

#include <java/lang/Array.h>
#include <java/nio/file/FileSystem.h>

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

class PassThroughFileSystem : public ::java::nio::file::FileSystem {
	$class(PassThroughFileSystem, $NO_CLASS_INIT, ::java::nio::file::FileSystem)
public:
	PassThroughFileSystem();
	void init$(::java::nio::file::spi::FileSystemProvider* provider, ::java::nio::file::FileSystem* delegate);
	virtual void close() override;
	static ::java::nio::file::FileSystem* create();
	virtual ::java::lang::Iterable* getFileStores() override;
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more) override;
	virtual ::java::nio::file::PathMatcher* getPathMatcher($String* syntaxAndPattern) override;
	virtual ::java::lang::Iterable* getRootDirectories() override;
	virtual $String* getSeparator() override;
	virtual ::java::nio::file::attribute::UserPrincipalLookupService* getUserPrincipalLookupService() override;
	virtual bool isOpen() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::file::WatchService* newWatchService() override;
	virtual ::java::nio::file::spi::FileSystemProvider* provider() override;
	virtual ::java::util::Set* supportedFileAttributeViews() override;
	static ::java::nio::file::Path* unwrap(::java::nio::file::Path* wrapper);
	::java::nio::file::spi::FileSystemProvider* provider$ = nullptr;
	::java::nio::file::FileSystem* delegate = nullptr;
};

#endif // _PassThroughFileSystem_h_