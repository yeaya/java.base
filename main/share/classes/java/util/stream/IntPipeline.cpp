#include <java/util/stream/IntPipeline.h>

#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/IntSummaryStatistics.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/OptionalDouble.h>
#include <java/util/OptionalInt.h>
#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/PrimitiveIterator.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/function/IntToDoubleFunction.h>
#include <java/util/function/IntToLongFunction.h>
#include <java/util/function/IntUnaryOperator.h>
#include <java/util/function/ObjIntConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/function/ToIntFunction.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/DoublePipeline$StatelessOp.h>
#include <java/util/stream/DoublePipeline.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/FindOps.h>
#include <java/util/stream/ForEachOps.h>
#include <java/util/stream/IntPipeline$1.h>
#include <java/util/stream/IntPipeline$10.h>
#include <java/util/stream/IntPipeline$11.h>
#include <java/util/stream/IntPipeline$2.h>
#include <java/util/stream/IntPipeline$3.h>
#include <java/util/stream/IntPipeline$4.h>
#include <java/util/stream/IntPipeline$5.h>
#include <java/util/stream/IntPipeline$6.h>
#include <java/util/stream/IntPipeline$7.h>
#include <java/util/stream/IntPipeline$8.h>
#include <java/util/stream/IntPipeline$9.h>
#include <java/util/stream/IntPipeline$StatelessOp.h>
#include <java/util/stream/IntStream$IntMapMultiConsumer.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongPipeline$StatelessOp.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/MatchOps$MatchKind.h>
#include <java/util/stream/MatchOps.h>
#include <java/util/stream/Node$Builder$OfInt.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/ReferencePipeline$StatelessOp.h>
#include <java/util/stream/ReferencePipeline.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SliceOps.h>
#include <java/util/stream/SortedOps.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/StreamSpliterators$AbstractWrappingSpliterator.h>
#include <java/util/stream/StreamSpliterators$DelegatingSpliterator$OfInt.h>
#include <java/util/stream/StreamSpliterators$DelegatingSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$DelegatingSpliterator.h>
#include <java/util/stream/StreamSpliterators$IntWrappingSpliterator.h>
#include <java/util/stream/TerminalOp.h>
#include <java/util/stream/Tripwire.h>
#include <java/util/stream/WhileOps.h>
#include <jcpp.h>

#undef ALL
#undef ANY
#undef ENABLED
#undef INT_VALUE
#undef NONE
#undef NOT_DISTINCT
#undef NOT_ORDERED
#undef NOT_SIZED
#undef NOT_SORTED

using $IntegerArray = $Array<::java::lang::Integer>;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $IntSummaryStatistics = ::java::util::IntSummaryStatistics;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $OptionalDouble = ::java::util::OptionalDouble;
using $OptionalInt = ::java::util::OptionalInt;
using $PrimitiveIterator = ::java::util::PrimitiveIterator;
using $PrimitiveIterator$OfInt = ::java::util::PrimitiveIterator$OfInt;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Spliterators = ::java::util::Spliterators;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntFunction = ::java::util::function::IntFunction;
using $IntPredicate = ::java::util::function::IntPredicate;
using $IntToDoubleFunction = ::java::util::function::IntToDoubleFunction;
using $IntToLongFunction = ::java::util::function::IntToLongFunction;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $ObjIntConsumer = ::java::util::function::ObjIntConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ToIntFunction = ::java::util::function::ToIntFunction;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $BaseStream = ::java::util::stream::BaseStream;
using $DoublePipeline = ::java::util::stream::DoublePipeline;
using $DoublePipeline$StatelessOp = ::java::util::stream::DoublePipeline$StatelessOp;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $FindOps = ::java::util::stream::FindOps;
using $ForEachOps = ::java::util::stream::ForEachOps;
using $IntPipeline$1 = ::java::util::stream::IntPipeline$1;
using $IntPipeline$10 = ::java::util::stream::IntPipeline$10;
using $IntPipeline$11 = ::java::util::stream::IntPipeline$11;
using $IntPipeline$2 = ::java::util::stream::IntPipeline$2;
using $IntPipeline$3 = ::java::util::stream::IntPipeline$3;
using $IntPipeline$4 = ::java::util::stream::IntPipeline$4;
using $IntPipeline$5 = ::java::util::stream::IntPipeline$5;
using $IntPipeline$6 = ::java::util::stream::IntPipeline$6;
using $IntPipeline$7 = ::java::util::stream::IntPipeline$7;
using $IntPipeline$8 = ::java::util::stream::IntPipeline$8;
using $IntPipeline$9 = ::java::util::stream::IntPipeline$9;
using $IntPipeline$StatelessOp = ::java::util::stream::IntPipeline$StatelessOp;
using $IntStream = ::java::util::stream::IntStream;
using $IntStream$IntMapMultiConsumer = ::java::util::stream::IntStream$IntMapMultiConsumer;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongPipeline$StatelessOp = ::java::util::stream::LongPipeline$StatelessOp;
using $LongStream = ::java::util::stream::LongStream;
using $MatchOps = ::java::util::stream::MatchOps;
using $MatchOps$MatchKind = ::java::util::stream::MatchOps$MatchKind;
using $Node = ::java::util::stream::Node;
using $Node$Builder = ::java::util::stream::Node$Builder;
using $Node$Builder$OfInt = ::java::util::stream::Node$Builder$OfInt;
using $Node$OfInt = ::java::util::stream::Node$OfInt;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes = ::java::util::stream::Nodes;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReferencePipeline = ::java::util::stream::ReferencePipeline;
using $ReferencePipeline$StatelessOp = ::java::util::stream::ReferencePipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $SliceOps = ::java::util::stream::SliceOps;
using $SortedOps = ::java::util::stream::SortedOps;
using $Stream = ::java::util::stream::Stream;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;
using $StreamSpliterators$AbstractWrappingSpliterator = ::java::util::stream::StreamSpliterators$AbstractWrappingSpliterator;
using $StreamSpliterators$DelegatingSpliterator = ::java::util::stream::StreamSpliterators$DelegatingSpliterator;
using $StreamSpliterators$DelegatingSpliterator$OfInt = ::java::util::stream::StreamSpliterators$DelegatingSpliterator$OfInt;
using $StreamSpliterators$DelegatingSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$DelegatingSpliterator$OfPrimitive;
using $StreamSpliterators$IntWrappingSpliterator = ::java::util::stream::StreamSpliterators$IntWrappingSpliterator;
using $TerminalOp = ::java::util::stream::TerminalOp;
using $Tripwire = ::java::util::stream::Tripwire;
using $WhileOps = ::java::util::stream::WhileOps;

