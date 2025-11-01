#include <java/util/stream/Nodes$ConcNode$OfInt.h>

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$ConcNode$OfPrimitive.h>
#include <java/util/stream/Nodes$ConcNode.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator$OfInt.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator$OfPrimitive.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $IntegerArray = $Array<::java::lang::Integer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Node$OfInt = ::java::util::stream::Node$OfInt;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes$ConcNode = ::java::util::stream::Nodes$ConcNode;
using $Nodes$ConcNode$OfPrimitive = ::java::util::stream::Nodes$ConcNode$OfPrimitive;
using $Nodes$InternalNodeSpliterator = ::java::util::stream::Nodes$InternalNodeSpliterator;
using $Nodes$InternalNodeSpliterator$OfInt = ::java::util::stream::Nodes$InternalNodeSpliterator$OfInt;
using $Nodes$InternalNodeSpliterator$OfPrimitive = ::java::util::stream::Nodes$InternalNodeSpliterator$OfPrimitive;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$ConcNode$OfInt_MethodInfo_[] = {
	{"*asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*asPrimitiveArray", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*copyInto", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{"*copyInto", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*copyInto", "([Ljava/lang/Integer;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*count", "()J", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getChild", "(I)Ljava/util/stream/Node;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getChildCount", "()I", nullptr, $PUBLIC},
	{"*getShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/Node$OfInt;Ljava/util/stream/Node$OfInt;)V", nullptr, 0, $method(static_cast<void(Nodes$ConcNode$OfInt::*)($Node$OfInt*,$Node$OfInt*)>(&Nodes$ConcNode$OfInt::init$))},
	{"*newArray", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*truncate", "(JJLjava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Nodes$ConcNode$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ConcNode", "java.util.stream.Nodes", "ConcNode", $STATIC | $FINAL},
	{"java.util.stream.Nodes$ConcNode$OfInt", "java.util.stream.Nodes$ConcNode", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.Nodes$ConcNode$OfPrimitive", "java.util.stream.Nodes$ConcNode", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Node$OfInt", "java.util.stream.Node", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$ConcNode$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$ConcNode$OfInt",
	"java.util.stream.Nodes$ConcNode$OfPrimitive",
	"java.util.stream.Node$OfInt",
	nullptr,
	_Nodes$ConcNode$OfInt_MethodInfo_,
	"Ljava/util/stream/Nodes$ConcNode$OfPrimitive<Ljava/lang/Integer;Ljava/util/function/IntConsumer;[ILjava/util/Spliterator$OfInt;Ljava/util/stream/Node$OfInt;>;Ljava/util/stream/Node$OfInt;",
	nullptr,
	_Nodes$ConcNode$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ConcNode$OfInt($Class* clazz) {
	return $of($alloc(Nodes$ConcNode$OfInt));
}

void Nodes$ConcNode$OfInt::forEach(Object$* consumer) {
	this->$Nodes$ConcNode$OfPrimitive::forEach(consumer);
}

void Nodes$ConcNode$OfInt::copyInto(Object$* array, int32_t offset) {
	this->$Nodes$ConcNode$OfPrimitive::copyInto(array, offset);
}

$Object* Nodes$ConcNode$OfInt::asPrimitiveArray() {
	 return this->$Nodes$ConcNode$OfPrimitive::asPrimitiveArray();
}

$String* Nodes$ConcNode$OfInt::toString() {
	 return this->$Nodes$ConcNode$OfPrimitive::toString();
}

$Node* Nodes$ConcNode$OfInt::getChild(int32_t i) {
	 return this->$Nodes$ConcNode$OfPrimitive::getChild(i);
}

int32_t Nodes$ConcNode$OfInt::getChildCount() {
	 return this->$Nodes$ConcNode$OfPrimitive::getChildCount();
}

int64_t Nodes$ConcNode$OfInt::count() {
	 return this->$Nodes$ConcNode$OfPrimitive::count();
}

void Nodes$ConcNode$OfInt::forEach($Consumer* consumer) {
	$as($Node$OfInt, this)->$Node$OfInt::forEach(consumer);
}

$Node* Nodes$ConcNode$OfInt::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	 return this->$Nodes$ConcNode$OfPrimitive::truncate(from, to, generator);
}

$ObjectArray* Nodes$ConcNode$OfInt::asArray($IntFunction* generator) {
	 return this->$Nodes$ConcNode$OfPrimitive::asArray(generator);
}

void Nodes$ConcNode$OfInt::copyInto($ObjectArray* array, int32_t offset) {
	$as($Node$OfInt, this)->$Node$OfInt::copyInto(array, offset);
}

$StreamShape* Nodes$ConcNode$OfInt::getShape() {
	 return this->$Nodes$ConcNode$OfPrimitive::getShape();
}

int32_t Nodes$ConcNode$OfInt::hashCode() {
	 return this->$Nodes$ConcNode$OfPrimitive::hashCode();
}

bool Nodes$ConcNode$OfInt::equals(Object$* obj) {
	 return this->$Nodes$ConcNode$OfPrimitive::equals(obj);
}

$Object* Nodes$ConcNode$OfInt::clone() {
	 return this->$Nodes$ConcNode$OfPrimitive::clone();
}

void Nodes$ConcNode$OfInt::finalize() {
	this->$Nodes$ConcNode$OfPrimitive::finalize();
}

$Object* Nodes$ConcNode$OfInt::newArray(int32_t count) {
	 return $as($Node$OfInt, this)->$Node$OfInt::newArray(count);
}

void Nodes$ConcNode$OfInt::copyInto($IntegerArray* boxed, int32_t offset) {
	$as($Node$OfInt, this)->$Node$OfInt::copyInto(boxed, offset);
}

Nodes$ConcNode$OfInt::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Nodes$ConcNode$OfInt, $Node$OfInt, memberClass0$);
}

void Nodes$ConcNode$OfInt::MemberClass0$::forEach($Consumer* consumer) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->forEach(consumer);
}

void Nodes$ConcNode$OfInt::MemberClass0$::copyInto($IntegerArray* boxed, int32_t offset) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->copyInto(boxed, offset);
}

