#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfLong_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfLong_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator$OfLong
//$ extends java.util.stream.WhileOps$UnorderedWhileSpliterator
//$ implements java.util.function.LongConsumer,java.util.Spliterator$OfLong

#include <java/util/Spliterator$OfLong.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongPredicate;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$UnorderedWhileSpliterator$OfLong : public ::java::util::stream::WhileOps$UnorderedWhileSpliterator, public ::java::util::function::LongConsumer {
	$class(WhileOps$UnorderedWhileSpliterator$OfLong, $NO_CLASS_INIT, ::java::util::stream::WhileOps$UnorderedWhileSpliterator, ::java::util::function::LongConsumer, ::java::util::Spliterator$OfLong)
public:
	WhileOps$UnorderedWhileSpliterator$OfLong();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(::java::util::function::LongConsumer* action);
	virtual void forEachRemaining(Object$* action);
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator$OfLong* s, bool noSplitting, ::java::util::function::LongPredicate* p);
	void init$(::java::util::Spliterator$OfLong* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong* parent);
	virtual void accept(int64_t t) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual bool tryAdvance(::java::util::function::LongConsumer* action) {return false;}
	virtual bool tryAdvance(Object$* action);
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
	::java::util::function::LongPredicate* p = nullptr;
	int64_t t = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfLong_h_