namespace java {
	namespace util {
		namespace stream {

class IntPipeline$$Lambda$accept : public $IntConsumer {
	$class(IntPipeline$$Lambda$accept, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($Sink* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int32_t value) override {
		$nc(inst$)->accept(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$accept>());
	}
	$Sink* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntPipeline$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntPipeline$$Lambda$accept, inst$)},
	{}
};
$MethodInfo IntPipeline$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$accept::*)($Sink*)>(&IntPipeline$$Lambda$accept::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* IntPipeline$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$accept::class$ = nullptr;

class IntPipeline$$Lambda$valueOf$1 : public $IntFunction {
	$class(IntPipeline$$Lambda$valueOf$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t i) override {
		 return $of($Integer::valueOf(i));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$valueOf$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$valueOf$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$valueOf$1::*)()>(&IntPipeline$$Lambda$valueOf$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$valueOf$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$valueOf$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$valueOf$1::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$valueOf$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$valueOf$1::class$ = nullptr;

class IntPipeline$$Lambda$lambda$distinct$0$2 : public $ToIntFunction {
	$class(IntPipeline$$Lambda$lambda$distinct$0$2, $NO_CLASS_INIT, $ToIntFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* i) override {
		 return IntPipeline::lambda$distinct$0($cast($Integer, i));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$lambda$distinct$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$lambda$distinct$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$lambda$distinct$0$2::*)()>(&IntPipeline$$Lambda$lambda$distinct$0$2::init$))},
	{"applyAsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$lambda$distinct$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$lambda$distinct$0$2",
	"java.lang.Object",
	"java.util.function.ToIntFunction",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$lambda$distinct$0$2::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$lambda$distinct$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$lambda$distinct$0$2::class$ = nullptr;

class IntPipeline$$Lambda$sum$3 : public $IntBinaryOperator {
	$class(IntPipeline$$Lambda$sum$3, $NO_CLASS_INIT, $IntBinaryOperator)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(int32_t a, int32_t b) override {
		 return $Integer::sum(a, b);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$sum$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$sum$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$sum$3::*)()>(&IntPipeline$$Lambda$sum$3::init$))},
	{"applyAsInt", "(II)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$sum$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$sum$3",
	"java.lang.Object",
	"java.util.function.IntBinaryOperator",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$sum$3::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$sum$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$sum$3::class$ = nullptr;

class IntPipeline$$Lambda$min$4 : public $IntBinaryOperator {
	$class(IntPipeline$$Lambda$min$4, $NO_CLASS_INIT, $IntBinaryOperator)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(int32_t a, int32_t b) override {
		 return $Math::min(a, b);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$min$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$min$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$min$4::*)()>(&IntPipeline$$Lambda$min$4::init$))},
	{"applyAsInt", "(II)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$min$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$min$4",
	"java.lang.Object",
	"java.util.function.IntBinaryOperator",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$min$4::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$min$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$min$4::class$ = nullptr;

class IntPipeline$$Lambda$max$5 : public $IntBinaryOperator {
	$class(IntPipeline$$Lambda$max$5, $NO_CLASS_INIT, $IntBinaryOperator)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(int32_t a, int32_t b) override {
		 return $Math::max(a, b);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$max$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$max$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$max$5::*)()>(&IntPipeline$$Lambda$max$5::init$))},
	{"applyAsInt", "(II)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$max$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$max$5",
	"java.lang.Object",
	"java.util.function.IntBinaryOperator",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$max$5::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$max$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$max$5::class$ = nullptr;

class IntPipeline$$Lambda$lambda$average$1$6 : public $Supplier {
	$class(IntPipeline$$Lambda$lambda$average$1$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(IntPipeline::lambda$average$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$lambda$average$1$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$lambda$average$1$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$lambda$average$1$6::*)()>(&IntPipeline$$Lambda$lambda$average$1$6::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$lambda$average$1$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$lambda$average$1$6",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$lambda$average$1$6::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$lambda$average$1$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$lambda$average$1$6::class$ = nullptr;

class IntPipeline$$Lambda$lambda$average$2$7 : public $ObjIntConsumer {
	$class(IntPipeline$$Lambda$lambda$average$2$7, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* ll, int32_t i) override {
		IntPipeline::lambda$average$2($cast($longs, ll), i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$lambda$average$2$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$lambda$average$2$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$lambda$average$2$7::*)()>(&IntPipeline$$Lambda$lambda$average$2$7::init$))},
	{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$lambda$average$2$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$lambda$average$2$7",
	"java.lang.Object",
	"java.util.function.ObjIntConsumer",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$lambda$average$2$7::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$lambda$average$2$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$lambda$average$2$7::class$ = nullptr;

class IntPipeline$$Lambda$lambda$average$3$8 : public $BiConsumer {
	$class(IntPipeline$$Lambda$lambda$average$3$8, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* ll, Object$* rr) override {
		IntPipeline::lambda$average$3($cast($longs, ll), $cast($longs, rr));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$lambda$average$3$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$lambda$average$3$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$lambda$average$3$8::*)()>(&IntPipeline$$Lambda$lambda$average$3$8::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$lambda$average$3$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$lambda$average$3$8",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$lambda$average$3$8::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$lambda$average$3$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$lambda$average$3$8::class$ = nullptr;

class IntPipeline$$Lambda$IntSummaryStatistics$9 : public $Supplier {
	$class(IntPipeline$$Lambda$IntSummaryStatistics$9, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($IntSummaryStatistics));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$IntSummaryStatistics$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$IntSummaryStatistics$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$IntSummaryStatistics$9::*)()>(&IntPipeline$$Lambda$IntSummaryStatistics$9::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$IntSummaryStatistics$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$IntSummaryStatistics$9",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$IntSummaryStatistics$9::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$IntSummaryStatistics$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$IntSummaryStatistics$9::class$ = nullptr;

class IntPipeline$$Lambda$accept$10 : public $ObjIntConsumer {
	$class(IntPipeline$$Lambda$accept$10, $NO_CLASS_INIT, $ObjIntConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, int32_t value) override {
		$sure($IntSummaryStatistics, inst$)->accept(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$accept$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$accept$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$accept$10::*)()>(&IntPipeline$$Lambda$accept$10::init$))},
	{"accept", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$accept$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$accept$10",
	"java.lang.Object",
	"java.util.function.ObjIntConsumer",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$accept$10::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$accept$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$accept$10::class$ = nullptr;

class IntPipeline$$Lambda$combine$11 : public $BiConsumer {
	$class(IntPipeline$$Lambda$combine$11, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* other) override {
		$sure($IntSummaryStatistics, inst$)->combine($cast($IntSummaryStatistics, other));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$combine$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$combine$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$combine$11::*)()>(&IntPipeline$$Lambda$combine$11::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$combine$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$combine$11",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$combine$11::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$combine$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$combine$11::class$ = nullptr;

class IntPipeline$$Lambda$lambda$collect$4$12 : public $BinaryOperator {
	$class(IntPipeline$$Lambda$lambda$collect$4$12, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$($BiConsumer* combiner) {
		$set(this, combiner, combiner);
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return IntPipeline::lambda$collect$4(combiner, left, right);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$lambda$collect$4$12>());
	}
	$BiConsumer* combiner = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IntPipeline$$Lambda$lambda$collect$4$12::fieldInfos[2] = {
	{"combiner", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(IntPipeline$$Lambda$lambda$collect$4$12, combiner)},
	{}
};
$MethodInfo IntPipeline$$Lambda$lambda$collect$4$12::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$lambda$collect$4$12::*)($BiConsumer*)>(&IntPipeline$$Lambda$lambda$collect$4$12::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$lambda$collect$4$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$lambda$collect$4$12",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	fieldInfos,
	methodInfos
};
$Class* IntPipeline$$Lambda$lambda$collect$4$12::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$lambda$collect$4$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$lambda$collect$4$12::class$ = nullptr;

class IntPipeline$$Lambda$lambda$toArray$5$13 : public $IntFunction {
	$class(IntPipeline$$Lambda$lambda$toArray$5$13, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(IntPipeline::lambda$toArray$5(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IntPipeline$$Lambda$lambda$toArray$5$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo IntPipeline$$Lambda$lambda$toArray$5$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntPipeline$$Lambda$lambda$toArray$5$13::*)()>(&IntPipeline$$Lambda$lambda$toArray$5$13::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo IntPipeline$$Lambda$lambda$toArray$5$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.IntPipeline$$Lambda$lambda$toArray$5$13",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* IntPipeline$$Lambda$lambda$toArray$5$13::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$$Lambda$lambda$toArray$5$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IntPipeline$$Lambda$lambda$toArray$5$13::class$ = nullptr;

$MethodInfo _IntPipeline_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/Supplier;IZ)V", "(Ljava/util/function/Supplier<+Ljava/util/Spliterator<Ljava/lang/Integer;>;>;IZ)V", 0, $method(static_cast<void(IntPipeline::*)($Supplier*,int32_t,bool)>(&IntPipeline::init$))},
	{"<init>", "(Ljava/util/Spliterator;IZ)V", "(Ljava/util/Spliterator<Ljava/lang/Integer;>;IZ)V", 0, $method(static_cast<void(IntPipeline::*)($Spliterator*,int32_t,bool)>(&IntPipeline::init$))},
	{"<init>", "(Ljava/util/stream/AbstractPipeline;I)V", "(Ljava/util/stream/AbstractPipeline<*TE_IN;*>;I)V", 0, $method(static_cast<void(IntPipeline::*)($AbstractPipeline*,int32_t)>(&IntPipeline::init$))},
	{"adapt", "(Ljava/util/stream/Sink;)Ljava/util/function/IntConsumer;", "(Ljava/util/stream/Sink<Ljava/lang/Integer;>;)Ljava/util/function/IntConsumer;", $PRIVATE | $STATIC, $method(static_cast<$IntConsumer*(*)($Sink*)>(&IntPipeline::adapt))},
	{"adapt", "(Ljava/util/Spliterator;)Ljava/util/Spliterator$OfInt;", "(Ljava/util/Spliterator<Ljava/lang/Integer;>;)Ljava/util/Spliterator$OfInt;", $PRIVATE | $STATIC, $method(static_cast<$Spliterator$OfInt*(*)($Spliterator*)>(&IntPipeline::adapt))},
	{"allMatch", "(Ljava/util/function/IntPredicate;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(IntPipeline::*)($IntPredicate*)>(&IntPipeline::allMatch))},
	{"anyMatch", "(Ljava/util/function/IntPredicate;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(IntPipeline::*)($IntPredicate*)>(&IntPipeline::anyMatch))},
	{"asDoubleStream", "()Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$DoubleStream*(IntPipeline::*)()>(&IntPipeline::asDoubleStream))},
	{"asLongStream", "()Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$LongStream*(IntPipeline::*)()>(&IntPipeline::asLongStream))},
	{"average", "()Ljava/util/OptionalDouble;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$OptionalDouble*(IntPipeline::*)()>(&IntPipeline::average))},
	{"boxed", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/Integer;>;", $PUBLIC | $FINAL, $method(static_cast<$Stream*(IntPipeline::*)()>(&IntPipeline::boxed))},
	{"collect", "(Ljava/util/function/Supplier;Ljava/util/function/ObjIntConsumer;Ljava/util/function/BiConsumer;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/util/function/Supplier<TR;>;Ljava/util/function/ObjIntConsumer<TR;>;Ljava/util/function/BiConsumer<TR;TR;>;)TR;", $PUBLIC | $FINAL, $method(static_cast<$Object*(IntPipeline::*)($Supplier*,$ObjIntConsumer*,$BiConsumer*)>(&IntPipeline::collect))},
	{"count", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(IntPipeline::*)()>(&IntPipeline::count))},
	{"distinct", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)()>(&IntPipeline::distinct))},
	{"dropWhile", "(Ljava/util/function/IntPredicate;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)($IntPredicate*)>(&IntPipeline::dropWhile))},
	{"evaluateToNode", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;ZLjava/util/function/IntFunction;)Ljava/util/stream/Node;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<Ljava/lang/Integer;>;Ljava/util/Spliterator<TP_IN;>;ZLjava/util/function/IntFunction<[Ljava/lang/Integer;>;)Ljava/util/stream/Node<Ljava/lang/Integer;>;", $FINAL},
	{"filter", "(Ljava/util/function/IntPredicate;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)($IntPredicate*)>(&IntPipeline::filter))},
	{"findAny", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$OptionalInt*(IntPipeline::*)()>(&IntPipeline::findAny))},
	{"findFirst", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$OptionalInt*(IntPipeline::*)()>(&IntPipeline::findFirst))},
	{"flatMap", "(Ljava/util/function/IntFunction;)Ljava/util/stream/IntStream;", "(Ljava/util/function/IntFunction<+Ljava/util/stream/IntStream;>;)Ljava/util/stream/IntStream;", $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)($IntFunction*)>(&IntPipeline::flatMap))},
	{"forEach", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachOrdered", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachWithCancel", "(Ljava/util/Spliterator;Ljava/util/stream/Sink;)Z", "(Ljava/util/Spliterator<Ljava/lang/Integer;>;Ljava/util/stream/Sink<Ljava/lang/Integer;>;)Z", $FINAL},
	{"getOutputShape", "()Ljava/util/stream/StreamShape;", nullptr, $FINAL},
	{"*isParallel", "()Z", nullptr, $PUBLIC | $FINAL},
	{"iterator", "()Ljava/util/PrimitiveIterator$OfInt;", nullptr, $PUBLIC | $FINAL},
	{"lambda$average$1", "()[J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$longs*(*)()>(&IntPipeline::lambda$average$1))},
	{"lambda$average$2", "([JI)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($longs*,int32_t)>(&IntPipeline::lambda$average$2))},
	{"lambda$average$3", "([J[J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($longs*,$longs*)>(&IntPipeline::lambda$average$3))},
	{"lambda$collect$4", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($BiConsumer*,Object$*,Object$*)>(&IntPipeline::lambda$collect$4))},
	{"lambda$distinct$0", "(Ljava/lang/Integer;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Integer*)>(&IntPipeline::lambda$distinct$0))},
	{"lambda$toArray$5", "(I)[Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$IntegerArray*(*)(int32_t)>(&IntPipeline::lambda$toArray$5))},
	{"lazySpliterator", "(Ljava/util/function/Supplier;)Ljava/util/Spliterator$OfInt;", "(Ljava/util/function/Supplier<+Ljava/util/Spliterator<Ljava/lang/Integer;>;>;)Ljava/util/Spliterator$OfInt;", $FINAL},
	{"limit", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)(int64_t)>(&IntPipeline::limit))},
	{"makeNodeBuilder", "(JLjava/util/function/IntFunction;)Ljava/util/stream/Node$Builder;", "(JLjava/util/function/IntFunction<[Ljava/lang/Integer;>;)Ljava/util/stream/Node$Builder<Ljava/lang/Integer;>;", $FINAL},
	{"map", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)($IntUnaryOperator*)>(&IntPipeline::map))},
	{"mapMulti", "(Ljava/util/stream/IntStream$IntMapMultiConsumer;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)($IntStream$IntMapMultiConsumer*)>(&IntPipeline::mapMulti))},
	{"mapToDouble", "(Ljava/util/function/IntToDoubleFunction;)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$DoubleStream*(IntPipeline::*)($IntToDoubleFunction*)>(&IntPipeline::mapToDouble))},
	{"mapToLong", "(Ljava/util/function/IntToLongFunction;)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$LongStream*(IntPipeline::*)($IntToLongFunction*)>(&IntPipeline::mapToLong))},
	{"mapToObj", "(Ljava/util/function/IntFunction;I)Ljava/util/stream/Stream;", "<U:Ljava/lang/Object;>(Ljava/util/function/IntFunction<+TU;>;I)Ljava/util/stream/Stream<TU;>;", $PRIVATE, $method(static_cast<$Stream*(IntPipeline::*)($IntFunction*,int32_t)>(&IntPipeline::mapToObj))},
	{"mapToObj", "(Ljava/util/function/IntFunction;)Ljava/util/stream/Stream;", "<U:Ljava/lang/Object;>(Ljava/util/function/IntFunction<+TU;>;)Ljava/util/stream/Stream<TU;>;", $PUBLIC | $FINAL, $method(static_cast<$Stream*(IntPipeline::*)($IntFunction*)>(&IntPipeline::mapToObj))},
	{"max", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$OptionalInt*(IntPipeline::*)()>(&IntPipeline::max))},
	{"min", "()Ljava/util/OptionalInt;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$OptionalInt*(IntPipeline::*)()>(&IntPipeline::min))},
	{"noneMatch", "(Ljava/util/function/IntPredicate;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(IntPipeline::*)($IntPredicate*)>(&IntPipeline::noneMatch))},
	{"*onClose", "(Ljava/lang/Runnable;)Ljava/util/stream/BaseStream;", nullptr, $PUBLIC},
	{"parallel", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"peek", "(Ljava/util/function/IntConsumer;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)($IntConsumer*)>(&IntPipeline::peek))},
	{"reduce", "(ILjava/util/function/IntBinaryOperator;)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(IntPipeline::*)(int32_t,$IntBinaryOperator*)>(&IntPipeline::reduce))},
	{"reduce", "(Ljava/util/function/IntBinaryOperator;)Ljava/util/OptionalInt;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$OptionalInt*(IntPipeline::*)($IntBinaryOperator*)>(&IntPipeline::reduce))},
	{"sequential", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"skip", "(J)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)(int64_t)>(&IntPipeline::skip))},
	{"sorted", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)()>(&IntPipeline::sorted))},
	{"spliterator", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $FINAL},
	{"sum", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(IntPipeline::*)()>(&IntPipeline::sum))},
	{"summaryStatistics", "()Ljava/util/IntSummaryStatistics;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntSummaryStatistics*(IntPipeline::*)()>(&IntPipeline::summaryStatistics))},
	{"takeWhile", "(Ljava/util/function/IntPredicate;)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IntStream*(IntPipeline::*)($IntPredicate*)>(&IntPipeline::takeWhile))},
	{"toArray", "()[I", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ints*(IntPipeline::*)()>(&IntPipeline::toArray))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unordered", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"wrap", "(Ljava/util/stream/PipelineHelper;Ljava/util/function/Supplier;Z)Ljava/util/Spliterator;", "<P_IN:Ljava/lang/Object;>(Ljava/util/stream/PipelineHelper<Ljava/lang/Integer;>;Ljava/util/function/Supplier<Ljava/util/Spliterator<TP_IN;>;>;Z)Ljava/util/Spliterator<Ljava/lang/Integer;>;", $FINAL},
	{}
};

$InnerClassInfo _IntPipeline_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$StatefulOp", "java.util.stream.IntPipeline", "StatefulOp", $STATIC | $ABSTRACT},
	{"java.util.stream.IntPipeline$StatelessOp", "java.util.stream.IntPipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{"java.util.stream.IntPipeline$Head", "java.util.stream.IntPipeline", "Head", $STATIC},
	{"java.util.stream.IntPipeline$11", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$10", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$9", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$8", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$7", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$6", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$5", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$4", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$3", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$2", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IntPipeline_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.IntPipeline",
	"java.util.stream.AbstractPipeline",
	"java.util.stream.IntStream",
	nullptr,
	_IntPipeline_MethodInfo_,
	"<E_IN:Ljava/lang/Object;>Ljava/util/stream/AbstractPipeline<TE_IN;Ljava/lang/Integer;Ljava/util/stream/IntStream;>;Ljava/util/stream/IntStream;",
	nullptr,
	_IntPipeline_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline$StatefulOp,java.util.stream.IntPipeline$StatelessOp,java.util.stream.IntPipeline$Head,java.util.stream.IntPipeline$11,java.util.stream.IntPipeline$11$1,java.util.stream.IntPipeline$10,java.util.stream.IntPipeline$10$1,java.util.stream.IntPipeline$9,java.util.stream.IntPipeline$8,java.util.stream.IntPipeline$8$1,java.util.stream.IntPipeline$7,java.util.stream.IntPipeline$7$1,java.util.stream.IntPipeline$6,java.util.stream.IntPipeline$6$1,java.util.stream.IntPipeline$5,java.util.stream.IntPipeline$5$1,java.util.stream.IntPipeline$4,java.util.stream.IntPipeline$4$1,java.util.stream.IntPipeline$3,java.util.stream.IntPipeline$3$1,java.util.stream.IntPipeline$2,java.util.stream.IntPipeline$2$1,java.util.stream.IntPipeline$1,java.util.stream.IntPipeline$1$1"
};

$Object* allocate$IntPipeline($Class* clazz) {
	return $of($alloc(IntPipeline));
}

void IntPipeline::close() {
	this->$AbstractPipeline::close();
}

$BaseStream* IntPipeline::onClose($Runnable* closeHandler) {
	 return this->$AbstractPipeline::onClose(closeHandler);
}

bool IntPipeline::isParallel() {
	 return this->$AbstractPipeline::isParallel();
}

int32_t IntPipeline::hashCode() {
	 return this->$AbstractPipeline::hashCode();
}

bool IntPipeline::equals(Object$* obj) {
	 return this->$AbstractPipeline::equals(obj);
}

$Object* IntPipeline::clone() {
	 return this->$AbstractPipeline::clone();
}

$String* IntPipeline::toString() {
	 return this->$AbstractPipeline::toString();
}

void IntPipeline::finalize() {
	this->$AbstractPipeline::finalize();
}

IntPipeline::MemberClass0$::MemberClass0$() {
	$patchMemberClass(IntPipeline, $IntStream, memberClass0$);
}

$IntStream* IntPipeline::MemberClass0$::filter($IntPredicate* predicate) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->filter(predicate);
}

$IntStream* IntPipeline::MemberClass0$::map($IntUnaryOperator* mapper) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->map(mapper);
}

$Stream* IntPipeline::MemberClass0$::mapToObj($IntFunction* mapper) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->mapToObj(mapper);
}

$LongStream* IntPipeline::MemberClass0$::mapToLong($IntToLongFunction* mapper) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->mapToLong(mapper);
}

$DoubleStream* IntPipeline::MemberClass0$::mapToDouble($IntToDoubleFunction* mapper) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->mapToDouble(mapper);
}

$IntStream* IntPipeline::MemberClass0$::flatMap($IntFunction* mapper) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->flatMap(mapper);
}

$IntStream* IntPipeline::MemberClass0$::mapMulti($IntStream$IntMapMultiConsumer* mapper) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->mapMulti(mapper);
}

$IntStream* IntPipeline::MemberClass0$::distinct() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->distinct();
}

$IntStream* IntPipeline::MemberClass0$::sorted() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->sorted();
}

$IntStream* IntPipeline::MemberClass0$::peek($IntConsumer* action) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->peek(action);
}

$IntStream* IntPipeline::MemberClass0$::limit(int64_t maxSize) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->limit(maxSize);
}

$IntStream* IntPipeline::MemberClass0$::skip(int64_t n) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->skip(n);
}

$IntStream* IntPipeline::MemberClass0$::takeWhile($IntPredicate* predicate) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->takeWhile(predicate);
}

$IntStream* IntPipeline::MemberClass0$::dropWhile($IntPredicate* predicate) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->dropWhile(predicate);
}

void IntPipeline::MemberClass0$::forEach($IntConsumer* action) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->forEach(action);
}

void IntPipeline::MemberClass0$::forEachOrdered($IntConsumer* action) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->forEachOrdered(action);
}

$ints* IntPipeline::MemberClass0$::toArray() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->toArray();
}

int32_t IntPipeline::MemberClass0$::reduce(int32_t identity, $IntBinaryOperator* op) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->reduce(identity, op);
}

$OptionalInt* IntPipeline::MemberClass0$::reduce($IntBinaryOperator* op) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->reduce(op);
}

$Object* IntPipeline::MemberClass0$::collect($Supplier* supplier, $ObjIntConsumer* accumulator, $BiConsumer* combiner) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->collect(supplier, accumulator, combiner);
}

int32_t IntPipeline::MemberClass0$::sum() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->sum();
}

$OptionalInt* IntPipeline::MemberClass0$::min() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->min();
}

$OptionalInt* IntPipeline::MemberClass0$::max() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->max();
}

int64_t IntPipeline::MemberClass0$::count() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->count();
}

$OptionalDouble* IntPipeline::MemberClass0$::average() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->average();
}