$Node$OfInt* Nodes$ConcNode$OfInt::MemberClass0$::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	return $cast($Node$OfInt, ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->truncate(from, to, generator));
}

$Object* Nodes$ConcNode$OfInt::MemberClass0$::newArray(int32_t count) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->newArray(count);
}

$StreamShape* Nodes$ConcNode$OfInt::MemberClass0$::getShape() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->getShape();
}

void Nodes$ConcNode$OfInt::MemberClass0$::copyInto($ObjectArray* boxed, int32_t offset) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->copyInto(boxed, offset);
}

$Spliterator* Nodes$ConcNode$OfInt::MemberClass0$::spliterator() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->spliterator();
}

void Nodes$ConcNode$OfInt::MemberClass0$::forEach(Object$* action) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->forEach(action);
}

$Node* Nodes$ConcNode$OfInt::MemberClass0$::getChild(int32_t i) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->getChild(i);
}

$ObjectArray* Nodes$ConcNode$OfInt::MemberClass0$::asArray($IntFunction* generator) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->asArray(generator);
}

$Object* Nodes$ConcNode$OfInt::MemberClass0$::asPrimitiveArray() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->asPrimitiveArray();
}

void Nodes$ConcNode$OfInt::MemberClass0$::copyInto(Object$* array, int32_t offset) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->copyInto(array, offset);
}

int32_t Nodes$ConcNode$OfInt::MemberClass0$::getChildCount() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->getChildCount();
}

int64_t Nodes$ConcNode$OfInt::MemberClass0$::count() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->count();
}

int32_t Nodes$ConcNode$OfInt::MemberClass0$::hashCode() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->hashCode();
}

bool Nodes$ConcNode$OfInt::MemberClass0$::equals(Object$* obj) {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->equals(obj);
}

$Object* Nodes$ConcNode$OfInt::MemberClass0$::clone() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->clone();
}

$String* Nodes$ConcNode$OfInt::MemberClass0$::toString() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->toString();
}

void Nodes$ConcNode$OfInt::MemberClass0$::finalize() {
	return ((Nodes$ConcNode$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfInt, memberClass0$)))->finalize();
}

void Nodes$ConcNode$OfInt::init$($Node$OfInt* left, $Node$OfInt* right) {
	$Nodes$ConcNode$OfPrimitive::init$(left, right);
}

$Spliterator* Nodes$ConcNode$OfInt::spliterator() {
	return static_cast<$Spliterator*>(static_cast<$Nodes$InternalNodeSpliterator*>(static_cast<$Nodes$InternalNodeSpliterator$OfPrimitive*>($new($Nodes$InternalNodeSpliterator$OfInt, $as($Node$OfInt, this)))));
}

Nodes$ConcNode$OfInt::Nodes$ConcNode$OfInt() {
}

$Class* Nodes$ConcNode$OfInt::load$($String* name, bool initialize) {
	$loadClass(Nodes$ConcNode$OfInt, name, initialize, &_Nodes$ConcNode$OfInt_ClassInfo_, allocate$Nodes$ConcNode$OfInt);
	return class$;
}

$Class* Nodes$ConcNode$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java