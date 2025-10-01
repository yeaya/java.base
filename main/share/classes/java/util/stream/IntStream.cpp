#include <java/util/stream/IntStream.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
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
#include <java/util/IntSummaryStatistics.h>
#include <java/util/Objects.h>
#include <java/util/OptionalDouble.h>
#include <java/util/OptionalInt.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractIntSpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/function/IntSupplier.h>
#include <java/util/function/IntToDoubleFunction.h>
#include <java/util/function/IntToLongFunction.h>
#include <java/util/function/IntUnaryOperator.h>
#include <java/util/function/ObjIntConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream$1.h>
#include <java/util/stream/IntStream$2.h>
#include <java/util/stream/IntStream$Builder.h>
#include <java/util/stream/IntStream$IntMapMultiConsumer.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/SpinedBuffer$OfInt.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator$OfInt.h>
#include <java/util/stream/StreamSupport.h>
#include <java/util/stream/Streams$ConcatSpliterator$OfInt.h>
#include <java/util/stream/Streams$IntStreamBuilderImpl.h>
#include <java/util/stream/Streams$RangeIntSpliterator.h>
#include <java/util/stream/Streams.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfInt$Dropping.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfInt$Taking.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfInt.h>
#include <jcpp.h>

#undef NONNULL
#undef ORDERED
#undef IMMUTABLE
#undef MAX_VALUE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
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
using $IntSummaryStatistics = ::java::util::IntSummaryStatistics;
using $Objects = ::java::util::Objects;
using $OptionalDouble = ::java::util::OptionalDouble;
using $OptionalInt = ::java::util::OptionalInt;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterators = ::java::util::Spliterators;
using $Spliterators$AbstractIntSpliterator = ::java::util::Spliterators$AbstractIntSpliterator;
using $BiConsumer = ::java::util::function::BiConsumer;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntFunction = ::java::util::function::IntFunction;
using $IntPredicate = ::java::util::function::IntPredicate;
using $IntSupplier = ::java::util::function::IntSupplier;
using $IntToDoubleFunction = ::java::util::function::IntToDoubleFunction;
using $IntToLongFunction = ::java::util::function::IntToLongFunction;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $ObjIntConsumer = ::java::util::function::ObjIntConsumer;
using $Supplier = ::java::util::function::Supplier;
using $BaseStream = ::java::util::stream::BaseStream;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream$1 = ::java::util::stream::IntStream$1;
using $IntStream$2 = ::java::util::stream::IntStream$2;
using $IntStream$Builder = ::java::util::stream::IntStream$Builder;
using $IntStream$IntMapMultiConsumer = ::java::util::stream::IntStream$IntMapMultiConsumer;
using $LongStream = ::java::util::stream::LongStream;
using $SpinedBuffer$OfInt = ::java::util::stream::SpinedBuffer$OfInt;
using $Stream = ::java::util::stream::Stream;
using $StreamSpliterators$InfiniteSupplyingSpliterator$OfInt = ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator$OfInt;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $Streams = ::java::util::stream::Streams;
using $Streams$ConcatSpliterator$OfInt = ::java::util::stream::Streams$ConcatSpliterator$OfInt;
using $Streams$IntStreamBuilderImpl = ::java::util::stream::Streams$IntStreamBuilderImpl;
using $Streams$RangeIntSpliterator = ::java::util::stream::Streams$RangeIntSpliterator;
using $WhileOps$UnorderedWhileSpliterator$OfInt = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt;
using $WhileOps$UnorderedWhileSpliterator$OfInt$Dropping = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt$Dropping;
using $WhileOps$UnorderedWhileSpliterator$OfInt$Taking = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt$Taking;

