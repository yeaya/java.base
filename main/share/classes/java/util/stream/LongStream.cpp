#include <java/util/stream/LongStream.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/LongSummaryStatistics.h>
#include <java/util/Objects.h>
#include <java/util/OptionalDouble.h>
#include <java/util/OptionalLong.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractLongSpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/function/LongFunction.h>
#include <java/util/function/LongPredicate.h>
#include <java/util/function/LongSupplier.h>
#include <java/util/function/LongToDoubleFunction.h>
#include <java/util/function/LongToIntFunction.h>
#include <java/util/function/LongUnaryOperator.h>
#include <java/util/function/ObjLongConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream$1.h>
#include <java/util/stream/LongStream$2.h>
#include <java/util/stream/LongStream$Builder.h>
#include <java/util/stream/LongStream$LongMapMultiConsumer.h>
#include <java/util/stream/SpinedBuffer$OfLong.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator$OfLong.h>
#include <java/util/stream/StreamSupport.h>
#include <java/util/stream/Streams$ConcatSpliterator$OfLong.h>
#include <java/util/stream/Streams$LongStreamBuilderImpl.h>
#include <java/util/stream/Streams$RangeLongSpliterator.h>
#include <java/util/stream/Streams.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfLong$Dropping.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfLong$Taking.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfLong.h>
#include <jcpp.h>

#undef NONNULL
#undef ORDERED
#undef IMMUTABLE
#undef MAX_VALUE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $LongSummaryStatistics = ::java::util::LongSummaryStatistics;
using $Objects = ::java::util::Objects;
using $OptionalDouble = ::java::util::OptionalDouble;
using $OptionalLong = ::java::util::OptionalLong;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterators = ::java::util::Spliterators;
using $Spliterators$AbstractLongSpliterator = ::java::util::Spliterators$AbstractLongSpliterator;
using $BiConsumer = ::java::util::function::BiConsumer;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $LongConsumer = ::java::util::function::LongConsumer;
using $LongFunction = ::java::util::function::LongFunction;
using $LongPredicate = ::java::util::function::LongPredicate;
using $LongSupplier = ::java::util::function::LongSupplier;
using $LongToDoubleFunction = ::java::util::function::LongToDoubleFunction;
using $LongToIntFunction = ::java::util::function::LongToIntFunction;
using $LongUnaryOperator = ::java::util::function::LongUnaryOperator;
using $ObjLongConsumer = ::java::util::function::ObjLongConsumer;
using $Supplier = ::java::util::function::Supplier;
using $BaseStream = ::java::util::stream::BaseStream;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream$1 = ::java::util::stream::LongStream$1;
using $LongStream$2 = ::java::util::stream::LongStream$2;
using $LongStream$Builder = ::java::util::stream::LongStream$Builder;
using $LongStream$LongMapMultiConsumer = ::java::util::stream::LongStream$LongMapMultiConsumer;
using $SpinedBuffer$OfLong = ::java::util::stream::SpinedBuffer$OfLong;
using $Stream = ::java::util::stream::Stream;
using $StreamSpliterators$InfiniteSupplyingSpliterator$OfLong = ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator$OfLong;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $Streams = ::java::util::stream::Streams;
using $Streams$ConcatSpliterator$OfLong = ::java::util::stream::Streams$ConcatSpliterator$OfLong;
using $Streams$LongStreamBuilderImpl = ::java::util::stream::Streams$LongStreamBuilderImpl;
using $Streams$RangeLongSpliterator = ::java::util::stream::Streams$RangeLongSpliterator;
using $WhileOps$UnorderedWhileSpliterator$OfLong = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong;
using $WhileOps$UnorderedWhileSpliterator$OfLong$Dropping = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong$Dropping;
using $WhileOps$UnorderedWhileSpliterator$OfLong$Taking = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong$Taking;

