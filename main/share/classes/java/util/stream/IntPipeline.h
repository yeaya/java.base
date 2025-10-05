#ifndef _java_util_stream_IntPipeline_h_
#define _java_util_stream_IntPipeline_h_
//$ class java.util.stream.IntPipeline
//$ extends java.util.stream.AbstractPipeline
//$ implements java.util.stream.IntStream

#include <java/lang/Array.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/IntStream.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class IntSummaryStatistics;
		class Iterator;
		class OptionalDouble;
		class OptionalInt;
		class Spliterator;
		class Spliterator$OfInt;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class IntBinaryOperator;
			class IntConsumer;
			class IntFunction;
			class IntPredicate;
			class IntToDoubleFunction;
			class IntToLongFunction;
			class IntUnaryOperator;
			class ObjIntConsumer;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class BaseStream;
			class DoubleStream;
			class IntStream$IntMapMultiConsumer;
			class LongStream;
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

class IntPipeline : public ::java::util::stream::AbstractPipeline {
	$class(IntPipeline, $NO_CLASS_INIT, ::java::util::stream::AbstractPipeline, ::java::util::stream::IntStream)
public:
	IntPipeline();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::stream::AbstractPipeline* upstream, int32_t opFlags);
	static ::java::util::function::IntConsumer* adapt(::java::util::stream::Sink* sink);
	static ::java::util::Spliterator$OfInt* adapt(::java::util::Spliterator* s);
	bool allMatch(::java::util::function::IntPredicate* predicate);
	bool anyMatch(::java::util::function::IntPredicate* predicate);
	::java::util::stream::DoubleStream* asDoubleStream();
	::java::util::stream::LongStream* asLongStream();
	::java::util::OptionalDouble* average();
	::java::util::stream::Stream* boxed();
	$Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjIntConsumer* accumulator, ::java::util::function::BiConsumer* combiner);
	int64_t count();
	::java::util::stream::IntStream* distinct();
	::java::util::stream::IntStream* dropWhile(::java::util::function::IntPredicate* predicate);
	virtual ::java::util::stream::Node* evaluateToNode(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree, ::java::util::function::IntFunction* generator) override;
	::java::util::stream::IntStream* filter(::java::util::function::IntPredicate* predicate);
	::java::util::OptionalInt* findAny();
	::java::util::OptionalInt* findFirst();
	::java::util::stream::IntStream* flatMap(::java::util::function::IntFunction* mapper);
	virtual void forEach(::java::util::function::IntConsumer* action);
	virtual void forEachOrdered(::java::util::function::IntConsumer* action);
	virtual bool forEachWithCancel(::java::util::Spliterator* spliterator, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::StreamShape* getOutputShape() override;
	virtual bool isParallel() override;
	virtual ::java::util::Iterator* iterator() override;
	static $longs* lambda$average$1();
	static void lambda$average$2($longs* ll, int32_t i);
	static void lambda$average$3($longs* ll, $longs* rr);
	static $Object* lambda$collect$4(::java::util::function::BiConsumer* combiner, Object$* left, Object$* right);
	static int32_t lambda$distinct$0(::java::lang::Integer* i);
	static $Array<::java::lang::Integer>* lambda$toArray$5(int32_t x$0);
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier) override;
	::java::util::stream::IntStream* limit(int64_t maxSize);
	virtual ::java::util::stream::Node$Builder* makeNodeBuilder(int64_t exactSizeIfKnown, ::java::util::function::IntFunction* generator) override;
	::java::util::stream::IntStream* map(::java::util::function::IntUnaryOperator* mapper);
	::java::util::stream::IntStream* mapMulti(::java::util::stream::IntStream$IntMapMultiConsumer* mapper);
	::java::util::stream::DoubleStream* mapToDouble(::java::util::function::IntToDoubleFunction* mapper);
	::java::util::stream::LongStream* mapToLong(::java::util::function::IntToLongFunction* mapper);
	::java::util::stream::Stream* mapToObj(::java::util::function::IntFunction* mapper, int32_t opFlags);
	::java::util::stream::Stream* mapToObj(::java::util::function::IntFunction* mapper);
	::java::util::OptionalInt* max();
	::java::util::OptionalInt* min();
	bool noneMatch(::java::util::function::IntPredicate* predicate);
	virtual ::java::util::stream::BaseStream* onClose(::java::lang::Runnable* closeHandler) override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	::java::util::stream::IntStream* peek(::java::util::function::IntConsumer* action);
	int32_t reduce(int32_t identity, ::java::util::function::IntBinaryOperator* op);
	::java::util::OptionalInt* reduce(::java::util::function::IntBinaryOperator* op);
	virtual ::java::util::stream::BaseStream* sequential() override;
	::java::util::stream::IntStream* skip(int64_t n);
	::java::util::stream::IntStream* sorted();
	virtual ::java::util::Spliterator* spliterator() override;
	int32_t sum();
	::java::util::IntSummaryStatistics* summaryStatistics();
	::java::util::stream::IntStream* takeWhile(::java::util::function::IntPredicate* predicate);
	$ints* toArray();
	virtual $String* toString() override;
	virtual ::java::util::stream::BaseStream* unordered() override;
	virtual ::java::util::Spliterator* wrap(::java::util::stream::PipelineHelper* ph, ::java::util::function::Supplier* supplier, bool isParallel) override;
	class MemberClass0$ : public ::java::util::stream::IntStream {
	public:
		virtual ::java::lang::Object0* toObject0$() const override;
		virtual ::java::util::stream::IntStream* filter(::java::util::function::IntPredicate* predicate) override;
		virtual ::java::util::stream::IntStream* map(::java::util::function::IntUnaryOperator* mapper) override;
		virtual ::java::util::stream::Stream* mapToObj(::java::util::function::IntFunction* mapper) override;
		virtual ::java::util::stream::LongStream* mapToLong(::java::util::function::IntToLongFunction* mapper) override;
		virtual ::java::util::stream::DoubleStream* mapToDouble(::java::util::function::IntToDoubleFunction* mapper) override;
		virtual ::java::util::stream::IntStream* flatMap(::java::util::function::IntFunction* mapper) override;
		virtual ::java::util::stream::IntStream* mapMulti(::java::util::stream::IntStream$IntMapMultiConsumer* mapper) override;
		virtual ::java::util::stream::IntStream* distinct() override;
		virtual ::java::util::stream::IntStream* sorted() override;
		virtual ::java::util::stream::IntStream* peek(::java::util::function::IntConsumer* action) override;
		virtual ::java::util::stream::IntStream* limit(int64_t maxSize) override;
		virtual ::java::util::stream::IntStream* skip(int64_t n) override;
		virtual ::java::util::stream::IntStream* takeWhile(::java::util::function::IntPredicate* predicate) override;
		virtual ::java::util::stream::IntStream* dropWhile(::java::util::function::IntPredicate* predicate) override;
		virtual void forEach(::java::util::function::IntConsumer* action) override;
		virtual void forEachOrdered(::java::util::function::IntConsumer* action) override;
		virtual $ints* toArray() override;
		virtual int32_t reduce(int32_t identity, ::java::util::function::IntBinaryOperator* op) override;
		virtual ::java::util::OptionalInt* reduce(::java::util::function::IntBinaryOperator* op) override;
		virtual $Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjIntConsumer* accumulator, ::java::util::function::BiConsumer* combiner) override;
		virtual int32_t sum() override;
		virtual ::java::util::OptionalInt* min() override;
		virtual ::java::util::OptionalInt* max() override;
		virtual int64_t count() override;
		virtual ::java::util::OptionalDouble* average() override;
		virtual ::java::util::IntSummaryStatistics* summaryStatistics() override;
		virtual bool anyMatch(::java::util::function::IntPredicate* predicate) override;
		virtual bool allMatch(::java::util::function::IntPredicate* predicate) override;
		virtual bool noneMatch(::java::util::function::IntPredicate* predicate) override;
		virtual ::java::util::OptionalInt* findFirst() override;
		virtual ::java::util::OptionalInt* findAny() override;
		virtual ::java::util::stream::LongStream* asLongStream() override;
		virtual ::java::util::stream::DoubleStream* asDoubleStream() override;
		virtual ::java::util::stream::Stream* boxed() override;
		virtual ::java::util::stream::IntStream* sequential() override;
		virtual ::java::util::stream::IntStream* parallel() override;
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
	::java::util::stream::IntStream* as$(::java::util::stream::IntStream*) {
		return &memberClass0$;
	}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline_h_