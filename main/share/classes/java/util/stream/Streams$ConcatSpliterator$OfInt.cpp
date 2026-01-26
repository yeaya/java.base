#include <java/util/stream/Streams$ConcatSpliterator$OfInt.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/Streams$ConcatSpliterator$OfPrimitive.h>
#include <java/util/stream/Streams$ConcatSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;
using $Streams$ConcatSpliterator$OfPrimitive = ::java::util::stream::Streams$ConcatSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Streams$ConcatSpliterator$OfInt_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/Spliterator$OfInt;Ljava/util/Spliterator$OfInt;)V", nullptr, 0, $method(Streams$ConcatSpliterator$OfInt, init$, void, $Spliterator$OfInt*, $Spliterator$OfInt*)},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Streams$ConcatSpliterator$OfInt, forEachRemaining, void, $IntConsumer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Streams$ConcatSpliterator$OfInt, tryAdvance, bool, $IntConsumer*)},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Streams$ConcatSpliterator$OfInt, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _Streams$ConcatSpliterator$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$ConcatSpliterator", "java.util.stream.Streams", "ConcatSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$ConcatSpliterator$OfInt", "java.util.stream.Streams$ConcatSpliterator", "OfInt", $STATIC},
	{"java.util.stream.Streams$ConcatSpliterator$OfPrimitive", "java.util.stream.Streams$ConcatSpliterator", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Streams$ConcatSpliterator$OfInt_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Streams$ConcatSpliterator$OfInt",
	"java.util.stream.Streams$ConcatSpliterator$OfPrimitive",
	"java.util.Spliterator$OfInt",
	nullptr,
	_Streams$ConcatSpliterator$OfInt_MethodInfo_,
	"Ljava/util/stream/Streams$ConcatSpliterator$OfPrimitive<Ljava/lang/Integer;Ljava/util/function/IntConsumer;Ljava/util/Spliterator$OfInt;>;Ljava/util/Spliterator$OfInt;",
	nullptr,
	_Streams$ConcatSpliterator$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$ConcatSpliterator$OfInt($Class* clazz) {
	return $of($alloc(Streams$ConcatSpliterator$OfInt));
}

bool Streams$ConcatSpliterator$OfInt::tryAdvance(Object$* action) {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::tryAdvance(action);
}

void Streams$ConcatSpliterator$OfInt::forEachRemaining(Object$* action) {
	this->$Streams$ConcatSpliterator$OfPrimitive::forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfInt::tryAdvance($Consumer* consumer) {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::tryAdvance(consumer);
}

void Streams$ConcatSpliterator$OfInt::forEachRemaining($Consumer* consumer) {
	this->$Streams$ConcatSpliterator$OfPrimitive::forEachRemaining(consumer);
}

int64_t Streams$ConcatSpliterator$OfInt::estimateSize() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::estimateSize();
}

int32_t Streams$ConcatSpliterator$OfInt::characteristics() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::characteristics();
}

$Comparator* Streams$ConcatSpliterator$OfInt::getComparator() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::getComparator();
}

int64_t Streams$ConcatSpliterator$OfInt::getExactSizeIfKnown() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::getExactSizeIfKnown();
}

bool Streams$ConcatSpliterator$OfInt::hasCharacteristics(int32_t characteristics) {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::hasCharacteristics(characteristics);
}

int32_t Streams$ConcatSpliterator$OfInt::hashCode() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::hashCode();
}

bool Streams$ConcatSpliterator$OfInt::equals(Object$* obj) {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::equals(obj);
}

$Object* Streams$ConcatSpliterator$OfInt::clone() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::clone();
}

$String* Streams$ConcatSpliterator$OfInt::toString() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::toString();
}

void Streams$ConcatSpliterator$OfInt::finalize() {
	this->$Streams$ConcatSpliterator$OfPrimitive::finalize();
}

Streams$ConcatSpliterator$OfInt::MemberClass0$::MemberClass0$() {
	$patchMemberClass(Streams$ConcatSpliterator$OfInt, $Spliterator$OfInt, memberClass0$);
}

$Spliterator$OfInt* Streams$ConcatSpliterator$OfInt::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfInt, ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->trySplit());
}

bool Streams$ConcatSpliterator$OfInt::MemberClass0$::tryAdvance($IntConsumer* action) {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

void Streams$ConcatSpliterator$OfInt::MemberClass0$::forEachRemaining($IntConsumer* action) {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfInt::MemberClass0$::tryAdvance($Consumer* action) {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

void Streams$ConcatSpliterator$OfInt::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

void Streams$ConcatSpliterator$OfInt::MemberClass0$::forEachRemaining(Object$* action) {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfInt::MemberClass0$::tryAdvance(Object$* action) {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

int64_t Streams$ConcatSpliterator$OfInt::MemberClass0$::estimateSize() {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->estimateSize();
}

int64_t Streams$ConcatSpliterator$OfInt::MemberClass0$::getExactSizeIfKnown() {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->getExactSizeIfKnown();
}

int32_t Streams$ConcatSpliterator$OfInt::MemberClass0$::characteristics() {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->characteristics();
}

bool Streams$ConcatSpliterator$OfInt::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* Streams$ConcatSpliterator$OfInt::MemberClass0$::getComparator() {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->getComparator();
}

int32_t Streams$ConcatSpliterator$OfInt::MemberClass0$::hashCode() {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->hashCode();
}

bool Streams$ConcatSpliterator$OfInt::MemberClass0$::equals(Object$* obj) {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->equals(obj);
}

$Object* Streams$ConcatSpliterator$OfInt::MemberClass0$::clone() {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->clone();
}

$String* Streams$ConcatSpliterator$OfInt::MemberClass0$::toString() {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->toString();
}

void Streams$ConcatSpliterator$OfInt::MemberClass0$::finalize() {
	return ((Streams$ConcatSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfInt, memberClass0$)))->finalize();
}

void Streams$ConcatSpliterator$OfInt::init$($Spliterator$OfInt* aSpliterator, $Spliterator$OfInt* bSpliterator) {
	$Streams$ConcatSpliterator$OfPrimitive::init$(aSpliterator, bSpliterator);
}

void Streams$ConcatSpliterator$OfInt::forEachRemaining($IntConsumer* action) {
	$Streams$ConcatSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool Streams$ConcatSpliterator$OfInt::tryAdvance($IntConsumer* action) {
	return $Streams$ConcatSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* Streams$ConcatSpliterator$OfInt::trySplit() {
	return $cast($Spliterator$OfInt, $Streams$ConcatSpliterator$OfPrimitive::trySplit());
}

Streams$ConcatSpliterator$OfInt::Streams$ConcatSpliterator$OfInt() {
}

$Class* Streams$ConcatSpliterator$OfInt::load$($String* name, bool initialize) {
	$loadClass(Streams$ConcatSpliterator$OfInt, name, initialize, &_Streams$ConcatSpliterator$OfInt_ClassInfo_, allocate$Streams$ConcatSpliterator$OfInt);
	return class$;
}

$Class* Streams$ConcatSpliterator$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java