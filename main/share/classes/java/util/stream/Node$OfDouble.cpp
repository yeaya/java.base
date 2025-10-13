#include <java/util/stream/Node$OfDouble.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node$Builder$OfDouble.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef DOUBLE_VALUE
#undef ENABLED

using $DoubleArray = $Array<::java::lang::Double>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Node$Builder$OfDouble = ::java::util::stream::Node$Builder$OfDouble;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes = ::java::util::stream::Nodes;
using $Sink = ::java::util::stream::Sink;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;
using $StreamShape = ::java::util::stream::StreamShape;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

class Node$OfDouble$$Lambda$lambda$truncate$0 : public $DoubleConsumer {
	$class(Node$OfDouble$$Lambda$lambda$truncate$0, $NO_CLASS_INIT, $DoubleConsumer)
public:
	void init$() {
	}
	virtual void accept(double e) override {
		Node$OfDouble::lambda$truncate$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Node$OfDouble$$Lambda$lambda$truncate$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Node$OfDouble$$Lambda$lambda$truncate$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Node$OfDouble$$Lambda$lambda$truncate$0::*)()>(&Node$OfDouble$$Lambda$lambda$truncate$0::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Node$OfDouble$$Lambda$lambda$truncate$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Node$OfDouble$$Lambda$lambda$truncate$0",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	nullptr,
	methodInfos
};
$Class* Node$OfDouble$$Lambda$lambda$truncate$0::load$($String* name, bool initialize) {
	$loadClass(Node$OfDouble$$Lambda$lambda$truncate$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Node$OfDouble$$Lambda$lambda$truncate$0::class$ = nullptr;

$MethodInfo _Node$OfDouble_MethodInfo_[] = {
	{"copyInto", "([Ljava/lang/Double;I)V", nullptr, $PUBLIC},
	{"copyInto", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Double;>;)V", $PUBLIC},
	{"getShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC},
	{"lambda$truncate$0", "(D)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(double)>(&Node$OfDouble::lambda$truncate$0))},
	{"newArray", "(I)[D", nullptr, $PUBLIC},
	{"truncate", "(JJLjava/util/function/IntFunction;)Ljava/util/stream/Node$OfDouble;", "(JJLjava/util/function/IntFunction<[Ljava/lang/Double;>;)Ljava/util/stream/Node$OfDouble;", $PUBLIC},
	{}
};

$InnerClassInfo _Node$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Node$OfDouble", "java.util.stream.Node", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$OfPrimitive", "java.util.stream.Node", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Node$OfDouble_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Node$OfDouble",
	nullptr,
	"java.util.stream.Node$OfPrimitive",
	nullptr,
	_Node$OfDouble_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/Node$OfPrimitive<Ljava/lang/Double;Ljava/util/function/DoubleConsumer;[DLjava/util/Spliterator$OfDouble;Ljava/util/stream/Node$OfDouble;>;",
	nullptr,
	_Node$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Node"
};

$Object* allocate$Node$OfDouble($Class* clazz) {
	return $of($alloc(Node$OfDouble));
}

void Node$OfDouble::forEach($Consumer* consumer) {
	if ($instanceOf($DoubleConsumer, consumer)) {
		forEach($cast($DoubleConsumer, consumer));
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling Node.OfLong.forEachRemaining(Consumer)"_s);
		}
		$nc(($cast($Spliterator$OfDouble, $($cast($Spliterator$OfPrimitive, spliterator())))))->forEachRemaining(consumer);
	}
}

void Node$OfDouble::copyInto($DoubleArray* boxed, int32_t offset) {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling Node.OfDouble.copyInto(Double[], int)"_s);
	}
	$var($doubles, array, $cast($doubles, asPrimitiveArray()));
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		$nc(boxed)->set(offset + i, $($Double::valueOf(array->get(i))));
	}
}

Node$OfDouble* Node$OfDouble::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	if (from == 0 && to == count()) {
		return this;
	}
	int64_t size = to - from;
	$var($Spliterator$OfDouble, spliterator, $cast($Spliterator$OfDouble, $cast($Spliterator$OfPrimitive, this->spliterator())));
	$var($Node$Builder$OfDouble, nodeBuilder, $Nodes::doubleBuilder(size));
	$nc(nodeBuilder)->begin(size);
	for (int32_t i = 0; i < from && $nc(spliterator)->tryAdvance(static_cast<$DoubleConsumer*>($$new(Node$OfDouble$$Lambda$lambda$truncate$0))); ++i) {
	}
	if (to == count()) {
		$nc(spliterator)->forEachRemaining(static_cast<$DoubleConsumer*>(nodeBuilder));
	} else {
		for (int32_t i = 0; i < size && $nc(spliterator)->tryAdvance(static_cast<$DoubleConsumer*>(nodeBuilder)); ++i) {
		}
	}
	nodeBuilder->end();
	return $cast(Node$OfDouble, nodeBuilder->build());
}

$Object* Node$OfDouble::newArray(int32_t count) {
	return $of($new($doubles, count));
}

$StreamShape* Node$OfDouble::getShape() {
	$init($StreamShape);
	return $StreamShape::DOUBLE_VALUE;
}

void Node$OfDouble::copyInto($ObjectArray* boxed, int32_t offset) {
	this->copyInto($fcast($DoubleArray, boxed), offset);
}

void Node$OfDouble::lambda$truncate$0(double e) {
	$init(Node$OfDouble);
}

$Class* Node$OfDouble::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Node$OfDouble$$Lambda$lambda$truncate$0::classInfo$.name)) {
			return Node$OfDouble$$Lambda$lambda$truncate$0::load$(name, initialize);
		}
	}
	$loadClass(Node$OfDouble, name, initialize, &_Node$OfDouble_ClassInfo_, allocate$Node$OfDouble);
	return class$;
}

$Class* Node$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java