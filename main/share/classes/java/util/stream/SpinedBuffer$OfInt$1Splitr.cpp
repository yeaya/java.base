#include <java/util/stream/SpinedBuffer$OfInt$1Splitr.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/SpinedBuffer$OfInt.h>
#include <java/util/stream/SpinedBuffer$OfPrimitive$BaseSpliterator.h>
#include <java/util/stream/SpinedBuffer$OfPrimitive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;
using $SpinedBuffer$OfInt = ::java::util::stream::SpinedBuffer$OfInt;
using $SpinedBuffer$OfPrimitive = ::java::util::stream::SpinedBuffer$OfPrimitive;
using $SpinedBuffer$OfPrimitive$BaseSpliterator = ::java::util::stream::SpinedBuffer$OfPrimitive$BaseSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SpinedBuffer$OfInt$1Splitr_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SpinedBuffer$OfInt;", nullptr, $FINAL | $SYNTHETIC, $field(SpinedBuffer$OfInt$1Splitr, this$0)},
	{}
};

$MethodInfo _SpinedBuffer$OfInt$1Splitr_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/SpinedBuffer$OfInt;IIII)V", nullptr, 0, $method(static_cast<void(SpinedBuffer$OfInt$1Splitr::*)($SpinedBuffer$OfInt*,int32_t,int32_t,int32_t,int32_t)>(&SpinedBuffer$OfInt$1Splitr::init$))},
	{"arrayForOne", "([IILjava/util/function/IntConsumer;)V", nullptr, 0},
	{"arrayForOne", "(Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"arraySpliterator", "([III)Ljava/util/Spliterator$OfInt;", nullptr, 0},
	{"arraySpliterator", "(Ljava/lang/Object;II)Ljava/util/Spliterator$OfPrimitive;", nullptr, $VOLATILE | $SYNTHETIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"newSpliterator", "(IIII)Ljava/util/stream/SpinedBuffer$OfInt$1Splitr;", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _SpinedBuffer$OfInt$1Splitr_EnclosingMethodInfo_ = {
	"java.util.stream.SpinedBuffer$OfInt",
	"spliterator",
	"()Ljava/util/Spliterator$OfInt;"
};

$InnerClassInfo _SpinedBuffer$OfInt$1Splitr_InnerClassesInfo_[] = {
	{"java.util.stream.SpinedBuffer$OfInt", "java.util.stream.SpinedBuffer", "OfInt", $STATIC},
	{"java.util.stream.SpinedBuffer$OfInt$1Splitr", nullptr, "Splitr", 0},
	{"java.util.stream.SpinedBuffer$OfPrimitive", "java.util.stream.SpinedBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator", "java.util.stream.SpinedBuffer$OfPrimitive", "BaseSpliterator", $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpinedBuffer$OfInt$1Splitr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SpinedBuffer$OfInt$1Splitr",
	"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator",
	"java.util.Spliterator$OfInt",
	_SpinedBuffer$OfInt$1Splitr_FieldInfo_,
	_SpinedBuffer$OfInt$1Splitr_MethodInfo_,
	"Ljava/util/stream/SpinedBuffer$OfPrimitive<Ljava/lang/Integer;[ILjava/util/function/IntConsumer;>.BaseSpliterator<Ljava/util/Spliterator$OfInt;>;Ljava/util/Spliterator$OfInt;",
	&_SpinedBuffer$OfInt$1Splitr_EnclosingMethodInfo_,
	_SpinedBuffer$OfInt$1Splitr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SpinedBuffer"
};

$Object* allocate$SpinedBuffer$OfInt$1Splitr($Class* clazz) {
	return $of($alloc(SpinedBuffer$OfInt$1Splitr));
}

int64_t SpinedBuffer$OfInt$1Splitr::estimateSize() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::estimateSize();
}

int32_t SpinedBuffer$OfInt$1Splitr::characteristics() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::characteristics();
}

bool SpinedBuffer$OfInt$1Splitr::tryAdvance(Object$* consumer) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::tryAdvance(consumer);
}

void SpinedBuffer$OfInt$1Splitr::forEachRemaining(Object$* consumer) {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::forEachRemaining(consumer);
}

bool SpinedBuffer$OfInt$1Splitr::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::tryAdvance(action);
}

void SpinedBuffer$OfInt$1Splitr::forEachRemaining($Consumer* action) {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::forEachRemaining(action);
}

int64_t SpinedBuffer$OfInt$1Splitr::getExactSizeIfKnown() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::getExactSizeIfKnown();
}

bool SpinedBuffer$OfInt$1Splitr::hasCharacteristics(int32_t characteristics) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::hasCharacteristics(characteristics);
}

$Comparator* SpinedBuffer$OfInt$1Splitr::getComparator() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::getComparator();
}

int32_t SpinedBuffer$OfInt$1Splitr::hashCode() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::hashCode();
}

bool SpinedBuffer$OfInt$1Splitr::equals(Object$* obj) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::equals(obj);
}

$Object* SpinedBuffer$OfInt$1Splitr::clone() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::clone();
}

$String* SpinedBuffer$OfInt$1Splitr::toString() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::toString();
}

void SpinedBuffer$OfInt$1Splitr::finalize() {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::finalize();
}

