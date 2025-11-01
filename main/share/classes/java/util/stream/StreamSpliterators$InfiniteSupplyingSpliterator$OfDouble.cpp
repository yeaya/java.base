#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble.h>

#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/function/DoubleSupplier.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $DoubleSupplier = ::java::util::function::DoubleSupplier;
using $StreamSpliterators$InfiniteSupplyingSpliterator = ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_FieldInfo_[] = {
	{"s", "Ljava/util/function/DoubleSupplier;", nullptr, $FINAL, $field(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, s)},
	{}
};

$MethodInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLjava/util/function/DoubleSupplier;)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::*)(int64_t,$DoubleSupplier*)>(&StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC, $method(static_cast<bool(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::*)($DoubleConsumer*)>(&StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::tryAdvance))},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<bool(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::*)(Object$*)>(&StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::tryAdvance))},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "java.util.stream.StreamSpliterators", "InfiniteSupplyingSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble", "java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "OfDouble", $STATIC | $FINAL},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble",
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator",
	"java.util.Spliterator$OfDouble",
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_FieldInfo_,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator<Ljava/lang/Double;>;Ljava/util/Spliterator$OfDouble;",
	nullptr,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble($Class* clazz) {
	return $of($alloc(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble));
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::estimateSize() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::estimateSize();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::characteristics() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::characteristics();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::forEachRemaining($Consumer* action) {
	this->$StreamSpliterators$InfiniteSupplyingSpliterator::forEachRemaining(action);
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::getExactSizeIfKnown() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::getExactSizeIfKnown();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::hasCharacteristics(int32_t characteristics) {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::getComparator() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::getComparator();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::hashCode() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::hashCode();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::equals(Object$* obj) {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::equals(obj);
}

$Object* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::clone() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::clone();
}

$String* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::toString() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::toString();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::finalize() {
	this->$StreamSpliterators$InfiniteSupplyingSpliterator::finalize();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::forEachRemaining($DoubleConsumer* action) {
	$as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::forEachRemaining(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::forEachRemaining(Object$* action) {
	$as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::forEachRemaining(action);
}

StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::MemberClass0$() {
	$patchMemberClass(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, $Spliterator$OfDouble, memberClass0$);
}

$Spliterator$OfDouble* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfDouble, ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->trySplit());
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::tryAdvance($DoubleConsumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::forEachRemaining($DoubleConsumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::characteristics() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->characteristics();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::getComparator() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::hashCode() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->hashCode();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::clone() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->clone();
}

$String* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::toString() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->toString();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::MemberClass0$::finalize() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, memberClass0$)))->finalize();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::init$(int64_t size, $DoubleSupplier* s) {
	$StreamSpliterators$InfiniteSupplyingSpliterator::init$(size);
	$set(this, s, s);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::tryAdvance($DoubleConsumer* action) {
	$Objects::requireNonNull(action);
	action->accept($nc(this->s)->getAsDouble());
	return true;
}

$Spliterator* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::trySplit() {
	if (this->estimate == 0) {
		return nullptr;
	}
	return static_cast<$Spliterator*>(static_cast<$StreamSpliterators$InfiniteSupplyingSpliterator*>($new(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, this->estimate = (int64_t)((uint64_t)this->estimate >> 1), this->s)));
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($DoubleConsumer, action));
}

StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble() {
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, name, initialize, &_StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_ClassInfo_, allocate$StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble);
	return class$;
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java