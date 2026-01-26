#include <java/util/stream/Nodes$ConcNode$OfPrimitive.h>

#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$AbstractConcNode.h>
#include <java/util/stream/Nodes$ConcNode.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes$AbstractConcNode = ::java::util::stream::Nodes$AbstractConcNode;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$ConcNode$OfPrimitive_MethodInfo_[] = {
	{"*asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*copyInto", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*count", "()J", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getChildCount", "()I", nullptr, $PUBLIC},
	{"*getShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/Node$OfPrimitive;Ljava/util/stream/Node$OfPrimitive;)V", "(TT_NODE;TT_NODE;)V", 0, $method(Nodes$ConcNode$OfPrimitive, init$, void, $Node$OfPrimitive*, $Node$OfPrimitive*)},
	{"asPrimitiveArray", "()Ljava/lang/Object;", "()TT_ARR;", $PUBLIC, $virtualMethod(Nodes$ConcNode$OfPrimitive, asPrimitiveArray, $Object*)},
	{"copyInto", "(Ljava/lang/Object;I)V", "(TT_ARR;I)V", $PUBLIC, $virtualMethod(Nodes$ConcNode$OfPrimitive, copyInto, void, Object$*, int32_t)},
	{"forEach", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC, $virtualMethod(Nodes$ConcNode$OfPrimitive, forEach, void, Object$*)},
	{"getChild", "(I)Ljava/util/stream/Node$OfPrimitive;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$ConcNode$OfPrimitive, getChild, $Node*, int32_t)},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Nodes$ConcNode$OfPrimitive, toString, $String*)},
	{"*truncate", "(JJLjava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Nodes$ConcNode$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ConcNode", "java.util.stream.Nodes", "ConcNode", $STATIC | $FINAL},
	{"java.util.stream.Nodes$ConcNode$OfPrimitive", "java.util.stream.Nodes$ConcNode", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$AbstractConcNode", "java.util.stream.Nodes", "AbstractConcNode", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Node$OfPrimitive", "java.util.stream.Node", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$ConcNode$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Nodes$ConcNode$OfPrimitive",
	"java.util.stream.Nodes$AbstractConcNode",
	"java.util.stream.Node$OfPrimitive",
	nullptr,
	_Nodes$ConcNode$OfPrimitive_MethodInfo_,
	"<E:Ljava/lang/Object;T_CONS:Ljava/lang/Object;T_ARR:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TE;TT_CONS;TT_SPLITR;>;T_NODE::Ljava/util/stream/Node$OfPrimitive<TE;TT_CONS;TT_ARR;TT_SPLITR;TT_NODE;>;>Ljava/util/stream/Nodes$AbstractConcNode<TE;TT_NODE;>;Ljava/util/stream/Node$OfPrimitive<TE;TT_CONS;TT_ARR;TT_SPLITR;TT_NODE;>;",
	nullptr,
	_Nodes$ConcNode$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ConcNode$OfPrimitive($Class* clazz) {
	return $of($alloc(Nodes$ConcNode$OfPrimitive));
}

int32_t Nodes$ConcNode$OfPrimitive::getChildCount() {
	 return this->$Nodes$AbstractConcNode::getChildCount();
}

int64_t Nodes$ConcNode$OfPrimitive::count() {
	 return this->$Nodes$AbstractConcNode::count();
}

$Node* Nodes$ConcNode$OfPrimitive::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	 return this->$Nodes$AbstractConcNode::truncate(from, to, generator);
}

$ObjectArray* Nodes$ConcNode$OfPrimitive::asArray($IntFunction* generator) {
	 return this->$Node$OfPrimitive::asArray(generator);
}

$StreamShape* Nodes$ConcNode$OfPrimitive::getShape() {
	 return this->$Nodes$AbstractConcNode::getShape();
}

int32_t Nodes$ConcNode$OfPrimitive::hashCode() {
	 return this->$Nodes$AbstractConcNode::hashCode();
}

bool Nodes$ConcNode$OfPrimitive::equals(Object$* obj) {
	 return this->$Nodes$AbstractConcNode::equals(obj);
}

$Object* Nodes$ConcNode$OfPrimitive::clone() {
	 return this->$Nodes$AbstractConcNode::clone();
}

void Nodes$ConcNode$OfPrimitive::finalize() {
	this->$Nodes$AbstractConcNode::finalize();
}

void Nodes$ConcNode$OfPrimitive::init$($Node$OfPrimitive* left, $Node$OfPrimitive* right) {
	$Nodes$AbstractConcNode::init$(left, right);
}

void Nodes$ConcNode$OfPrimitive::forEach(Object$* consumer) {
	$nc(($cast($Node$OfPrimitive, this->left)))->forEach(consumer);
	$nc(($cast($Node$OfPrimitive, this->right)))->forEach(consumer);
}

void Nodes$ConcNode$OfPrimitive::copyInto(Object$* array, int32_t offset) {
	$nc(($cast($Node$OfPrimitive, this->left)))->copyInto(array, offset);
	$nc(($cast($Node$OfPrimitive, this->right)))->copyInto(array, offset + (int32_t)$nc(($cast($Node$OfPrimitive, this->left)))->count());
}

$Object* Nodes$ConcNode$OfPrimitive::asPrimitiveArray() {
	int64_t size = count();
	if (size >= (int64_t)2147483639) {
		$throwNew($IllegalArgumentException, "Stream size exceeds max array size"_s);
	}
	$var($Object, array, newArray((int32_t)size));
	copyInto(array, 0);
	return $of(array);
}

$String* Nodes$ConcNode$OfPrimitive::toString() {
	$useLocalCurrentObjectStackCache();
	if (count() < 32) {
		return $String::format("%s[%s.%s]"_s, $$new($ObjectArray, {
			$($of($of(this)->getClass()->getName())),
			$of(this->left),
			$of(this->right)
		}));
	} else {
		return $String::format("%s[size=%d]"_s, $$new($ObjectArray, {
			$($of($of(this)->getClass()->getName())),
			$($of($Long::valueOf(count())))
		}));
	}
}

$Node* Nodes$ConcNode$OfPrimitive::getChild(int32_t i) {
	return $cast($Node$OfPrimitive, $Nodes$AbstractConcNode::getChild(i));
}

Nodes$ConcNode$OfPrimitive::Nodes$ConcNode$OfPrimitive() {
}

$Class* Nodes$ConcNode$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(Nodes$ConcNode$OfPrimitive, name, initialize, &_Nodes$ConcNode$OfPrimitive_ClassInfo_, allocate$Nodes$ConcNode$OfPrimitive);
	return class$;
}

$Class* Nodes$ConcNode$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java