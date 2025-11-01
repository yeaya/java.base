#ifndef _java_util_stream_Streams$IntStreamBuilderImpl_h_
#define _java_util_stream_Streams$IntStreamBuilderImpl_h_
//$ class java.util.stream.Streams$IntStreamBuilderImpl
//$ extends java.util.stream.Streams$AbstractStreamBuilderImpl
//$ implements java.util.stream.IntStream$Builder,java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>
#include <java/util/stream/IntStream$Builder.h>
#include <java/util/stream/Streams$AbstractStreamBuilderImpl.h>

namespace java {
	namespace util {
		class Spliterator;
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
		namespace stream {
			class IntStream;
			class SpinedBuffer$OfInt;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams$IntStreamBuilderImpl : public ::java::util::stream::Streams$AbstractStreamBuilderImpl, public ::java::util::stream::IntStream$Builder {
	$class(Streams$IntStreamBuilderImpl, $NO_CLASS_INIT, ::java::util::stream::Streams$AbstractStreamBuilderImpl, ::java::util::stream::IntStream$Builder, ::java::util::Spliterator$OfInt)
public:
	Streams$IntStreamBuilderImpl();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t t);
	virtual void accept(int32_t t) override;
	virtual ::java::util::stream::IntStream* build() override;
	void forEachRemaining(::java::util::function::IntConsumer* action);
	void forEachRemaining(Object$* action);
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	bool tryAdvance(::java::util::function::IntConsumer* action);
	bool tryAdvance(Object$* action);
	virtual ::java::util::Spliterator* trySplit() override;
	class MemberClass0$ : public ::java::util::Spliterator$OfInt {
	public:
		MemberClass0$();
		virtual ::java::util::Spliterator$OfInt* trySplit() override;
		virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
		virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
		virtual bool tryAdvance(::java::util::function::Consumer* action) override;
		virtual void forEachRemaining(::java::util::function::Consumer* action) override;
		virtual void forEachRemaining(Object$* action) override;
		virtual bool tryAdvance(Object$* action) override;
		virtual int64_t estimateSize() override;
		virtual int64_t getExactSizeIfKnown() override;
		virtual int32_t characteristics() override;
		virtual bool hasCharacteristics(int32_t characteristics) override;
		virtual ::java::util::Comparator* getComparator() override;
		virtual int32_t hashCode() override;
		virtual bool equals(Object$* obj) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::java::util::Spliterator$OfInt* as$(::java::util::Spliterator$OfInt**) {
		return &memberClass0$;
	}
	int32_t first = 0;
	::java::util::stream::SpinedBuffer$OfInt* buffer = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$IntStreamBuilderImpl_h_