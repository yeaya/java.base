#ifndef _sun_nio_fs_UnixFileSystem$2_h_
#define _sun_nio_fs_UnixFileSystem$2_h_
//$ class sun.nio.fs.UnixFileSystem$2
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace java {
	namespace util {
		class Iterator;
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

class UnixFileSystem$2 : public ::java::lang::Iterable {
	$class(UnixFileSystem$2, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	UnixFileSystem$2();
	void init$(::sun::nio::fs::UnixFileSystem* this$0);
	virtual ::java::util::Iterator* iterator() override;
	::sun::nio::fs::UnixFileSystem* this$0 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileSystem$2_h_