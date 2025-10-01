#ifndef _java_util_stream_Streams$LongStreamBuilderImpl_h_
#define _java_util_stream_Streams$LongStreamBuilderImpl_h_
//$ class java.util.stream.Streams$LongStreamBuilderImpl
//$ extends java.util.stream.Streams$AbstractStreamBuilderImpl
//$ implements java.util.stream.LongStream$Builder,java.util.Spliterator$OfLong

#include <java/util/Spliterator$OfLong.h>
#include <java/util/stream/LongStream$Builder.h>
#include <java/util/stream/Streams$AbstractStreamBuilderImpl.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class LongStream;
			class SpinedBuffer$OfLong;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams$LongStreamBuilderImpl : public ::java::util::stream::Streams$AbstractStreamBuilderImpl, public ::java::util::stream::LongStream$Builder {
	$class(Streams$LongStreamBuilderImpl, $NO_CLASS_INIT, ::java::util::stream::Streams$AbstractStreamBuilderImpl, ::java::util::stream::LongStream$Builder, ::java::util::Spliterator$OfLong)
public:
	Streams$LongStreamBuilderImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	void init$(int64_t t);
	virtual void accept(int64_t t) override;
	virtual ::java::util::stream::LongStream* build() override;
	void forEachRemaining(::java::util::function::LongConsumer* action);
	void forEachRemaining(Object$* action);
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	bool tryAdvance(::java::util::function::LongConsumer* action);
	bool tryAdvance(Object$* action);
	virtual ::java::util::Spliterator* trySplit() override;
	class MemberClass0$ : public ::java::util::Spliterator$OfLong {
	public:
		virtual ::java::lang::Object0* toObject0$() const override;
		virtual ::java::util::Spliterator$OfLong* trySplit() override;
		virtual bool tryAdvance(::java::util::function::LongConsumer* action) override;
		virtual void forEachRemaining(::java::util::function::LongConsumer* action) override;
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
	::java::util::Spliterator$OfLong* as$(::java::util::Spliterator$OfLong*) {
		return &memberClass0$;
	}
	int64_t first = 0;
	::java::util::stream::SpinedBuffer$OfLong* buffer = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$LongStreamBuilderImpl_h_