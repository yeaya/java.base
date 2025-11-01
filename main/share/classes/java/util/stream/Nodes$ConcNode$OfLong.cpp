#include <java/util/stream/Nodes$ConcNode$OfLong.h>

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Node$OfLong.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$ConcNode$OfPrimitive.h>
#include <java/util/stream/Nodes$ConcNode.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator$OfLong.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator$OfPrimitive.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $LongArray = $Array<::java::lang::Long>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Node = ::java::util::stream::Node;
using $Node$OfLong = ::java::util::stream::Node$OfLong;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes$ConcNode = ::java::util::stream::Nodes$ConcNode;
using $Nodes$ConcNode$OfPrimitive = ::java::util::stream::Nodes$ConcNode$OfPrimitive;
using $Nodes$InternalNodeSpliterator = ::java::util::stream::Nodes$InternalNodeSpliterator;
using $Nodes$InternalNodeSpliterator$OfLong = ::java::util::stream::Nodes$InternalNodeSpliterator$OfLong;
using $Nodes$InternalNodeSpliterator$OfPrimitive = ::java::util::stream::Nodes$InternalNodeSpliterator$OfPrimitive;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$ConcNode$OfLong_MethodInfo_[] = {
	{"*asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*asPrimitiveArray", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*copyInto", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{"*copyInto", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*copyInto", "([Ljava/lang/Long;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*count", "()J", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getChild", "(I)Ljava/util/stream/Node;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getChildCount", "()I", nullptr, $PUBLIC},
	{"*getShape", "()Ljava/util/stream/StreamShape;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/Node$OfLong;Ljava/util/stream/Node$OfLong;)V", nullptr, 0, $method(static_cast<void(Nodes$ConcNode$OfLong::*)($Node$OfLong*,$Node$OfLong*)>(&Nodes$ConcNode$OfLong::init$))},
	{"*newArray", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"spliterator", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*truncate", "(JJLjava/util/function/IntFunction;)Ljava/util/stream/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Nodes$ConcNode$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ConcNode", "java.util.stream.Nodes", "ConcNode", $STATIC | $FINAL},
	{"java.util.stream.Nodes$ConcNode$OfLong", "java.util.stream.Nodes$ConcNode", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.Nodes$ConcNode$OfPrimitive", "java.util.stream.Nodes$ConcNode", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Node$OfLong", "java.util.stream.Node", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$ConcNode$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$ConcNode$OfLong",
	"java.util.stream.Nodes$ConcNode$OfPrimitive",
	"java.util.stream.Node$OfLong",
	nullptr,
	_Nodes$ConcNode$OfLong_MethodInfo_,
	"Ljava/util/stream/Nodes$ConcNode$OfPrimitive<Ljava/lang/Long;Ljava/util/function/LongConsumer;[JLjava/util/Spliterator$OfLong;Ljava/util/stream/Node$OfLong;>;Ljava/util/stream/Node$OfLong;",
	nullptr,
	_Nodes$ConcNode$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ConcNode$OfLong($Class* clazz) {
	return $of($alloc(Nodes$ConcNode$OfLong));
}

void Nodes$ConcNode$OfLong::forEach(Object$* consumer) {
	this->$Nodes$ConcNode$OfPrimitive::forEach(consumer);
}

void Nodes$ConcNode$OfLong::copyInto(Object$* array, int32_t offset) {
	this->$Nodes$ConcNode$OfPrimitive::copyInto(array, offset);
}

$Object* Nodes$ConcNode$OfLong::asPrimitiveArray() {
	 return this->$Nodes$ConcNode$OfPrimitive::asPrimitiveArray();
}

$String* Nodes$ConcNode$OfLong::toString() {
	 return this->$Nodes$ConcNode$OfPrimitive::toString();
}

$Node* Nodes$ConcNode$OfLong::getChild(int32_t i) {
	 return this->$Nodes$ConcNode$OfPrimitive::getChild(i);
}

int32_t Nodes$ConcNode$OfLong::getChildCount() {
	 return this->$Nodes$ConcNode$OfPrimitive::getChildCount();
}

int64_t Nodes$ConcNode$OfLong::count() {
	 return this->$Nodes$ConcNode$OfPrimitive::count();
}

void Nodes$ConcNode$OfLong::forEach($Consumer* consumer) {
	$as($Node$OfLong, this)->$Node$OfLong::forEach(consumer);
}

$Node* Nodes$ConcNode$OfLong::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	 return this->$Nodes$ConcNode$OfPrimitive::truncate(from, to, generator);
}

$ObjectArray* Nodes$ConcNode$OfLong::asArray($IntFunction* generator) {
	 return this->$Nodes$ConcNode$OfPrimitive::asArray(generator);
}

void Nodes$ConcNode$OfLong::copyInto($ObjectArray* array, int32_t offset) {
	$as($Node$OfLong, this)->$Node$OfLong::copyInto(array, offset);
}

$StreamShape* Nodes$ConcNode$OfLong::getShape() {
	 return this->$Nodes$ConcNode$OfPrimitive::getShape();
}

int32_t Nodes$ConcNode$OfLong::hashCode() {
	 return this->$Nodes$ConcNode$OfPrimitive::hashCode();
}

bool Nodes$ConcNode$OfLong::equals(Object$* obj) {
	 return this->$Nodes$ConcNode$OfPrimitive::equals(obj);
}

$Object* Nodes$ConcNode$OfLong::clone() {
	 return this->$Nodes$ConcNode$OfPrimitive::clone();
}

void Nodes$ConcNode$OfLong::finalize() {
	this->$Nodes$ConcNode$OfPrimitive::finalize();
}

$Object* Nodes$ConcNode$OfLong::newArray(int32_t count) {
	 return $as($Node$OfLong, this)->$Node$OfLong::newArray(count);
}

void Nodes$ConcNode$OfLong::copyInto($LongArray* boxed, int32_t offset) {
	$as($Node$OfLong, this)->$Node$OfLong::copyInto(boxed, offset);
}

Nodes$ConcNode$OfLong::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Nodes$ConcNode$OfLong, $Node$OfLong, memberClass0$);
}

void Nodes$ConcNode$OfLong::MemberClass0$::forEach($Consumer* consumer) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->forEach(consumer);
}

