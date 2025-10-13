#ifndef _java_util_stream_Collectors_h_
#define _java_util_stream_Collectors_h_
//$ class java.util.stream.Collectors
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CH_CONCURRENT_ID")
#undef CH_CONCURRENT_ID
#pragma push_macro("CH_CONCURRENT_NOID")
#undef CH_CONCURRENT_NOID
#pragma push_macro("CH_ID")
#undef CH_ID
#pragma push_macro("CH_NOID")
#undef CH_NOID
#pragma push_macro("CH_UNORDERED_ID")
#undef CH_UNORDERED_ID
#pragma push_macro("CH_UNORDERED_NOID")
#undef CH_UNORDERED_NOID

namespace java {
	namespace lang {
		class CharSequence;
		class Double;
		class IllegalStateException;
		class Integer;
		class Long;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Collection;
		class Comparator;
		class DoubleSummaryStatistics;
		class HashMap;
		class HashSet;
		class IntSummaryStatistics;
		class List;
		class LongSummaryStatistics;
		class Map;
		class Optional;
		class Set;
		class StringJoiner;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class BinaryOperator;
			class Function;
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
			class Collector;
			class Collectors$1OptionalBox;
			class Collectors$1PairBox;
			class Collectors$Partition;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $import Collectors : public ::java::lang::Object {
	$class(Collectors, $PRELOAD, ::java::lang::Object)
public:
	Collectors();
	void init$();
	static ::java::util::stream::Collector* averagingDouble(::java::util::function::ToDoubleFunction* mapper);
	static ::java::util::stream::Collector* averagingInt(::java::util::function::ToIntFunction* mapper);
	static ::java::util::stream::Collector* averagingLong(::java::util::function::ToLongFunction* mapper);
	static ::java::util::function::Supplier* boxSupplier(Object$* identity);
	static ::java::util::function::Function* castingIdentity();
	static ::java::util::stream::Collector* collectingAndThen(::java::util::stream::Collector* downstream, ::java::util::function::Function* finisher);
	static double computeFinalSum($doubles* summands);
	static ::java::util::stream::Collector* counting();
	static ::java::lang::IllegalStateException* duplicateKeyException(Object$* k, Object$* u, Object$* v);
	static ::java::util::stream::Collector* filtering(::java::util::function::Predicate* predicate, ::java::util::stream::Collector* downstream);
	static ::java::util::stream::Collector* flatMapping(::java::util::function::Function* mapper, ::java::util::stream::Collector* downstream);
	static ::java::util::stream::Collector* groupingBy(::java::util::function::Function* classifier);
	static ::java::util::stream::Collector* groupingBy(::java::util::function::Function* classifier, ::java::util::stream::Collector* downstream);
	static ::java::util::stream::Collector* groupingBy(::java::util::function::Function* classifier, ::java::util::function::Supplier* mapFactory, ::java::util::stream::Collector* downstream);
	static ::java::util::stream::Collector* groupingByConcurrent(::java::util::function::Function* classifier);
	static ::java::util::stream::Collector* groupingByConcurrent(::java::util::function::Function* classifier, ::java::util::stream::Collector* downstream);
	static ::java::util::stream::Collector* groupingByConcurrent(::java::util::function::Function* classifier, ::java::util::function::Supplier* mapFactory, ::java::util::stream::Collector* downstream);
	static ::java::util::stream::Collector* joining();
	static ::java::util::stream::Collector* joining(::java::lang::CharSequence* delimiter);
	static ::java::util::stream::Collector* joining(::java::lang::CharSequence* delimiter, ::java::lang::CharSequence* prefix, ::java::lang::CharSequence* suffix);
	static $doubles* lambda$averagingDouble$38();
	static void lambda$averagingDouble$39(::java::util::function::ToDoubleFunction* mapper, $doubles* a, Object$* t);
	static $doubles* lambda$averagingDouble$40($doubles* a, $doubles* b);
	static ::java::lang::Double* lambda$averagingDouble$41($doubles* a);
	static $longs* lambda$averagingInt$30();
	static void lambda$averagingInt$31(::java::util::function::ToIntFunction* mapper, $longs* a, Object$* t);
	static $longs* lambda$averagingInt$32($longs* a, $longs* b);
	static ::java::lang::Double* lambda$averagingInt$33($longs* a);
	static void lambda$averagingLong$35(::java::util::function::ToLongFunction* mapper, $longs* a, Object$* t);
	static $ObjectArray* lambda$boxSupplier$45(Object$* identity);
	static $Object* lambda$castingIdentity$2(Object$* i);
	static int64_t lambda$counting$17(Object$* e);
	static void lambda$filtering$16(::java::util::function::Predicate* predicate, ::java::util::function::BiConsumer* downstreamAccumulator, Object$* r, Object$* t);
	static void lambda$flatMapping$14(::java::util::function::BiConsumer* downstreamAccumulator, Object$* r, Object$* u);
	static void lambda$flatMapping$15(::java::util::function::Function* mapper, ::java::util::function::BiConsumer* downstreamAccumulator, Object$* r, Object$* t);
	static $Object* lambda$groupingBy$52(::java::util::function::Supplier* downstreamSupplier, Object$* k);
	static void lambda$groupingBy$53(::java::util::function::Function* classifier, ::java::util::function::Supplier* downstreamSupplier, ::java::util::function::BiConsumer* downstreamAccumulator, ::java::util::Map* m, Object$* t);
	static $Object* lambda$groupingBy$54(::java::util::function::Function* downstreamFinisher, Object$* k, Object$* v);
	static ::java::util::Map* lambda$groupingBy$55(::java::util::function::Function* downstreamFinisher, ::java::util::Map* intermediate);
	static void lambda$groupingByConcurrent$57(::java::util::function::Function* classifier, ::java::util::function::Supplier* downstreamSupplier, ::java::util::function::BiConsumer* downstreamAccumulator, ::java::util::concurrent::ConcurrentMap* m, Object$* t);
	static void lambda$groupingByConcurrent$59(::java::util::function::Function* classifier, ::java::util::function::Supplier* downstreamSupplier, ::java::util::function::BiConsumer* downstreamAccumulator, ::java::util::concurrent::ConcurrentMap* m, Object$* t);
	static ::java::util::concurrent::ConcurrentMap* lambda$groupingByConcurrent$61(::java::util::function::Function* downstreamFinisher, ::java::util::concurrent::ConcurrentMap* intermediate);
	static ::java::lang::StringBuilder* lambda$joining$10(::java::lang::StringBuilder* r1, ::java::lang::StringBuilder* r2);
	static ::java::util::StringJoiner* lambda$joining$11(::java::lang::CharSequence* delimiter, ::java::lang::CharSequence* prefix, ::java::lang::CharSequence* suffix);
	static ::java::util::Map* lambda$mapMerger$12(::java::util::function::BinaryOperator* mergeFunction, ::java::util::Map* m1, ::java::util::Map* m2);
	static void lambda$mapping$13(::java::util::function::BiConsumer* downstreamAccumulator, ::java::util::function::Function* mapper, Object$* r, Object$* t);
	static void lambda$partitioningBy$62(::java::util::function::BiConsumer* downstreamAccumulator, ::java::util::function::Predicate* predicate, ::java::util::stream::Collectors$Partition* result, Object$* t);
	static ::java::util::stream::Collectors$Partition* lambda$partitioningBy$63(::java::util::function::BinaryOperator* op, ::java::util::stream::Collectors$Partition* left, ::java::util::stream::Collectors$Partition* right);
	static ::java::util::stream::Collectors$Partition* lambda$partitioningBy$64(::java::util::stream::Collector* downstream);
	static ::java::util::Map* lambda$partitioningBy$65(::java::util::stream::Collector* downstream, ::java::util::stream::Collectors$Partition* par);
	static void lambda$reducing$42(::java::util::function::BinaryOperator* op, $ObjectArray* a, Object$* t);
	static $ObjectArray* lambda$reducing$43(::java::util::function::BinaryOperator* op, $ObjectArray* a, $ObjectArray* b);
	static $Object* lambda$reducing$44($ObjectArray* a);
	static ::java::util::stream::Collectors$1OptionalBox* lambda$reducing$46(::java::util::function::BinaryOperator* op);
	static ::java::util::stream::Collectors$1OptionalBox* lambda$reducing$47(::java::util::stream::Collectors$1OptionalBox* a, ::java::util::stream::Collectors$1OptionalBox* b);
	static ::java::util::Optional* lambda$reducing$48(::java::util::stream::Collectors$1OptionalBox* a);
	static void lambda$reducing$49(::java::util::function::BinaryOperator* op, ::java::util::function::Function* mapper, $ObjectArray* a, Object$* t);
	static void lambda$summarizingDouble$74(::java::util::function::ToDoubleFunction* mapper, ::java::util::DoubleSummaryStatistics* r, Object$* t);
	static ::java::util::DoubleSummaryStatistics* lambda$summarizingDouble$75(::java::util::DoubleSummaryStatistics* l, ::java::util::DoubleSummaryStatistics* r);
	static void lambda$summarizingInt$70(::java::util::function::ToIntFunction* mapper, ::java::util::IntSummaryStatistics* r, Object$* t);
	static ::java::util::IntSummaryStatistics* lambda$summarizingInt$71(::java::util::IntSummaryStatistics* l, ::java::util::IntSummaryStatistics* r);
	static void lambda$summarizingLong$72(::java::util::function::ToLongFunction* mapper, ::java::util::LongSummaryStatistics* r, Object$* t);
	static ::java::util::LongSummaryStatistics* lambda$summarizingLong$73(::java::util::LongSummaryStatistics* l, ::java::util::LongSummaryStatistics* r);
	static $doubles* lambda$summingDouble$26();
	static void lambda$summingDouble$27(::java::util::function::ToDoubleFunction* mapper, $doubles* a, Object$* t);
	static $doubles* lambda$summingDouble$28($doubles* a, $doubles* b);
	static ::java::lang::Double* lambda$summingDouble$29($doubles* a);
	static $ints* lambda$summingInt$18();
	static void lambda$summingInt$19(::java::util::function::ToIntFunction* mapper, $ints* a, Object$* t);
	static $ints* lambda$summingInt$20($ints* a, $ints* b);
	static ::java::lang::Integer* lambda$summingInt$21($ints* a);
	static $longs* lambda$summingLong$22();
	static void lambda$summingLong$23(::java::util::function::ToLongFunction* mapper, $longs* a, Object$* t);
	static $longs* lambda$summingLong$24($longs* a, $longs* b);
	static ::java::lang::Long* lambda$summingLong$25($longs* a);
	static ::java::util::stream::Collectors$1PairBox* lambda$teeing0$76(::java::util::function::Supplier* c1Supplier, ::java::util::function::Supplier* c2Supplier, ::java::util::function::BiConsumer* c1Accumulator, ::java::util::function::BiConsumer* c2Accumulator, ::java::util::function::BinaryOperator* c1Combiner, ::java::util::function::BinaryOperator* c2Combiner, ::java::util::function::Function* c1Finisher, ::java::util::function::Function* c2Finisher, ::java::util::function::BiFunction* merger);
	static ::java::util::Collection* lambda$toCollection$3(::java::util::Collection* r1, ::java::util::Collection* r2);
	static void lambda$toConcurrentMap$69(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper, ::java::util::function::BinaryOperator* mergeFunction, ::java::util::concurrent::ConcurrentMap* map, Object$* element);
	static ::java::util::ArrayList* lambda$toList$4(::java::util::ArrayList* left, ::java::util::ArrayList* right);
	static void lambda$toMap$68(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper, ::java::util::function::BinaryOperator* mergeFunction, ::java::util::Map* map, Object$* element);
	static ::java::util::HashSet* lambda$toSet$7(::java::util::HashSet* left, ::java::util::HashSet* right);
	static ::java::util::List* lambda$toUnmodifiableList$6(::java::util::ArrayList* list);
	static ::java::util::Map* lambda$toUnmodifiableMap$66(::java::util::Map* map);
	static ::java::util::Map* lambda$toUnmodifiableMap$67(::java::util::HashMap* map);
	static ::java::util::Set* lambda$toUnmodifiableSet$9(::java::util::HashSet* set);
	static void lambda$uniqKeysMapAccumulator$1(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper, ::java::util::Map* map, Object$* element);
	static ::java::util::Map* lambda$uniqKeysMapMerger$0(::java::util::Map* m1, ::java::util::Map* m2);
	static ::java::util::function::BinaryOperator* mapMerger(::java::util::function::BinaryOperator* mergeFunction);
	static ::java::util::stream::Collector* mapping(::java::util::function::Function* mapper, ::java::util::stream::Collector* downstream);
	static ::java::util::stream::Collector* maxBy(::java::util::Comparator* comparator);
	static ::java::util::stream::Collector* minBy(::java::util::Comparator* comparator);
	static ::java::util::stream::Collector* partitioningBy(::java::util::function::Predicate* predicate);
	static ::java::util::stream::Collector* partitioningBy(::java::util::function::Predicate* predicate, ::java::util::stream::Collector* downstream);
	static ::java::util::stream::Collector* reducing(Object$* identity, ::java::util::function::BinaryOperator* op);
	static ::java::util::stream::Collector* reducing(::java::util::function::BinaryOperator* op);
	static ::java::util::stream::Collector* reducing(Object$* identity, ::java::util::function::Function* mapper, ::java::util::function::BinaryOperator* op);
	static $doubles* sumWithCompensation($doubles* intermediateSum, double value);
	static ::java::util::stream::Collector* summarizingDouble(::java::util::function::ToDoubleFunction* mapper);
	static ::java::util::stream::Collector* summarizingInt(::java::util::function::ToIntFunction* mapper);
	static ::java::util::stream::Collector* summarizingLong(::java::util::function::ToLongFunction* mapper);
	static ::java::util::stream::Collector* summingDouble(::java::util::function::ToDoubleFunction* mapper);
	static ::java::util::stream::Collector* summingInt(::java::util::function::ToIntFunction* mapper);
	static ::java::util::stream::Collector* summingLong(::java::util::function::ToLongFunction* mapper);
	static ::java::util::stream::Collector* teeing(::java::util::stream::Collector* downstream1, ::java::util::stream::Collector* downstream2, ::java::util::function::BiFunction* merger);
	static ::java::util::stream::Collector* teeing0(::java::util::stream::Collector* downstream1, ::java::util::stream::Collector* downstream2, ::java::util::function::BiFunction* merger);
	static ::java::util::stream::Collector* toCollection(::java::util::function::Supplier* collectionFactory);
	static ::java::util::stream::Collector* toConcurrentMap(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper);
	static ::java::util::stream::Collector* toConcurrentMap(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper, ::java::util::function::BinaryOperator* mergeFunction);
	static ::java::util::stream::Collector* toConcurrentMap(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper, ::java::util::function::BinaryOperator* mergeFunction, ::java::util::function::Supplier* mapFactory);
	static ::java::util::stream::Collector* toList();
	static ::java::util::stream::Collector* toMap(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper);
	static ::java::util::stream::Collector* toMap(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper, ::java::util::function::BinaryOperator* mergeFunction);
	static ::java::util::stream::Collector* toMap(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper, ::java::util::function::BinaryOperator* mergeFunction, ::java::util::function::Supplier* mapFactory);
	static ::java::util::stream::Collector* toSet();
	static ::java::util::stream::Collector* toUnmodifiableList();
	static ::java::util::stream::Collector* toUnmodifiableMap(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper);
	static ::java::util::stream::Collector* toUnmodifiableMap(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper, ::java::util::function::BinaryOperator* mergeFunction);
	static ::java::util::stream::Collector* toUnmodifiableSet();
	static ::java::util::function::BiConsumer* uniqKeysMapAccumulator(::java::util::function::Function* keyMapper, ::java::util::function::Function* valueMapper);
	static ::java::util::function::BinaryOperator* uniqKeysMapMerger();
	static ::java::util::Set* CH_CONCURRENT_ID;
	static ::java::util::Set* CH_CONCURRENT_NOID;
	static ::java::util::Set* CH_ID;
	static ::java::util::Set* CH_UNORDERED_ID;
	static ::java::util::Set* CH_NOID;
	static ::java::util::Set* CH_UNORDERED_NOID;
};

		} // stream
	} // util
} // java

#pragma pop_macro("CH_CONCURRENT_ID")
#pragma pop_macro("CH_CONCURRENT_NOID")
#pragma pop_macro("CH_ID")
#pragma pop_macro("CH_NOID")
#pragma pop_macro("CH_UNORDERED_ID")
#pragma pop_macro("CH_UNORDERED_NOID")

#endif // _java_util_stream_Collectors_h_