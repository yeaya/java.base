#ifndef _jdk_internal_jrtfs_JrtDirectoryStream$1_h_
#define _jdk_internal_jrtfs_JrtDirectoryStream$1_h_
//$ class jdk.internal.jrtfs.JrtDirectoryStream$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtDirectoryStream;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtDirectoryStream$1 : public ::java::util::Iterator {
	$class(JrtDirectoryStream$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JrtDirectoryStream$1();
	void init$(::jdk::internal::jrtfs::JrtDirectoryStream* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::jdk::internal::jrtfs::JrtDirectoryStream* this$0 = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtDirectoryStream$1_h_