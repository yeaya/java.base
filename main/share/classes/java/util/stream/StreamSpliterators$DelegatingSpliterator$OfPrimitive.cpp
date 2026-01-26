#include <java/util/stream/StreamSpliterators$DelegatingSpliterator$OfPrimitive.h>

#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/StreamSpliterators$DelegatingSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;
using $StreamSpliterators$DelegatingSpliterator = ::java::util::stream::StreamSpliterators$DelegatingSpliterator;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _StreamSpliterators$DelegatingSpliterator$OfPrimitive_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<+TT_SPLITR;>;)V", 0, $method(StreamSpliterators$DelegatingSpliterator$OfPrimitive, init$, void, $Supplier*)},
	{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator$OfPrimitive, forEachRemaining, void, Object$*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", "(TT_CONS;)Z", $PUBLIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator$OfPrimitive, tryAdvance, bool, Object$*)},
	{"trySplit", "()Ljava/util/Spliterator$OfPrimitive;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$DelegatingSpliterator$OfPrimitive, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _StreamSpliterators$DelegatingSpliterator$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator", "java.util.stream.StreamSpliterators", "DelegatingSpliterator", $STATIC},
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$DelegatingSpliterator", "OfPrimitive", $STATIC},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$DelegatingSpliterator$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.StreamSpliterators$DelegatingSpliterator$OfPrimitive",
	"java.util.stream.StreamSpliterators$DelegatingSpliterator",
	"java.util.Spliterator$OfPrimitive",
	nullptr,
	_StreamSpliterators$DelegatingSpliterator$OfPrimitive_MethodInfo_,
	"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;>Ljava/util/stream/StreamSpliterators$DelegatingSpliterator<TT;TT_SPLITR;>;Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;",
	nullptr,
	_StreamSpliterators$DelegatingSpliterator$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$DelegatingSpliterator$OfPrimitive($Class* clazz) {
	return $of($alloc(StreamSpliterators$DelegatingSpliterator$OfPrimitive));
}

bool StreamSpliterators$DelegatingSpliterator$OfPrimitive::tryAdvance($Consumer* consumer) {
	 return this->$StreamSpliterators$DelegatingSpliterator::tryAdvance(consumer);
}

void StreamSpliterators$DelegatingSpliterator$OfPrimitive::forEachRemaining($Consumer* consumer) {
	this->$StreamSpliterators$DelegatingSpliterator::forEachRemaining(consumer);
}

int64_t StreamSpliterators$DelegatingSpliterator$OfPrimitive::estimateSize() {
	 return this->$StreamSpliterators$DelegatingSpliterator::estimateSize();
}

int32_t StreamSpliterators$DelegatingSpliterator$OfPrimitive::characteristics() {
	 return this->$StreamSpliterators$DelegatingSpliterator::characteristics();
}

$Comparator* StreamSpliterators$DelegatingSpliterator$OfPrimitive::getComparator() {
	 return this->$StreamSpliterators$DelegatingSpliterator::getComparator();
}

int64_t StreamSpliterators$DelegatingSpliterator$OfPrimitive::getExactSizeIfKnown() {
	 return this->$StreamSpliterators$DelegatingSpliterator::getExactSizeIfKnown();
}

$String* StreamSpliterators$DelegatingSpliterator$OfPrimitive::toString() {
	 return this->$StreamSpliterators$DelegatingSpliterator::toString();
}

bool StreamSpliterators$DelegatingSpliterator$OfPrimitive::hasCharacteristics(int32_t characteristics) {
	 return this->$StreamSpliterators$DelegatingSpliterator::hasCharacteristics(characteristics);
}

int32_t StreamSpliterators$DelegatingSpliterator$OfPrimitive::hashCode() {
	 return this->$StreamSpliterators$DelegatingSpliterator::hashCode();
}

bool StreamSpliterators$DelegatingSpliterator$OfPrimitive::equals(Object$* obj) {
	 return this->$StreamSpliterators$DelegatingSpliterator::equals(obj);
}

$Object* StreamSpliterators$DelegatingSpliterator$OfPrimitive::clone() {
	 return this->$StreamSpliterators$DelegatingSpliterator::clone();
}

void StreamSpliterators$DelegatingSpliterator$OfPrimitive::finalize() {
	this->$StreamSpliterators$DelegatingSpliterator::finalize();
}

void StreamSpliterators$DelegatingSpliterator$OfPrimitive::init$($Supplier* supplier) {
	$StreamSpliterators$DelegatingSpliterator::init$(supplier);
}

bool StreamSpliterators$DelegatingSpliterator$OfPrimitive::tryAdvance(Object$* consumer) {
	return $nc(($cast($Spliterator$OfPrimitive, $(get()))))->tryAdvance(consumer);
}

void StreamSpliterators$DelegatingSpliterator$OfPrimitive::forEachRemaining(Object$* consumer) {
	$nc(($cast($Spliterator$OfPrimitive, $(get()))))->forEachRemaining(consumer);
}

$Spliterator* StreamSpliterators$DelegatingSpliterator$OfPrimitive::trySplit() {
	return $cast($Spliterator$OfPrimitive, $StreamSpliterators$DelegatingSpliterator::trySplit());
}

StreamSpliterators$DelegatingSpliterator$OfPrimitive::StreamSpliterators$DelegatingSpliterator$OfPrimitive() {
}

$Class* StreamSpliterators$DelegatingSpliterator$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$DelegatingSpliterator$OfPrimitive, name, initialize, &_StreamSpliterators$DelegatingSpliterator$OfPrimitive_ClassInfo_, allocate$StreamSpliterators$DelegatingSpliterator$OfPrimitive);
	return class$;
}

$Class* StreamSpliterators$DelegatingSpliterator$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java