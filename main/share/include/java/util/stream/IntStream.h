#ifndef _java_util_stream_IntStream_h_
#define _java_util_stream_IntStream_h_
//$ interface java.util.stream.IntStream
//$ extends java.util.stream.BaseStream

#include <java/lang/Array.h>
#include <java/util/stream/BaseStream.h>

namespace java {
	namespace util {
		class IntSummaryStatistics;
		class OptionalDouble;
		class OptionalInt;
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
			class IntSupplier;
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
			class DoubleStream;
			class IntStream$Builder;
			class IntStream$IntMapMultiConsumer;
			class LongStream;
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $import IntStream : public ::java::util::stream::BaseStream {
	$interface(IntStream, $NO_CLASS_INIT, ::java::util::stream::BaseStream)
public:
	virtual bool allMatch(::java::util::function::IntPredicate* predicate) {return false;}
	virtual bool anyMatch(::java::util::function::IntPredicate* predicate) {return false;}
	virtual ::java::util::stream::DoubleStream* asDoubleStream() {return nullptr;}
	virtual ::java::util::stream::LongStream* asLongStream() {return nullptr;}
	virtual ::java::util::OptionalDouble* average() {return nullptr;}
	virtual ::java::util::stream::Stream* boxed() {return nullptr;}
	static ::java::util::stream::IntStream$Builder* builder();
	virtual $Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjIntConsumer* accumulator, ::java::util::function::BiConsumer* combiner) {return nullptr;}
	static ::java::util::stream::IntStream* concat(::java::util::stream::IntStream* a, ::java::util::stream::IntStream* b);
	virtual int64_t count() {return 0;}
	virtual ::java::util::stream::IntStream* distinct() {return nullptr;}
	virtual ::java::util::stream::IntStream* dropWhile(::java::util::function::IntPredicate* predicate);
	static ::java::util::stream::IntStream* empty();
	virtual ::java::util::stream::IntStream* filter(::java::util::function::IntPredicate* predicate) {return nullptr;}
	virtual ::java::util::OptionalInt* findAny() {return nullptr;}
	virtual ::java::util::OptionalInt* findFirst() {return nullptr;}
	virtual ::java::util::stream::IntStream* flatMap(::java::util::function::IntFunction* mapper) {return nullptr;}
	virtual void forEach(::java::util::function::IntConsumer* action) {}
	virtual void forEachOrdered(::java::util::function::IntConsumer* action) {}
	static ::java::util::stream::IntStream* generate(::java::util::function::IntSupplier* s);
	static ::java::util::stream::IntStream* iterate(int32_t seed, ::java::util::function::IntUnaryOperator* f);
	static ::java::util::stream::IntStream* iterate(int32_t seed, ::java::util::function::IntPredicate* hasNext, ::java::util::function::IntUnaryOperator* next);
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	static ::java::util::stream::IntStream* lambda$mapMulti$0(::java::util::stream::IntStream$IntMapMultiConsumer* mapper, int32_t e);
	virtual ::java::util::stream::IntStream* limit(int64_t maxSize) {return nullptr;}
	virtual ::java::util::stream::IntStream* map(::java::util::function::IntUnaryOperator* mapper) {return nullptr;}
	virtual ::java::util::stream::IntStream* mapMulti(::java::util::stream::IntStream$IntMapMultiConsumer* mapper);
	virtual ::java::util::stream::DoubleStream* mapToDouble(::java::util::function::IntToDoubleFunction* mapper) {return nullptr;}
	virtual ::java::util::stream::LongStream* mapToLong(::java::util::function::IntToLongFunction* mapper) {return nullptr;}
	virtual ::java::util::stream::Stream* mapToObj(::java::util::function::IntFunction* mapper) {return nullptr;}
	virtual ::java::util::OptionalInt* max() {return nullptr;}
	virtual ::java::util::OptionalInt* min() {return nullptr;}
	virtual bool noneMatch(::java::util::function::IntPredicate* predicate) {return false;}
	static ::java::util::stream::IntStream* of(int32_t t);
	static ::java::util::stream::IntStream* of($ints* values);
	virtual ::java::util::stream::IntStream* parallel() override {return nullptr;}
	virtual ::java::util::stream::IntStream* peek(::java::util::function::IntConsumer* action) {return nullptr;}
	static ::java::util::stream::IntStream* range(int32_t startInclusive, int32_t endExclusive);
	static ::java::util::stream::IntStream* rangeClosed(int32_t startInclusive, int32_t endInclusive);
	virtual int32_t reduce(int32_t identity, ::java::util::function::IntBinaryOperator* op) {return 0;}
	virtual ::java::util::OptionalInt* reduce(::java::util::function::IntBinaryOperator* op) {return nullptr;}
	virtual ::java::util::stream::IntStream* sequential() override {return nullptr;}
	virtual ::java::util::stream::IntStream* skip(int64_t n) {return nullptr;}
	virtual ::java::util::stream::IntStream* sorted() {return nullptr;}
	virtual ::java::util::Spliterator* spliterator() override {return nullptr;}
	virtual int32_t sum() {return 0;}
	virtual ::java::util::IntSummaryStatistics* summaryStatistics() {return nullptr;}
	virtual ::java::util::stream::IntStream* takeWhile(::java::util::function::IntPredicate* predicate);
	virtual $ints* toArray() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntStream_h_