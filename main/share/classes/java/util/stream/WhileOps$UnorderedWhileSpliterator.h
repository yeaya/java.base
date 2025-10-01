#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

#pragma push_macro("CANCEL_CHECK_COUNT")
#undef CANCEL_CHECK_COUNT

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$UnorderedWhileSpliterator : public ::java::util::Spliterator {
	$class(WhileOps$UnorderedWhileSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	WhileOps$UnorderedWhileSpliterator();
	void init$(::java::util::Spliterator* s, bool noSplitting);
	void init$(::java::util::Spliterator* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator* parent);
	virtual int32_t characteristics() override;
	virtual bool checkCancelOnCount();
	virtual int64_t estimateSize() override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) {return nullptr;}
	virtual ::java::util::Spliterator* trySplit() override;
	static const int32_t CANCEL_CHECK_COUNT = 63; // (1 << 6) - 1
	::java::util::Spliterator* s = nullptr;
	bool noSplitting = false;
	::java::util::concurrent::atomic::AtomicBoolean* cancel = nullptr;
	bool takeOrDrop = false;
	int32_t count = 0;
};

		} // stream
	} // util
} // java

#pragma pop_macro("CANCEL_CHECK_COUNT")

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator_h_