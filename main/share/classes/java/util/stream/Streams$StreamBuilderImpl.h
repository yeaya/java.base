#ifndef _java_util_stream_Streams$StreamBuilderImpl_h_
#define _java_util_stream_Streams$StreamBuilderImpl_h_
//$ class java.util.stream.Streams$StreamBuilderImpl
//$ extends java.util.stream.Streams$AbstractStreamBuilderImpl
//$ implements java.util.stream.Stream$Builder

#include <java/util/stream/Stream$Builder.h>
#include <java/util/stream/Streams$AbstractStreamBuilderImpl.h>

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
			class SpinedBuffer;
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams$StreamBuilderImpl : public ::java::util::stream::Streams$AbstractStreamBuilderImpl, public ::java::util::stream::Stream$Builder {
	$class(Streams$StreamBuilderImpl, $NO_CLASS_INIT, ::java::util::stream::Streams$AbstractStreamBuilderImpl, ::java::util::stream::Stream$Builder)
public:
	Streams$StreamBuilderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(Object$* t);
	virtual void accept(Object$* t) override;
	virtual ::java::util::stream::Stream$Builder* add(Object$* t) override;
	virtual ::java::util::stream::Stream* build() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	$Object* first = nullptr;
	::java::util::stream::SpinedBuffer* buffer = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$StreamBuilderImpl_h_