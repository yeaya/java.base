#include <java/util/stream/SpinedBuffer$OfLong$1Splitr.h>

#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/SpinedBuffer$OfLong.h>
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
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $LongConsumer = ::java::util::function::LongConsumer;
using $SpinedBuffer$OfLong = ::java::util::stream::SpinedBuffer$OfLong;
using $SpinedBuffer$OfPrimitive = ::java::util::stream::SpinedBuffer$OfPrimitive;
using $SpinedBuffer$OfPrimitive$BaseSpliterator = ::java::util::stream::SpinedBuffer$OfPrimitive$BaseSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SpinedBuffer$OfLong$1Splitr_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SpinedBuffer$OfLong;", nullptr, $FINAL | $SYNTHETIC, $field(SpinedBuffer$OfLong$1Splitr, this$0)},
	{}
};

$MethodInfo _SpinedBuffer$OfLong$1Splitr_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/stream/SpinedBuffer$OfLong;IIII)V", nullptr, 0, $method(static_cast<void(SpinedBuffer$OfLong$1Splitr::*)($SpinedBuffer$OfLong*,int32_t,int32_t,int32_t,int32_t)>(&SpinedBuffer$OfLong$1Splitr::init$))},
	{"arrayForOne", "([JILjava/util/function/LongConsumer;)V", nullptr, 0},
	{"arrayForOne", "(Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"arraySpliterator", "([JII)Ljava/util/Spliterator$OfLong;", nullptr, 0},
	{"arraySpliterator", "(Ljava/lang/Object;II)Ljava/util/Spliterator$OfPrimitive;", nullptr, $VOLATILE | $SYNTHETIC},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"newSpliterator", "(IIII)Ljava/util/stream/SpinedBuffer$OfLong$1Splitr;", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _SpinedBuffer$OfLong$1Splitr_EnclosingMethodInfo_ = {
	"java.util.stream.SpinedBuffer$OfLong",
	"spliterator",
	"()Ljava/util/Spliterator$OfLong;"
};

$InnerClassInfo _SpinedBuffer$OfLong$1Splitr_InnerClassesInfo_[] = {
	{"java.util.stream.SpinedBuffer$OfLong", "java.util.stream.SpinedBuffer", "OfLong", $STATIC},
	{"java.util.stream.SpinedBuffer$OfLong$1Splitr", nullptr, "Splitr", 0},
	{"java.util.stream.SpinedBuffer$OfPrimitive", "java.util.stream.SpinedBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator", "java.util.stream.SpinedBuffer$OfPrimitive", "BaseSpliterator", $ABSTRACT},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpinedBuffer$OfLong$1Splitr_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SpinedBuffer$OfLong$1Splitr",
	"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator",
	"java.util.Spliterator$OfLong",
	_SpinedBuffer$OfLong$1Splitr_FieldInfo_,
	_SpinedBuffer$OfLong$1Splitr_MethodInfo_,
	"Ljava/util/stream/SpinedBuffer$OfPrimitive<Ljava/lang/Long;[JLjava/util/function/LongConsumer;>.BaseSpliterator<Ljava/util/Spliterator$OfLong;>;Ljava/util/Spliterator$OfLong;",
	&_SpinedBuffer$OfLong$1Splitr_EnclosingMethodInfo_,
	_SpinedBuffer$OfLong$1Splitr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SpinedBuffer"
};

$Object* allocate$SpinedBuffer$OfLong$1Splitr($Class* clazz) {
	return $of($alloc(SpinedBuffer$OfLong$1Splitr));
}

int64_t SpinedBuffer$OfLong$1Splitr::estimateSize() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::estimateSize();
}

int32_t SpinedBuffer$OfLong$1Splitr::characteristics() {
	 return this->$SpinedBuffer$OfPrimitive$BaseSpliterator::characteristics();
}

bool SpinedBuffer$OfLong$1Splitr::tryAdvance(Object$* consumer) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::tryAdvance(consumer);
}

void SpinedBuffer$OfLong$1Splitr::forEachRemaining(Object$* consumer) {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::forEachRemaining(consumer);
}

bool SpinedBuffer$OfLong$1Splitr::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::tryAdvance(action);
}

void SpinedBuffer$OfLong$1Splitr::forEachRemaining($Consumer* action) {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::forEachRemaining(action);
}

int64_t SpinedBuffer$OfLong$1Splitr::getExactSizeIfKnown() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::getExactSizeIfKnown();
}

bool SpinedBuffer$OfLong$1Splitr::hasCharacteristics(int32_t characteristics) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::hasCharacteristics(characteristics);
}

$Comparator* SpinedBuffer$OfLong$1Splitr::getComparator() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::getComparator();
}

int32_t SpinedBuffer$OfLong$1Splitr::hashCode() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::hashCode();
}

bool SpinedBuffer$OfLong$1Splitr::equals(Object$* obj) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::equals(obj);
}

$Object* SpinedBuffer$OfLong$1Splitr::clone() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::clone();
}

$String* SpinedBuffer$OfLong$1Splitr::toString() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::toString();
}

void SpinedBuffer$OfLong$1Splitr::finalize() {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::finalize();
}

$Object0* SpinedBuffer$OfLong$1Splitr::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$));
}