$IntSummaryStatistics* IntPipeline::MemberClass0$::summaryStatistics() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->summaryStatistics();
}

bool IntPipeline::MemberClass0$::anyMatch($IntPredicate* predicate) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->anyMatch(predicate);
}

bool IntPipeline::MemberClass0$::allMatch($IntPredicate* predicate) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->allMatch(predicate);
}

bool IntPipeline::MemberClass0$::noneMatch($IntPredicate* predicate) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->noneMatch(predicate);
}

$OptionalInt* IntPipeline::MemberClass0$::findFirst() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->findFirst();
}

$OptionalInt* IntPipeline::MemberClass0$::findAny() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->findAny();
}

$LongStream* IntPipeline::MemberClass0$::asLongStream() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->asLongStream();
}

$DoubleStream* IntPipeline::MemberClass0$::asDoubleStream() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->asDoubleStream();
}

$Stream* IntPipeline::MemberClass0$::boxed() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->boxed();
}

$IntStream* IntPipeline::MemberClass0$::sequential() {
	return $cast($IntStream, ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->sequential());
}

$IntStream* IntPipeline::MemberClass0$::parallel() {
	return $cast($IntStream, ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->parallel());
}

$Iterator* IntPipeline::MemberClass0$::iterator() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->iterator();
}

