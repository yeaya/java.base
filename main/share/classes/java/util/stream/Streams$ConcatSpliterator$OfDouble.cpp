#include <java/util/stream/Streams$ConcatSpliterator$OfDouble.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/Streams$ConcatSpliterator$OfPrimitive.h>
#include <java/util/stream/Streams$ConcatSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $Streams$ConcatSpliterator = ::java::util::stream::Streams$ConcatSpliterator;
using $Streams$ConcatSpliterator$OfPrimitive = ::java::util::stream::Streams$ConcatSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Streams$ConcatSpliterator$OfDouble_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/Spliterator$OfDouble;Ljava/util/Spliterator$OfDouble;)V", nullptr, 0, $method(static_cast<void(Streams$ConcatSpliterator$OfDouble::*)($Spliterator$OfDouble*,$Spliterator$OfDouble*)>(&Streams$ConcatSpliterator$OfDouble::init$))},
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Streams$ConcatSpliterator$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$ConcatSpliterator", "java.util.stream.Streams", "ConcatSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$ConcatSpliterator$OfDouble", "java.util.stream.Streams$ConcatSpliterator", "OfDouble", $STATIC},
	{"java.util.stream.Streams$ConcatSpliterator$OfPrimitive", "java.util.stream.Streams$ConcatSpliterator", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Streams$ConcatSpliterator$OfDouble_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Streams$ConcatSpliterator$OfDouble",
	"java.util.stream.Streams$ConcatSpliterator$OfPrimitive",
	"java.util.Spliterator$OfDouble",
	nullptr,
	_Streams$ConcatSpliterator$OfDouble_MethodInfo_,
	"Ljava/util/stream/Streams$ConcatSpliterator$OfPrimitive<Ljava/lang/Double;Ljava/util/function/DoubleConsumer;Ljava/util/Spliterator$OfDouble;>;Ljava/util/Spliterator$OfDouble;",
	nullptr,
	_Streams$ConcatSpliterator$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$ConcatSpliterator$OfDouble($Class* clazz) {
	return $of($alloc(Streams$ConcatSpliterator$OfDouble));
}

bool Streams$ConcatSpliterator$OfDouble::tryAdvance(Object$* action) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::tryAdvance(action);
}

void Streams$ConcatSpliterator$OfDouble::forEachRemaining(Object$* action) {
	$as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfDouble::tryAdvance($Consumer* consumer) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::tryAdvance(consumer);
}

void Streams$ConcatSpliterator$OfDouble::forEachRemaining($Consumer* consumer) {
	$as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::forEachRemaining(consumer);
}

int64_t Streams$ConcatSpliterator$OfDouble::estimateSize() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::estimateSize();
}

int32_t Streams$ConcatSpliterator$OfDouble::characteristics() {
	 return this->$Streams$ConcatSpliterator$OfPrimitive::characteristics();
}

$Comparator* Streams$ConcatSpliterator$OfDouble::getComparator() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::getComparator();
}

int64_t Streams$ConcatSpliterator$OfDouble::getExactSizeIfKnown() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::getExactSizeIfKnown();
}

bool Streams$ConcatSpliterator$OfDouble::hasCharacteristics(int32_t characteristics) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::hasCharacteristics(characteristics);
}

int32_t Streams$ConcatSpliterator$OfDouble::hashCode() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::hashCode();
}

bool Streams$ConcatSpliterator$OfDouble::equals(Object$* obj) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::equals(obj);
}

$Object* Streams$ConcatSpliterator$OfDouble::clone() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::clone();
}

$String* Streams$ConcatSpliterator$OfDouble::toString() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::toString();
}

void Streams$ConcatSpliterator$OfDouble::finalize() {
	$as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::finalize();
}

$Object0* Streams$ConcatSpliterator$OfDouble::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$));
}

$Spliterator$OfDouble* Streams$ConcatSpliterator$OfDouble::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfDouble, ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->trySplit());
}

bool Streams$ConcatSpliterator$OfDouble::MemberClass0$::tryAdvance($DoubleConsumer* action) {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

void Streams$ConcatSpliterator$OfDouble::MemberClass0$::forEachRemaining($DoubleConsumer* action) {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfDouble::MemberClass0$::tryAdvance($Consumer* action) {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

void Streams$ConcatSpliterator$OfDouble::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

void Streams$ConcatSpliterator$OfDouble::MemberClass0$::forEachRemaining(Object$* action) {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

bool Streams$ConcatSpliterator$OfDouble::MemberClass0$::tryAdvance(Object$* action) {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

int64_t Streams$ConcatSpliterator$OfDouble::MemberClass0$::estimateSize() {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->estimateSize();
}

int64_t Streams$ConcatSpliterator$OfDouble::MemberClass0$::getExactSizeIfKnown() {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->getExactSizeIfKnown();
}

int32_t Streams$ConcatSpliterator$OfDouble::MemberClass0$::characteristics() {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->characteristics();
}

bool Streams$ConcatSpliterator$OfDouble::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* Streams$ConcatSpliterator$OfDouble::MemberClass0$::getComparator() {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->getComparator();
}

int32_t Streams$ConcatSpliterator$OfDouble::MemberClass0$::hashCode() {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->hashCode();
}

bool Streams$ConcatSpliterator$OfDouble::MemberClass0$::equals(Object$* obj) {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->equals(obj);
}

$Object* Streams$ConcatSpliterator$OfDouble::MemberClass0$::clone() {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->clone();
}

$String* Streams$ConcatSpliterator$OfDouble::MemberClass0$::toString() {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->toString();
}

void Streams$ConcatSpliterator$OfDouble::MemberClass0$::finalize() {
	return ((Streams$ConcatSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(Streams$ConcatSpliterator$OfDouble, memberClass0$)))->finalize();
}

void Streams$ConcatSpliterator$OfDouble::init$($Spliterator$OfDouble* aSpliterator, $Spliterator$OfDouble* bSpliterator) {
	$Streams$ConcatSpliterator$OfPrimitive::init$(aSpliterator, bSpliterator);
}

void Streams$ConcatSpliterator$OfDouble::forEachRemaining($DoubleConsumer* action) {
	$Streams$ConcatSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool Streams$ConcatSpliterator$OfDouble::tryAdvance($DoubleConsumer* action) {
	return $Streams$ConcatSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* Streams$ConcatSpliterator$OfDouble::trySplit() {
	return $cast($Spliterator$OfDouble, $Streams$ConcatSpliterator$OfPrimitive::trySplit());
}

Streams$ConcatSpliterator$OfDouble::Streams$ConcatSpliterator$OfDouble() {
}

$Class* Streams$ConcatSpliterator$OfDouble::load$($String* name, bool initialize) {
	$loadClass(Streams$ConcatSpliterator$OfDouble, name, initialize, &_Streams$ConcatSpliterator$OfDouble_ClassInfo_, allocate$Streams$ConcatSpliterator$OfDouble);
	return class$;
}

$Class* Streams$ConcatSpliterator$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java