#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator$OfInt.h>

#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntSupplier.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntSupplier = ::java::util::function::IntSupplier;
using $StreamSpliterators$InfiniteSupplyingSpliterator = ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfInt_FieldInfo_[] = {
	{"s", "Ljava/util/function/IntSupplier;", nullptr, $FINAL, $field(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, s)},
	{}
};

$MethodInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfInt_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLjava/util/function/IntSupplier;)V", nullptr, 0, $method(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, init$, void, int64_t, $IntSupplier*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC, $method(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, tryAdvance, bool, $IntConsumer*)},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, tryAdvance, bool, Object$*)},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "java.util.stream.StreamSpliterators", "InfiniteSupplyingSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfInt", "java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "OfInt", $STATIC | $FINAL},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfInt",
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator",
	"java.util.Spliterator$OfInt",
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfInt_FieldInfo_,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfInt_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator<Ljava/lang/Integer;>;Ljava/util/Spliterator$OfInt;",
	nullptr,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$InfiniteSupplyingSpliterator$OfInt($Class* clazz) {
	return $of($alloc(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt));
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::estimateSize() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::estimateSize();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::characteristics() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::characteristics();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::forEachRemaining($Consumer* action) {
	this->$StreamSpliterators$InfiniteSupplyingSpliterator::forEachRemaining(action);
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::getExactSizeIfKnown() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::getExactSizeIfKnown();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::hasCharacteristics(int32_t characteristics) {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::getComparator() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::getComparator();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::hashCode() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::hashCode();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::equals(Object$* obj) {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::equals(obj);
}

$Object* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::clone() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::clone();
}

$String* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::toString() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::toString();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::finalize() {
	this->$StreamSpliterators$InfiniteSupplyingSpliterator::finalize();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::forEachRemaining($IntConsumer* action) {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::forEachRemaining(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::forEachRemaining(Object$* action) {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::forEachRemaining(action);
}

StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::MemberClass0$() {
	$patchMemberClass(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, $Spliterator$OfInt, memberClass0$);
}

$Spliterator$OfInt* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfInt, ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->trySplit());
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::tryAdvance($IntConsumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::forEachRemaining($IntConsumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::characteristics() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->characteristics();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::getComparator() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::hashCode() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->hashCode();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::clone() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->clone();
}

$String* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::toString() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->toString();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::MemberClass0$::finalize() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, memberClass0$)))->finalize();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::init$(int64_t size, $IntSupplier* s) {
	$StreamSpliterators$InfiniteSupplyingSpliterator::init$(size);
	$set(this, s, s);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::tryAdvance($IntConsumer* action) {
	$Objects::requireNonNull(action);
	action->accept($nc(this->s)->getAsInt());
	return true;
}

$Spliterator* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::trySplit() {
	if (this->estimate == 0) {
		return nullptr;
	}
	return static_cast<$Spliterator*>(static_cast<$StreamSpliterators$InfiniteSupplyingSpliterator*>($new(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, this->estimate = (int64_t)((uint64_t)this->estimate >> 1), this->s)));
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::StreamSpliterators$InfiniteSupplyingSpliterator$OfInt() {
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$InfiniteSupplyingSpliterator$OfInt, name, initialize, &_StreamSpliterators$InfiniteSupplyingSpliterator$OfInt_ClassInfo_, allocate$StreamSpliterators$InfiniteSupplyingSpliterator$OfInt);
	return class$;
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java