$Spliterator* IntPipeline::MemberClass0$::spliterator() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->spliterator();
}

bool IntPipeline::MemberClass0$::isParallel() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->isParallel();
}

$BaseStream* IntPipeline::MemberClass0$::unordered() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->unordered();
}

$BaseStream* IntPipeline::MemberClass0$::onClose($Runnable* closeHandler) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->onClose(closeHandler);
}

void IntPipeline::MemberClass0$::close() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->close();
}

int32_t IntPipeline::MemberClass0$::hashCode() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->hashCode();
}

bool IntPipeline::MemberClass0$::equals(Object$* obj) {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->equals(obj);
}

$Object* IntPipeline::MemberClass0$::clone() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->clone();
}

$String* IntPipeline::MemberClass0$::toString() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->toString();
}

void IntPipeline::MemberClass0$::finalize() {
	return ((IntPipeline*)(void*)((int8_t*)(void*)this - $offsetof(IntPipeline, memberClass0$)))->finalize();
}

void IntPipeline::init$($Supplier* source, int32_t sourceFlags, bool parallel) {
	$AbstractPipeline::init$(source, sourceFlags, parallel);
}

void IntPipeline::init$($Spliterator* source, int32_t sourceFlags, bool parallel) {
	$AbstractPipeline::init$(source, sourceFlags, parallel);
}

