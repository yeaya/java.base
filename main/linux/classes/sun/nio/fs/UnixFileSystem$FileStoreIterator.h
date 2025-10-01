#ifndef _sun_nio_fs_UnixFileSystem$FileStoreIterator_h_
#define _sun_nio_fs_UnixFileSystem$FileStoreIterator_h_
//$ class sun.nio.fs.UnixFileSystem$FileStoreIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace nio {
		namespace file {
			class FileStore;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixFileSystem;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileSystem$FileStoreIterator : public ::java::util::Iterator {
	$class(UnixFileSystem$FileStoreIterator, 0, ::java::util::Iterator)
public:
	UnixFileSystem$FileStoreIterator();
	void init$(::sun::nio::fs::UnixFileSystem* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::nio::file::FileStore* readNext();
	virtual void remove() override;
	::sun::nio::fs::UnixFileSystem* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::util::Iterator* entries = nullptr;
	::java::nio::file::FileStore* next$ = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileSystem$FileStoreIterator_h_