#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfDouble.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $StreamSpliterators$SliceSpliterator = ::java::util::stream::StreamSpliterators$SliceSpliterator;
using $StreamSpliterators$SliceSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0 : public $DoubleConsumer {
	$class(StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0, $NO_CLASS_INIT, $DoubleConsumer)
public:
	void init$() {
	}
	virtual void accept(double e) override {
		StreamSpliterators$SliceSpliterator$OfDouble::lambda$emptyConsumer$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0::*)()>(&StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	nullptr,
	methodInfos
};
$Class* StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0::class$ = nullptr;

$MethodInfo _StreamSpliterators$SliceSpliterator$OfDouble_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfDouble;JJ)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfDouble::*)($Spliterator$OfDouble*,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfDouble::init$))},
	{"<init>", "(Ljava/util/Spliterator$OfDouble;JJJJ)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfDouble::*)($Spliterator$OfDouble*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfDouble::init$))},
	{"emptyConsumer", "()Ljava/util/function/DoubleConsumer;", nullptr, $PROTECTED},
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfDouble::*)($DoubleConsumer*)>(&StreamSpliterators$SliceSpliterator$OfDouble::forEachRemaining))},
	{"lambda$emptyConsumer$0", "(D)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(double)>(&StreamSpliterators$SliceSpliterator$OfDouble::lambda$emptyConsumer$0))},
	{"makeSpliterator", "(Ljava/util/Spliterator$OfDouble;JJJJ)Ljava/util/Spliterator$OfDouble;", nullptr, $PROTECTED, $method(static_cast<$Spliterator$OfDouble*(StreamSpliterators$SliceSpliterator$OfDouble::*)($Spliterator$OfDouble*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfDouble::makeSpliterator))},
	{"makeSpliterator", "(Ljava/util/Spliterator;JJJJ)Ljava/util/Spliterator;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<bool(StreamSpliterators$SliceSpliterator$OfDouble::*)($DoubleConsumer*)>(&StreamSpliterators$SliceSpliterator$OfDouble::tryAdvance))},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _StreamSpliterators$SliceSpliterator$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$SliceSpliterator", "java.util.stream.StreamSpliterators", "SliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfDouble", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$SliceSpliterator$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfDouble",
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive",
	"java.util.Spliterator$OfDouble",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfDouble_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive<Ljava/lang/Double;Ljava/util/Spliterator$OfDouble;Ljava/util/function/DoubleConsumer;>;Ljava/util/Spliterator$OfDouble;",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$SliceSpliterator$OfDouble($Class* clazz) {
	return $of($alloc(StreamSpliterators$SliceSpliterator$OfDouble));
}

bool StreamSpliterators$SliceSpliterator$OfDouble::tryAdvance(Object$* action) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfDouble::forEachRemaining(Object$* action) {
	$as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::forEachRemaining(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfDouble::estimateSize() {
	 return this->$StreamSpliterators$SliceSpliterator$OfPrimitive::estimateSize();
}

int32_t StreamSpliterators$SliceSpliterator$OfDouble::characteristics() {
	 return this->$StreamSpliterators$SliceSpliterator$OfPrimitive::characteristics();
}

int32_t StreamSpliterators$SliceSpliterator$OfDouble::hashCode() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::hashCode();
}

bool StreamSpliterators$SliceSpliterator$OfDouble::equals(Object$* obj) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::equals(obj);
}

$Object* StreamSpliterators$SliceSpliterator$OfDouble::clone() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::clone();
}

$String* StreamSpliterators$SliceSpliterator$OfDouble::toString() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::toString();
}

void StreamSpliterators$SliceSpliterator$OfDouble::finalize() {
	$as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::finalize();
}

bool StreamSpliterators$SliceSpliterator$OfDouble::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfDouble::forEachRemaining($Consumer* action) {
	$as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::forEachRemaining(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfDouble::getExactSizeIfKnown() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::getExactSizeIfKnown();
}

bool StreamSpliterators$SliceSpliterator$OfDouble::hasCharacteristics(int32_t characteristics) {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$SliceSpliterator$OfDouble::getComparator() {
	 return $as($Spliterator$OfDouble, this)->$Spliterator$OfDouble::getComparator();
}

$Object0* StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$));
}

$Spliterator$OfDouble* StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfDouble, ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->trySplit());
}

bool StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::tryAdvance($DoubleConsumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::forEachRemaining($DoubleConsumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::characteristics() {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->characteristics();
}

bool StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::getComparator() {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::hashCode() {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->hashCode();
}

bool StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::clone() {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->clone();
}

$String* StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::toString() {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->toString();
}

void StreamSpliterators$SliceSpliterator$OfDouble::MemberClass0$::finalize() {
	return ((StreamSpliterators$SliceSpliterator$OfDouble*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfDouble, memberClass0$)))->finalize();
}

void StreamSpliterators$SliceSpliterator$OfDouble::init$($Spliterator$OfDouble* s, int64_t sliceOrigin, int64_t sliceFence) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::init$(s, sliceOrigin, sliceFence);
}

void StreamSpliterators$SliceSpliterator$OfDouble::init$($Spliterator$OfDouble* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::init$(s, sliceOrigin, sliceFence, origin, fence);
}

$Spliterator$OfDouble* StreamSpliterators$SliceSpliterator$OfDouble::makeSpliterator($Spliterator$OfDouble* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	return $as($Spliterator$OfDouble, $new(StreamSpliterators$SliceSpliterator$OfDouble, s, sliceOrigin, sliceFence, origin, fence));
}

$Object* StreamSpliterators$SliceSpliterator$OfDouble::emptyConsumer() {
	return $of(static_cast<$DoubleConsumer*>($new(StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0)));
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfDouble::makeSpliterator($Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	return this->makeSpliterator($cast($Spliterator$OfDouble, s), sliceOrigin, sliceFence, origin, fence);
}

void StreamSpliterators$SliceSpliterator$OfDouble::forEachRemaining($DoubleConsumer* action) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool StreamSpliterators$SliceSpliterator$OfDouble::tryAdvance($DoubleConsumer* action) {
	return $StreamSpliterators$SliceSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfDouble::trySplit() {
	return $cast($Spliterator$OfDouble, $StreamSpliterators$SliceSpliterator$OfPrimitive::trySplit());
}

void StreamSpliterators$SliceSpliterator$OfDouble::lambda$emptyConsumer$0(double e) {
	$init(StreamSpliterators$SliceSpliterator$OfDouble);
}

StreamSpliterators$SliceSpliterator$OfDouble::StreamSpliterators$SliceSpliterator$OfDouble() {
}

$Class* StreamSpliterators$SliceSpliterator$OfDouble::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0::classInfo$.name)) {
			return StreamSpliterators$SliceSpliterator$OfDouble$$Lambda$lambda$emptyConsumer$0::load$(name, initialize);
		}
	}
	$loadClass(StreamSpliterators$SliceSpliterator$OfDouble, name, initialize, &_StreamSpliterators$SliceSpliterator$OfDouble_ClassInfo_, allocate$StreamSpliterators$SliceSpliterator$OfDouble);
	return class$;
}

$Class* StreamSpliterators$SliceSpliterator$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java