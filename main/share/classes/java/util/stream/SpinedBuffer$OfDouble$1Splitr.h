#ifndef _java_util_stream_SpinedBuffer$OfDouble$1Splitr_h_
#define _java_util_stream_SpinedBuffer$OfDouble$1Splitr_h_
//$ class java.util.stream.SpinedBuffer$OfDouble$1Splitr
//$ extends java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator
//$ implements java.util.Spliterator$OfDouble

#include <java/lang/Array.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/stream/SpinedBuffer$OfPrimitive$BaseSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
		class Spliterator$OfPrimitive;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class SpinedBuffer$OfDouble;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SpinedBuffer$OfDouble$1Splitr : public ::java::util::stream::SpinedBuffer$OfPrimitive$BaseSpliterator {
	$class(SpinedBuffer$OfDouble$1Splitr, $NO_CLASS_INIT, ::java::util::stream::SpinedBuffer$OfPrimitive$BaseSpliterator, ::java::util::Spliterator$OfDouble)
public:
	SpinedBuffer$OfDouble$1Splitr();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(Object$* consumer) override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::SpinedBuffer$OfDouble* this$0, int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence);
	virtual void arrayForOne($doubles* array, int32_t index, ::java::util::function::DoubleConsumer* consumer);
	virtual void arrayForOne(Object$* array, int32_t index, Object$* consumer) override;
	virtual ::java::util::Spliterator$OfDouble* arraySpliterator($doubles* array, int32_t offset, int32_t len);
	virtual ::java::util::Spliterator$OfPrimitive* arraySpliterator(Object$* array, int32_t offset, int32_t len) override;
	virtual void forEachRemaining(::java::util::function::DoubleConsumer* consumer);
	virtual ::java::util::Spliterator$OfPrimitive* newSpliterator(int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(Object$* consumer) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual bool tryAdvance(::java::util::function::DoubleConsumer* consumer);
	virtual ::java::util::Spliterator* trySplit() override;
	class MemberClass0$ : public ::java::util::Spliterator$OfDouble {
	public:
		virtual ::java::lang::Object0* toObject0$() const override;
		virtual ::java::util::Spliterator$OfDouble* trySplit() override;
		virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) override;
		virtual void forEachRemaining(::java::util::function::DoubleConsumer* action) override;
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
	::java::util::Spliterator$OfDouble* as$(::java::util::Spliterator$OfDouble*) {
		return &memberClass0$;
	}
	::java::util::stream::SpinedBuffer$OfDouble* this$0 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SpinedBuffer$OfDouble$1Splitr_h_