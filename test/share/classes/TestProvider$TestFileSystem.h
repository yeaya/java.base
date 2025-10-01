#ifndef _TestProvider$TestFileSystem_h_
#define _TestProvider$TestFileSystem_h_
//$ class TestProvider$TestFileSystem
//$ extends java.nio.file.FileSystem

#include <java/lang/Array.h>
#include <java/nio/file/FileSystem.h>

class TestProvider;
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

class $export TestProvider$TestFileSystem : public ::java::nio::file::FileSystem {
	$class(TestProvider$TestFileSystem, $NO_CLASS_INIT, ::java::nio::file::FileSystem)
public:
	TestProvider$TestFileSystem();
	void init$(::java::nio::file::FileSystem* delegate, ::TestProvider* provider);
	virtual void close() override;
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
	virtual ::java::nio::file::Path* unwrap(::java::nio::file::Path* wrapper);
	virtual ::java::nio::file::Path* wrap(::java::nio::file::Path* path);
	::java::nio::file::FileSystem* delegate = nullptr;
	::TestProvider* provider$ = nullptr;
};

#endif // _TestProvider$TestFileSystem_h_