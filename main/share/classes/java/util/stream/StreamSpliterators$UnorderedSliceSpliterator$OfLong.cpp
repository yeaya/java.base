#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfLong.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfLong.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $LongConsumer = ::java::util::function::LongConsumer;
using $StreamSpliterators$ArrayBuffer$OfLong = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfLong;
using $StreamSpliterators$ArrayBuffer$OfPrimitive = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive;
using $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$UnorderedSliceSpliterator$OfLong_FieldInfo_[] = {
	{"tmpValue", "J", nullptr, 0, $field(StreamSpliterators$UnorderedSliceSpliterator$OfLong, tmpValue)},
	{}
};

$MethodInfo _StreamSpliterators$UnorderedSliceSpliterator$OfLong_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfLong;JJ)V", nullptr, 0, $method(StreamSpliterators$UnorderedSliceSpliterator$OfLong, init$, void, $Spliterator$OfLong*, int64_t, int64_t)},
	{"<init>", "(Ljava/util/Spliterator$OfLong;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfLong;)V", nullptr, 0, $method(StreamSpliterators$UnorderedSliceSpliterator$OfLong, init$, void, $Spliterator$OfLong*, StreamSpliterators$UnorderedSliceSpliterator$OfLong*)},
	{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfLong, accept, void, int64_t)},
	{"acceptConsumed", "(Ljava/util/function/LongConsumer;)V", nullptr, $PROTECTED, $method(StreamSpliterators$UnorderedSliceSpliterator$OfLong, acceptConsumed, void, $LongConsumer*)},
	{"acceptConsumed", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfLong, acceptConsumed, void, Object$*)},
	{"bufferCreate", "(I)Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfLong;", nullptr, $PROTECTED, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfLong, bufferCreate, $StreamSpliterators$ArrayBuffer$OfPrimitive*, int32_t)},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(StreamSpliterators$UnorderedSliceSpliterator$OfLong, forEachRemaining, void, $LongConsumer*)},
	{"makeSpliterator", "(Ljava/util/Spliterator$OfLong;)Ljava/util/Spliterator$OfLong;", nullptr, $PROTECTED, $method(StreamSpliterators$UnorderedSliceSpliterator$OfLong, makeSpliterator, $Spliterator$OfLong*, $Spliterator$OfLong*)},
	{"makeSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfLong, makeSpliterator, $Spliterator*, $Spliterator*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(StreamSpliterators$UnorderedSliceSpliterator$OfLong, tryAdvance, bool, $LongConsumer*)},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfLong, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "java.util.stream.StreamSpliterators", "UnorderedSliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfLong", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfLong", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfLong", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfLong",
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive",
	"java.util.function.LongConsumer,java.util.Spliterator$OfLong",
	_StreamSpliterators$UnorderedSliceSpliterator$OfLong_FieldInfo_,
	_StreamSpliterators$UnorderedSliceSpliterator$OfLong_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive<Ljava/lang/Long;Ljava/util/function/LongConsumer;Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfLong;Ljava/util/Spliterator$OfLong;>;Ljava/util/Spliterator$OfLong;Ljava/util/function/LongConsumer;",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$UnorderedSliceSpliterator$OfLong($Class* clazz) {
	return $of($alloc(StreamSpliterators$UnorderedSliceSpliterator$OfLong));
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::tryAdvance(Object$* action) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::forEachRemaining(Object$* action) {
	this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::forEachRemaining(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfLong::estimateSize() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::estimateSize();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfLong::characteristics() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::characteristics();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfLong::hashCode() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::hashCode();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::equals(Object$* obj) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::equals(obj);
}

$Object* StreamSpliterators$UnorderedSliceSpliterator$OfLong::clone() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::clone();
}

$String* StreamSpliterators$UnorderedSliceSpliterator$OfLong::toString() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::toString();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::finalize() {
	this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::finalize();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::forEachRemaining($Consumer* action) {
	this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::forEachRemaining(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfLong::getExactSizeIfKnown() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::getExactSizeIfKnown();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::hasCharacteristics(int32_t characteristics) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$UnorderedSliceSpliterator$OfLong::getComparator() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::getComparator();
}

StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::MemberClass0$() {
	$patchMemberClass(StreamSpliterators$UnorderedSliceSpliterator$OfLong, $Spliterator$OfLong, memberClass0$);
}

$Spliterator$OfLong* StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfLong, ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->trySplit());
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::tryAdvance($LongConsumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::forEachRemaining($LongConsumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::characteristics() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->characteristics();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::getComparator() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::hashCode() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->hashCode();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::clone() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->clone();
}

$String* StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::toString() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->toString();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::MemberClass0$::finalize() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfLong, memberClass0$)))->finalize();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::init$($Spliterator$OfLong* s, int64_t skip, int64_t limit) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$(s, skip, limit);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::init$($Spliterator$OfLong* s, StreamSpliterators$UnorderedSliceSpliterator$OfLong* parent) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$(s, parent);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::accept(int64_t value) {
	this->tmpValue = value;
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::acceptConsumed($LongConsumer* action) {
	$nc(action)->accept(this->tmpValue);
}

$StreamSpliterators$ArrayBuffer$OfPrimitive* StreamSpliterators$UnorderedSliceSpliterator$OfLong::bufferCreate(int32_t initialCapacity) {
	return $new($StreamSpliterators$ArrayBuffer$OfLong, initialCapacity);
}

$Spliterator$OfLong* StreamSpliterators$UnorderedSliceSpliterator$OfLong::makeSpliterator($Spliterator$OfLong* s) {
	return $as($Spliterator$OfLong, $new(StreamSpliterators$UnorderedSliceSpliterator$OfLong, s, this));
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::acceptConsumed(Object$* action) {
	this->acceptConsumed($cast($LongConsumer, action));
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfLong::makeSpliterator($Spliterator* s) {
	return this->makeSpliterator($cast($Spliterator$OfLong, s));
}

void StreamSpliterators$UnorderedSliceSpliterator$OfLong::forEachRemaining($LongConsumer* action) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfLong::tryAdvance($LongConsumer* action) {
	return $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfLong::trySplit() {
	return $cast($Spliterator$OfLong, $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::trySplit());
}

StreamSpliterators$UnorderedSliceSpliterator$OfLong::StreamSpliterators$UnorderedSliceSpliterator$OfLong() {
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfLong::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$UnorderedSliceSpliterator$OfLong, name, initialize, &_StreamSpliterators$UnorderedSliceSpliterator$OfLong_ClassInfo_, allocate$StreamSpliterators$UnorderedSliceSpliterator$OfLong);
	return class$;
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java