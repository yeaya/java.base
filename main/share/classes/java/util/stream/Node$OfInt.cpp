#include <java/util/stream/Node$OfInt.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
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
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node$Builder$OfInt.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$OfInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef INT_VALUE
#undef ENABLED

using $IntegerArray = $Array<::java::lang::Integer>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Node$Builder$OfInt = ::java::util::stream::Node$Builder$OfInt;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes = ::java::util::stream::Nodes;
using $Sink = ::java::util::stream::Sink;
using $Sink$OfInt = ::java::util::stream::Sink$OfInt;
using $StreamShape = ::java::util::stream::StreamShape;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

class Node$OfInt$$Lambda$lambda$truncate$0 : public $IntConsumer {
	$class(Node$OfInt$$Lambda$lambda$truncate$0, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$() {
	}
	virtual void accept(int32_t e) override {
		Node$OfInt::lambda$truncate$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Node$OfInt$$Lambda$lambda$truncate$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Node$OfInt$$Lambda$lambda$truncate$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Node$OfInt$$Lambda$lambda$truncate$0::*)()>(&Node$OfInt$$Lambda$lambda$truncate$0::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Node$OfInt$$Lambda$lambda$truncate$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.Node$OfInt$$Lambda$lambda$truncate$0",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	nullptr,
	methodInfos
};
$Class* Node$OfInt$$Lambda$lambda$truncate$0::load$($String* name, bool initialize) {
	$loadClass(Node$OfInt$$Lambda$lambda$truncate$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Node$OfInt$$Lambda$lambda$truncate$0::class$ = nullptr;

$MethodInfo _Node$OfInt_MethodInfo_[] = {
	{"copyInto", "([Ljava/lang/Integer;I)V", nullptr, $PUBLIC},
	{"copyInto", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Integer;>;)V", $PUBLIC},
	{"getShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC},
	{"lambda$truncate$0", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t)>(&Node$OfInt::lambda$truncate$0))},
	{"newArray", "(I)[I", nullptr, $PUBLIC},
	{"truncate", "(JJLjava/util/function/IntFunction;)Ljava/util/stream/Node$OfInt;", "(JJLjava/util/function/IntFunction<[Ljava/lang/Integer;>;)Ljava/util/stream/Node$OfInt;", $PUBLIC},
	{}
};

$InnerClassInfo _Node$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.Node$OfInt", "java.util.stream.Node", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$OfPrimitive", "java.util.stream.Node", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Node$OfInt_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Node$OfInt",
	nullptr,
	"java.util.stream.Node$OfPrimitive",
	nullptr,
	_Node$OfInt_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/Node$OfPrimitive<Ljava/lang/Integer;Ljava/util/function/IntConsumer;[ILjava/util/Spliterator$OfInt;Ljava/util/stream/Node$OfInt;>;",
	nullptr,
	_Node$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Node"
};

$Object* allocate$Node$OfInt($Class* clazz) {
	return $of($alloc(Node$OfInt));
}

void Node$OfInt::forEach($Consumer* consumer) {
	if ($instanceOf($IntConsumer, consumer)) {
		forEach($cast($IntConsumer, consumer));
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling Node.OfInt.forEachRemaining(Consumer)"_s);
		}
		$nc(($cast($Spliterator$OfInt, $($cast($Spliterator$OfPrimitive, spliterator())))))->forEachRemaining(consumer);
	}
}

void Node$OfInt::copyInto($IntegerArray* boxed, int32_t offset) {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling Node.OfInt.copyInto(Integer[], int)"_s);
	}
	$var($ints, array, $cast($ints, asPrimitiveArray()));
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		$nc(boxed)->set(offset + i, $($Integer::valueOf(array->get(i))));
	}
}

Node$OfInt* Node$OfInt::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	if (from == 0 && to == count()) {
		return this;
	}
	int64_t size = to - from;
	$var($Spliterator$OfInt, spliterator, $cast($Spliterator$OfInt, $cast($Spliterator$OfPrimitive, this->spliterator())));
	$var($Node$Builder$OfInt, nodeBuilder, $Nodes::intBuilder(size));
	$nc(nodeBuilder)->begin(size);
	for (int32_t i = 0; i < from && $nc(spliterator)->tryAdvance(static_cast<$IntConsumer*>($$new(Node$OfInt$$Lambda$lambda$truncate$0))); ++i) {
	}
	if (to == count()) {
		$nc(spliterator)->forEachRemaining(static_cast<$IntConsumer*>(nodeBuilder));
	} else {
		for (int32_t i = 0; i < size && $nc(spliterator)->tryAdvance(static_cast<$IntConsumer*>(nodeBuilder)); ++i) {
		}
	}
	nodeBuilder->end();
	return $cast(Node$OfInt, nodeBuilder->build());
}

$Object* Node$OfInt::newArray(int32_t count) {
	return $of($new($ints, count));
}

$StreamShape* Node$OfInt::getShape() {
	$init($StreamShape);
	return $StreamShape::INT_VALUE;
}

void Node$OfInt::copyInto($ObjectArray* boxed, int32_t offset) {
	this->copyInto($fcast($IntegerArray, boxed), offset);
}

void Node$OfInt::lambda$truncate$0(int32_t e) {
	$init(Node$OfInt);
}

$Class* Node$OfInt::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Node$OfInt$$Lambda$lambda$truncate$0::classInfo$.name)) {
			return Node$OfInt$$Lambda$lambda$truncate$0::load$(name, initialize);
		}
	}
	$loadClass(Node$OfInt, name, initialize, &_Node$OfInt_ClassInfo_, allocate$Node$OfInt);
	return class$;
}

$Class* Node$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java