#ifndef _java_util_stream_LongPipeline_h_
#define _java_util_stream_LongPipeline_h_
//$ class java.util.stream.LongPipeline
//$ extends java.util.stream.AbstractPipeline
//$ implements java.util.stream.LongStream

#include <java/lang/Array.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/LongStream.h>

namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class LongSummaryStatistics;
		class OptionalDouble;
		class OptionalLong;
		class Spliterator;
		class Spliterator$OfLong;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class IntFunction;
			class LongBinaryOperator;
			class LongConsumer;
			class LongFunction;
			class LongPredicate;
			class LongToDoubleFunction;
			class LongToIntFunction;
			class LongUnaryOperator;
			class ObjLongConsumer;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class BaseStream;
			class DoubleStream;
			class IntStream;
			class LongStream$LongMapMultiConsumer;
			class Node;
			class Node$Builder;
			class PipelineHelper;
			class Sink;
			class Stream;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongPipeline : public ::java::util::stream::AbstractPipeline {
	$class(LongPipeline, $NO_CLASS_INIT, ::java::util::stream::AbstractPipeline, ::java::util::stream::LongStream)
public:
	LongPipeline();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::stream::AbstractPipeline* upstream, int32_t opFlags);
	static ::java::util::function::LongConsumer* adapt(::java::util::stream::Sink* sink);
	static ::java::util::Spliterator$OfLong* adapt(::java::util::Spliterator* s);
	bool allMatch(::java::util::function::LongPredicate* predicate);
	bool anyMatch(::java::util::function::LongPredicate* predicate);
	::java::util::stream::DoubleStream* asDoubleStream();
	::java::util::OptionalDouble* average();
	::java::util::stream::Stream* boxed();
	$Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjLongConsumer* accumulator, ::java::util::function::BiConsumer* combiner);
	int64_t count();
	::java::util::stream::LongStream* distinct();
	::java::util::stream::LongStream* dropWhile(::java::util::function::LongPredicate* predicate);
	virtual ::java::util::stream::Node* evaluateToNode(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree, ::java::util::function::IntFunction* generator) override;
	::java::util::stream::LongStream* filter(::java::util::function::LongPredicate* predicate);
	::java::util::OptionalLong* findAny();
	::java::util::OptionalLong* findFirst();
	::java::util::stream::LongStream* flatMap(::java::util::function::LongFunction* mapper);
	virtual void forEach(::java::util::function::LongConsumer* action);
	virtual void forEachOrdered(::java::util::function::LongConsumer* action);
	virtual bool forEachWithCancel(::java::util::Spliterator* spliterator, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::StreamShape* getOutputShape() override;
	virtual bool isParallel() override;
	virtual ::java::util::Iterator* iterator() override;
	static $longs* lambda$average$1();
	static void lambda$average$2($longs* ll, int64_t i);
	static void lambda$average$3($longs* ll, $longs* rr);
	static $Object* lambda$collect$4(::java::util::function::BiConsumer* combiner, Object$* left, Object$* right);
	static int64_t lambda$distinct$0(::java::lang::Long* i);
	static $Array<::java::lang::Long>* lambda$toArray$5(int32_t x$0);
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier) override;
	::java::util::stream::LongStream* limit(int64_t maxSize);
	virtual ::java::util::stream::Node$Builder* makeNodeBuilder(int64_t exactSizeIfKnown, ::java::util::function::IntFunction* generator) override;
	::java::util::stream::LongStream* map(::java::util::function::LongUnaryOperator* mapper);
	::java::util::stream::LongStream* mapMulti(::java::util::stream::LongStream$LongMapMultiConsumer* mapper);
	::java::util::stream::DoubleStream* mapToDouble(::java::util::function::LongToDoubleFunction* mapper);
	::java::util::stream::IntStream* mapToInt(::java::util::function::LongToIntFunction* mapper);
	::java::util::stream::Stream* mapToObj(::java::util::function::LongFunction* mapper, int32_t opFlags);
	::java::util::stream::Stream* mapToObj(::java::util::function::LongFunction* mapper);
	::java::util::OptionalLong* max();
	::java::util::OptionalLong* min();
	bool noneMatch(::java::util::function::LongPredicate* predicate);
	virtual ::java::util::stream::BaseStream* onClose(::java::lang::Runnable* closeHandler) override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	::java::util::stream::LongStream* peek(::java::util::function::LongConsumer* action);
	int64_t reduce(int64_t identity, ::java::util::function::LongBinaryOperator* op);
	::java::util::OptionalLong* reduce(::java::util::function::LongBinaryOperator* op);
	virtual ::java::util::stream::BaseStream* sequential() override;
	::java::util::stream::LongStream* skip(int64_t n);
	::java::util::stream::LongStream* sorted();
	virtual ::java::util::Spliterator* spliterator() override;
	int64_t sum();
	::java::util::LongSummaryStatistics* summaryStatistics();
	::java::util::stream::LongStream* takeWhile(::java::util::function::LongPredicate* predicate);
	$longs* toArray();
	virtual $String* toString() override;
	virtual ::java::util::stream::BaseStream* unordered() override;
	virtual ::java::util::Spliterator* wrap(::java::util::stream::PipelineHelper* ph, ::java::util::function::Supplier* supplier, bool isParallel) override;
	class MemberClass0$ : public ::java::util::stream::LongStream {
	public:
		MemberClass0$();
		virtual ::java::util::stream::LongStream* filter(::java::util::function::LongPredicate* predicate) override;
		virtual ::java::util::stream::LongStream* map(::java::util::function::LongUnaryOperator* mapper) override;
		virtual ::java::util::stream::Stream* mapToObj(::java::util::function::LongFunction* mapper) override;
		virtual ::java::util::stream::IntStream* mapToInt(::java::util::function::LongToIntFunction* mapper) override;
		virtual ::java::util::stream::DoubleStream* mapToDouble(::java::util::function::LongToDoubleFunction* mapper) override;
		virtual ::java::util::stream::LongStream* flatMap(::java::util::function::LongFunction* mapper) override;
		virtual ::java::util::stream::LongStream* mapMulti(::java::util::stream::LongStream$LongMapMultiConsumer* mapper) override;
		virtual ::java::util::stream::LongStream* distinct() override;
		virtual ::java::util::stream::LongStream* sorted() override;
		virtual ::java::util::stream::LongStream* peek(::java::util::function::LongConsumer* action) override;
		virtual ::java::util::stream::LongStream* limit(int64_t maxSize) override;
		virtual ::java::util::stream::LongStream* skip(int64_t n) override;
		virtual ::java::util::stream::LongStream* takeWhile(::java::util::function::LongPredicate* predicate) override;
		virtual ::java::util::stream::LongStream* dropWhile(::java::util::function::LongPredicate* predicate) override;
		virtual void forEach(::java::util::function::LongConsumer* action) override;
		virtual void forEachOrdered(::java::util::function::LongConsumer* action) override;
		virtual $longs* toArray() override;
		virtual int64_t reduce(int64_t identity, ::java::util::function::LongBinaryOperator* op) override;
		virtual ::java::util::OptionalLong* reduce(::java::util::function::LongBinaryOperator* op) override;
		virtual $Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjLongConsumer* accumulator, ::java::util::function::BiConsumer* combiner) override;
		virtual int64_t sum() override;
		virtual ::java::util::OptionalLong* min() override;
		virtual ::java::util::OptionalLong* max() override;
		virtual int64_t count() override;
		virtual ::java::util::OptionalDouble* average() override;
		virtual ::java::util::LongSummaryStatistics* summaryStatistics() override;
		virtual bool anyMatch(::java::util::function::LongPredicate* predicate) override;
		virtual bool allMatch(::java::util::function::LongPredicate* predicate) override;
		virtual bool noneMatch(::java::util::function::LongPredicate* predicate) override;
		virtual ::java::util::OptionalLong* findFirst() override;
		virtual ::java::util::OptionalLong* findAny() override;
		virtual ::java::util::stream::DoubleStream* asDoubleStream() override;
		virtual ::java::util::stream::Stream* boxed() override;
		virtual ::java::util::stream::LongStream* sequential() override;
		virtual ::java::util::stream::LongStream* parallel() override;
		virtual ::java::util::Iterator* iterator() override;
		virtual ::java::util::Spliterator* spliterator() override;
		virtual bool isParallel() override;
		virtual ::java::util::stream::BaseStream* unordered() override;
		virtual ::java::util::stream::BaseStream* onClose(::java::lang::Runnable* closeHandler) override;
		virtual void close() override;
		virtual int32_t hashCode() override;
		virtual bool equals(Object$* obj) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::java::util::stream::LongStream* as$(::java::util::stream::LongStream**) {
		return &memberClass0$;
	}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline_h_