void IntPipeline::init$($AbstractPipeline* upstream, int32_t opFlags) {
	$AbstractPipeline::init$(upstream, opFlags);
}

$IntConsumer* IntPipeline::adapt($Sink* sink) {
	$init(IntPipeline);
	if ($instanceOf($IntConsumer, sink)) {
		return $cast($IntConsumer, sink);
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$load($AbstractPipeline);
			$Tripwire::trip($AbstractPipeline::class$, "using IntStream.adapt(Sink<Integer> s)"_s);
		}
		return static_cast<$IntConsumer*>($new(IntPipeline$$Lambda$accept, static_cast<$Sink*>($nc(sink))));
	}
}

$Spliterator$OfInt* IntPipeline::adapt($Spliterator* s) {
	$init(IntPipeline);
	if ($instanceOf($Spliterator$OfInt, s)) {
		return $cast($Spliterator$OfInt, s);
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$load($AbstractPipeline);
			$Tripwire::trip($AbstractPipeline::class$, "using IntStream.adapt(Spliterator<Integer> s)"_s);
		}
		$throwNew($UnsupportedOperationException, "IntStream.adapt(Spliterator<Integer> s)"_s);
	}
}

$StreamShape* IntPipeline::getOutputShape() {
	$init($StreamShape);
	return $StreamShape::INT_VALUE;
}

