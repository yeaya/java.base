#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfDouble.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfDouble.h>
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
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $StreamSpliterators$ArrayBuffer$OfDouble = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfDouble;
using $StreamSpliterators$ArrayBuffer$OfPrimitive = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive;
using $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$UnorderedSliceSpliterator$OfDouble_FieldInfo_[] = {
	{"tmpValue", "D", nullptr, 0, $field(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, tmpValue)},
	{}
};

$MethodInfo _StreamSpliterators$UnorderedSliceSpliterator$OfDouble_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/Spliterator$OfDouble;JJ)V", nullptr, 0, $method(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, init$, void, $Spliterator$OfDouble*, int64_t, int64_t)},
	{"<init>", "(Ljava/util/Spliterator$OfDouble;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfDouble;)V", nullptr, 0, $method(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, init$, void, $Spliterator$OfDouble*, StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)},
	{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, accept, void, double)},
	{"acceptConsumed", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PROTECTED, $method(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, acceptConsumed, void, $DoubleConsumer*)},
	{"acceptConsumed", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, acceptConsumed, void, Object$*)},
	{"bufferCreate", "(I)Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfDouble;", nullptr, $PROTECTED, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, bufferCreate, $StreamSpliterators$ArrayBuffer$OfPrimitive*, int32_t)},
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, forEachRemaining, void, $DoubleConsumer*)},
	{"makeSpliterator", "(Ljava/util/Spliterator$OfDouble;)Ljava/util/Spliterator$OfDouble;", nullptr, $PROTECTED, $method(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, makeSpliterator, $Spliterator$OfDouble*, $Spliterator$OfDouble*)},
	{"makeSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, makeSpliterator, $Spliterator*, $Spliterator*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, tryAdvance, bool, $DoubleConsumer*)},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "java.util.stream.StreamSpliterators", "UnorderedSliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfDouble", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfDouble", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfDouble", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfDouble",
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive",
	"java.util.function.DoubleConsumer,java.util.Spliterator$OfDouble",
	_StreamSpliterators$UnorderedSliceSpliterator$OfDouble_FieldInfo_,
	_StreamSpliterators$UnorderedSliceSpliterator$OfDouble_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive<Ljava/lang/Double;Ljava/util/function/DoubleConsumer;Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfDouble;Ljava/util/Spliterator$OfDouble;>;Ljava/util/Spliterator$OfDouble;Ljava/util/function/DoubleConsumer;",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$UnorderedSliceSpliterator$OfDouble($Class* clazz) {
	return $of($alloc(StreamSpliterators$UnorderedSliceSpliterator$OfDouble));
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::tryAdvance(Object$* action) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::forEachRemaining(Object$* action) {
	this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::forEachRemaining(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfDouble::estimateSize() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::estimateSize();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfDouble::characteristics() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::characteristics();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfDouble::hashCode() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::hashCode();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::equals(Object$* obj) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::equals(obj);
}

$Object* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::clone() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::clone();
}

$String* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::toString() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::toString();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::finalize() {
	this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::finalize();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::forEachRemaining($Consumer* action) {
	this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::forEachRemaining(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfDouble::getExactSizeIfKnown() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::getExactSizeIfKnown();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::hasCharacteristics(int32_t characteristics) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::getComparator() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::getComparator();
}

StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::MemberClass0$() {
	$patchMemberClass(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, $Spliterator$OfDouble, memberClass0$);
}

$Spliterator$OfDouble* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfDouble, ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->trySplit());
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::tryAdvance($DoubleConsumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::forEachRemaining($DoubleConsumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::characteristics() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->characteristics();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::getComparator() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::hashCode() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->hashCode();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::clone() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->clone();
}

$String* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::toString() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->toString();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::MemberClass0$::finalize() {
	return ((StreamSpliterators$UnorderedSliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, memberClass0$)))->finalize();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::init$($Spliterator$OfDouble* s, int64_t skip, int64_t limit) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$(s, skip, limit);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::init$($Spliterator$OfDouble* s, StreamSpliterators$UnorderedSliceSpliterator$OfDouble* parent) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$(s, parent);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::accept(double value) {
	this->tmpValue = value;
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::acceptConsumed($DoubleConsumer* action) {
	$nc(action)->accept(this->tmpValue);
}

$StreamSpliterators$ArrayBuffer$OfPrimitive* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::bufferCreate(int32_t initialCapacity) {
	return $new($StreamSpliterators$ArrayBuffer$OfDouble, initialCapacity);
}

$Spliterator$OfDouble* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::makeSpliterator($Spliterator$OfDouble* s) {
	return $as($Spliterator$OfDouble, $new(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, s, this));
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::acceptConsumed(Object$* action) {
	this->acceptConsumed($cast($DoubleConsumer, action));
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::makeSpliterator($Spliterator* s) {
	return this->makeSpliterator($cast($Spliterator$OfDouble, s));
}

void StreamSpliterators$UnorderedSliceSpliterator$OfDouble::forEachRemaining($DoubleConsumer* action) {
	$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfDouble::tryAdvance($DoubleConsumer* action) {
	return $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::trySplit() {
	return $cast($Spliterator$OfDouble, $StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::trySplit());
}

StreamSpliterators$UnorderedSliceSpliterator$OfDouble::StreamSpliterators$UnorderedSliceSpliterator$OfDouble() {
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, name, initialize, &_StreamSpliterators$UnorderedSliceSpliterator$OfDouble_ClassInfo_, allocate$StreamSpliterators$UnorderedSliceSpliterator$OfDouble);
	return class$;
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java