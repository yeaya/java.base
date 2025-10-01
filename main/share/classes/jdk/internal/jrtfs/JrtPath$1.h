#ifndef _jdk_internal_jrtfs_JrtPath$1_h_
#define _jdk_internal_jrtfs_JrtPath$1_h_
//$ class jdk.internal.jrtfs.JrtPath$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtPath$1 : public ::java::util::Iterator {
	$class(JrtPath$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JrtPath$1();
	void init$(::jdk::internal::jrtfs::JrtPath* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::jdk::internal::jrtfs::JrtPath* this$0 = nullptr;
	int32_t i = 0;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtPath$1_h_