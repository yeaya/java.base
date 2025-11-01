#ifndef _java_util_stream_DoublePipeline_h_
#define _java_util_stream_DoublePipeline_h_
//$ class java.util.stream.DoublePipeline
//$ extends java.util.stream.AbstractPipeline
//$ implements java.util.stream.DoubleStream

#include <java/lang/Array.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/DoubleStream.h>

namespace java {
	namespace lang {
		class Double;
	}
}
namespace java {
	namespace util {
		class DoubleSummaryStatistics;
		class Iterator;
		class OptionalDouble;
		class Spliterator;
		class Spliterator$OfDouble;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class DoubleBinaryOperator;
			class DoubleConsumer;
			class DoubleFunction;
			class DoublePredicate;
			class DoubleToIntFunction;
			class DoubleToLongFunction;
			class DoubleUnaryOperator;
			class IntFunction;
			class ObjDoubleConsumer;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class BaseStream;
			class DoubleStream$DoubleMapMultiConsumer;
			class IntStream;
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

class DoublePipeline : public ::java::util::stream::AbstractPipeline {
	$class(DoublePipeline, $NO_CLASS_INIT, ::java::util::stream::AbstractPipeline, ::java::util::stream::DoubleStream)
public:
	DoublePipeline();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::stream::AbstractPipeline* upstream, int32_t opFlags);
	static ::java::util::function::DoubleConsumer* adapt(::java::util::stream::Sink* sink);
	static ::java::util::Spliterator$OfDouble* adapt(::java::util::Spliterator* s);
	bool allMatch(::java::util::function::DoublePredicate* predicate);
	bool anyMatch(::java::util::function::DoublePredicate* predicate);
	::java::util::OptionalDouble* average();
	::java::util::stream::Stream* boxed();
	$Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjDoubleConsumer* accumulator, ::java::util::function::BiConsumer* combiner);
	int64_t count();
	::java::util::stream::DoubleStream* distinct();
	::java::util::stream::DoubleStream* dropWhile(::java::util::function::DoublePredicate* predicate);
	virtual ::java::util::stream::Node* evaluateToNode(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree, ::java::util::function::IntFunction* generator) override;
	::java::util::stream::DoubleStream* filter(::java::util::function::DoublePredicate* predicate);
	::java::util::OptionalDouble* findAny();
	::java::util::OptionalDouble* findFirst();
	::java::util::stream::DoubleStream* flatMap(::java::util::function::DoubleFunction* mapper);
	virtual void forEach(::java::util::function::DoubleConsumer* consumer);
	virtual void forEachOrdered(::java::util::function::DoubleConsumer* consumer);
	virtual bool forEachWithCancel(::java::util::Spliterator* spliterator, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::StreamShape* getOutputShape() override;
	virtual bool isParallel() override;
	virtual ::java::util::Iterator* iterator() override;
	static $doubles* lambda$average$4();
	static void lambda$average$5($doubles* ll, double d);
	static void lambda$average$6($doubles* ll, $doubles* rr);
	static $Object* lambda$collect$7(::java::util::function::BiConsumer* combiner, Object$* left, Object$* right);
	static double lambda$distinct$0(::java::lang::Double* i);
	static $doubles* lambda$sum$1();
	static void lambda$sum$2($doubles* ll, double d);
	static void lambda$sum$3($doubles* ll, $doubles* rr);
	static $Array<::java::lang::Double>* lambda$toArray$8(int32_t x$0);
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier) override;
	::java::util::stream::DoubleStream* limit(int64_t maxSize);
	virtual ::java::util::stream::Node$Builder* makeNodeBuilder(int64_t exactSizeIfKnown, ::java::util::function::IntFunction* generator) override;
	::java::util::stream::DoubleStream* map(::java::util::function::DoubleUnaryOperator* mapper);
	::java::util::stream::DoubleStream* mapMulti(::java::util::stream::DoubleStream$DoubleMapMultiConsumer* mapper);
	::java::util::stream::IntStream* mapToInt(::java::util::function::DoubleToIntFunction* mapper);
	::java::util::stream::LongStream* mapToLong(::java::util::function::DoubleToLongFunction* mapper);
	::java::util::stream::Stream* mapToObj(::java::util::function::DoubleFunction* mapper, int32_t opFlags);
	::java::util::stream::Stream* mapToObj(::java::util::function::DoubleFunction* mapper);
	::java::util::OptionalDouble* max();
	::java::util::OptionalDouble* min();
	bool noneMatch(::java::util::function::DoublePredicate* predicate);
	virtual ::java::util::stream::BaseStream* onClose(::java::lang::Runnable* closeHandler) override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	::java::util::stream::DoubleStream* peek(::java::util::function::DoubleConsumer* action);
	double reduce(double identity, ::java::util::function::DoubleBinaryOperator* op);
	::java::util::OptionalDouble* reduce(::java::util::function::DoubleBinaryOperator* op);
	virtual ::java::util::stream::BaseStream* sequential() override;
	::java::util::stream::DoubleStream* skip(int64_t n);
	::java::util::stream::DoubleStream* sorted();
	virtual ::java::util::Spliterator* spliterator() override;
	double sum();
	::java::util::DoubleSummaryStatistics* summaryStatistics();
	::java::util::stream::DoubleStream* takeWhile(::java::util::function::DoublePredicate* predicate);
	$doubles* toArray();
	virtual $String* toString() override;
	virtual ::java::util::stream::BaseStream* unordered() override;
	virtual ::java::util::Spliterator* wrap(::java::util::stream::PipelineHelper* ph, ::java::util::function::Supplier* supplier, bool isParallel) override;
	class MemberClass0$ : public ::java::util::stream::DoubleStream {
	public:
		MemberClass0$();
		virtual ::java::util::stream::DoubleStream* filter(::java::util::function::DoublePredicate* predicate) override;
		virtual ::java::util::stream::DoubleStream* map(::java::util::function::DoubleUnaryOperator* mapper) override;
		virtual ::java::util::stream::Stream* mapToObj(::java::util::function::DoubleFunction* mapper) override;
		virtual ::java::util::stream::IntStream* mapToInt(::java::util::function::DoubleToIntFunction* mapper) override;
		virtual ::java::util::stream::LongStream* mapToLong(::java::util::function::DoubleToLongFunction* mapper) override;
		virtual ::java::util::stream::DoubleStream* flatMap(::java::util::function::DoubleFunction* mapper) override;
		virtual ::java::util::stream::DoubleStream* mapMulti(::java::util::stream::DoubleStream$DoubleMapMultiConsumer* mapper) override;
		virtual ::java::util::stream::DoubleStream* distinct() override;
		virtual ::java::util::stream::DoubleStream* sorted() override;
		virtual ::java::util::stream::DoubleStream* peek(::java::util::function::DoubleConsumer* action) override;
		virtual ::java::util::stream::DoubleStream* limit(int64_t maxSize) override;
		virtual ::java::util::stream::DoubleStream* skip(int64_t n) override;
		virtual ::java::util::stream::DoubleStream* takeWhile(::java::util::function::DoublePredicate* predicate) override;
		virtual ::java::util::stream::DoubleStream* dropWhile(::java::util::function::DoublePredicate* predicate) override;
		virtual void forEach(::java::util::function::DoubleConsumer* action) override;
		virtual void forEachOrdered(::java::util::function::DoubleConsumer* action) override;
		virtual $doubles* toArray() override;
		virtual double reduce(double identity, ::java::util::function::DoubleBinaryOperator* op) override;
		virtual ::java::util::OptionalDouble* reduce(::java::util::function::DoubleBinaryOperator* op) override;
		virtual $Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjDoubleConsumer* accumulator, ::java::util::function::BiConsumer* combiner) override;
		virtual double sum() override;
		virtual ::java::util::OptionalDouble* min() override;
		virtual ::java::util::OptionalDouble* max() override;
		virtual int64_t count() override;
		virtual ::java::util::OptionalDouble* average() override;
		virtual ::java::util::DoubleSummaryStatistics* summaryStatistics() override;
		virtual bool anyMatch(::java::util::function::DoublePredicate* predicate) override;
		virtual bool allMatch(::java::util::function::DoublePredicate* predicate) override;
		virtual bool noneMatch(::java::util::function::DoublePredicate* predicate) override;
		virtual ::java::util::OptionalDouble* findFirst() override;
		virtual ::java::util::OptionalDouble* findAny() override;
		virtual ::java::util::stream::Stream* boxed() override;
		virtual ::java::util::stream::DoubleStream* sequential() override;
		virtual ::java::util::stream::DoubleStream* parallel() override;
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
	::java::util::stream::DoubleStream* as$(::java::util::stream::DoubleStream**) {
		return &memberClass0$;
	}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline_h_