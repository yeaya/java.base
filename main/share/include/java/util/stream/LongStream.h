#ifndef _java_util_stream_LongStream_h_
#define _java_util_stream_LongStream_h_
//$ interface java.util.stream.LongStream
//$ extends java.util.stream.BaseStream

#include <java/lang/Array.h>
#include <java/util/stream/BaseStream.h>

namespace java {
	namespace util {
		class LongSummaryStatistics;
		class OptionalDouble;
		class OptionalLong;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class LongBinaryOperator;
			class LongConsumer;
			class LongFunction;
			class LongPredicate;
			class LongSupplier;
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
			class DoubleStream;
			class IntStream;
			class LongStream$Builder;
			class LongStream$LongMapMultiConsumer;
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $import LongStream : public ::java::util::stream::BaseStream {
	$interface(LongStream, $NO_CLASS_INIT, ::java::util::stream::BaseStream)
public:
	virtual bool allMatch(::java::util::function::LongPredicate* predicate) {return false;}
	virtual bool anyMatch(::java::util::function::LongPredicate* predicate) {return false;}
	virtual ::java::util::stream::DoubleStream* asDoubleStream() {return nullptr;}
	virtual ::java::util::OptionalDouble* average() {return nullptr;}
	virtual ::java::util::stream::Stream* boxed() {return nullptr;}
	static ::java::util::stream::LongStream$Builder* builder();
	virtual $Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::ObjLongConsumer* accumulator, ::java::util::function::BiConsumer* combiner) {return nullptr;}
	static ::java::util::stream::LongStream* concat(::java::util::stream::LongStream* a, ::java::util::stream::LongStream* b);
	virtual int64_t count() {return 0;}
	virtual ::java::util::stream::LongStream* distinct() {return nullptr;}
	virtual ::java::util::stream::LongStream* dropWhile(::java::util::function::LongPredicate* predicate);
	static ::java::util::stream::LongStream* empty();
	virtual ::java::util::stream::LongStream* filter(::java::util::function::LongPredicate* predicate) {return nullptr;}
	virtual ::java::util::OptionalLong* findAny() {return nullptr;}
	virtual ::java::util::OptionalLong* findFirst() {return nullptr;}
	virtual ::java::util::stream::LongStream* flatMap(::java::util::function::LongFunction* mapper) {return nullptr;}
	virtual void forEach(::java::util::function::LongConsumer* action) {}
	virtual void forEachOrdered(::java::util::function::LongConsumer* action) {}
	static ::java::util::stream::LongStream* generate(::java::util::function::LongSupplier* s);
	static ::java::util::stream::LongStream* iterate(int64_t seed, ::java::util::function::LongUnaryOperator* f);
	static ::java::util::stream::LongStream* iterate(int64_t seed, ::java::util::function::LongPredicate* hasNext, ::java::util::function::LongUnaryOperator* next);
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	static ::java::util::stream::LongStream* lambda$mapMulti$0(::java::util::stream::LongStream$LongMapMultiConsumer* mapper, int64_t e);
	virtual ::java::util::stream::LongStream* limit(int64_t maxSize) {return nullptr;}
	virtual ::java::util::stream::LongStream* map(::java::util::function::LongUnaryOperator* mapper) {return nullptr;}
	virtual ::java::util::stream::LongStream* mapMulti(::java::util::stream::LongStream$LongMapMultiConsumer* mapper);
	virtual ::java::util::stream::DoubleStream* mapToDouble(::java::util::function::LongToDoubleFunction* mapper) {return nullptr;}
	virtual ::java::util::stream::IntStream* mapToInt(::java::util::function::LongToIntFunction* mapper) {return nullptr;}
	virtual ::java::util::stream::Stream* mapToObj(::java::util::function::LongFunction* mapper) {return nullptr;}
	virtual ::java::util::OptionalLong* max() {return nullptr;}
	virtual ::java::util::OptionalLong* min() {return nullptr;}
	virtual bool noneMatch(::java::util::function::LongPredicate* predicate) {return false;}
	static ::java::util::stream::LongStream* of(int64_t t);
	static ::java::util::stream::LongStream* of($longs* values);
	virtual ::java::util::stream::LongStream* parallel() override {return nullptr;}
	virtual ::java::util::stream::LongStream* peek(::java::util::function::LongConsumer* action) {return nullptr;}
	static ::java::util::stream::LongStream* range(int64_t startInclusive, int64_t endExclusive);
	static ::java::util::stream::LongStream* rangeClosed(int64_t startInclusive, int64_t endInclusive);
	virtual int64_t reduce(int64_t identity, ::java::util::function::LongBinaryOperator* op) {return 0;}
	virtual ::java::util::OptionalLong* reduce(::java::util::function::LongBinaryOperator* op) {return nullptr;}
	virtual ::java::util::stream::LongStream* sequential() override {return nullptr;}
	virtual ::java::util::stream::LongStream* skip(int64_t n) {return nullptr;}
	virtual ::java::util::stream::LongStream* sorted() {return nullptr;}
	virtual ::java::util::Spliterator* spliterator() override {return nullptr;}
	virtual int64_t sum() {return 0;}
	virtual ::java::util::LongSummaryStatistics* summaryStatistics() {return nullptr;}
	virtual ::java::util::stream::LongStream* takeWhile(::java::util::function::LongPredicate* predicate);
	virtual $longs* toArray() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongStream_h_