#ifndef _sun_nio_fs_UnixFileStoreAttributes_h_
#define _sun_nio_fs_UnixFileStoreAttributes_h_
//$ class sun.nio.fs.UnixFileStoreAttributes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileStoreAttributes : public ::java::lang::Object {
	$class(UnixFileStoreAttributes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnixFileStoreAttributes();
	void init$();
	virtual int64_t availableBlocks();
	virtual int64_t blockSize();
	virtual int64_t freeBlocks();
	static ::sun::nio::fs::UnixFileStoreAttributes* get(::sun::nio::fs::UnixPath* path);
	virtual int64_t totalBlocks();
	int64_t f_frsize = 0;
	int64_t f_blocks = 0;
	int64_t f_bfree = 0;
	int64_t f_bavail = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileStoreAttributes_h_