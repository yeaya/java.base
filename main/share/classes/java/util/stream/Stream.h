#ifndef _java_util_stream_Stream_h_
#define _java_util_stream_Stream_h_
//$ interface java.util.stream.Stream
//$ extends java.util.stream.BaseStream

#include <java/lang/Array.h>
#include <java/util/stream/BaseStream.h>

namespace java {
	namespace util {
		class Comparator;
		class List;
		class Optional;
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
			class UnaryOperator;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Collector;
			class DoubleStream;
			class IntStream;
			class LongStream;
			class Stream$Builder;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export Stream : public ::java::util::stream::BaseStream {
	$interface(Stream, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::BaseStream)
public:
	virtual bool allMatch(::java::util::function::Predicate* predicate) {return false;}
	virtual bool anyMatch(::java::util::function::Predicate* predicate) {return false;}
	static ::java::util::stream::Stream$Builder* builder();
	virtual $Object* collect(::java::util::function::Supplier* supplier, ::java::util::function::BiConsumer* accumulator, ::java::util::function::BiConsumer* combiner) {return nullptr;}
	virtual $Object* collect(::java::util::stream::Collector* collector) {return nullptr;}
	static ::java::util::stream::Stream* concat(::java::util::stream::Stream* a, ::java::util::stream::Stream* b);
	virtual int64_t count() {return 0;}
	virtual ::java::util::stream::Stream* distinct() {return nullptr;}
	virtual ::java::util::stream::Stream* dropWhile(::java::util::function::Predicate* predicate);
	static ::java::util::stream::Stream* empty();
	virtual ::java::util::stream::Stream* filter(::java::util::function::Predicate* predicate) {return nullptr;}
	virtual ::java::util::Optional* findAny() {return nullptr;}
	virtual ::java::util::Optional* findFirst() {return nullptr;}
	virtual ::java::util::stream::Stream* flatMap(::java::util::function::Function* mapper) {return nullptr;}
	virtual ::java::util::stream::DoubleStream* flatMapToDouble(::java::util::function::Function* mapper) {return nullptr;}
	virtual ::java::util::stream::IntStream* flatMapToInt(::java::util::function::Function* mapper) {return nullptr;}
	virtual ::java::util::stream::LongStream* flatMapToLong(::java::util::function::Function* mapper) {return nullptr;}
	virtual void forEach(::java::util::function::Consumer* action) {}
	virtual void forEachOrdered(::java::util::function::Consumer* action) {}
	static ::java::util::stream::Stream* generate(::java::util::function::Supplier* s);
	static ::java::util::stream::Stream* iterate(Object$* seed, ::java::util::function::UnaryOperator* f);
	static ::java::util::stream::Stream* iterate(Object$* seed, ::java::util::function::Predicate* hasNext, ::java::util::function::UnaryOperator* next);
	static ::java::util::stream::Stream* lambda$mapMulti$0(::java::util::function::BiConsumer* mapper, Object$* e);
	static ::java::util::stream::DoubleStream* lambda$mapMultiToDouble$3(::java::util::function::BiConsumer* mapper, Object$* e);
	static ::java::util::stream::IntStream* lambda$mapMultiToInt$1(::java::util::function::BiConsumer* mapper, Object$* e);
	static ::java::util::stream::LongStream* lambda$mapMultiToLong$2(::java::util::function::BiConsumer* mapper, Object$* e);
	virtual ::java::util::stream::Stream* limit(int64_t maxSize) {return nullptr;}
	virtual ::java::util::stream::Stream* map(::java::util::function::Function* mapper) {return nullptr;}
	virtual ::java::util::stream::Stream* mapMulti(::java::util::function::BiConsumer* mapper);
	virtual ::java::util::stream::DoubleStream* mapMultiToDouble(::java::util::function::BiConsumer* mapper);
	virtual ::java::util::stream::IntStream* mapMultiToInt(::java::util::function::BiConsumer* mapper);
	virtual ::java::util::stream::LongStream* mapMultiToLong(::java::util::function::BiConsumer* mapper);
	virtual ::java::util::stream::DoubleStream* mapToDouble(::java::util::function::ToDoubleFunction* mapper) {return nullptr;}
	virtual ::java::util::stream::IntStream* mapToInt(::java::util::function::ToIntFunction* mapper) {return nullptr;}
	virtual ::java::util::stream::LongStream* mapToLong(::java::util::function::ToLongFunction* mapper) {return nullptr;}
	virtual ::java::util::Optional* max(::java::util::Comparator* comparator) {return nullptr;}
	virtual ::java::util::Optional* min(::java::util::Comparator* comparator) {return nullptr;}
	virtual bool noneMatch(::java::util::function::Predicate* predicate) {return false;}
	static ::java::util::stream::Stream* of(Object$* t);
	static ::java::util::stream::Stream* of($ObjectArray* values);
	static ::java::util::stream::Stream* ofNullable(Object$* t);
	virtual ::java::util::stream::Stream* peek(::java::util::function::Consumer* action) {return nullptr;}
	virtual $Object* reduce(Object$* identity, ::java::util::function::BinaryOperator* accumulator) {return nullptr;}
	virtual ::java::util::Optional* reduce(::java::util::function::BinaryOperator* accumulator) {return nullptr;}
	virtual $Object* reduce(Object$* identity, ::java::util::function::BiFunction* accumulator, ::java::util::function::BinaryOperator* combiner) {return nullptr;}
	virtual ::java::util::stream::Stream* skip(int64_t n) {return nullptr;}
	virtual ::java::util::stream::Stream* sorted() {return nullptr;}
	virtual ::java::util::stream::Stream* sorted(::java::util::Comparator* comparator) {return nullptr;}
	virtual ::java::util::stream::Stream* takeWhile(::java::util::function::Predicate* predicate);
	virtual $ObjectArray* toArray() {return nullptr;}
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) {return nullptr;}
	virtual ::java::util::List* toList();
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Stream_h_