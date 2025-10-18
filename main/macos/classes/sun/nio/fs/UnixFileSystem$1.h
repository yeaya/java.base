#ifndef _sun_nio_fs_UnixFileSystem$1_h_
#define _sun_nio_fs_UnixFileSystem$1_h_
//$ class sun.nio.fs.UnixFileSystem$1
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace java {
	namespace util {
		class Iterator;
		class List;
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

class UnixFileSystem$1 : public ::java::lang::Iterable {
	$class(UnixFileSystem$1, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	UnixFileSystem$1();
	void init$(::sun::nio::fs::UnixFileSystem* this$0, ::java::util::List* val$allowedList);
	virtual ::java::util::Iterator* iterator() override;
	::sun::nio::fs::UnixFileSystem* this$0 = nullptr;
	::java::util::List* val$allowedList = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileSystem$1_h_