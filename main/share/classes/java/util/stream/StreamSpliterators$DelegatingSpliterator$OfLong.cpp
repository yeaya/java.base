#include <java/util/stream/StreamSpliterators$DelegatingSpliterator$OfLong.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/StreamSpliterators$DelegatingSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$DelegatingSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $LongConsumer = ::java::util::function::LongConsumer;
using $Supplier = ::java::util::function::Supplier;
using $StreamSpliterators$DelegatingSpliterator = ::java::util::stream::StreamSpliterators$DelegatingSpliterator;
using $StreamSpliterators$DelegatingSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$DelegatingSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _StreamSpliterators$DelegatingSpliterator$OfLong_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/util/Spliterator$OfLong;>;)V", 0, $method(static_cast<void(StreamSpliterators$DelegatingSpliterator$OfLong::*)($Supplier*)>(&StreamSpliterators$DelegatingSpliterator$OfLong::init$))},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<void(StreamSpliterators$DelegatingSpliterator$OfLong::*)($LongConsumer*)>(&StreamSpliterators$DelegatingSpliterator$OfLong::forEachRemaining))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<bool(StreamSpliterators$DelegatingSpliterator$OfLong::*)($LongConsumer*)>(&StreamSpliterators$DelegatingSpliterator$OfLong::tryAdvance))},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _StreamSpliterators$DelegatingSpliterator$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator", "java.util.stream.StreamSpliterators", "DelegatingSpliterator", $STATIC},
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfLong", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfPrimitive", $STATIC},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$DelegatingSpliterator$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfLong",
	"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfPrimitive",
	"java.util.Spliterator$OfLong",
	nullptr,
	_StreamSpliterators$DelegatingSpliterator$OfLong_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$DelegatingSpliterator$OfPrimitive<Ljava/lang/Long;Ljava/util/function/LongConsumer;Ljava/util/Spliterator$OfLong;>;Ljava/util/Spliterator$OfLong;",
	nullptr,
	_StreamSpliterators$DelegatingSpliterator$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$DelegatingSpliterator$OfLong($Class* clazz) {
	return $of($alloc(StreamSpliterators$DelegatingSpliterator$OfLong));
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::tryAdvance(Object$* consumer) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::tryAdvance(consumer);
}

void StreamSpliterators$DelegatingSpliterator$OfLong::forEachRemaining(Object$* consumer) {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::forEachRemaining(consumer);
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::tryAdvance($Consumer* consumer) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::tryAdvance(consumer);
}

void StreamSpliterators$DelegatingSpliterator$OfLong::forEachRemaining($Consumer* consumer) {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::forEachRemaining(consumer);
}

int64_t StreamSpliterators$DelegatingSpliterator$OfLong::estimateSize() {
	 return this->$StreamSpliterators$DelegatingSpliterator$OfPrimitive::estimateSize();
}

int32_t StreamSpliterators$DelegatingSpliterator$OfLong::characteristics() {
	 return this->$StreamSpliterators$DelegatingSpliterator$OfPrimitive::characteristics();
}

$Comparator* StreamSpliterators$DelegatingSpliterator$OfLong::getComparator() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::getComparator();
}

int64_t StreamSpliterators$DelegatingSpliterator$OfLong::getExactSizeIfKnown() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::getExactSizeIfKnown();
}

$String* StreamSpliterators$DelegatingSpliterator$OfLong::toString() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::toString();
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::hasCharacteristics(int32_t characteristics) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::hasCharacteristics(characteristics);
}

int32_t StreamSpliterators$DelegatingSpliterator$OfLong::hashCode() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::hashCode();
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::equals(Object$* obj) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::equals(obj);
}

$Object* StreamSpliterators$DelegatingSpliterator$OfLong::clone() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::clone();
}

void StreamSpliterators$DelegatingSpliterator$OfLong::finalize() {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::finalize();
}

$Object0* StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$));
}

$Spliterator$OfLong* StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfLong, ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->trySplit());
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::tryAdvance($LongConsumer* action) {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::forEachRemaining($LongConsumer* action) {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::characteristics() {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->characteristics();
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::getComparator() {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::hashCode() {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->hashCode();
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::clone() {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->clone();
}

$String* StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::toString() {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->toString();
}

void StreamSpliterators$DelegatingSpliterator$OfLong::MemberClass0$::finalize() {
	return ((StreamSpliterators$DelegatingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$DelegatingSpliterator$OfLong, memberClass0$)))->finalize();
}

void StreamSpliterators$DelegatingSpliterator$OfLong::init$($Supplier* supplier) {
	$StreamSpliterators$DelegatingSpliterator$OfPrimitive::init$(supplier);
}

void StreamSpliterators$DelegatingSpliterator$OfLong::forEachRemaining($LongConsumer* consumer) {
	$StreamSpliterators$DelegatingSpliterator$OfPrimitive::forEachRemaining($of(consumer));
}

bool StreamSpliterators$DelegatingSpliterator$OfLong::tryAdvance($LongConsumer* consumer) {
	return $StreamSpliterators$DelegatingSpliterator$OfPrimitive::tryAdvance($of(consumer));
}

$Spliterator* StreamSpliterators$DelegatingSpliterator$OfLong::trySplit() {
	return $cast($Spliterator$OfLong, $StreamSpliterators$DelegatingSpliterator$OfPrimitive::trySplit());
}

StreamSpliterators$DelegatingSpliterator$OfLong::StreamSpliterators$DelegatingSpliterator$OfLong() {
}

$Class* StreamSpliterators$DelegatingSpliterator$OfLong::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$DelegatingSpliterator$OfLong, name, initialize, &_StreamSpliterators$DelegatingSpliterator$OfLong_ClassInfo_, allocate$StreamSpliterators$DelegatingSpliterator$OfLong);
	return class$;
}

$Class* StreamSpliterators$DelegatingSpliterator$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java