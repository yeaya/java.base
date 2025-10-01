#ifndef _java_util_stream_ReferencePipeline_h_
#define _java_util_stream_ReferencePipeline_h_
//$ class java.util.stream.ReferencePipeline
//$ extends java.util.stream.AbstractPipeline
//$ implements java.util.stream.Stream

#include <java/lang/Array.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/Stream.h>

namespace java {
	namespace util {
		class Comparator;
		class Iterator;
		class List;
		class Optional;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class BinaryOperator;
			class Consumer;
			class Function;
			class IntFunction;
			class Predicate;
			class Supplier;
			class ToDoubleFunction;
			class ToIntFunction;
			class ToLongFunction;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class BaseStream;
			class Collector;
			class DoubleStream;
			class IntStream;
			class LongStream;
			class Node;
			class Node$Builder;
			class PipelineHelper;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline : public ::java::util::stream::AbstractPipeline, public ::java::util::stream::Stream {
	$class(ReferencePipeline, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::AbstractPipeline, ::java::util::stream::Stream)
public:
	ReferencePipeline();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::stream::AbstractPipeline* upstream, int32_t opFlags);
	virtual bool allMatch(::java::util::function::Predicate* predicate) override;
	virtual bool anyMatch(::java::util::function::Predicate* predicate) override;
	virtual $Object* collect(::java::util::stream::Collector* collector) override;
	virtual $Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::BiConsumer* accumulator, ::java::util::function::BiConsumer* combiner) override;
	virtual int64_t count() override;
	virtual ::java::util::stream::Stream* distinct() override;
	virtual ::java::util::stream::Stream* dropWhile(::java::util::function::Predicate* predicate) override;
	virtual ::java::util::stream::Node* evaluateToNode(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::stream::Stream* filter(::java::util::function::Predicate* predicate) override;
	virtual ::java::util::Optional* findAny() override;
	virtual ::java::util::Optional* findFirst() override;
	virtual ::java::util::stream::Stream* flatMap(::java::util::function::Function* mapper) override;
	virtual ::java::util::stream::DoubleStream* flatMapToDouble(::java::util::function::Function* mapper) override;
	virtual ::java::util::stream::IntStream* flatMapToInt(::java::util::function::Function* mapper) override;
	virtual ::java::util::stream::LongStream* flatMapToLong(::java::util::function::Function* mapper) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual void forEachOrdered(::java::util::function::Consumer* action) override;
	virtual bool forEachWithCancel(::java::util::Spliterator* spliterator, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::StreamShape* getOutputShape() override;
	virtual bool isParallel() override;
	virtual ::java::util::Iterator* iterator() override;
	static void lambda$collect$1(::java::util::function::BiConsumer* accumulator, Object$* container, Object$* u);
	static $ObjectArray* lambda$toArray$0(int32_t x$0);
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier) override;
	virtual ::java::util::stream::Stream* limit(int64_t maxSize) override;
	virtual ::java::util::stream::Node$Builder* makeNodeBuilder(int64_t exactSizeIfKnown, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::stream::Stream* map(::java::util::function::Function* mapper) override;
	virtual ::java::util::stream::Stream* mapMulti(::java::util::function::BiConsumer* mapper) override;
	virtual ::java::util::stream::DoubleStream* mapMultiToDouble(::java::util::function::BiConsumer* mapper) override;
	virtual ::java::util::stream::IntStream* mapMultiToInt(::java::util::function::BiConsumer* mapper) override;
	virtual ::java::util::stream::LongStream* mapMultiToLong(::java::util::function::BiConsumer* mapper) override;
	virtual ::java::util::stream::DoubleStream* mapToDouble(::java::util::function::ToDoubleFunction* mapper) override;
	virtual ::java::util::stream::IntStream* mapToInt(::java::util::function::ToIntFunction* mapper) override;
	virtual ::java::util::stream::LongStream* mapToLong(::java::util::function::ToLongFunction* mapper) override;
	virtual ::java::util::Optional* max(::java::util::Comparator* comparator) override;
	virtual ::java::util::Optional* min(::java::util::Comparator* comparator) override;
	virtual bool noneMatch(::java::util::function::Predicate* predicate) override;
	virtual ::java::util::stream::BaseStream* onClose(::java::lang::Runnable* closeHandler) override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	virtual ::java::util::stream::Stream* peek(::java::util::function::Consumer* action) override;
	virtual $Object* reduce(Object$* identity, ::java::util::function::BinaryOperator* accumulator) override;
	virtual ::java::util::Optional* reduce(::java::util::function::BinaryOperator* accumulator) override;
	virtual $Object* reduce(Object$* identity, ::java::util::function::BiFunction* accumulator, ::java::util::function::BinaryOperator* combiner) override;
	virtual ::java::util::stream::BaseStream* sequential() override;
	virtual ::java::util::stream::Stream* skip(int64_t n) override;
	virtual ::java::util::stream::Stream* sorted() override;
	virtual ::java::util::stream::Stream* sorted(::java::util::Comparator* comparator) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* takeWhile(::java::util::function::Predicate* predicate) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual ::java::util::List* toList() override;
	virtual $String* toString() override;
	virtual ::java::util::stream::BaseStream* unordered() override;
	virtual ::java::util::Spliterator* wrap(::java::util::stream::PipelineHelper* ph, ::java::util::function::Supplier* supplier, bool isParallel) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline_h_