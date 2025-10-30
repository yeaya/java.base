#include <java/util/stream/Node$OfPrimitive.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef BAD_SIZE
#undef ENABLED
#undef MAX_ARRAY_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Nodes = ::java::util::stream::Nodes;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Node$OfPrimitive_MethodInfo_[] = {
	{"asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC},
	{"asPrimitiveArray", "()Ljava/lang/Object;", "()TT_ARR;", $PUBLIC | $ABSTRACT},
	{"copyInto", "(Ljava/lang/Object;I)V", "(TT_ARR;I)V", $PUBLIC | $ABSTRACT},
	{"forEach", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC | $ABSTRACT},
	{"getChild", "(I)Ljava/util/stream/Node$OfPrimitive;", "(I)TT_NODE;", $PUBLIC},
	{"newArray", "(I)Ljava/lang/Object;", "(I)TT_ARR;", $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"truncate", "(JJLjava/util/function/IntFunction;)Ljava/util/stream/Node$OfPrimitive;", "(JJLjava/util/function/IntFunction<[TT;>;)TT_NODE;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Node$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.Node$OfPrimitive", "java.util.stream.Node", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Node$OfPrimitive_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Node$OfPrimitive",
	nullptr,
	"java.util.stream.Node",
	nullptr,
	_Node$OfPrimitive_MethodInfo_,
	"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;T_ARR:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;T_NODE::Ljava/util/stream/Node$OfPrimitive<TT;TT_CONS;TT_ARR;TT_SPLITR;TT_NODE;>;>Ljava/lang/Object;Ljava/util/stream/Node<TT;>;",
	nullptr,
	_Node$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Node"
};

$Object* allocate$Node$OfPrimitive($Class* clazz) {
	return $of($alloc(Node$OfPrimitive));
}

$Node* Node$OfPrimitive::getChild(int32_t i) {
	$throwNew($IndexOutOfBoundsException);
	$shouldNotReachHere();
}

$ObjectArray* Node$OfPrimitive::asArray($IntFunction* generator) {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling Node.OfPrimitive.asArray"_s);
	}
	int64_t size = count();
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$var($ObjectArray, boxed, $cast($ObjectArray, $nc(generator)->apply((int32_t)count())));
	copyInto(boxed, 0);
	return boxed;
}

$Class* Node$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(Node$OfPrimitive, name, initialize, &_Node$OfPrimitive_ClassInfo_, allocate$Node$OfPrimitive);
	return class$;
}

$Class* Node$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java