$Node* IntPipeline::evaluateToNode($PipelineHelper* helper, $Spliterator* spliterator, bool flattenTree, $IntFunction* generator) {
	return $Nodes::collectInt(helper, spliterator, flattenTree);
}

$Spliterator* IntPipeline::wrap($PipelineHelper* ph, $Supplier* supplier, bool isParallel) {
	return static_cast<$Spliterator*>(static_cast<$StreamSpliterators$AbstractWrappingSpliterator*>($new($StreamSpliterators$IntWrappingSpliterator, ph, supplier, isParallel)));
}

$Spliterator* IntPipeline::lazySpliterator($Supplier* supplier) {
	return static_cast<$Spliterator*>(static_cast<$StreamSpliterators$DelegatingSpliterator*>(static_cast<$StreamSpliterators$DelegatingSpliterator$OfPrimitive*>($new($StreamSpliterators$DelegatingSpliterator$OfInt, supplier))));
}

bool IntPipeline::forEachWithCancel($Spliterator* spliterator, $Sink* sink) {
	$useLocalCurrentObjectStackCache();
	$var($Spliterator$OfInt, spl, adapt(spliterator));
	$var($IntConsumer, adaptedSink, adapt(sink));
	bool cancelled = false;
	bool var$0 = false;
	do {
		var$0 = !(cancelled = $nc(sink)->cancellationRequested());
	} while (var$0 && $nc(spl)->tryAdvance(adaptedSink));
	return cancelled;
}

$Node$Builder* IntPipeline::makeNodeBuilder(int64_t exactSizeIfKnown, $IntFunction* generator) {
	return $Nodes::intBuilder(exactSizeIfKnown);
}

$Stream* IntPipeline::mapToObj($IntFunction* mapper, int32_t opFlags) {
	$init($StreamShape);
	return $new($IntPipeline$1, this, this, $StreamShape::INT_VALUE, opFlags, mapper);
}

$Iterator* IntPipeline::iterator() {
	return $Spliterators::iterator($($cast($Spliterator$OfInt, spliterator())));
}

$Spliterator* IntPipeline::spliterator() {
	return adapt($($AbstractPipeline::spliterator()));
}

$LongStream* IntPipeline::asLongStream() {
	$init($StreamShape);
	return $as($LongStream, $new($IntPipeline$2, this, this, $StreamShape::INT_VALUE, 0));
}

$DoubleStream* IntPipeline::asDoubleStream() {
	$init($StreamShape);
	return $as($DoubleStream, $new($IntPipeline$3, this, this, $StreamShape::INT_VALUE, 0));
}

$Stream* IntPipeline::boxed() {
	return mapToObj(static_cast<$IntFunction*>($$new(IntPipeline$$Lambda$valueOf$1)), 0);
}

