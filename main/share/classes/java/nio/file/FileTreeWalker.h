#ifndef _java_nio_file_FileTreeWalker_h_
#define _java_nio_file_FileTreeWalker_h_
//$ class java.nio.file.FileTreeWalker
//$ extends java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class FileTreeWalker$Event;
			class LinkOption;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayDeque;
		class Collection;
	}
}

namespace java {
	namespace nio {
		namespace file {

class FileTreeWalker : public ::java::io::Closeable {
	$class(FileTreeWalker, 0, ::java::io::Closeable)
public:
	FileTreeWalker();
	void init$(::java::util::Collection* options, int32_t maxDepth);
	virtual void close() override;
	::java::nio::file::attribute::BasicFileAttributes* getAttributes(::java::nio::file::Path* file, bool canUseCached);
	virtual bool isOpen();
	virtual ::java::nio::file::FileTreeWalker$Event* next();
	virtual void pop();
	virtual void skipRemainingSiblings();
	::java::nio::file::FileTreeWalker$Event* visit(::java::nio::file::Path* entry, bool ignoreSecurityException, bool canUseCached);
	virtual ::java::nio::file::FileTreeWalker$Event* walk(::java::nio::file::Path* file);
	bool wouldLoop(::java::nio::file::Path* dir, Object$* key);
	static bool $assertionsDisabled;
	bool followLinks = false;
	$Array<::java::nio::file::LinkOption>* linkOptions = nullptr;
	int32_t maxDepth = 0;
	::java::util::ArrayDeque* stack = nullptr;
	bool closed = false;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileTreeWalker_h_