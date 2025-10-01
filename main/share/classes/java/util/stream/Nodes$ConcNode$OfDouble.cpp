#include <java/util/stream/Nodes$ConcNode$OfDouble.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node$OfDouble.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$ConcNode$OfPrimitive.h>
#include <java/util/stream/Nodes$ConcNode.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator$OfDouble.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator$OfPrimitive.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $DoubleArray = $Array<::java::lang::Double>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Node$OfDouble = ::java::util::stream::Node$OfDouble;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes$ConcNode = ::java::util::stream::Nodes$ConcNode;
using $Nodes$ConcNode$OfPrimitive = ::java::util::stream::Nodes$ConcNode$OfPrimitive;
using $Nodes$InternalNodeSpliterator = ::java::util::stream::Nodes$InternalNodeSpliterator;
using $Nodes$InternalNodeSpliterator$OfDouble = ::java::util::stream::Nodes$InternalNodeSpliterator$OfDouble;
using $Nodes$InternalNodeSpliterator$OfPrimitive = ::java::util::stream::Nodes$InternalNodeSpliterator$OfPrimitive;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$ConcNode$OfDouble_MethodInfo_[] = {
	{"*asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*asPrimitiveArray", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*copyInto", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{"*copyInto", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*copyInto", "([Ljava/lang/Double;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*count", "()J", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getChild", "(I)Ljava/util/stream/Node;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getChildCount", "()I", nullptr, $PUBLIC},
	{"*getShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/Node$OfDouble;Ljava/util/stream/Node$OfDouble;)V", nullptr, 0, $method(static_cast<void(Nodes$ConcNode$OfDouble::*)($Node$OfDouble*,$Node$OfDouble*)>(&Nodes$ConcNode$OfDouble::init$))},
	{"*newArray", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*truncate", "(JJLjava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Nodes$ConcNode$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ConcNode", "java.util.stream.Nodes", "ConcNode", $STATIC | $FINAL},
	{"java.util.stream.Nodes$ConcNode$OfDouble", "java.util.stream.Nodes$ConcNode", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.Nodes$ConcNode$OfPrimitive", "java.util.stream.Nodes$ConcNode", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Node$OfDouble", "java.util.stream.Node", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$ConcNode$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$ConcNode$OfDouble",
	"java.util.stream.Nodes$ConcNode$OfPrimitive",
	"java.util.stream.Node$OfDouble",
	nullptr,
	_Nodes$ConcNode$OfDouble_MethodInfo_,
	"Ljava/util/stream/Nodes$ConcNode$OfPrimitive<Ljava/lang/Double;Ljava/util/function/DoubleConsumer;[DLjava/util/Spliterator$OfDouble;Ljava/util/stream/Node$OfDouble;>;Ljava/util/stream/Node$OfDouble;",
	nullptr,
	_Nodes$ConcNode$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ConcNode$OfDouble($Class* clazz) {
	return $of($alloc(Nodes$ConcNode$OfDouble));
}

void Nodes$ConcNode$OfDouble::forEach(Object$* consumer) {
	this->$Nodes$ConcNode$OfPrimitive::forEach(consumer);
}

void Nodes$ConcNode$OfDouble::copyInto(Object$* array, int32_t offset) {
	this->$Nodes$ConcNode$OfPrimitive::copyInto(array, offset);
}

$Object* Nodes$ConcNode$OfDouble::asPrimitiveArray() {
	 return this->$Nodes$ConcNode$OfPrimitive::asPrimitiveArray();
}

$String* Nodes$ConcNode$OfDouble::toString() {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::toString();
}

$Node* Nodes$ConcNode$OfDouble::getChild(int32_t i) {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::getChild(i);
}

int32_t Nodes$ConcNode$OfDouble::getChildCount() {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::getChildCount();
}

int64_t Nodes$ConcNode$OfDouble::count() {
	 return this->$Nodes$ConcNode$OfPrimitive::count();
}

void Nodes$ConcNode$OfDouble::forEach($Consumer* consumer) {
	$as($Node$OfDouble, this)->$Node$OfDouble::forEach(consumer);
}

$Node* Nodes$ConcNode$OfDouble::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::truncate(from, to, generator);
}

$ObjectArray* Nodes$ConcNode$OfDouble::asArray($IntFunction* generator) {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::asArray(generator);
}

void Nodes$ConcNode$OfDouble::copyInto($ObjectArray* array, int32_t offset) {
	$as($Node$OfDouble, this)->$Node$OfDouble::copyInto(array, offset);
}

$StreamShape* Nodes$ConcNode$OfDouble::getShape() {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::getShape();
}

int32_t Nodes$ConcNode$OfDouble::hashCode() {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::hashCode();
}

bool Nodes$ConcNode$OfDouble::equals(Object$* obj) {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::equals(obj);
}

$Object* Nodes$ConcNode$OfDouble::clone() {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::clone();
}

void Nodes$ConcNode$OfDouble::finalize() {
	$as($Node$OfDouble, this)->$Node$OfDouble::finalize();
}

$Object* Nodes$ConcNode$OfDouble::newArray(int32_t count) {
	 return $as($Node$OfDouble, this)->$Node$OfDouble::newArray(count);
}

void Nodes$ConcNode$OfDouble::copyInto($DoubleArray* boxed, int32_t offset) {
	$as($Node$OfDouble, this)->$Node$OfDouble::copyInto(boxed, offset);
}

$Object0* Nodes$ConcNode$OfDouble::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$));
}

void Nodes$ConcNode$OfDouble::MemberClass0$::forEach($Consumer* consumer) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->forEach(consumer);
}

