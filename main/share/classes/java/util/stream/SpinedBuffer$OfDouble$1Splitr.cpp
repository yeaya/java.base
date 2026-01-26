#include <java/util/stream/SpinedBuffer$OfDouble$1Splitr.h>

#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/SpinedBuffer$OfDouble.h>
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
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $SpinedBuffer$OfDouble = ::java::util::stream::SpinedBuffer$OfDouble;
using $SpinedBuffer$OfPrimitive = ::java::util::stream::SpinedBuffer$OfPrimitive;
using $SpinedBuffer$OfPrimitive$BaseSpliterator = ::java::util::stream::SpinedBuffer$OfPrimitive$BaseSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SpinedBuffer$OfDouble$1Splitr_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SpinedBuffer$OfDouble;", nullptr, $FINAL | $SYNTHETIC, $field(SpinedBuffer$OfDouble$1Splitr, this$0)},
	{}
};

$MethodInfo _SpinedBuffer$OfDouble$1Splitr_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/stream/SpinedBuffer$OfDouble;IIII)V", nullptr, 0, $method(SpinedBuffer$OfDouble$1Splitr, init$, void, $SpinedBuffer$OfDouble*, int32_t, int32_t, int32_t, int32_t)},
	{"arrayForOne", "([DILjava/util/function/DoubleConsumer;)V", nullptr, 0, $virtualMethod(SpinedBuffer$OfDouble$1Splitr, arrayForOne, void, $doubles*, int32_t, $DoubleConsumer*)},
	{"arrayForOne", "(Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(SpinedBuffer$OfDouble$1Splitr, arrayForOne, void, Object$*, int32_t, Object$*)},
	{"arraySpliterator", "([DII)Ljava/util/Spliterator$OfDouble;", nullptr, 0, $virtualMethod(SpinedBuffer$OfDouble$1Splitr, arraySpliterator, $Spliterator$OfDouble*, $doubles*, int32_t, int32_t)},
	{"arraySpliterator", "(Ljava/lang/Object;II)Ljava/util/Spliterator$OfPrimitive;", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(SpinedBuffer$OfDouble$1Splitr, arraySpliterator, $Spliterator$OfPrimitive*, Object$*, int32_t, int32_t)},
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SpinedBuffer$OfDouble$1Splitr, forEachRemaining, void, $DoubleConsumer*)},
	{"newSpliterator", "(IIII)Ljava/util/stream/SpinedBuffer$OfDouble$1Splitr;", nullptr, 0, $virtualMethod(SpinedBuffer$OfDouble$1Splitr, newSpliterator, $Spliterator$OfPrimitive*, int32_t, int32_t, int32_t, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SpinedBuffer$OfDouble$1Splitr, tryAdvance, bool, $DoubleConsumer*)},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SpinedBuffer$OfDouble$1Splitr, trySplit, $Spliterator*)},
	{}
};

$EnclosingMethodInfo _SpinedBuffer$OfDouble$1Splitr_EnclosingMethodInfo_ = {
	"java.util.stream.SpinedBuffer$OfDouble",
	"spliterator",
	"()Ljava/util/Spliterator$OfDouble;"
};

$InnerClassInfo _SpinedBuffer$OfDouble$1Splitr_InnerClassesInfo_[] = {
	{"java.util.stream.SpinedBuffer$OfDouble", "java.util.stream.SpinedBuffer", "OfDouble", $STATIC},
	{"java.util.stream.SpinedBuffer$OfDouble$1Splitr", nullptr, "Splitr", 0},
	{"java.util.stream.SpinedBuffer$OfPrimitive", "java.util.stream.SpinedBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator", "java.util.stream.SpinedBuffer$OfPrimitive", "BaseSpliterator", $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpinedBuffer$OfDouble$1Splitr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SpinedBuffer$OfDouble$1Splitr",
	"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator",
	"java.util.Spliterator$OfDouble",
	_SpinedBuffer$OfDouble$1Splitr_FieldInfo_,
	_SpinedBuffer$OfDouble$1Splitr_MethodInfo_,
	"Ljava/util/stream/SpinedBuffer$OfPrimitive<Ljava/lang/Double;[DLjava/util/function/DoubleConsumer;>.BaseSpliterator<Ljava/util/Spliterator$OfDouble;>;Ljava/util/Spliterator$OfDouble;",
	&_SpinedBuffer$OfDouble$1Splitr_EnclosingMethodInfo_,
	_SpinedBuffer$OfDouble$1Splitr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SpinedBuffer"
};

$Object* allocate$SpinedBuffer$OfDouble$1Splitr($Class* clazz) {
	return $of($alloc(SpinedBuffer$OfDouble$1Splitr));
}

int64_t SpinedBuffer$OfDouble$1Splitr::estimateSize() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::estimateSize();
}

