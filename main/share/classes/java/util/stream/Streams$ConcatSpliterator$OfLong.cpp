#include <java/util/stream/Streams$ConcatSpliterator$OfLong.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/Streams$ConcatSpliterator$OfPrimitive.h>
#include <java/util/stream/Streams$ConcatSpliterator.h>
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
using $Streams$ConcatSpliterator$OfPrimitive = ::java::util::stream::Streams$ConcatSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Streams$ConcatSpliterator$OfLong_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfLong;Ljava/util/Spliterator$OfLong;)V", nullptr, 0, $method(Streams$ConcatSpliterator$OfLong, init$, void, $Spliterator$OfLong*, $Spliterator$OfLong*)},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Streams$ConcatSpliterator$OfLong, forEachRemaining, void, $LongConsumer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Streams$ConcatSpliterator$OfLong, tryAdvance, bool, $LongConsumer*)},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Streams$ConcatSpliterator$OfLong, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _Streams$ConcatSpliterator$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$ConcatSpliterator", "java.util.stream.Streams", "ConcatSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$ConcatSpliterator$OfLong", "java.util.stream.Streams$ConcatSpliterator", "OfLong", $STATIC},
	{"java.util.stream.Streams$ConcatSpliterator$OfPrimitive", "java.util.stream.Streams$ConcatSpliterator", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Streams$ConcatSpliterator$OfLong_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Streams$ConcatSpliterator$OfLong",
	"java.util.stream.Streams$ConcatSpliterator$OfPrimitive",
	"java.util.Spliterator$OfLong",
	nullptr,
	_Streams$ConcatSpliterator$OfLong_MethodInfo_,
	"Ljava/util/stream/Streams$ConcatSpliterator$OfPrimitive<Ljava/lang/Long;Ljava/util/function/LongConsumer;Ljava/util/Spliterator$OfLong;>;Ljava/util/Spliterator$OfLong;",
	nullptr,
	_Streams$ConcatSpliterator$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$ConcatSpliterator$OfLong($Class* clazz) {
	return $of($alloc(Streams$ConcatSpliterator$OfLong));
}

bool Streams$ConcatSpliterator$OfLong::tryAdvance(Object$* action) {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::tryAdvance(action);
}

void Streams$ConcatSpliterator$OfLong::forEachRemaining(Object$* action) {
	this->$Streams$ConcatSpliterator$OfPrimitive::forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfLong::tryAdvance($Consumer* consumer) {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::tryAdvance(consumer);
}

void Streams$ConcatSpliterator$OfLong::forEachRemaining($Consumer* consumer) {
	this->$Streams$ConcatSpliterator$OfPrimitive::forEachRemaining(consumer);
}

int64_t Streams$ConcatSpliterator$OfLong::estimateSize() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::estimateSize();
}

int32_t Streams$ConcatSpliterator$OfLong::characteristics() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::characteristics();
}

$Comparator* Streams$ConcatSpliterator$OfLong::getComparator() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::getComparator();
}

int64_t Streams$ConcatSpliterator$OfLong::getExactSizeIfKnown() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::getExactSizeIfKnown();
}

bool Streams$ConcatSpliterator$OfLong::hasCharacteristics(int32_t characteristics) {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::hasCharacteristics(characteristics);
}

int32_t Streams$ConcatSpliterator$OfLong::hashCode() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::hashCode();
}

bool Streams$ConcatSpliterator$OfLong::equals(Object$* obj) {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::equals(obj);
}

$Object* Streams$ConcatSpliterator$OfLong::clone() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::clone();
}

$String* Streams$ConcatSpliterator$OfLong::toString() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::toString();
}

void Streams$ConcatSpliterator$OfLong::finalize() {
	this->$Streams$ConcatSpliterator$OfPrimitive::finalize();
}

Streams$ConcatSpliterator$OfLong::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Streams$ConcatSpliterator$OfLong, $Spliterator$OfLong, memberClass0$);
}

$Spliterator$OfLong* Streams$ConcatSpliterator$OfLong::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfLong, ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->trySplit());
}

bool Streams$ConcatSpliterator$OfLong::MemberClass0$::tryAdvance($LongConsumer* action) {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void Streams$ConcatSpliterator$OfLong::MemberClass0$::forEachRemaining($LongConsumer* action) {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfLong::MemberClass0$::tryAdvance($Consumer* action) {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void Streams$ConcatSpliterator$OfLong::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

void Streams$ConcatSpliterator$OfLong::MemberClass0$::forEachRemaining(Object$* action) {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfLong::MemberClass0$::tryAdvance(Object$* action) {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

int64_t Streams$ConcatSpliterator$OfLong::MemberClass0$::estimateSize() {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->estimateSize();
}

int64_t Streams$ConcatSpliterator$OfLong::MemberClass0$::getExactSizeIfKnown() {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->getExactSizeIfKnown();
}

int32_t Streams$ConcatSpliterator$OfLong::MemberClass0$::characteristics() {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->characteristics();
}

bool Streams$ConcatSpliterator$OfLong::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* Streams$ConcatSpliterator$OfLong::MemberClass0$::getComparator() {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->getComparator();
}

int32_t Streams$ConcatSpliterator$OfLong::MemberClass0$::hashCode() {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->hashCode();
}

bool Streams$ConcatSpliterator$OfLong::MemberClass0$::equals(Object$* obj) {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->equals(obj);
}

$Object* Streams$ConcatSpliterator$OfLong::MemberClass0$::clone() {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->clone();
}

$String* Streams$ConcatSpliterator$OfLong::MemberClass0$::toString() {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->toString();
}

void Streams$ConcatSpliterator$OfLong::MemberClass0$::finalize() {
	return ((Streams$ConcatSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfLong, memberClass0$)))->finalize();
}

void Streams$ConcatSpliterator$OfLong::init$($Spliterator$OfLong* aSpliterator, $Spliterator$OfLong* bSpliterator) {
	$Streams$ConcatSpliterator$OfPrimitive::init$(aSpliterator, bSpliterator);
}

void Streams$ConcatSpliterator$OfLong::forEachRemaining($LongConsumer* action) {
	$Streams$ConcatSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool Streams$ConcatSpliterator$OfLong::tryAdvance($LongConsumer* action) {
	return $Streams$ConcatSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* Streams$ConcatSpliterator$OfLong::trySplit() {
	return $cast($Spliterator$OfLong, $Streams$ConcatSpliterator$OfPrimitive::trySplit());
}

Streams$ConcatSpliterator$OfLong::Streams$ConcatSpliterator$OfLong() {
}

$Class* Streams$ConcatSpliterator$OfLong::load$($String* name, bool initialize) {
	$loadClass(Streams$ConcatSpliterator$OfLong, name, initialize, &_Streams$ConcatSpliterator$OfLong_ClassInfo_, allocate$Streams$ConcatSpliterator$OfLong);
	return class$;
}

$Class* Streams$ConcatSpliterator$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java