$IntStream* IntPipeline::map($IntUnaryOperator* mapper) {
	$Objects::requireNonNull(mapper);
	$init($StreamShape);
	$init($StreamOpFlag);
	return $as($IntStream, $new($IntPipeline$4, this, this, $StreamShape::INT_VALUE, $StreamOpFlag::NOT_SORTED | $StreamOpFlag::NOT_DISTINCT, mapper));
}

$Stream* IntPipeline::mapToObj($IntFunction* mapper) {
	$Objects::requireNonNull(mapper);
	$init($StreamOpFlag);
	return mapToObj(mapper, $StreamOpFlag::NOT_SORTED | $StreamOpFlag::NOT_DISTINCT);
}

$LongStream* IntPipeline::mapToLong($IntToLongFunction* mapper) {
	$Objects::requireNonNull(mapper);
	$init($StreamShape);
	$init($StreamOpFlag);
	return $as($LongStream, $new($IntPipeline$5, this, this, $StreamShape::INT_VALUE, $StreamOpFlag::NOT_SORTED | $StreamOpFlag::NOT_DISTINCT, mapper));
}

$DoubleStream* IntPipeline::mapToDouble($IntToDoubleFunction* mapper) {
	$Objects::requireNonNull(mapper);
	$init($StreamShape);
	$init($StreamOpFlag);
	return $as($DoubleStream, $new($IntPipeline$6, this, this, $StreamShape::INT_VALUE, $StreamOpFlag::NOT_SORTED | $StreamOpFlag::NOT_DISTINCT, mapper));
}

$IntStream* IntPipeline::flatMap($IntFunction* mapper) {
	$Objects::requireNonNull(mapper);
	$init($StreamShape);
	$init($StreamOpFlag);
	return $as($IntStream, $new($IntPipeline$7, this, this, $StreamShape::INT_VALUE, ($StreamOpFlag::NOT_SORTED | $StreamOpFlag::NOT_DISTINCT) | $StreamOpFlag::NOT_SIZED, mapper));
}

$IntStream* IntPipeline::mapMulti($IntStream$IntMapMultiConsumer* mapper) {
	$Objects::requireNonNull(mapper);
	$init($StreamShape);
	$init($StreamOpFlag);
	return $as($IntStream, $new($IntPipeline$8, this, this, $StreamShape::INT_VALUE, ($StreamOpFlag::NOT_SORTED | $StreamOpFlag::NOT_DISTINCT) | $StreamOpFlag::NOT_SIZED, mapper));
}

$BaseStream* IntPipeline::unordered() {
	if (!isOrdered()) {
		return static_cast<$BaseStream*>(static_cast<$AbstractPipeline*>(this));
	}
	$init($StreamShape);
	$init($StreamOpFlag);
	return static_cast<$BaseStream*>(static_cast<$AbstractPipeline*>(static_cast<IntPipeline*>(static_cast<$IntPipeline$StatelessOp*>($new($IntPipeline$9, this, this, $StreamShape::INT_VALUE, $StreamOpFlag::NOT_ORDERED)))));
}

$IntStream* IntPipeline::filter($IntPredicate* predicate) {
	$Objects::requireNonNull(predicate);
	$init($StreamShape);
	$init($StreamOpFlag);
	return $as($IntStream, $new($IntPipeline$10, this, this, $StreamShape::INT_VALUE, $StreamOpFlag::NOT_SIZED, predicate));
}

$IntStream* IntPipeline::peek($IntConsumer* action) {
	$Objects::requireNonNull(action);
	$init($StreamShape);
	return $as($IntStream, $new($IntPipeline$11, this, this, $StreamShape::INT_VALUE, 0, action));
}

$IntStream* IntPipeline::limit(int64_t maxSize) {
	if (maxSize < 0) {
		$throwNew($IllegalArgumentException, $($Long::toString(maxSize)));
	}
	return $SliceOps::makeInt(this, 0, maxSize);
}

$IntStream* IntPipeline::skip(int64_t n) {
	if (n < 0) {
		$throwNew($IllegalArgumentException, $($Long::toString(n)));
	}
	if (n == 0) {
		return $as($IntStream, this);
	} else {
		return $SliceOps::makeInt(this, n, -1);
	}
}

$IntStream* IntPipeline::takeWhile($IntPredicate* predicate) {
	return $WhileOps::makeTakeWhileInt(this, predicate);
}

$IntStream* IntPipeline::dropWhile($IntPredicate* predicate) {
	return $WhileOps::makeDropWhileInt(this, predicate);
}

$IntStream* IntPipeline::sorted() {
	return $SortedOps::makeInt(this);
}

$IntStream* IntPipeline::distinct() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(boxed()))->distinct()))->mapToInt(static_cast<$ToIntFunction*>($$new(IntPipeline$$Lambda$lambda$distinct$0$2)));
}

void IntPipeline::forEach($IntConsumer* action) {
	evaluate($($ForEachOps::makeInt(action, false)));
}

void IntPipeline::forEachOrdered($IntConsumer* action) {
	evaluate($($ForEachOps::makeInt(action, true)));
}

int32_t IntPipeline::sum() {
	return reduce(0, static_cast<$IntBinaryOperator*>($$new(IntPipeline$$Lambda$sum$3)));
}

$OptionalInt* IntPipeline::min() {
	return reduce(static_cast<$IntBinaryOperator*>($$new(IntPipeline$$Lambda$min$4)));
}

$OptionalInt* IntPipeline::max() {
	return reduce(static_cast<$IntBinaryOperator*>($$new(IntPipeline$$Lambda$max$5)));
}

int64_t IntPipeline::count() {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($Long, $(evaluate($($ReduceOps::makeIntCounting()))))))->longValue();
}

$OptionalDouble* IntPipeline::average() {
	$useLocalCurrentObjectStackCache();
	$var($Supplier, var$0, static_cast<$Supplier*>($new(IntPipeline$$Lambda$lambda$average$1$6)));
	$var($ObjIntConsumer, var$1, static_cast<$ObjIntConsumer*>($new(IntPipeline$$Lambda$lambda$average$2$7)));
	$var($longs, avg, $cast($longs, collect(var$0, var$1, static_cast<$BiConsumer*>($$new(IntPipeline$$Lambda$lambda$average$3$8)))));
	return $nc(avg)->get(0) > 0 ? $OptionalDouble::of((double)$nc(avg)->get(1) / avg->get(0)) : $OptionalDouble::empty();
}

