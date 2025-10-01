#ifndef _java_util_stream_DoubleStream_h_
#define _java_util_stream_DoubleStream_h_
//$ interface java.util.stream.DoubleStream
//$ extends java.util.stream.BaseStream

#include <java/lang/Array.h>
#include <java/util/stream/BaseStream.h>

namespace java {
	namespace util {
		class DoubleSummaryStatistics;
		class OptionalDouble;
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
			class DoubleSupplier;
			class DoubleToIntFunction;
			class DoubleToLongFunction;
			class DoubleUnaryOperator;
			class ObjDoubleConsumer;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class DoubleStream$Builder;
			class DoubleStream$DoubleMapMultiConsumer;
			class IntStream;
			class LongStream;
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export DoubleStream : public ::java::util::stream::BaseStream {
	$interface(DoubleStream, $NO_CLASS_INIT, ::java::util::stream::BaseStream)
public:
	virtual bool allMatch(::java::util::function::DoublePredicate* predicate) {return false;}
	virtual bool anyMatch(::java::util::function::DoublePredicate* predicate) {return false;}
	virtual ::java::util::OptionalDouble* average() {return nullptr;}
	virtual ::java::util::stream::Stream* boxed() {return nullptr;}
	static ::java::util::stream::DoubleStream$Builder* builder();
	virtual $Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjDoubleConsumer* accumulator, ::java::util::function::BiConsumer* combiner) {return nullptr;}
	static ::java::util::stream::DoubleStream* concat(::java::util::stream::DoubleStream* a, ::java::util::stream::DoubleStream* b);
	virtual int64_t count() {return 0;}
	virtual ::java::util::stream::DoubleStream* distinct() {return nullptr;}
	virtual ::java::util::stream::DoubleStream* dropWhile(::java::util::function::DoublePredicate* predicate);
	static ::java::util::stream::DoubleStream* empty();
	virtual ::java::util::stream::DoubleStream* filter(::java::util::function::DoublePredicate* predicate) {return nullptr;}
	virtual ::java::util::OptionalDouble* findAny() {return nullptr;}
	virtual ::java::util::OptionalDouble* findFirst() {return nullptr;}
	virtual ::java::util::stream::DoubleStream* flatMap(::java::util::function::DoubleFunction* mapper) {return nullptr;}
	virtual void forEach(::java::util::function::DoubleConsumer* action) {}
	virtual void forEachOrdered(::java::util::function::DoubleConsumer* action) {}
	static ::java::util::stream::DoubleStream* generate(::java::util::function::DoubleSupplier* s);
	static ::java::util::stream::DoubleStream* iterate(double seed, ::java::util::function::DoubleUnaryOperator* f);
	static ::java::util::stream::DoubleStream* iterate(double seed, ::java::util::function::DoublePredicate* hasNext, ::java::util::function::DoubleUnaryOperator* next);
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	static ::java::util::stream::DoubleStream* lambda$mapMulti$0(::java::util::stream::DoubleStream$DoubleMapMultiConsumer* mapper, double e);
	virtual ::java::util::stream::DoubleStream* limit(int64_t maxSize) {return nullptr;}
	virtual ::java::util::stream::DoubleStream* map(::java::util::function::DoubleUnaryOperator* mapper) {return nullptr;}
	virtual ::java::util::stream::DoubleStream* mapMulti(::java::util::stream::DoubleStream$DoubleMapMultiConsumer* mapper);
	virtual ::java::util::stream::IntStream* mapToInt(::java::util::function::DoubleToIntFunction* mapper) {return nullptr;}
	virtual ::java::util::stream::LongStream* mapToLong(::java::util::function::DoubleToLongFunction* mapper) {return nullptr;}
	virtual ::java::util::stream::Stream* mapToObj(::java::util::function::DoubleFunction* mapper) {return nullptr;}
	virtual ::java::util::OptionalDouble* max() {return nullptr;}
	virtual ::java::util::OptionalDouble* min() {return nullptr;}
	virtual bool noneMatch(::java::util::function::DoublePredicate* predicate) {return false;}
	static ::java::util::stream::DoubleStream* of(double t);
	static ::java::util::stream::DoubleStream* of($doubles* values);
	virtual ::java::util::stream::DoubleStream* parallel() override {return nullptr;}
	virtual ::java::util::stream::DoubleStream* peek(::java::util::function::DoubleConsumer* action) {return nullptr;}
	virtual double reduce(double identity, ::java::util::function::DoubleBinaryOperator* op) {return 0.0;}
	virtual ::java::util::OptionalDouble* reduce(::java::util::function::DoubleBinaryOperator* op) {return nullptr;}
	virtual ::java::util::stream::DoubleStream* sequential() override {return nullptr;}
	virtual ::java::util::stream::DoubleStream* skip(int64_t n) {return nullptr;}
	virtual ::java::util::stream::DoubleStream* sorted() {return nullptr;}
	virtual ::java::util::Spliterator* spliterator() override {return nullptr;}
	virtual double sum() {return 0.0;}
	virtual ::java::util::DoubleSummaryStatistics* summaryStatistics() {return nullptr;}
	virtual ::java::util::stream::DoubleStream* takeWhile(::java::util::function::DoublePredicate* predicate);
	virtual $doubles* toArray() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoubleStream_h_