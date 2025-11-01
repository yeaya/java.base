#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfInt_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfInt_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator$OfInt
//$ extends java.util.stream.WhileOps$UnorderedWhileSpliterator
//$ implements java.util.function.IntConsumer,java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntPredicate;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$UnorderedWhileSpliterator$OfInt : public ::java::util::stream::WhileOps$UnorderedWhileSpliterator, public ::java::util::function::IntConsumer {
	$class(WhileOps$UnorderedWhileSpliterator$OfInt, $NO_CLASS_INIT, ::java::util::stream::WhileOps$UnorderedWhileSpliterator, ::java::util::function::IntConsumer, ::java::util::Spliterator$OfInt)
public:
	WhileOps$UnorderedWhileSpliterator$OfInt();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(::java::util::function::IntConsumer* action);
	virtual void forEachRemaining(Object$* action);
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator$OfInt* s, bool noSplitting, ::java::util::function::IntPredicate* p);
	void init$(::java::util::Spliterator$OfInt* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt* parent);
	virtual void accept(int32_t t) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) {return false;}
	virtual bool tryAdvance(Object$* action);
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
	::java::util::function::IntPredicate* p = nullptr;
	int32_t t = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfInt_h_