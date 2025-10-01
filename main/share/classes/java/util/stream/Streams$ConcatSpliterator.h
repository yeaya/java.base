#ifndef _java_util_stream_Streams$ConcatSpliterator_h_
#define _java_util_stream_Streams$ConcatSpliterator_h_
//$ class java.util.stream.Streams$ConcatSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams$ConcatSpliterator : public ::java::util::Spliterator {
	$class(Streams$ConcatSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Streams$ConcatSpliterator();
	void init$(::java::util::Spliterator* aSpliterator, ::java::util::Spliterator* bSpliterator);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::Spliterator* aSpliterator = nullptr;
	::java::util::Spliterator* bSpliterator = nullptr;
	bool beforeSplit = false;
	bool unsized = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$ConcatSpliterator_h_