#ifndef _java_util_BitSet$1BitSetSpliterator_h_
#define _java_util_BitSet$1BitSetSpliterator_h_
//$ class java.util.BitSet$1BitSetSpliterator
//$ extends java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>

namespace java {
	namespace util {
		class BitSet;
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
		}
	}
}

namespace java {
	namespace util {

class BitSet$1BitSetSpliterator : public ::java::util::Spliterator$OfInt {
	$class(BitSet$1BitSetSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfInt)
public:
	BitSet$1BitSetSpliterator();
	using ::java::util::Spliterator$OfInt::forEachRemaining;
	void init$(::java::util::BitSet* this$0, int32_t origin, int32_t fence, int32_t est, bool root);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	int32_t getFence();
	using ::java::util::Spliterator$OfInt::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfInt* trySplit() override;
	::java::util::BitSet* this$0 = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t est = 0;
	bool root = false;
};

	} // util
} // java

#endif // _java_util_BitSet$1BitSetSpliterator_h_