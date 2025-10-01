#ifndef _java_util_stream_StreamSpliterators$DelegatingSpliterator_h_
#define _java_util_stream_StreamSpliterators$DelegatingSpliterator_h_
//$ class java.util.stream.StreamSpliterators$DelegatingSpliterator
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
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$DelegatingSpliterator : public ::java::util::Spliterator {
	$class(StreamSpliterators$DelegatingSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	StreamSpliterators$DelegatingSpliterator();
	void init$(::java::util::function::Supplier* supplier);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* get();
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::function::Supplier* supplier = nullptr;
	::java::util::Spliterator* s = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$DelegatingSpliterator_h_