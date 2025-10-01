#ifndef _jdk_internal_util_random_RandomSupport$RandomSpliterator_h_
#define _jdk_internal_util_random_RandomSupport$RandomSpliterator_h_
//$ class jdk.internal.util.random.RandomSupport$RandomSpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $import RandomSupport$RandomSpliterator : public ::java::lang::Object {
	$class(RandomSupport$RandomSpliterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RandomSupport$RandomSpliterator();
	void init$(int64_t index, int64_t fence);
	virtual int32_t characteristics();
	virtual int64_t estimateSize();
	int64_t index = 0;
	int64_t fence = 0;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$RandomSpliterator_h_