$IntSummaryStatistics* IntPipeline::summaryStatistics() {
	$useLocalCurrentObjectStackCache();
	$var($Supplier, var$0, static_cast<$Supplier*>($new(IntPipeline$$Lambda$IntSummaryStatistics$9)));
	$var($ObjIntConsumer, var$1, static_cast<$ObjIntConsumer*>($new(IntPipeline$$Lambda$accept$10)));
	return $cast($IntSummaryStatistics, collect(var$0, var$1, static_cast<$BiConsumer*>($$new(IntPipeline$$Lambda$combine$11))));
}

int32_t IntPipeline::reduce(int32_t identity, $IntBinaryOperator* op) {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($Integer, $(evaluate($($ReduceOps::makeInt(identity, op)))))))->intValue();
}

$OptionalInt* IntPipeline::reduce($IntBinaryOperator* op) {
	return $cast($OptionalInt, evaluate($($ReduceOps::makeInt(op))));
}

$Object* IntPipeline::collect($Supplier* supplier, $ObjIntConsumer* accumulator, $BiConsumer* combiner) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(combiner);
	$var($BinaryOperator, operator$, static_cast<$BinaryOperator*>($new(IntPipeline$$Lambda$lambda$collect$4$12, combiner)));
	return $of(evaluate($($ReduceOps::makeInt(supplier, accumulator, operator$))));
}

bool IntPipeline::anyMatch($IntPredicate* predicate) {
	$useLocalCurrentObjectStackCache();
	$init($MatchOps$MatchKind);
	return $nc(($cast($Boolean, $(evaluate($($MatchOps::makeInt(predicate, $MatchOps$MatchKind::ANY)))))))->booleanValue();
}

bool IntPipeline::allMatch($IntPredicate* predicate) {
	$useLocalCurrentObjectStackCache();
	$init($MatchOps$MatchKind);
	return $nc(($cast($Boolean, $(evaluate($($MatchOps::makeInt(predicate, $MatchOps$MatchKind::ALL)))))))->booleanValue();
}

bool IntPipeline::noneMatch($IntPredicate* predicate) {
	$useLocalCurrentObjectStackCache();
	$init($MatchOps$MatchKind);
	return $nc(($cast($Boolean, $(evaluate($($MatchOps::makeInt(predicate, $MatchOps$MatchKind::NONE)))))))->booleanValue();
}

$OptionalInt* IntPipeline::findFirst() {
	return $cast($OptionalInt, evaluate($($FindOps::makeInt(true))));
}

$OptionalInt* IntPipeline::findAny() {
	return $cast($OptionalInt, evaluate($($FindOps::makeInt(false))));
}

$ints* IntPipeline::toArray() {
	$useLocalCurrentObjectStackCache();
	return $cast($ints, $nc($($Nodes::flattenInt($cast($Node$OfInt, $(evaluateToArrayNode(static_cast<$IntFunction*>($$new(IntPipeline$$Lambda$lambda$toArray$5$13))))))))->asPrimitiveArray());
}

$BaseStream* IntPipeline::parallel() {
	return $cast($IntStream, $AbstractPipeline::parallel());
}

$BaseStream* IntPipeline::sequential() {
	return $cast($IntStream, $AbstractPipeline::sequential());
}

$IntegerArray* IntPipeline::lambda$toArray$5(int32_t x$0) {
	$init(IntPipeline);
	return $new($IntegerArray, x$0);
}

$Object* IntPipeline::lambda$collect$4($BiConsumer* combiner, Object$* left, Object$* right) {
	$init(IntPipeline);
	$nc(combiner)->accept(left, right);
	return $of(left);
}

void IntPipeline::lambda$average$3($longs* ll, $longs* rr) {
	$init(IntPipeline);
	(*$nc(ll))[0] += $nc(rr)->get(0);
	(*ll)[1] += rr->get(1);
}

void IntPipeline::lambda$average$2($longs* ll, int32_t i) {
	$init(IntPipeline);
	++(*$nc(ll))[0];
	(*ll)[1] += i;
}

$longs* IntPipeline::lambda$average$1() {
	$init(IntPipeline);
	return $new($longs, 2);
}

int32_t IntPipeline::lambda$distinct$0($Integer* i) {
	$init(IntPipeline);
	return $nc(i)->intValue();
}

IntPipeline::IntPipeline() {
}

$Class* IntPipeline::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IntPipeline$$Lambda$accept::classInfo$.name)) {
			return IntPipeline$$Lambda$accept::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$valueOf$1::classInfo$.name)) {
			return IntPipeline$$Lambda$valueOf$1::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$lambda$distinct$0$2::classInfo$.name)) {
			return IntPipeline$$Lambda$lambda$distinct$0$2::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$sum$3::classInfo$.name)) {
			return IntPipeline$$Lambda$sum$3::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$min$4::classInfo$.name)) {
			return IntPipeline$$Lambda$min$4::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$max$5::classInfo$.name)) {
			return IntPipeline$$Lambda$max$5::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$lambda$average$1$6::classInfo$.name)) {
			return IntPipeline$$Lambda$lambda$average$1$6::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$lambda$average$2$7::classInfo$.name)) {
			return IntPipeline$$Lambda$lambda$average$2$7::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$lambda$average$3$8::classInfo$.name)) {
			return IntPipeline$$Lambda$lambda$average$3$8::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$IntSummaryStatistics$9::classInfo$.name)) {
			return IntPipeline$$Lambda$IntSummaryStatistics$9::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$accept$10::classInfo$.name)) {
			return IntPipeline$$Lambda$accept$10::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$combine$11::classInfo$.name)) {
			return IntPipeline$$Lambda$combine$11::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$lambda$collect$4$12::classInfo$.name)) {
			return IntPipeline$$Lambda$lambda$collect$4$12::load$(name, initialize);
		}
		if (name->equals(IntPipeline$$Lambda$lambda$toArray$5$13::classInfo$.name)) {
			return IntPipeline$$Lambda$lambda$toArray$5$13::load$(name, initialize);
		}
	}
	$loadClass(IntPipeline, name, initialize, &_IntPipeline_ClassInfo_, allocate$IntPipeline);
	return class$;
}

$Class* IntPipeline::class$ = nullptr;

		} // stream
	} // util
} // java