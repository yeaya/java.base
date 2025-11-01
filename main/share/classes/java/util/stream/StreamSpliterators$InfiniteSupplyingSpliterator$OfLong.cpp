#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator$OfLong.h>

#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/function/LongSupplier.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Consumer = ::java::util::function::Consumer;
using $LongConsumer = ::java::util::function::LongConsumer;
using $LongSupplier = ::java::util::function::LongSupplier;
using $StreamSpliterators$InfiniteSupplyingSpliterator = ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_FieldInfo_[] = {
	{"s", "Ljava/util/function/LongSupplier;", nullptr, $FINAL, $field(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, s)},
	{}
};

$MethodInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(JLjava/util/function/LongSupplier;)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::*)(int64_t,$LongSupplier*)>(&StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC, $method(static_cast<bool(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::*)($LongConsumer*)>(&StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::tryAdvance))},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<bool(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::*)(Object$*)>(&StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::tryAdvance))},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "java.util.stream.StreamSpliterators", "InfiniteSupplyingSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfLong", "java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "OfLong", $STATIC | $FINAL},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfLong",
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator",
	"java.util.Spliterator$OfLong",
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_FieldInfo_,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator<Ljava/lang/Long;>;Ljava/util/Spliterator$OfLong;",
	nullptr,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$InfiniteSupplyingSpliterator$OfLong($Class* clazz) {
	return $of($alloc(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong));
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::estimateSize() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::estimateSize();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::characteristics() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::characteristics();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::forEachRemaining($Consumer* action) {
	this->$StreamSpliterators$InfiniteSupplyingSpliterator::forEachRemaining(action);
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::getExactSizeIfKnown() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::getExactSizeIfKnown();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::hasCharacteristics(int32_t characteristics) {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::getComparator() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::getComparator();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::hashCode() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::hashCode();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::equals(Object$* obj) {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::equals(obj);
}

$Object* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::clone() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::clone();
}

$String* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::toString() {
	 return this->$StreamSpliterators$InfiniteSupplyingSpliterator::toString();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::finalize() {
	this->$StreamSpliterators$InfiniteSupplyingSpliterator::finalize();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::forEachRemaining($LongConsumer* action) {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::forEachRemaining(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::forEachRemaining(Object$* action) {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::forEachRemaining(action);
}

StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::MemberClass0$() {
	$patchMemberClass(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, $Spliterator$OfLong, memberClass0$);
}

$Spliterator$OfLong* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfLong, ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->trySplit());
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::tryAdvance($LongConsumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::forEachRemaining($LongConsumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::characteristics() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->characteristics();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::getComparator() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::hashCode() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->hashCode();
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::clone() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->clone();
}

$String* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::toString() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->toString();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::MemberClass0$::finalize() {
	return ((StreamSpliterators$InfiniteSupplyingSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, memberClass0$)))->finalize();
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::init$(int64_t size, $LongSupplier* s) {
	$StreamSpliterators$InfiniteSupplyingSpliterator::init$(size);
	$set(this, s, s);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::tryAdvance($LongConsumer* action) {
	$Objects::requireNonNull(action);
	action->accept($nc(this->s)->getAsLong());
	return true;
}

$Spliterator* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::trySplit() {
	if (this->estimate == 0) {
		return nullptr;
	}
	return static_cast<$Spliterator*>(static_cast<$StreamSpliterators$InfiniteSupplyingSpliterator*>($new(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, this->estimate = (int64_t)((uint64_t)this->estimate >> 1), this->s)));
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($LongConsumer, action));
}

StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::StreamSpliterators$InfiniteSupplyingSpliterator$OfLong() {
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, name, initialize, &_StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_ClassInfo_, allocate$StreamSpliterators$InfiniteSupplyingSpliterator$OfLong);
	return class$;
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java