$Object0* SpinedBuffer$OfInt$1Splitr::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$));
}

$Spliterator$OfInt* SpinedBuffer$OfInt$1Splitr::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfInt, ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->trySplit());
}

bool SpinedBuffer$OfInt$1Splitr::MemberClass0$::tryAdvance($IntConsumer* action) {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->tryAdvance(action);
}

void SpinedBuffer$OfInt$1Splitr::MemberClass0$::forEachRemaining($IntConsumer* action) {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->forEachRemaining(action);
}

bool SpinedBuffer$OfInt$1Splitr::MemberClass0$::tryAdvance($Consumer* action) {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->tryAdvance(action);
}

void SpinedBuffer$OfInt$1Splitr::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->forEachRemaining(action);
}

void SpinedBuffer$OfInt$1Splitr::MemberClass0$::forEachRemaining(Object$* action) {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->forEachRemaining(action);
}

bool SpinedBuffer$OfInt$1Splitr::MemberClass0$::tryAdvance(Object$* action) {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->tryAdvance(action);
}

int64_t SpinedBuffer$OfInt$1Splitr::MemberClass0$::estimateSize() {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->estimateSize();
}

int64_t SpinedBuffer$OfInt$1Splitr::MemberClass0$::getExactSizeIfKnown() {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->getExactSizeIfKnown();
}

int32_t SpinedBuffer$OfInt$1Splitr::MemberClass0$::characteristics() {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->characteristics();
}

bool SpinedBuffer$OfInt$1Splitr::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* SpinedBuffer$OfInt$1Splitr::MemberClass0$::getComparator() {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->getComparator();
}

int32_t SpinedBuffer$OfInt$1Splitr::MemberClass0$::hashCode() {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->hashCode();
}

bool SpinedBuffer$OfInt$1Splitr::MemberClass0$::equals(Object$* obj) {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->equals(obj);
}

$Object* SpinedBuffer$OfInt$1Splitr::MemberClass0$::clone() {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->clone();
}

$String* SpinedBuffer$OfInt$1Splitr::MemberClass0$::toString() {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->toString();
}

void SpinedBuffer$OfInt$1Splitr::MemberClass0$::finalize() {
	return ((SpinedBuffer$OfInt$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfInt$1Splitr, memberClass0$)))->finalize();
}

void SpinedBuffer$OfInt$1Splitr::init$($SpinedBuffer$OfInt* this$0, int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {
	$set(this, this$0, this$0);
	$SpinedBuffer$OfPrimitive$BaseSpliterator::init$(this$0, firstSpineIndex, lastSpineIndex, firstSpineElementIndex, lastSpineElementFence);
}

$Spliterator$OfPrimitive* SpinedBuffer$OfInt$1Splitr::newSpliterator(int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {
	return static_cast<$Spliterator$OfPrimitive*>(static_cast<$SpinedBuffer$OfPrimitive$BaseSpliterator*>($new(SpinedBuffer$OfInt$1Splitr, this->this$0, firstSpineIndex, lastSpineIndex, firstSpineElementIndex, lastSpineElementFence)));
}

void SpinedBuffer$OfInt$1Splitr::arrayForOne($ints* array, int32_t index, $IntConsumer* consumer) {
	$nc(consumer)->accept($nc(array)->get(index));
}

$Spliterator$OfInt* SpinedBuffer$OfInt$1Splitr::arraySpliterator($ints* array, int32_t offset, int32_t len) {
	return $Arrays::spliterator(array, offset, offset + len);
}

$Spliterator$OfPrimitive* SpinedBuffer$OfInt$1Splitr::arraySpliterator(Object$* array, int32_t offset, int32_t len) {
	return this->arraySpliterator($cast($ints, array), offset, len);
}

void SpinedBuffer$OfInt$1Splitr::arrayForOne(Object$* array, int32_t index, Object$* consumer) {
	this->arrayForOne($cast($ints, array), index, $cast($IntConsumer, consumer));
}

void SpinedBuffer$OfInt$1Splitr::forEachRemaining($IntConsumer* consumer) {
	$SpinedBuffer$OfPrimitive$BaseSpliterator::forEachRemaining($of(consumer));
}

bool SpinedBuffer$OfInt$1Splitr::tryAdvance($IntConsumer* consumer) {
	return $SpinedBuffer$OfPrimitive$BaseSpliterator::tryAdvance($of(consumer));
}

$Spliterator* SpinedBuffer$OfInt$1Splitr::trySplit() {
	return $cast($Spliterator$OfInt, $cast($Spliterator$OfPrimitive, $SpinedBuffer$OfPrimitive$BaseSpliterator::trySplit()));
}

SpinedBuffer$OfInt$1Splitr::SpinedBuffer$OfInt$1Splitr() {
}

$Class* SpinedBuffer$OfInt$1Splitr::load$($String* name, bool initialize) {
	$loadClass(SpinedBuffer$OfInt$1Splitr, name, initialize, &_SpinedBuffer$OfInt$1Splitr_ClassInfo_, allocate$SpinedBuffer$OfInt$1Splitr);
	return class$;
}

$Class* SpinedBuffer$OfInt$1Splitr::class$ = nullptr;

		} // stream
	} // util
} // java