void Nodes$ConcNode$OfDouble::MemberClass0$::copyInto($DoubleArray* boxed, int32_t offset) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->copyInto(boxed, offset);
}

$Node$OfDouble* Nodes$ConcNode$OfDouble::MemberClass0$::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	return $cast($Node$OfDouble, ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->truncate(from, to, generator));
}

$Object* Nodes$ConcNode$OfDouble::MemberClass0$::newArray(int32_t count) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->newArray(count);
}

$StreamShape* Nodes$ConcNode$OfDouble::MemberClass0$::getShape() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->getShape();
}

void Nodes$ConcNode$OfDouble::MemberClass0$::copyInto($ObjectArray* boxed, int32_t offset) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->copyInto(boxed, offset);
}

$Spliterator* Nodes$ConcNode$OfDouble::MemberClass0$::spliterator() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->spliterator();
}

void Nodes$ConcNode$OfDouble::MemberClass0$::forEach(Object$* action) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->forEach(action);
}

$Node* Nodes$ConcNode$OfDouble::MemberClass0$::getChild(int32_t i) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->getChild(i);
}

$ObjectArray* Nodes$ConcNode$OfDouble::MemberClass0$::asArray($IntFunction* generator) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->asArray(generator);
}

$Object* Nodes$ConcNode$OfDouble::MemberClass0$::asPrimitiveArray() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->asPrimitiveArray();
}

void Nodes$ConcNode$OfDouble::MemberClass0$::copyInto(Object$* array, int32_t offset) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->copyInto(array, offset);
}

int32_t Nodes$ConcNode$OfDouble::MemberClass0$::getChildCount() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->getChildCount();
}

int64_t Nodes$ConcNode$OfDouble::MemberClass0$::count() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->count();
}

int32_t Nodes$ConcNode$OfDouble::MemberClass0$::hashCode() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->hashCode();
}

bool Nodes$ConcNode$OfDouble::MemberClass0$::equals(Object$* obj) {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->equals(obj);
}

$Object* Nodes$ConcNode$OfDouble::MemberClass0$::clone() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->clone();
}

$String* Nodes$ConcNode$OfDouble::MemberClass0$::toString() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->toString();
}

void Nodes$ConcNode$OfDouble::MemberClass0$::finalize() {
	return ((Nodes$ConcNode$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfDouble, memberClass0$)))->finalize();
}

void Nodes$ConcNode$OfDouble::init$($Node$OfDouble* left, $Node$OfDouble* right) {
	$Nodes$ConcNode$OfPrimitive::init$(left, right);
}

$Spliterator* Nodes$ConcNode$OfDouble::spliterator() {
	return static_cast<$Spliterator*>(static_cast<$Nodes$InternalNodeSpliterator*>(static_cast<$Nodes$InternalNodeSpliterator$OfPrimitive*>($new($Nodes$InternalNodeSpliterator$OfDouble, $as($Node$OfDouble, this)))));
}

Nodes$ConcNode$OfDouble::Nodes$ConcNode$OfDouble() {
}

$Class* Nodes$ConcNode$OfDouble::load$($String* name, bool initialize) {
	$loadClass(Nodes$ConcNode$OfDouble, name, initialize, &_Nodes$ConcNode$OfDouble_ClassInfo_, allocate$Nodes$ConcNode$OfDouble);
	return class$;
}

$Class* Nodes$ConcNode$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java