void Nodes$ConcNode$OfLong::MemberClass0$::copyInto($LongArray* boxed, int32_t offset) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->copyInto(boxed, offset);
}

$Node$OfLong* Nodes$ConcNode$OfLong::MemberClass0$::truncate(int64_t from, int64_t to, $IntFunction* generator) {
	return $cast($Node$OfLong, ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->truncate(from, to, generator));
}

$Object* Nodes$ConcNode$OfLong::MemberClass0$::newArray(int32_t count) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->newArray(count);
}

$StreamShape* Nodes$ConcNode$OfLong::MemberClass0$::getShape() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->getShape();
}

void Nodes$ConcNode$OfLong::MemberClass0$::copyInto($ObjectArray* boxed, int32_t offset) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->copyInto(boxed, offset);
}

$Spliterator* Nodes$ConcNode$OfLong::MemberClass0$::spliterator() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->spliterator();
}

void Nodes$ConcNode$OfLong::MemberClass0$::forEach(Object$* action) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->forEach(action);
}

$Node* Nodes$ConcNode$OfLong::MemberClass0$::getChild(int32_t i) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->getChild(i);
}

$ObjectArray* Nodes$ConcNode$OfLong::MemberClass0$::asArray($IntFunction* generator) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->asArray(generator);
}

$Object* Nodes$ConcNode$OfLong::MemberClass0$::asPrimitiveArray() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->asPrimitiveArray();
}

void Nodes$ConcNode$OfLong::MemberClass0$::copyInto(Object$* array, int32_t offset) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->copyInto(array, offset);
}

int32_t Nodes$ConcNode$OfLong::MemberClass0$::getChildCount() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->getChildCount();
}

int64_t Nodes$ConcNode$OfLong::MemberClass0$::count() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->count();
}

int32_t Nodes$ConcNode$OfLong::MemberClass0$::hashCode() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->hashCode();
}

bool Nodes$ConcNode$OfLong::MemberClass0$::equals(Object$* obj) {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->equals(obj);
}

$Object* Nodes$ConcNode$OfLong::MemberClass0$::clone() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->clone();
}

$String* Nodes$ConcNode$OfLong::MemberClass0$::toString() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->toString();
}

void Nodes$ConcNode$OfLong::MemberClass0$::finalize() {
	return ((Nodes$ConcNode$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Nodes$ConcNode$OfLong, memberClass0$)))->finalize();
}

void Nodes$ConcNode$OfLong::init$($Node$OfLong* left, $Node$OfLong* right) {
	$Nodes$ConcNode$OfPrimitive::init$(left, right);
}

$Spliterator* Nodes$ConcNode$OfLong::spliterator() {
	return static_cast<$Spliterator*>(static_cast<$Nodes$InternalNodeSpliterator*>(static_cast<$Nodes$InternalNodeSpliterator$OfPrimitive*>($new($Nodes$InternalNodeSpliterator$OfLong, $as($Node$OfLong, this)))));
}

Nodes$ConcNode$OfLong::Nodes$ConcNode$OfLong() {
}

$Class* Nodes$ConcNode$OfLong::load$($String* name, bool initialize) {
	$loadClass(Nodes$ConcNode$OfLong, name, initialize, &_Nodes$ConcNode$OfLong_ClassInfo_, allocate$Nodes$ConcNode$OfLong);
	return class$;
}

$Class* Nodes$ConcNode$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java