int32_t SpinedBuffer$OfDouble$1Splitr::characteristics() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::characteristics();
}

bool SpinedBuffer$OfDouble$1Splitr::tryAdvance(Object$* consumer) {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::tryAdvance(consumer);
}

void SpinedBuffer$OfDouble$1Splitr::forEachRemaining(Object$* consumer) {
	this->$SpinedBuffer$OfPrimitive$BaseSpliterator::forEachRemaining(consumer);
}

bool SpinedBuffer$OfDouble$1Splitr::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::tryAdvance(action);
}

void SpinedBuffer$OfDouble$1Splitr::forEachRemaining($Consumer* action) {
	this->$SpinedBuffer$OfPrimitive$BaseSpliterator::forEachRemaining(action);
}

int64_t SpinedBuffer$OfDouble$1Splitr::getExactSizeIfKnown() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::getExactSizeIfKnown();
}

bool SpinedBuffer$OfDouble$1Splitr::hasCharacteristics(int32_t characteristics) {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::hasCharacteristics(characteristics);
}

$Comparator* SpinedBuffer$OfDouble$1Splitr::getComparator() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::getComparator();
}

int32_t SpinedBuffer$OfDouble$1Splitr::hashCode() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::hashCode();
}

bool SpinedBuffer$OfDouble$1Splitr::equals(Object$* obj) {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::equals(obj);
}

$Object* SpinedBuffer$OfDouble$1Splitr::clone() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::clone();
}

$String* SpinedBuffer$OfDouble$1Splitr::toString() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::toString();
}

void SpinedBuffer$OfDouble$1Splitr::finalize() {
	this->$SpinedBuffer$OfPrimitive$BaseSpliterator::finalize();
}

SpinedBuffer$OfDouble$1Splitr::MemberClass0$::MemberClass0$() {
	$patchMemberClass(SpinedBuffer$OfDouble$1Splitr, $Spliterator$OfDouble, memberClass0$);
}

$Spliterator$OfDouble* SpinedBuffer$OfDouble$1Splitr::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfDouble, ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->trySplit());
}

bool SpinedBuffer$OfDouble$1Splitr::MemberClass0$::tryAdvance($DoubleConsumer* action) {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->tryAdvance(action);
}

void SpinedBuffer$OfDouble$1Splitr::MemberClass0$::forEachRemaining($DoubleConsumer* action) {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->forEachRemaining(action);
}

bool SpinedBuffer$OfDouble$1Splitr::MemberClass0$::tryAdvance($Consumer* action) {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->tryAdvance(action);
}

void SpinedBuffer$OfDouble$1Splitr::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->forEachRemaining(action);
}

void SpinedBuffer$OfDouble$1Splitr::MemberClass0$::forEachRemaining(Object$* action) {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->forEachRemaining(action);
}

bool SpinedBuffer$OfDouble$1Splitr::MemberClass0$::tryAdvance(Object$* action) {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->tryAdvance(action);
}

int64_t SpinedBuffer$OfDouble$1Splitr::MemberClass0$::estimateSize() {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->estimateSize();
}

int64_t SpinedBuffer$OfDouble$1Splitr::MemberClass0$::getExactSizeIfKnown() {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->getExactSizeIfKnown();
}

