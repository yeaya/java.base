#ifndef _java_util_stream_Streams$AbstractStreamBuilderImpl_h_
#define _java_util_stream_Streams$AbstractStreamBuilderImpl_h_
//$ class java.util.stream.Streams$AbstractStreamBuilderImpl
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		namespace stream {

class Streams$AbstractStreamBuilderImpl : public ::java::util::Spliterator {
	$class(Streams$AbstractStreamBuilderImpl, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Streams$AbstractStreamBuilderImpl();
	void init$();
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual ::java::util::Spliterator* trySplit() override;
	int32_t count = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$AbstractStreamBuilderImpl_h_