namespace java {
	namespace util {
		namespace stream {

class IntStream$$Lambda$lambda$mapMulti$0 : public $IntFunction {
	$class(IntStream$$Lambda$lambda$mapMulti$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$($IntStream$IntMapMultiConsumer* mapper) {
		$set(this, mapper, mapper);
	}
	virtual $Object* apply(int32_t e) override {
		 return $of(IntStream::lambda$mapMulti$0(mapper, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntStream$$Lambda$lambda$mapMulti$0>());
	}
	$IntStream$IntMapMultiConsumer* mapper = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntStream$$Lambda$lambda$mapMulti$0::fieldInfos[2] = {
	{"mapper", "Ljava/util/stream/IntStream$IntMapMultiConsumer;", nullptr, $PUBLIC, $field(IntStream$$Lambda$lambda$mapMulti$0, mapper)},
	{}
};
$MethodInfo IntStream$$Lambda$lambda$mapMulti$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/IntStream$IntMapMultiConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(IntStream$$Lambda$lambda$mapMulti$0::*)($IntStream$IntMapMultiConsumer*)>(&IntStream$$Lambda$lambda$mapMulti$0::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntStream$$Lambda$lambda$mapMulti$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntStream$$Lambda$lambda$mapMulti$0",
	"java.lang.Object",
	"java.util.function.IntFunction",
	fieldInfos,
	methodInfos
};
$Class* IntStream$$Lambda$lambda$mapMulti$0::load$($String* name, bool initialize) {
	$loadClass(IntStream$$Lambda$lambda$mapMulti$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntStream$$Lambda$lambda$mapMulti$0::class$ = nullptr;

class IntStream$$Lambda$close$1 : public $Runnable {
	$class(IntStream$$Lambda$close$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($BaseStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->close();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntStream$$Lambda$close$1>());
	}
	$BaseStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntStream$$Lambda$close$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntStream$$Lambda$close$1, inst$)},
	{}
};
$MethodInfo IntStream$$Lambda$close$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/BaseStream;)V", nullptr, $PUBLIC, $method(static_cast<void(IntStream$$Lambda$close$1::*)($BaseStream*)>(&IntStream$$Lambda$close$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntStream$$Lambda$close$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntStream$$Lambda$close$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* IntStream$$Lambda$close$1::load$($String* name, bool initialize) {
	$loadClass(IntStream$$Lambda$close$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntStream$$Lambda$close$1::class$ = nullptr;

$MethodInfo _IntStream_MethodInfo_[] = {
	{"allMatch", "(Ljava/util/function/IntPredicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"anyMatch", "(Ljava/util/function/IntPredicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"asDoubleStream", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"asLongStream", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"average", "()Ljava/util/OptionalDouble;", nullptr, $PUBLIC | $ABSTRACT},
	{"boxed", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{"builder", "()Ljava/util/stream/IntStream$Builder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$IntStream$Builder*(*)()>(&IntStream::builder))},
	{"collect", "(Ljava/util/function/Supplier;Ljava/util/function/ObjIntConsumer;Ljava/util/function/BiConsumer;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/util/function/Supplier<TR;>;Ljava/util/function/ObjIntConsumer<TR;>;Ljava/util/function/BiConsumer<TR;TR;>;)TR;", $PUBLIC | $ABSTRACT},
	{"concat", "(Ljava/util/stream/IntStream;Ljava/util/stream/IntStream;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntStream*(*)(IntStream*,IntStream*)>(&IntStream::concat))},
	{"count", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"distinct", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"dropWhile", "(Ljava/util/function/IntPredicate;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"empty", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntStream*(*)()>(&IntStream::empty))},
	{"filter", "(Ljava/util/function/IntPredicate;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"findAny", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $ABSTRACT},
	{"findFirst", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $ABSTRACT},
	{"flatMap", "(Ljava/util/function/IntFunction;)Ljava/util/stream/IntStream;", "(Ljava/util/function/IntFunction<+Ljava/util/stream/IntStream;>;)Ljava/util/stream/IntStream;", $PUBLIC | $ABSTRACT},
	{"forEach", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"forEachOrdered", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"generate", "(Ljava/util/function/IntSupplier;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntStream*(*)($IntSupplier*)>(&IntStream::generate))},
	{"iterate", "(ILjava/util/function/IntUnaryOperator;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntStream*(*)(int32_t,$IntUnaryOperator*)>(&IntStream::iterate))},
	{"iterate", "(ILjava/util/function/IntPredicate;Ljava/util/function/IntUnaryOperator;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntStream*(*)(int32_t,$IntPredicate*,$IntUnaryOperator*)>(&IntStream::iterate))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"lambda$mapMulti$0", "(Ljava/util/stream/IntStream$IntMapMultiConsumer;I)Ljava/util/stream/IntStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<IntStream*(*)($IntStream$IntMapMultiConsumer*,int32_t)>(&IntStream::lambda$mapMulti$0))},
	{"limit", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"map", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"mapMulti", "(Ljava/util/stream/IntStream$IntMapMultiConsumer;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"mapToDouble", "(Ljava/util/function/IntToDoubleFunction;)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"mapToLong", "(Ljava/util/function/IntToLongFunction;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"mapToObj", "(Ljava/util/function/IntFunction;)Ljava/util/stream/Stream;", "<U:Ljava/lang/Object;>(Ljava/util/function/IntFunction<+TU;>;)Ljava/util/stream/Stream<TU;>;", $PUBLIC | $ABSTRACT},
	{"max", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $ABSTRACT},
	{"min", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $ABSTRACT},
	{"noneMatch", "(Ljava/util/function/IntPredicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"of", "(I)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntStream*(*)(int32_t)>(&IntStream::of))},
	{"of", "([I)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<IntStream*(*)($ints*)>(&IntStream::of))},
	{"parallel", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "(Ljava/util/function/IntConsumer;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"range", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntStream*(*)(int32_t,int32_t)>(&IntStream::range))},
	{"rangeClosed", "(II)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntStream*(*)(int32_t,int32_t)>(&IntStream::rangeClosed))},
	{"reduce", "(ILjava/util/function/IntBinaryOperator;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"reduce", "(Ljava/util/function/IntBinaryOperator;)Ljava/util/OptionalInt;", nullptr, $PUBLIC | $ABSTRACT},
	{"sequential", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"skip", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"sorted", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"sum", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"summaryStatistics", "()Ljava/util/IntSummaryStatistics;", nullptr, $PUBLIC | $ABSTRACT},
	{"takeWhile", "(Ljava/util/function/IntPredicate;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"toArray", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _IntStream_InnerClassesInfo_[] = {
	{"java.util.stream.IntStream$IntMapMultiConsumer", "java.util.stream.IntStream", "IntMapMultiConsumer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.IntStream$Builder", "java.util.stream.IntStream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.IntStream$2", nullptr, nullptr, 0},
	{"java.util.stream.IntStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IntStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.IntStream",
	nullptr,
	"java.util.stream.BaseStream",
	nullptr,
	_IntStream_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/BaseStream<Ljava/lang/Integer;Ljava/util/stream/IntStream;>;",
	nullptr,
	_IntStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.IntStream$IntMapMultiConsumer,java.util.stream.IntStream$Builder,java.util.stream.IntStream$2,java.util.stream.IntStream$1"
};

$Object* allocate$IntStream($Class* clazz) {
	return $of($alloc(IntStream));
}

IntStream* IntStream::mapMulti($IntStream$IntMapMultiConsumer* mapper) {
	$Objects::requireNonNull(mapper);
	return flatMap(static_cast<$IntFunction*>($$new(IntStream$$Lambda$lambda$mapMulti$0, mapper)));
}

IntStream* IntStream::takeWhile($IntPredicate* predicate) {
	$Objects::requireNonNull(predicate);
	$var($Spliterator$OfInt, var$0, $as($Spliterator$OfInt, $new($WhileOps$UnorderedWhileSpliterator$OfInt$Taking, $($cast($Spliterator$OfInt, spliterator())), true, predicate)));
	return $cast(IntStream, $nc($($StreamSupport::intStream(var$0, isParallel())))->onClose(static_cast<$Runnable*>($$new(IntStream$$Lambda$close$1, this))));
}

IntStream* IntStream::dropWhile($IntPredicate* predicate) {
	$Objects::requireNonNull(predicate);
	$var($Spliterator$OfInt, var$0, $as($Spliterator$OfInt, $new($WhileOps$UnorderedWhileSpliterator$OfInt$Dropping, $($cast($Spliterator$OfInt, spliterator())), true, predicate)));
	return $cast(IntStream, $nc($($StreamSupport::intStream(var$0, isParallel())))->onClose(static_cast<$Runnable*>($$new(IntStream$$Lambda$close$1, this))));
}

$IntStream$Builder* IntStream::builder() {
	$init(IntStream);
	return $new($Streams$IntStreamBuilderImpl);
}

IntStream* IntStream::empty() {
	$init(IntStream);
	return $StreamSupport::intStream($($Spliterators::emptyIntSpliterator()), false);
}

IntStream* IntStream::of(int32_t t) {
	$init(IntStream);
	return $StreamSupport::intStream($as($Spliterator$OfInt, $$new($Streams$IntStreamBuilderImpl, t)), false);
}

IntStream* IntStream::of($ints* values) {
	$init(IntStream);
	return $Arrays::stream(values);
}

IntStream* IntStream::iterate(int32_t seed, $IntUnaryOperator* f) {
	$init(IntStream);
	$Objects::requireNonNull(f);
	$var($Spliterator$OfInt, spliterator, $new($IntStream$1, $Long::MAX_VALUE, ($Spliterator::ORDERED | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL, f, seed));
	return $StreamSupport::intStream(spliterator, false);
}

IntStream* IntStream::iterate(int32_t seed, $IntPredicate* hasNext, $IntUnaryOperator* next) {
	$init(IntStream);
	$Objects::requireNonNull(next);
	$Objects::requireNonNull(hasNext);
	$var($Spliterator$OfInt, spliterator, $new($IntStream$2, $Long::MAX_VALUE, ($Spliterator::ORDERED | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL, next, seed, hasNext));
	return $StreamSupport::intStream(spliterator, false);
}

IntStream* IntStream::generate($IntSupplier* s) {
	$init(IntStream);
	$Objects::requireNonNull(s);
	return $StreamSupport::intStream($as($Spliterator$OfInt, $$new($StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, $Long::MAX_VALUE, s)), false);
}

IntStream* IntStream::range(int32_t startInclusive, int32_t endExclusive) {
	$init(IntStream);
	if (startInclusive >= endExclusive) {
		return empty();
	} else {
		return $StreamSupport::intStream($$new($Streams$RangeIntSpliterator, startInclusive, endExclusive, false), false);
	}
}

IntStream* IntStream::rangeClosed(int32_t startInclusive, int32_t endInclusive) {
	$init(IntStream);
	if (startInclusive > endInclusive) {
		return empty();
	} else {
		return $StreamSupport::intStream($$new($Streams$RangeIntSpliterator, startInclusive, endInclusive, true), false);
	}
}

IntStream* IntStream::concat(IntStream* a, IntStream* b) {
	$init(IntStream);
	$Objects::requireNonNull(a);
	$Objects::requireNonNull(b);
	$var($Spliterator$OfInt, var$0, $cast($Spliterator$OfInt, a->spliterator()));
	$var($Spliterator$OfInt, split, $as($Spliterator$OfInt, $new($Streams$ConcatSpliterator$OfInt, var$0, $($cast($Spliterator$OfInt, b->spliterator())))));
	bool var$1 = a->isParallel();
	$var(IntStream, stream, $StreamSupport::intStream(split, var$1 || b->isParallel()));
	return $cast(IntStream, $nc(stream)->onClose($($Streams::composedClose(a, b))));
}

IntStream* IntStream::lambda$mapMulti$0($IntStream$IntMapMultiConsumer* mapper, int32_t e) {
	$init(IntStream);
	$var($SpinedBuffer$OfInt, buffer, $new($SpinedBuffer$OfInt));
	$nc(mapper)->accept(e, buffer);
	return $StreamSupport::intStream($($cast($Spliterator$OfInt, buffer->spliterator())), false);
}

$Class* IntStream::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IntStream$$Lambda$lambda$mapMulti$0::classInfo$.name)) {
			return IntStream$$Lambda$lambda$mapMulti$0::load$(name, initialize);
		}
		if (name->equals(IntStream$$Lambda$close$1::classInfo$.name)) {
			return IntStream$$Lambda$close$1::load$(name, initialize);
		}
	}
	$loadClass(IntStream, name, initialize, &_IntStream_ClassInfo_, allocate$IntStream);
	return class$;
}

$Class* IntStream::class$ = nullptr;

		} // stream
	} // util
} // java