int32_t SpinedBuffer$OfDouble$1Splitr::MemberClass0$::characteristics() {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->characteristics();
}

bool SpinedBuffer$OfDouble$1Splitr::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* SpinedBuffer$OfDouble$1Splitr::MemberClass0$::getComparator() {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->getComparator();
}

int32_t SpinedBuffer$OfDouble$1Splitr::MemberClass0$::hashCode() {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->hashCode();
}

bool SpinedBuffer$OfDouble$1Splitr::MemberClass0$::equals(Object$* obj) {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->equals(obj);
}

$Object* SpinedBuffer$OfDouble$1Splitr::MemberClass0$::clone() {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->clone();
}

$String* SpinedBuffer$OfDouble$1Splitr::MemberClass0$::toString() {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->toString();
}

void SpinedBuffer$OfDouble$1Splitr::MemberClass0$::finalize() {
	return ((SpinedBuffer$OfDouble$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfDouble$1Splitr, memberClass0$)))->finalize();
}

void SpinedBuffer$OfDouble$1Splitr::init$($SpinedBuffer$OfDouble* this$0, int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {
	$set(this, this$0, this$0);
	$SpinedBuffer$OfPrimitive$BaseSpliterator::init$(this$0, firstSpineIndex, lastSpineIndex, firstSpineElementIndex, lastSpineElementFence);
}

$Spliterator$OfPrimitive* SpinedBuffer$OfDouble$1Splitr::newSpliterator(int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {
	return static_cast<$Spliterator$OfPrimitive*>(static_cast<$SpinedBuffer$OfPrimitive$BaseSpliterator*>($new(SpinedBuffer$OfDouble$1Splitr, this->this$0, firstSpineIndex, lastSpineIndex, firstSpineElementIndex, lastSpineElementFence)));
}

void SpinedBuffer$OfDouble$1Splitr::arrayForOne($doubles* array, int32_t index, $DoubleConsumer* consumer) {
	$nc(consumer)->accept($nc(array)->get(index));
}

$Spliterator$OfDouble* SpinedBuffer$OfDouble$1Splitr::arraySpliterator($doubles* array, int32_t offset, int32_t len) {
	return $Arrays::spliterator(array, offset, offset + len);
}

$Spliterator$OfPrimitive* SpinedBuffer$OfDouble$1Splitr::arraySpliterator(Object$* array, int32_t offset, int32_t len) {
	return this->arraySpliterator($cast($doubles, array), offset, len);
}

void SpinedBuffer$OfDouble$1Splitr::arrayForOne(Object$* array, int32_t index, Object$* consumer) {
	this->arrayForOne($cast($doubles, array), index, $cast($DoubleConsumer, consumer));
}

void SpinedBuffer$OfDouble$1Splitr::forEachRemaining($DoubleConsumer* consumer) {
	$SpinedBuffer$OfPrimitive$BaseSpliterator::forEachRemaining($of(consumer));
}

bool SpinedBuffer$OfDouble$1Splitr::tryAdvance($DoubleConsumer* consumer) {
	return $SpinedBuffer$OfPrimitive$BaseSpliterator::tryAdvance($of(consumer));
}

$Spliterator* SpinedBuffer$OfDouble$1Splitr::trySplit() {
	return $cast($Spliterator$OfDouble, $cast($Spliterator$OfPrimitive, $SpinedBuffer$OfPrimitive$BaseSpliterator::trySplit()));
}

SpinedBuffer$OfDouble$1Splitr::SpinedBuffer$OfDouble$1Splitr() {
}

$Class* SpinedBuffer$OfDouble$1Splitr::load$($String* name, bool initialize) {
	$loadClass(SpinedBuffer$OfDouble$1Splitr, name, initialize, &_SpinedBuffer$OfDouble$1Splitr_ClassInfo_, allocate$SpinedBuffer$OfDouble$1Splitr);
	return class$;
}

$Class* SpinedBuffer$OfDouble$1Splitr::class$ = nullptr;

		} // stream
	} // util
} // java