namespace java {
	namespace util {
		namespace stream {

class LongStream$$Lambda$lambda$mapMulti$0 : public $LongFunction {
	$class(LongStream$$Lambda$lambda$mapMulti$0, $NO_CLASS_INIT, $LongFunction)
public:
	void init$($LongStream$LongMapMultiConsumer* mapper) {
		$set(this, mapper, mapper);
	}
	virtual $Object* apply(int64_t e) override {
		 return $of(LongStream::lambda$mapMulti$0(mapper, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongStream$$Lambda$lambda$mapMulti$0>());
	}
	$LongStream$LongMapMultiConsumer* mapper = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongStream$$Lambda$lambda$mapMulti$0::fieldInfos[2] = {
	{"mapper", "Ljava/util/stream/LongStream$LongMapMultiConsumer;", nullptr, $PUBLIC, $field(LongStream$$Lambda$lambda$mapMulti$0, mapper)},
	{}
};
$MethodInfo LongStream$$Lambda$lambda$mapMulti$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/LongStream$LongMapMultiConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(LongStream$$Lambda$lambda$mapMulti$0::*)($LongStream$LongMapMultiConsumer*)>(&LongStream$$Lambda$lambda$mapMulti$0::init$))},
	{"apply", "(J)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongStream$$Lambda$lambda$mapMulti$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.LongStream$$Lambda$lambda$mapMulti$0",
	"java.lang.Object",
	"java.util.function.LongFunction",
	fieldInfos,
	methodInfos
};
$Class* LongStream$$Lambda$lambda$mapMulti$0::load$($String* name, bool initialize) {
	$loadClass(LongStream$$Lambda$lambda$mapMulti$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongStream$$Lambda$lambda$mapMulti$0::class$ = nullptr;

class LongStream$$Lambda$close$1 : public $Runnable {
	$class(LongStream$$Lambda$close$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($BaseStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->close();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongStream$$Lambda$close$1>());
	}
	$BaseStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongStream$$Lambda$close$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongStream$$Lambda$close$1, inst$)},
	{}
};
$MethodInfo LongStream$$Lambda$close$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/BaseStream;)V", nullptr, $PUBLIC, $method(static_cast<void(LongStream$$Lambda$close$1::*)($BaseStream*)>(&LongStream$$Lambda$close$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongStream$$Lambda$close$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.LongStream$$Lambda$close$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* LongStream$$Lambda$close$1::load$($String* name, bool initialize) {
	$loadClass(LongStream$$Lambda$close$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongStream$$Lambda$close$1::class$ = nullptr;

$MethodInfo _LongStream_MethodInfo_[] = {
	{"allMatch", "(Ljava/util/function/LongPredicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"anyMatch", "(Ljava/util/function/LongPredicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"asDoubleStream", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"average", "()Ljava/util/OptionalDouble;", nullptr, $PUBLIC | $ABSTRACT},
	{"boxed", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/Long;>;", $PUBLIC | $ABSTRACT},
	{"builder", "()Ljava/util/stream/LongStream$Builder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LongStream$Builder*(*)()>(&LongStream::builder))},
	{"collect", "(Ljava/util/function/Supplier;Ljava/util/function/ObjLongConsumer;Ljava/util/function/BiConsumer;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/util/function/Supplier<TR;>;Ljava/util/function/ObjLongConsumer<TR;>;Ljava/util/function/BiConsumer<TR;TR;>;)TR;", $PUBLIC | $ABSTRACT},
	{"concat", "(Ljava/util/stream/LongStream;Ljava/util/stream/LongStream;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongStream*(*)(LongStream*,LongStream*)>(&LongStream::concat))},
	{"count", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"distinct", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"dropWhile", "(Ljava/util/function/LongPredicate;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"empty", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongStream*(*)()>(&LongStream::empty))},
	{"filter", "(Ljava/util/function/LongPredicate;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"findAny", "()Ljava/util/OptionalLong;", nullptr, $PUBLIC | $ABSTRACT},
	{"findFirst", "()Ljava/util/OptionalLong;", nullptr, $PUBLIC | $ABSTRACT},
	{"flatMap", "(Ljava/util/function/LongFunction;)Ljava/util/stream/LongStream;", "(Ljava/util/function/LongFunction<+Ljava/util/stream/LongStream;>;)Ljava/util/stream/LongStream;", $PUBLIC | $ABSTRACT},
	{"forEach", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"forEachOrdered", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"generate", "(Ljava/util/function/LongSupplier;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongStream*(*)($LongSupplier*)>(&LongStream::generate))},
	{"iterate", "(JLjava/util/function/LongUnaryOperator;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongStream*(*)(int64_t,$LongUnaryOperator*)>(&LongStream::iterate))},
	{"iterate", "(JLjava/util/function/LongPredicate;Ljava/util/function/LongUnaryOperator;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongStream*(*)(int64_t,$LongPredicate*,$LongUnaryOperator*)>(&LongStream::iterate))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"lambda$mapMulti$0", "(Ljava/util/stream/LongStream$LongMapMultiConsumer;J)Ljava/util/stream/LongStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<LongStream*(*)($LongStream$LongMapMultiConsumer*,int64_t)>(&LongStream::lambda$mapMulti$0))},
	{"limit", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"map", "(Ljava/util/function/LongUnaryOperator;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"mapMulti", "(Ljava/util/stream/LongStream$LongMapMultiConsumer;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"mapToDouble", "(Ljava/util/function/LongToDoubleFunction;)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"mapToInt", "(Ljava/util/function/LongToIntFunction;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"mapToObj", "(Ljava/util/function/LongFunction;)Ljava/util/stream/Stream;", "<U:Ljava/lang/Object;>(Ljava/util/function/LongFunction<+TU;>;)Ljava/util/stream/Stream<TU;>;", $PUBLIC | $ABSTRACT},
	{"max", "()Ljava/util/OptionalLong;", nullptr, $PUBLIC | $ABSTRACT},
	{"min", "()Ljava/util/OptionalLong;", nullptr, $PUBLIC | $ABSTRACT},
	{"noneMatch", "(Ljava/util/function/LongPredicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"of", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongStream*(*)(int64_t)>(&LongStream::of))},
	{"of", "([J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<LongStream*(*)($longs*)>(&LongStream::of))},
	{"parallel", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "(Ljava/util/function/LongConsumer;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"range", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongStream*(*)(int64_t,int64_t)>(&LongStream::range))},
	{"rangeClosed", "(JJ)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongStream*(*)(int64_t,int64_t)>(&LongStream::rangeClosed))},
	{"reduce", "(JLjava/util/function/LongBinaryOperator;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"reduce", "(Ljava/util/function/LongBinaryOperator;)Ljava/util/OptionalLong;", nullptr, $PUBLIC | $ABSTRACT},
	{"sequential", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"skip", "(J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"sorted", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"sum", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"summaryStatistics", "()Ljava/util/LongSummaryStatistics;", nullptr, $PUBLIC | $ABSTRACT},
	{"takeWhile", "(Ljava/util/function/LongPredicate;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC},
	{"toArray", "()[J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LongStream_InnerClassesInfo_[] = {
	{"java.util.stream.LongStream$LongMapMultiConsumer", "java.util.stream.LongStream", "LongMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.LongStream$Builder", "java.util.stream.LongStream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.LongStream$2", nullptr, nullptr, 0},
	{"java.util.stream.LongStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LongStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.LongStream",
	nullptr,
	"java.util.stream.BaseStream",
	nullptr,
	_LongStream_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/BaseStream<Ljava/lang/Long;Ljava/util/stream/LongStream;>;",
	nullptr,
	_LongStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.LongStream$LongMapMultiConsumer,java.util.stream.LongStream$Builder,java.util.stream.LongStream$2,java.util.stream.LongStream$1"
};

$Object* allocate$LongStream($Class* clazz) {
	return $of($alloc(LongStream));
}

LongStream* LongStream::mapMulti($LongStream$LongMapMultiConsumer* mapper) {
	$Objects::requireNonNull(mapper);
	return flatMap(static_cast<$LongFunction*>($$new(LongStream$$Lambda$lambda$mapMulti$0, mapper)));
}

LongStream* LongStream::takeWhile($LongPredicate* predicate) {
	$Objects::requireNonNull(predicate);
	$var($Spliterator$OfLong, var$0, $as($Spliterator$OfLong, $new($WhileOps$UnorderedWhileSpliterator$OfLong$Taking, $($cast($Spliterator$OfLong, spliterator())), true, predicate)));
	return $cast(LongStream, $nc($($StreamSupport::longStream(var$0, isParallel())))->onClose(static_cast<$Runnable*>($$new(LongStream$$Lambda$close$1, this))));
}

LongStream* LongStream::dropWhile($LongPredicate* predicate) {
	$Objects::requireNonNull(predicate);
	$var($Spliterator$OfLong, var$0, $as($Spliterator$OfLong, $new($WhileOps$UnorderedWhileSpliterator$OfLong$Dropping, $($cast($Spliterator$OfLong, spliterator())), true, predicate)));
	return $cast(LongStream, $nc($($StreamSupport::longStream(var$0, isParallel())))->onClose(static_cast<$Runnable*>($$new(LongStream$$Lambda$close$1, this))));
}

$LongStream$Builder* LongStream::builder() {
	$init(LongStream);
	return $new($Streams$LongStreamBuilderImpl);
}

LongStream* LongStream::empty() {
	$init(LongStream);
	return $StreamSupport::longStream($($Spliterators::emptyLongSpliterator()), false);
}

LongStream* LongStream::of(int64_t t) {
	$init(LongStream);
	return $StreamSupport::longStream($as($Spliterator$OfLong, $$new($Streams$LongStreamBuilderImpl, t)), false);
}

LongStream* LongStream::of($longs* values) {
	$init(LongStream);
	return $Arrays::stream(values);
}

LongStream* LongStream::iterate(int64_t seed, $LongUnaryOperator* f) {
	$init(LongStream);
	$Objects::requireNonNull(f);
	$var($Spliterator$OfLong, spliterator, $new($LongStream$1, $Long::MAX_VALUE, ($Spliterator::ORDERED | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL, f, seed));
	return $StreamSupport::longStream(spliterator, false);
}

LongStream* LongStream::iterate(int64_t seed, $LongPredicate* hasNext, $LongUnaryOperator* next) {
	$init(LongStream);
	$Objects::requireNonNull(next);
	$Objects::requireNonNull(hasNext);
	$var($Spliterator$OfLong, spliterator, $new($LongStream$2, $Long::MAX_VALUE, ($Spliterator::ORDERED | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL, next, seed, hasNext));
	return $StreamSupport::longStream(spliterator, false);
}

LongStream* LongStream::generate($LongSupplier* s) {
	$init(LongStream);
	$Objects::requireNonNull(s);
	return $StreamSupport::longStream($as($Spliterator$OfLong, $$new($StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, $Long::MAX_VALUE, s)), false);
}

LongStream* LongStream::range(int64_t startInclusive, int64_t endExclusive) {
	$init(LongStream);
	if (startInclusive >= endExclusive) {
		return empty();
	} else if (endExclusive - startInclusive < 0) {
		int64_t m = startInclusive + $Long::divideUnsigned(endExclusive - startInclusive, 2) + 1;
		$var(LongStream, var$0, range(startInclusive, m));
		return concat(var$0, $(range(m, endExclusive)));
	} else {
		return $StreamSupport::longStream($$new($Streams$RangeLongSpliterator, startInclusive, endExclusive, false), false);
	}
}

LongStream* LongStream::rangeClosed(int64_t startInclusive, int64_t endInclusive) {
	$init(LongStream);
	if (startInclusive > endInclusive) {
		return empty();
	} else if (endInclusive - startInclusive + 1 <= 0) {
		int64_t m = startInclusive + $Long::divideUnsigned(endInclusive - startInclusive, 2) + 1;
		$var(LongStream, var$0, range(startInclusive, m));
		return concat(var$0, $(rangeClosed(m, endInclusive)));
	} else {
		return $StreamSupport::longStream($$new($Streams$RangeLongSpliterator, startInclusive, endInclusive, true), false);
	}
}

LongStream* LongStream::concat(LongStream* a, LongStream* b) {
	$init(LongStream);
	$Objects::requireNonNull(a);
	$Objects::requireNonNull(b);
	$var($Spliterator$OfLong, var$0, $cast($Spliterator$OfLong, a->spliterator()));
	$var($Spliterator$OfLong, split, $as($Spliterator$OfLong, $new($Streams$ConcatSpliterator$OfLong, var$0, $($cast($Spliterator$OfLong, b->spliterator())))));
	bool var$1 = a->isParallel();
	$var(LongStream, stream, $StreamSupport::longStream(split, var$1 || b->isParallel()));
	return $cast(LongStream, $nc(stream)->onClose($($Streams::composedClose(a, b))));
}

LongStream* LongStream::lambda$mapMulti$0($LongStream$LongMapMultiConsumer* mapper, int64_t e) {
	$init(LongStream);
	$var($SpinedBuffer$OfLong, buffer, $new($SpinedBuffer$OfLong));
	$nc(mapper)->accept(e, buffer);
	return $StreamSupport::longStream($($cast($Spliterator$OfLong, buffer->spliterator())), false);
}

$Class* LongStream::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LongStream$$Lambda$lambda$mapMulti$0::classInfo$.name)) {
			return LongStream$$Lambda$lambda$mapMulti$0::load$(name, initialize);
		}
		if (name->equals(LongStream$$Lambda$close$1::classInfo$.name)) {
			return LongStream$$Lambda$close$1::load$(name, initialize);
		}
	}
	$loadClass(LongStream, name, initialize, &_LongStream_ClassInfo_, allocate$LongStream);
	return class$;
}

$Class* LongStream::class$ = nullptr;

		} // stream
	} // util
} // java