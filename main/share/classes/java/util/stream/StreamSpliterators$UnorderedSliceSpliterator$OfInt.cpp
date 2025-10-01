#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfInt.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfInt.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;
using $StreamSpliterators$ArrayBuffer$OfInt = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfInt;
using $StreamSpliterators$ArrayBuffer$OfPrimitive = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive;
using $StreamSpliterators$UnorderedSliceSpliterator = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator;
using $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$UnorderedSliceSpliterator$OfInt_FieldInfo_[] = {
	{"tmpValue", "I", nullptr, 0, $field(StreamSpliterators$UnorderedSliceSpliterator$OfInt, tmpValue)},
	{}
};

$MethodInfo _StreamSpliterators$UnorderedSliceSpliterator$OfInt_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfInt;JJ)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator$OfInt::*)($Spliterator$OfInt*,int64_t,int64_t)>(&StreamSpliterators$UnorderedSliceSpliterator$OfInt::init$))},
	{"<init>", "(Ljava/util/Spliterator$OfInt;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfInt;)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator$OfInt::*)($Spliterator$OfInt*,StreamSpliterators$UnorderedSliceSpliterator$OfInt*)>(&StreamSpliterators$UnorderedSliceSpliterator$OfInt::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"acceptConsumed", "(Ljava/util/function/IntConsumer;)V", nullptr, $PROTECTED, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator$OfInt::*)($IntConsumer*)>(&StreamSpliterators$UnorderedSliceSpliterator$OfInt::acceptConsumed))},
	{"acceptConsumed", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"bufferCreate", "(I)Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfInt;", nullptr, $PROTECTED},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator$OfInt::*)($IntConsumer*)>(&StreamSpliterators$UnorderedSliceSpliterator$OfInt::forEachRemaining))},
	{"makeSpliterator", "(Ljava/util/Spliterator$OfInt;)Ljava/util/Spliterator$OfInt;", nullptr, $PROTECTED, $method(static_cast<$Spliterator$OfInt*(StreamSpliterators$UnorderedSliceSpliterator$OfInt::*)($Spliterator$OfInt*)>(&StreamSpliterators$UnorderedSliceSpliterator$OfInt::makeSpliterator))},
	{"makeSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<bool(StreamSpliterators$UnorderedSliceSpliterator$OfInt::*)($IntConsumer*)>(&StreamSpliterators$UnorderedSliceSpliterator$OfInt::tryAdvance))},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "java.util.stream.StreamSpliterators", "UnorderedSliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfInt", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfInt", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfInt", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfInt",
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive",
	"java.util.function.IntConsumer,java.util.Spliterator$OfInt",
	_StreamSpliterators$UnorderedSliceSpliterator$OfInt_FieldInfo_,
	_StreamSpliterators$UnorderedSliceSpliterator$OfInt_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive<Ljava/lang/Integer;Ljava/util/function/IntConsumer;Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfInt;Ljava/util/Spliterator$OfInt;>;Ljava/util/Spliterator$OfInt;Ljava/util/function/IntConsumer;",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$UnorderedSliceSpliterator$OfInt($Class* clazz) {
	return $of($alloc(StreamSpliterators$UnorderedSliceSpliterator$OfInt));
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::tryAdvance(Object$* action) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::forEachRemaining(Object$* action) {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::forEachRemaining(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfInt::estimateSize() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::estimateSize();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfInt::characteristics() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::characteristics();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfInt::hashCode() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::hashCode();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::equals(Object$* obj) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::equals(obj);
}

$Object* StreamSpliterators$UnorderedSliceSpliterator$OfInt::clone() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::clone();
}

$String* StreamSpliterators$UnorderedSliceSpliterator$OfInt::toString() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::toString();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::finalize() {
	this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::finalize();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::forEachRemaining($Consumer* action) {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::forEachRemaining(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfInt::getExactSizeIfKnown() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::getExactSizeIfKnown();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::hasCharacteristics(int32_t characteristics) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$UnorderedSliceSpliterator$OfInt::getComparator() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::getComparator();
}

$Object0* StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$));
}

$Spliterator$OfInt* StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfInt, ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->trySplit());
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::tryAdvance($IntConsumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::forEachRemaining($IntConsumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::characteristics() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->characteristics();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::getComparator() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::hashCode() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->hashCode();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::clone() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->clone();
}

$String* StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::toString() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->toString();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::MemberClass0$::finalize() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfInt, memberClass0$)))->finalize();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::init$($Spliterator$OfInt* s, int64_t skip, int64_t limit) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$(s, skip, limit);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::init$($Spliterator$OfInt* s, StreamSpliterators$UnorderedSliceSpliterator$OfInt* parent) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$(s, parent);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::accept(int32_t value) {
	this->tmpValue = value;
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::acceptConsumed($IntConsumer* action) {
	$nc(action)->accept(this->tmpValue);
}

$StreamSpliterators$ArrayBuffer$OfPrimitive* StreamSpliterators$UnorderedSliceSpliterator$OfInt::bufferCreate(int32_t initialCapacity) {
	return $new($StreamSpliterators$ArrayBuffer$OfInt, initialCapacity);
}

$Spliterator$OfInt* StreamSpliterators$UnorderedSliceSpliterator$OfInt::makeSpliterator($Spliterator$OfInt* s) {
	return $as($Spliterator$OfInt, $new(StreamSpliterators$UnorderedSliceSpliterator$OfInt, s, this));
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::acceptConsumed(Object$* action) {
	this->acceptConsumed($cast($IntConsumer, action));
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfInt::makeSpliterator($Spliterator* s) {
	return this->makeSpliterator($cast($Spliterator$OfInt, s));
}

void StreamSpliterators$UnorderedSliceSpliterator$OfInt::forEachRemaining($IntConsumer* action) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfInt::tryAdvance($IntConsumer* action) {
	return $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfInt::trySplit() {
	return $cast($Spliterator$OfInt, $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::trySplit());
}

StreamSpliterators$UnorderedSliceSpliterator$OfInt::StreamSpliterators$UnorderedSliceSpliterator$OfInt() {
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfInt::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$UnorderedSliceSpliterator$OfInt, name, initialize, &_StreamSpliterators$UnorderedSliceSpliterator$OfInt_ClassInfo_, allocate$StreamSpliterators$UnorderedSliceSpliterator$OfInt);
	return class$;
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java