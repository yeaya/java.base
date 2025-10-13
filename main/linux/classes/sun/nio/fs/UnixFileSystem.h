#ifndef _sun_nio_fs_UnixFileSystem_h_
#define _sun_nio_fs_UnixFileSystem_h_
//$ class sun.nio.fs.UnixFileSystem
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
			class FileStore;
			class Path;
			class PathMatcher;
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
		class List;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixFileSystemProvider;
			class UnixMountEntry;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileSystem : public ::java::nio::file::FileSystem {
	$class(UnixFileSystem, 0, ::java::nio::file::FileSystem)
public:
	UnixFileSystem();
	void init$(::sun::nio::fs::UnixFileSystemProvider* provider, $String* dir);
	virtual void close() override;
	virtual ::java::util::regex::Pattern* compilePathMatchPattern($String* expr);
	virtual void copyNonPosixAttributes(int32_t sfd, int32_t tfd);
	virtual $bytes* defaultDirectory();
	virtual ::java::nio::file::FileStore* getFileStore(::sun::nio::fs::UnixMountEntry* entry) {return nullptr;}
	virtual ::java::lang::Iterable* getFileStores() override;
	virtual ::java::lang::Iterable* getMountEntries() {return nullptr;}
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more) override;
	virtual ::java::nio::file::PathMatcher* getPathMatcher($String* syntaxAndInput) override;
	virtual ::java::lang::Iterable* getRootDirectories() override;
	virtual $String* getSeparator() override;
	virtual ::java::nio::file::attribute::UserPrincipalLookupService* getUserPrincipalLookupService() override;
	virtual bool isOpen() override;
	virtual bool isReadOnly() override;
	virtual bool needToResolveAgainstDefaultDirectory();
	virtual $String* normalizeJavaPath($String* path);
	virtual $String* normalizeNativePath($String* path);
	virtual ::java::nio::file::spi::FileSystemProvider* provider() override;
	virtual ::sun::nio::fs::UnixPath* rootDirectory();
	static ::java::util::List* standardFileAttributeViews();
	::sun::nio::fs::UnixFileSystemProvider* provider$ = nullptr;
	$bytes* defaultDirectory$ = nullptr;
	bool needToResolveAgainstDefaultDirectory$ = false;
	::sun::nio::fs::UnixPath* rootDirectory$ = nullptr;
	static $String* GLOB_SYNTAX;
	static $String* REGEX_SYNTAX;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("GLOB_SYNTAX")
#pragma pop_macro("REGEX_SYNTAX")

#endif // _sun_nio_fs_UnixFileSystem_h_