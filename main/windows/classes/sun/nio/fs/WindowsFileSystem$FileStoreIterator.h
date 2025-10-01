#ifndef _sun_nio_fs_WindowsFileSystem$FileStoreIterator_h_
#define _sun_nio_fs_WindowsFileSystem$FileStoreIterator_h_
//$ class sun.nio.fs.WindowsFileSystem$FileStoreIterator
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
			class WindowsFileSystem;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileSystem$FileStoreIterator : public ::java::util::Iterator {
	$class(WindowsFileSystem$FileStoreIterator, 0, ::java::util::Iterator)
public:
	WindowsFileSystem$FileStoreIterator();
	void init$(::sun::nio::fs::WindowsFileSystem* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::nio::file::FileStore* readNext();
	virtual void remove() override;
	::sun::nio::fs::WindowsFileSystem* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::util::Iterator* roots = nullptr;
	::java::nio::file::FileStore* next$ = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileSystem$FileStoreIterator_h_