#ifndef _sun_util_resources_ParallelListResourceBundle$KeySet$1_h_
#define _sun_util_resources_ParallelListResourceBundle$KeySet$1_h_
//$ class sun.util.resources.ParallelListResourceBundle$KeySet$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace util {
		namespace resources {
			class ParallelListResourceBundle$KeySet;
		}
	}
}

namespace sun {
	namespace util {
		namespace resources {

class ParallelListResourceBundle$KeySet$1 : public ::java::util::Iterator {
	$class(ParallelListResourceBundle$KeySet$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ParallelListResourceBundle$KeySet$1();
	void init$(::sun::util::resources::ParallelListResourceBundle$KeySet* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::util::resources::ParallelListResourceBundle$KeySet* this$0 = nullptr;
	::java::util::Iterator* itr = nullptr;
	bool usingParent = false;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ParallelListResourceBundle$KeySet$1_h_