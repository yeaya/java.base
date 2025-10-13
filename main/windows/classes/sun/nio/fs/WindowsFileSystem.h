#ifndef _sun_nio_fs_WindowsFileSystem_h_
#define _sun_nio_fs_WindowsFileSystem_h_
//$ class sun.nio.fs.WindowsFileSystem
//$ extends java.nio.file.FileSystem

#include <java/lang/Array.h>
#include <java/nio/file/FileSystem.h>

#pragma push_macro("GLOB_SYNTAX")
#undef GLOB_SYNTAX
#pragma push_macro("REGEX_SYNTAX")
#undef REGEX_SYNTAX

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
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsFileSystemProvider;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileSystem : public ::java::nio::file::FileSystem {
	$class(WindowsFileSystem, 0, ::java::nio::file::FileSystem)
public:
	WindowsFileSystem();
	void init$(::sun::nio::fs::WindowsFileSystemProvider* provider, $String* dir);
	virtual void close() override;
	virtual $String* defaultDirectory();
	virtual $String* defaultRoot();
	virtual ::java::lang::Iterable* getFileStores() override;
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more) override;
	virtual ::java::nio::file::PathMatcher* getPathMatcher($String* syntaxAndInput) override;
	virtual ::java::lang::Iterable* getRootDirectories() override;
	virtual $String* getSeparator() override;
	virtual ::java::nio::file::attribute::UserPrincipalLookupService* getUserPrincipalLookupService() override;
	virtual bool isOpen() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::file::WatchService* newWatchService() override;
	virtual ::java::nio::file::spi::FileSystemProvider* provider() override;
	virtual ::java::util::Set* supportedFileAttributeViews() override;
	::sun::nio::fs::WindowsFileSystemProvider* provider$ = nullptr;
	$String* defaultDirectory$ = nullptr;
	$String* defaultRoot$ = nullptr;
	static ::java::util::Set* supportedFileAttributeViews$;
	static $String* GLOB_SYNTAX;
	static $String* REGEX_SYNTAX;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("GLOB_SYNTAX")
#pragma pop_macro("REGEX_SYNTAX")

#endif // _sun_nio_fs_WindowsFileSystem_h_