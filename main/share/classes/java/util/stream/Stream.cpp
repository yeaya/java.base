#include <java/util/stream/Stream.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
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
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractSpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/function/ToDoubleFunction.h>
#include <java/util/function/ToIntFunction.h>
#include <java/util/function/ToLongFunction.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/SpinedBuffer$OfDouble.h>
#include <java/util/stream/SpinedBuffer$OfInt.h>
#include <java/util/stream/SpinedBuffer$OfLong.h>
#include <java/util/stream/SpinedBuffer.h>
#include <java/util/stream/Stream$1.h>
#include <java/util/stream/Stream$2.h>
#include <java/util/stream/Stream$Builder.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator$OfRef.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>
#include <java/util/stream/StreamSupport.h>
#include <java/util/stream/Streams$AbstractStreamBuilderImpl.h>
#include <java/util/stream/Streams$ConcatSpliterator$OfRef.h>
#include <java/util/stream/Streams$ConcatSpliterator.h>
#include <java/util/stream/Streams$StreamBuilderImpl.h>
#include <java/util/stream/Streams.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef$Dropping.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef$Taking.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef MAX_VALUE
#undef ORDERED

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
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
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterators = ::java::util::Spliterators;
using $Spliterators$AbstractSpliterator = ::java::util::Spliterators$AbstractSpliterator;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $ToDoubleFunction = ::java::util::function::ToDoubleFunction;
using $ToIntFunction = ::java::util::function::ToIntFunction;
using $ToLongFunction = ::java::util::function::ToLongFunction;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $BaseStream = ::java::util::stream::BaseStream;
using $Collector = ::java::util::stream::Collector;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $SpinedBuffer = ::java::util::stream::SpinedBuffer;
using $SpinedBuffer$OfDouble = ::java::util::stream::SpinedBuffer$OfDouble;
using $SpinedBuffer$OfInt = ::java::util::stream::SpinedBuffer$OfInt;
using $SpinedBuffer$OfLong = ::java::util::stream::SpinedBuffer$OfLong;
using $Stream$1 = ::java::util::stream::Stream$1;
using $Stream$2 = ::java::util::stream::Stream$2;
using $Stream$Builder = ::java::util::stream::Stream$Builder;
using $StreamSpliterators$InfiniteSupplyingSpliterator = ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator;
using $StreamSpliterators$InfiniteSupplyingSpliterator$OfRef = ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator$OfRef;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $Streams = ::java::util::stream::Streams;
using $Streams$AbstractStreamBuilderImpl = ::java::util::stream::Streams$AbstractStreamBuilderImpl;
using $Streams$ConcatSpliterator = ::java::util::stream::Streams$ConcatSpliterator;
using $Streams$ConcatSpliterator$OfRef = ::java::util::stream::Streams$ConcatSpliterator$OfRef;
using $Streams$StreamBuilderImpl = ::java::util::stream::Streams$StreamBuilderImpl;
using $WhileOps$UnorderedWhileSpliterator = ::java::util::stream::WhileOps$UnorderedWhileSpliterator;
using $WhileOps$UnorderedWhileSpliterator$OfRef = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef;
using $WhileOps$UnorderedWhileSpliterator$OfRef$Dropping = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef$Dropping;
using $WhileOps$UnorderedWhileSpliterator$OfRef$Taking = ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef$Taking;

