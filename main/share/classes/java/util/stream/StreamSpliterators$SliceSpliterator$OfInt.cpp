#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfInt.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;
using $StreamSpliterators$SliceSpliterator = ::java::util::stream::StreamSpliterators$SliceSpliterator;
using $StreamSpliterators$SliceSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0 : public $IntConsumer {
	$class(StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$() {
	}
	virtual void accept(int32_t e) override {
		StreamSpliterators$SliceSpliterator$OfInt::lambda$emptyConsumer$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0::*)()>(&StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	nullptr,
	methodInfos
};
$Class* StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0::class$ = nullptr;

$MethodInfo _StreamSpliterators$SliceSpliterator$OfInt_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/Spliterator$OfInt;JJ)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfInt::*)($Spliterator$OfInt*,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfInt::init$))},
	{"<init>", "(Ljava/util/Spliterator$OfInt;JJJJ)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfInt::*)($Spliterator$OfInt*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfInt::init$))},
	{"emptyConsumer", "()Ljava/util/function/IntConsumer;", nullptr, $PROTECTED},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfInt::*)($IntConsumer*)>(&StreamSpliterators$SliceSpliterator$OfInt::forEachRemaining))},
	{"lambda$emptyConsumer$0", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t)>(&StreamSpliterators$SliceSpliterator$OfInt::lambda$emptyConsumer$0))},
	{"makeSpliterator", "(Ljava/util/Spliterator$OfInt;JJJJ)Ljava/util/Spliterator$OfInt;", nullptr, $PROTECTED, $method(static_cast<$Spliterator$OfInt*(StreamSpliterators$SliceSpliterator$OfInt::*)($Spliterator$OfInt*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfInt::makeSpliterator))},
	{"makeSpliterator", "(Ljava/util/Spliterator;JJJJ)Ljava/util/Spliterator;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<bool(StreamSpliterators$SliceSpliterator$OfInt::*)($IntConsumer*)>(&StreamSpliterators$SliceSpliterator$OfInt::tryAdvance))},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _StreamSpliterators$SliceSpliterator$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$SliceSpliterator", "java.util.stream.StreamSpliterators", "SliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfInt", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$SliceSpliterator$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfInt",
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive",
	"java.util.Spliterator$OfInt",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfInt_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive<Ljava/lang/Integer;Ljava/util/Spliterator$OfInt;Ljava/util/function/IntConsumer;>;Ljava/util/Spliterator$OfInt;",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$SliceSpliterator$OfInt($Class* clazz) {
	return $of($alloc(StreamSpliterators$SliceSpliterator$OfInt));
}

bool StreamSpliterators$SliceSpliterator$OfInt::tryAdvance(Object$* action) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfInt::forEachRemaining(Object$* action) {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::forEachRemaining(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfInt::estimateSize() {
	 return this->$StreamSpliterators$SliceSpliterator$OfPrimitive::estimateSize();
}

int32_t StreamSpliterators$SliceSpliterator$OfInt::characteristics() {
	 return this->$StreamSpliterators$SliceSpliterator$OfPrimitive::characteristics();
}

int32_t StreamSpliterators$SliceSpliterator$OfInt::hashCode() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::hashCode();
}

bool StreamSpliterators$SliceSpliterator$OfInt::equals(Object$* obj) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::equals(obj);
}

$Object* StreamSpliterators$SliceSpliterator$OfInt::clone() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::clone();
}

$String* StreamSpliterators$SliceSpliterator$OfInt::toString() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::toString();
}

void StreamSpliterators$SliceSpliterator$OfInt::finalize() {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::finalize();
}

bool StreamSpliterators$SliceSpliterator$OfInt::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfInt::forEachRemaining($Consumer* action) {
	$as($Spliterator$OfInt, this)->$Spliterator$OfInt::forEachRemaining(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfInt::getExactSizeIfKnown() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::getExactSizeIfKnown();
}

bool StreamSpliterators$SliceSpliterator$OfInt::hasCharacteristics(int32_t characteristics) {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$SliceSpliterator$OfInt::getComparator() {
	 return $as($Spliterator$OfInt, this)->$Spliterator$OfInt::getComparator();
}

$Object0* StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$));
}

$Spliterator$OfInt* StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfInt, ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->trySplit());
}

bool StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::tryAdvance($IntConsumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::forEachRemaining($IntConsumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::characteristics() {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->characteristics();
}

bool StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::getComparator() {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::hashCode() {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->hashCode();
}

bool StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::clone() {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->clone();
}

$String* StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::toString() {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->toString();
}

void StreamSpliterators$SliceSpliterator$OfInt::MemberClass0$::finalize() {
	return ((StreamSpliterators$SliceSpliterator$OfInt*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfInt, memberClass0$)))->finalize();
}

void StreamSpliterators$SliceSpliterator$OfInt::init$($Spliterator$OfInt* s, int64_t sliceOrigin, int64_t sliceFence) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::init$(s, sliceOrigin, sliceFence);
}

void StreamSpliterators$SliceSpliterator$OfInt::init$($Spliterator$OfInt* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::init$(s, sliceOrigin, sliceFence, origin, fence);
}

$Spliterator$OfInt* StreamSpliterators$SliceSpliterator$OfInt::makeSpliterator($Spliterator$OfInt* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	return $as($Spliterator$OfInt, $new(StreamSpliterators$SliceSpliterator$OfInt, s, sliceOrigin, sliceFence, origin, fence));
}

$Object* StreamSpliterators$SliceSpliterator$OfInt::emptyConsumer() {
	return $of(static_cast<$IntConsumer*>($new(StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0)));
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfInt::makeSpliterator($Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	return this->makeSpliterator($cast($Spliterator$OfInt, s), sliceOrigin, sliceFence, origin, fence);
}

void StreamSpliterators$SliceSpliterator$OfInt::forEachRemaining($IntConsumer* action) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool StreamSpliterators$SliceSpliterator$OfInt::tryAdvance($IntConsumer* action) {
	return $StreamSpliterators$SliceSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfInt::trySplit() {
	return $cast($Spliterator$OfInt, $StreamSpliterators$SliceSpliterator$OfPrimitive::trySplit());
}

void StreamSpliterators$SliceSpliterator$OfInt::lambda$emptyConsumer$0(int32_t e) {
	$init(StreamSpliterators$SliceSpliterator$OfInt);
}

StreamSpliterators$SliceSpliterator$OfInt::StreamSpliterators$SliceSpliterator$OfInt() {
}

$Class* StreamSpliterators$SliceSpliterator$OfInt::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0::classInfo$.name)) {
			return StreamSpliterators$SliceSpliterator$OfInt$$Lambda$lambda$emptyConsumer$0::load$(name, initialize);
		}
	}
	$loadClass(StreamSpliterators$SliceSpliterator$OfInt, name, initialize, &_StreamSpliterators$SliceSpliterator$OfInt_ClassInfo_, allocate$StreamSpliterators$SliceSpliterator$OfInt);
	return class$;
}

$Class* StreamSpliterators$SliceSpliterator$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java