$Spliterator$OfLong* SpinedBuffer$OfLong$1Splitr::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfLong, ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->trySplit());
}

bool SpinedBuffer$OfLong$1Splitr::MemberClass0$::tryAdvance($LongConsumer* action) {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->tryAdvance(action);
}

void SpinedBuffer$OfLong$1Splitr::MemberClass0$::forEachRemaining($LongConsumer* action) {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->forEachRemaining(action);
}

bool SpinedBuffer$OfLong$1Splitr::MemberClass0$::tryAdvance($Consumer* action) {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->tryAdvance(action);
}

void SpinedBuffer$OfLong$1Splitr::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->forEachRemaining(action);
}

void SpinedBuffer$OfLong$1Splitr::MemberClass0$::forEachRemaining(Object$* action) {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->forEachRemaining(action);
}

bool SpinedBuffer$OfLong$1Splitr::MemberClass0$::tryAdvance(Object$* action) {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->tryAdvance(action);
}

int64_t SpinedBuffer$OfLong$1Splitr::MemberClass0$::estimateSize() {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->estimateSize();
}

int64_t SpinedBuffer$OfLong$1Splitr::MemberClass0$::getExactSizeIfKnown() {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->getExactSizeIfKnown();
}

int32_t SpinedBuffer$OfLong$1Splitr::MemberClass0$::characteristics() {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->characteristics();
}

bool SpinedBuffer$OfLong$1Splitr::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* SpinedBuffer$OfLong$1Splitr::MemberClass0$::getComparator() {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->getComparator();
}

int32_t SpinedBuffer$OfLong$1Splitr::MemberClass0$::hashCode() {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->hashCode();
}

bool SpinedBuffer$OfLong$1Splitr::MemberClass0$::equals(Object$* obj) {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->equals(obj);
}

$Object* SpinedBuffer$OfLong$1Splitr::MemberClass0$::clone() {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->clone();
}

$String* SpinedBuffer$OfLong$1Splitr::MemberClass0$::toString() {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->toString();
}

void SpinedBuffer$OfLong$1Splitr::MemberClass0$::finalize() {
	return ((SpinedBuffer$OfLong$1Splitr*)(void*)((int8_t*)(void*)this - $offsetof(SpinedBuffer$OfLong$1Splitr, memberClass0$)))->finalize();
}

void SpinedBuffer$OfLong$1Splitr::init$($SpinedBuffer$OfLong* this$0, int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {
	$set(this, this$0, this$0);
	$SpinedBuffer$OfPrimitive$BaseSpliterator::init$(this$0, firstSpineIndex, lastSpineIndex, firstSpineElementIndex, lastSpineElementFence);
}

$Spliterator$OfPrimitive* SpinedBuffer$OfLong$1Splitr::newSpliterator(int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {
	return static_cast<$Spliterator$OfPrimitive*>(static_cast<$SpinedBuffer$OfPrimitive$BaseSpliterator*>($new(SpinedBuffer$OfLong$1Splitr, this->this$0, firstSpineIndex, lastSpineIndex, firstSpineElementIndex, lastSpineElementFence)));
}

void SpinedBuffer$OfLong$1Splitr::arrayForOne($longs* array, int32_t index, $LongConsumer* consumer) {
	$nc(consumer)->accept($nc(array)->get(index));
}

$Spliterator$OfLong* SpinedBuffer$OfLong$1Splitr::arraySpliterator($longs* array, int32_t offset, int32_t len) {
	return $Arrays::spliterator(array, offset, offset + len);
}

$Spliterator$OfPrimitive* SpinedBuffer$OfLong$1Splitr::arraySpliterator(Object$* array, int32_t offset, int32_t len) {
	return this->arraySpliterator($cast($longs, array), offset, len);
}

void SpinedBuffer$OfLong$1Splitr::arrayForOne(Object$* array, int32_t index, Object$* consumer) {
	this->arrayForOne($cast($longs, array), index, $cast($LongConsumer, consumer));
}

void SpinedBuffer$OfLong$1Splitr::forEachRemaining($LongConsumer* consumer) {
	$SpinedBuffer$OfPrimitive$BaseSpliterator::forEachRemaining($of(consumer));
}

bool SpinedBuffer$OfLong$1Splitr::tryAdvance($LongConsumer* consumer) {
	return $SpinedBuffer$OfPrimitive$BaseSpliterator::tryAdvance($of(consumer));
}

$Spliterator* SpinedBuffer$OfLong$1Splitr::trySplit() {
	return $cast($Spliterator$OfLong, $cast($Spliterator$OfPrimitive, $SpinedBuffer$OfPrimitive$BaseSpliterator::trySplit()));
}

SpinedBuffer$OfLong$1Splitr::SpinedBuffer$OfLong$1Splitr() {
}

$Class* SpinedBuffer$OfLong$1Splitr::load$($String* name, bool initialize) {
	$loadClass(SpinedBuffer$OfLong$1Splitr, name, initialize, &_SpinedBuffer$OfLong$1Splitr_ClassInfo_, allocate$SpinedBuffer$OfLong$1Splitr);
	return class$;
}

$Class* SpinedBuffer$OfLong$1Splitr::class$ = nullptr;

		} // stream
	} // util
} // java