namespace java {
	namespace util {
		namespace stream {

class Stream$$Lambda$lambda$mapMulti$0 : public $Function {
	$class(Stream$$Lambda$lambda$mapMulti$0, $NO_CLASS_INIT, $Function)
public:
	void init$($BiConsumer* mapper) {
		$set(this, mapper, mapper);
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(Stream::lambda$mapMulti$0(mapper, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stream$$Lambda$lambda$mapMulti$0>());
	}
	$BiConsumer* mapper = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stream$$Lambda$lambda$mapMulti$0::fieldInfos[2] = {
	{"mapper", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Stream$$Lambda$lambda$mapMulti$0, mapper)},
	{}
};
$MethodInfo Stream$$Lambda$lambda$mapMulti$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Stream$$Lambda$lambda$mapMulti$0::*)($BiConsumer*)>(&Stream$$Lambda$lambda$mapMulti$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Stream$$Lambda$lambda$mapMulti$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Stream$$Lambda$lambda$mapMulti$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Stream$$Lambda$lambda$mapMulti$0::load$($String* name, bool initialize) {
	$loadClass(Stream$$Lambda$lambda$mapMulti$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Stream$$Lambda$lambda$mapMulti$0::class$ = nullptr;

class Stream$$Lambda$lambda$mapMultiToInt$1$1 : public $Function {
	$class(Stream$$Lambda$lambda$mapMultiToInt$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$($BiConsumer* mapper) {
		$set(this, mapper, mapper);
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(Stream::lambda$mapMultiToInt$1(mapper, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stream$$Lambda$lambda$mapMultiToInt$1$1>());
	}
	$BiConsumer* mapper = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stream$$Lambda$lambda$mapMultiToInt$1$1::fieldInfos[2] = {
	{"mapper", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Stream$$Lambda$lambda$mapMultiToInt$1$1, mapper)},
	{}
};
$MethodInfo Stream$$Lambda$lambda$mapMultiToInt$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Stream$$Lambda$lambda$mapMultiToInt$1$1::*)($BiConsumer*)>(&Stream$$Lambda$lambda$mapMultiToInt$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Stream$$Lambda$lambda$mapMultiToInt$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Stream$$Lambda$lambda$mapMultiToInt$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Stream$$Lambda$lambda$mapMultiToInt$1$1::load$($String* name, bool initialize) {
	$loadClass(Stream$$Lambda$lambda$mapMultiToInt$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Stream$$Lambda$lambda$mapMultiToInt$1$1::class$ = nullptr;

class Stream$$Lambda$lambda$mapMultiToLong$2$2 : public $Function {
	$class(Stream$$Lambda$lambda$mapMultiToLong$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$($BiConsumer* mapper) {
		$set(this, mapper, mapper);
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(Stream::lambda$mapMultiToLong$2(mapper, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stream$$Lambda$lambda$mapMultiToLong$2$2>());
	}
	$BiConsumer* mapper = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stream$$Lambda$lambda$mapMultiToLong$2$2::fieldInfos[2] = {
	{"mapper", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Stream$$Lambda$lambda$mapMultiToLong$2$2, mapper)},
	{}
};
$MethodInfo Stream$$Lambda$lambda$mapMultiToLong$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Stream$$Lambda$lambda$mapMultiToLong$2$2::*)($BiConsumer*)>(&Stream$$Lambda$lambda$mapMultiToLong$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Stream$$Lambda$lambda$mapMultiToLong$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Stream$$Lambda$lambda$mapMultiToLong$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Stream$$Lambda$lambda$mapMultiToLong$2$2::load$($String* name, bool initialize) {
	$loadClass(Stream$$Lambda$lambda$mapMultiToLong$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Stream$$Lambda$lambda$mapMultiToLong$2$2::class$ = nullptr;

class Stream$$Lambda$lambda$mapMultiToDouble$3$3 : public $Function {
	$class(Stream$$Lambda$lambda$mapMultiToDouble$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$($BiConsumer* mapper) {
		$set(this, mapper, mapper);
	}
	virtual $Object* apply(Object$* e) override {
		 return $of(Stream::lambda$mapMultiToDouble$3(mapper, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stream$$Lambda$lambda$mapMultiToDouble$3$3>());
	}
	$BiConsumer* mapper = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stream$$Lambda$lambda$mapMultiToDouble$3$3::fieldInfos[2] = {
	{"mapper", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Stream$$Lambda$lambda$mapMultiToDouble$3$3, mapper)},
	{}
};
$MethodInfo Stream$$Lambda$lambda$mapMultiToDouble$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Stream$$Lambda$lambda$mapMultiToDouble$3$3::*)($BiConsumer*)>(&Stream$$Lambda$lambda$mapMultiToDouble$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Stream$$Lambda$lambda$mapMultiToDouble$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Stream$$Lambda$lambda$mapMultiToDouble$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Stream$$Lambda$lambda$mapMultiToDouble$3$3::load$($String* name, bool initialize) {
	$loadClass(Stream$$Lambda$lambda$mapMultiToDouble$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Stream$$Lambda$lambda$mapMultiToDouble$3$3::class$ = nullptr;

class Stream$$Lambda$close$4 : public $Runnable {
	$class(Stream$$Lambda$close$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$($BaseStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->close();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stream$$Lambda$close$4>());
	}
	$BaseStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stream$$Lambda$close$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stream$$Lambda$close$4, inst$)},
	{}
};
$MethodInfo Stream$$Lambda$close$4::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/BaseStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Stream$$Lambda$close$4::*)($BaseStream*)>(&Stream$$Lambda$close$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Stream$$Lambda$close$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Stream$$Lambda$close$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Stream$$Lambda$close$4::load$($String* name, bool initialize) {
	$loadClass(Stream$$Lambda$close$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Stream$$Lambda$close$4::class$ = nullptr;

$CompoundAttribute _Stream_MethodAnnotations_of39[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$MethodInfo _Stream_MethodInfo_[] = {
	{"allMatch", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TT;>;)Z", $PUBLIC | $ABSTRACT},
	{"anyMatch", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TT;>;)Z", $PUBLIC | $ABSTRACT},
	{"builder", "()Ljava/util/stream/Stream$Builder;", "<T:Ljava/lang/Object;>()Ljava/util/stream/Stream$Builder<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream$Builder*(*)()>(&Stream::builder))},
	{"collect", "(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/util/function/Supplier<TR;>;Ljava/util/function/BiConsumer<TR;-TT;>;Ljava/util/function/BiConsumer<TR;TR;>;)TR;", $PUBLIC | $ABSTRACT},
	{"collect", "(Ljava/util/stream/Collector;)Ljava/lang/Object;", "<R:Ljava/lang/Object;A:Ljava/lang/Object;>(Ljava/util/stream/Collector<-TT;TA;TR;>;)TR;", $PUBLIC | $ABSTRACT},
	{"concat", "(Ljava/util/stream/Stream;Ljava/util/stream/Stream;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(Ljava/util/stream/Stream<+TT;>;Ljava/util/stream/Stream<+TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Stream*(*)(Stream*,Stream*)>(&Stream::concat))},
	{"count", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"distinct", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT},
	{"dropWhile", "(Ljava/util/function/Predicate;)Ljava/util/stream/Stream;", "(Ljava/util/function/Predicate<-TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC},
	{"empty", "()Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>()Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Stream*(*)()>(&Stream::empty))},
	{"filter", "(Ljava/util/function/Predicate;)Ljava/util/stream/Stream;", "(Ljava/util/function/Predicate<-TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT},
	{"findAny", "()Ljava/util/Optional;", "()Ljava/util/Optional<TT;>;", $PUBLIC | $ABSTRACT},
	{"findFirst", "()Ljava/util/Optional;", "()Ljava/util/Optional<TT;>;", $PUBLIC | $ABSTRACT},
	{"flatMap", "(Ljava/util/function/Function;)Ljava/util/stream/Stream;", "<R:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+Ljava/util/stream/Stream<+TR;>;>;)Ljava/util/stream/Stream<TR;>;", $PUBLIC | $ABSTRACT},
	{"flatMapToDouble", "(Ljava/util/function/Function;)Ljava/util/stream/DoubleStream;", "(Ljava/util/function/Function<-TT;+Ljava/util/stream/DoubleStream;>;)Ljava/util/stream/DoubleStream;", $PUBLIC | $ABSTRACT},
	{"flatMapToInt", "(Ljava/util/function/Function;)Ljava/util/stream/IntStream;", "(Ljava/util/function/Function<-TT;+Ljava/util/stream/IntStream;>;)Ljava/util/stream/IntStream;", $PUBLIC | $ABSTRACT},
	{"flatMapToLong", "(Ljava/util/function/Function;)Ljava/util/stream/LongStream;", "(Ljava/util/function/Function<-TT;+Ljava/util/stream/LongStream;>;)Ljava/util/stream/LongStream;", $PUBLIC | $ABSTRACT},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC | $ABSTRACT},
	{"forEachOrdered", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC | $ABSTRACT},
	{"generate", "(Ljava/util/function/Supplier;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(Ljava/util/function/Supplier<+TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Stream*(*)($Supplier*)>(&Stream::generate))},
	{"iterate", "(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(TT;Ljava/util/function/UnaryOperator<TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Stream*(*)(Object$*,$UnaryOperator*)>(&Stream::iterate))},
	{"iterate", "(Ljava/lang/Object;Ljava/util/function/Predicate;Ljava/util/function/UnaryOperator;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(TT;Ljava/util/function/Predicate<-TT;>;Ljava/util/function/UnaryOperator<TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Stream*(*)(Object$*,$Predicate*,$UnaryOperator*)>(&Stream::iterate))},
	{"lambda$mapMulti$0", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<Stream*(*)($BiConsumer*,Object$*)>(&Stream::lambda$mapMulti$0))},
	{"lambda$mapMultiToDouble$3", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;)Ljava/util/stream/DoubleStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DoubleStream*(*)($BiConsumer*,Object$*)>(&Stream::lambda$mapMultiToDouble$3))},
	{"lambda$mapMultiToInt$1", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;)Ljava/util/stream/IntStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$IntStream*(*)($BiConsumer*,Object$*)>(&Stream::lambda$mapMultiToInt$1))},
	{"lambda$mapMultiToLong$2", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;)Ljava/util/stream/LongStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LongStream*(*)($BiConsumer*,Object$*)>(&Stream::lambda$mapMultiToLong$2))},
	{"limit", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT},
	{"map", "(Ljava/util/function/Function;)Ljava/util/stream/Stream;", "<R:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TR;>;)Ljava/util/stream/Stream<TR;>;", $PUBLIC | $ABSTRACT},
	{"mapMulti", "(Ljava/util/function/BiConsumer;)Ljava/util/stream/Stream;", "<R:Ljava/lang/Object;>(Ljava/util/function/BiConsumer<-TT;-Ljava/util/function/Consumer<TR;>;>;)Ljava/util/stream/Stream<TR;>;", $PUBLIC},
	{"mapMultiToDouble", "(Ljava/util/function/BiConsumer;)Ljava/util/stream/DoubleStream;", "(Ljava/util/function/BiConsumer<-TT;-Ljava/util/function/DoubleConsumer;>;)Ljava/util/stream/DoubleStream;", $PUBLIC},
	{"mapMultiToInt", "(Ljava/util/function/BiConsumer;)Ljava/util/stream/IntStream;", "(Ljava/util/function/BiConsumer<-TT;-Ljava/util/function/IntConsumer;>;)Ljava/util/stream/IntStream;", $PUBLIC},
	{"mapMultiToLong", "(Ljava/util/function/BiConsumer;)Ljava/util/stream/LongStream;", "(Ljava/util/function/BiConsumer<-TT;-Ljava/util/function/LongConsumer;>;)Ljava/util/stream/LongStream;", $PUBLIC},
	{"mapToDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/DoubleStream;", "(Ljava/util/function/ToDoubleFunction<-TT;>;)Ljava/util/stream/DoubleStream;", $PUBLIC | $ABSTRACT},
	{"mapToInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/stream/IntStream;", "(Ljava/util/function/ToIntFunction<-TT;>;)Ljava/util/stream/IntStream;", $PUBLIC | $ABSTRACT},
	{"mapToLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/stream/LongStream;", "(Ljava/util/function/ToLongFunction<-TT;>;)Ljava/util/stream/LongStream;", $PUBLIC | $ABSTRACT},
	{"max", "(Ljava/util/Comparator;)Ljava/util/Optional;", "(Ljava/util/Comparator<-TT;>;)Ljava/util/Optional<TT;>;", $PUBLIC | $ABSTRACT},
	{"min", "(Ljava/util/Comparator;)Ljava/util/Optional;", "(Ljava/util/Comparator<-TT;>;)Ljava/util/Optional<TT;>;", $PUBLIC | $ABSTRACT},
	{"noneMatch", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TT;>;)Z", $PUBLIC | $ABSTRACT},
	{"of", "(Ljava/lang/Object;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(TT;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Stream*(*)(Object$*)>(&Stream::of))},
	{"of", "([Ljava/lang/Object;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<Stream*(*)($ObjectArray*)>(&Stream::of)), nullptr, nullptr, _Stream_MethodAnnotations_of39},
	{"ofNullable", "(Ljava/lang/Object;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(TT;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Stream*(*)(Object$*)>(&Stream::ofNullable))},
	{"peek", "(Ljava/util/function/Consumer;)Ljava/util/stream/Stream;", "(Ljava/util/function/Consumer<-TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT},
	{"reduce", "(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "(TT;Ljava/util/function/BinaryOperator<TT;>;)TT;", $PUBLIC | $ABSTRACT},
	{"reduce", "(Ljava/util/function/BinaryOperator;)Ljava/util/Optional;", "(Ljava/util/function/BinaryOperator<TT;>;)Ljava/util/Optional<TT;>;", $PUBLIC | $ABSTRACT},
	{"reduce", "(Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;", "<U:Ljava/lang/Object;>(TU;Ljava/util/function/BiFunction<TU;-TT;TU;>;Ljava/util/function/BinaryOperator<TU;>;)TU;", $PUBLIC | $ABSTRACT},
	{"skip", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT},
	{"sorted", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT},
	{"sorted", "(Ljava/util/Comparator;)Ljava/util/stream/Stream;", "(Ljava/util/Comparator<-TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $ABSTRACT},
	{"takeWhile", "(Ljava/util/function/Predicate;)Ljava/util/stream/Stream;", "(Ljava/util/function/Predicate<-TT;>;)Ljava/util/stream/Stream<TT;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "<A:Ljava/lang/Object;>(Ljava/util/function/IntFunction<[TA;>;)[TA;", $PUBLIC | $ABSTRACT},
	{"toList", "()Ljava/util/List;", "()Ljava/util/List<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Stream_InnerClassesInfo_[] = {
	{"java.util.stream.Stream$Builder", "java.util.stream.Stream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Stream$2", nullptr, nullptr, 0},
	{"java.util.stream.Stream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Stream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Stream",
	nullptr,
	"java.util.stream.BaseStream",
	nullptr,
	_Stream_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/BaseStream<TT;Ljava/util/stream/Stream<TT;>;>;",
	nullptr,
	_Stream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.Stream$Builder,java.util.stream.Stream$2,java.util.stream.Stream$1"
};

$Object* allocate$Stream($Class* clazz) {
	return $of($alloc(Stream));
}

Stream* Stream::mapMulti($BiConsumer* mapper) {
	$Objects::requireNonNull(mapper);
	return flatMap(static_cast<$Function*>($$new(Stream$$Lambda$lambda$mapMulti$0, mapper)));
}

$IntStream* Stream::mapMultiToInt($BiConsumer* mapper) {
	$Objects::requireNonNull(mapper);
	return flatMapToInt(static_cast<$Function*>($$new(Stream$$Lambda$lambda$mapMultiToInt$1$1, mapper)));
}

$LongStream* Stream::mapMultiToLong($BiConsumer* mapper) {
	$Objects::requireNonNull(mapper);
	return flatMapToLong(static_cast<$Function*>($$new(Stream$$Lambda$lambda$mapMultiToLong$2$2, mapper)));
}

$DoubleStream* Stream::mapMultiToDouble($BiConsumer* mapper) {
	$Objects::requireNonNull(mapper);
	return flatMapToDouble(static_cast<$Function*>($$new(Stream$$Lambda$lambda$mapMultiToDouble$3$3, mapper)));
}

Stream* Stream::takeWhile($Predicate* predicate) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(predicate);
	$var($Spliterator, var$0, static_cast<$Spliterator*>($new($WhileOps$UnorderedWhileSpliterator$OfRef$Taking, $(spliterator()), true, predicate)));
	return $cast(Stream, $nc($($StreamSupport::stream(var$0, isParallel())))->onClose(static_cast<$Runnable*>($$new(Stream$$Lambda$close$4, this))));
}

Stream* Stream::dropWhile($Predicate* predicate) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(predicate);
	$var($Spliterator, var$0, static_cast<$Spliterator*>($new($WhileOps$UnorderedWhileSpliterator$OfRef$Dropping, $(spliterator()), true, predicate)));
	return $cast(Stream, $nc($($StreamSupport::stream(var$0, isParallel())))->onClose(static_cast<$Runnable*>($$new(Stream$$Lambda$close$4, this))));
}

$List* Stream::toList() {
	$useLocalCurrentObjectStackCache();
	return $Collections::unmodifiableList($$new($ArrayList, $(static_cast<$Collection*>($Arrays::asList($(this->toArray()))))));
}

$Stream$Builder* Stream::builder() {
	$init(Stream);
	return $new($Streams$StreamBuilderImpl);
}

Stream* Stream::empty() {
	$init(Stream);
	return $StreamSupport::stream($($Spliterators::emptySpliterator()), false);
}

Stream* Stream::of(Object$* t) {
	$init(Stream);
	return $StreamSupport::stream($$new($Streams$StreamBuilderImpl, t), false);
}

Stream* Stream::ofNullable(Object$* t) {
	$init(Stream);
	return t == nullptr ? Stream::empty() : $StreamSupport::stream($$new($Streams$StreamBuilderImpl, t), false);
}

Stream* Stream::of($ObjectArray* values) {
	$init(Stream);
	return $Arrays::stream(values);
}

Stream* Stream::iterate(Object$* seed, $UnaryOperator* f) {
	$init(Stream);
	$Objects::requireNonNull(f);
	$var($Spliterator, spliterator, $new($Stream$1, $Long::MAX_VALUE, $Spliterator::ORDERED | $Spliterator::IMMUTABLE, f, seed));
	return $StreamSupport::stream(spliterator, false);
}

Stream* Stream::iterate(Object$* seed, $Predicate* hasNext, $UnaryOperator* next) {
	$init(Stream);
	$Objects::requireNonNull(next);
	$Objects::requireNonNull(hasNext);
	$var($Spliterator, spliterator, $new($Stream$2, $Long::MAX_VALUE, $Spliterator::ORDERED | $Spliterator::IMMUTABLE, next, seed, hasNext));
	return $StreamSupport::stream(spliterator, false);
}

Stream* Stream::generate($Supplier* s) {
	$init(Stream);
	$Objects::requireNonNull(s);
	return $StreamSupport::stream($$new($StreamSpliterators$InfiniteSupplyingSpliterator$OfRef, $Long::MAX_VALUE, s), false);
}

Stream* Stream::concat(Stream* a, Stream* b) {
	$init(Stream);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(a);
	$Objects::requireNonNull(b);
	$var($Spliterator, var$0, a->spliterator());
	$var($Spliterator, split, $new($Streams$ConcatSpliterator$OfRef, var$0, $(b->spliterator())));
	bool var$1 = a->isParallel();
	$var(Stream, stream, $StreamSupport::stream(split, var$1 || b->isParallel()));
	return $cast(Stream, $nc(stream)->onClose($($Streams::composedClose(a, b))));
}

$DoubleStream* Stream::lambda$mapMultiToDouble$3($BiConsumer* mapper, Object$* e) {
	$init(Stream);
	$useLocalCurrentObjectStackCache();
	$var($SpinedBuffer$OfDouble, buffer, $new($SpinedBuffer$OfDouble));
	$nc(mapper)->accept(e, buffer);
	return $StreamSupport::doubleStream($($cast($Spliterator$OfDouble, buffer->spliterator())), false);
}

$LongStream* Stream::lambda$mapMultiToLong$2($BiConsumer* mapper, Object$* e) {
	$init(Stream);
	$useLocalCurrentObjectStackCache();
	$var($SpinedBuffer$OfLong, buffer, $new($SpinedBuffer$OfLong));
	$nc(mapper)->accept(e, buffer);
	return $StreamSupport::longStream($($cast($Spliterator$OfLong, buffer->spliterator())), false);
}

$IntStream* Stream::lambda$mapMultiToInt$1($BiConsumer* mapper, Object$* e) {
	$init(Stream);
	$useLocalCurrentObjectStackCache();
	$var($SpinedBuffer$OfInt, buffer, $new($SpinedBuffer$OfInt));
	$nc(mapper)->accept(e, buffer);
	return $StreamSupport::intStream($($cast($Spliterator$OfInt, buffer->spliterator())), false);
}

Stream* Stream::lambda$mapMulti$0($BiConsumer* mapper, Object$* e) {
	$init(Stream);
	$useLocalCurrentObjectStackCache();
	$var($SpinedBuffer, buffer, $new($SpinedBuffer));
	$nc(mapper)->accept(e, buffer);
	return $StreamSupport::stream($(buffer->spliterator()), false);
}

$Class* Stream::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Stream$$Lambda$lambda$mapMulti$0::classInfo$.name)) {
			return Stream$$Lambda$lambda$mapMulti$0::load$(name, initialize);
		}
		if (name->equals(Stream$$Lambda$lambda$mapMultiToInt$1$1::classInfo$.name)) {
			return Stream$$Lambda$lambda$mapMultiToInt$1$1::load$(name, initialize);
		}
		if (name->equals(Stream$$Lambda$lambda$mapMultiToLong$2$2::classInfo$.name)) {
			return Stream$$Lambda$lambda$mapMultiToLong$2$2::load$(name, initialize);
		}
		if (name->equals(Stream$$Lambda$lambda$mapMultiToDouble$3$3::classInfo$.name)) {
			return Stream$$Lambda$lambda$mapMultiToDouble$3$3::load$(name, initialize);
		}
		if (name->equals(Stream$$Lambda$close$4::classInfo$.name)) {
			return Stream$$Lambda$close$4::load$(name, initialize);
		}
	}
	$loadClass(Stream, name, initialize, &_Stream_ClassInfo_, allocate$Stream);
	return class$;
}

$Class* Stream::class$ = nullptr;

		} // stream
	} // util
} // java