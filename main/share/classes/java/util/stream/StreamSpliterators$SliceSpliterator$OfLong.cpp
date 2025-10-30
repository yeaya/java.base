#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfLong.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $LongConsumer = ::java::util::function::LongConsumer;
using $StreamSpliterators$SliceSpliterator = ::java::util::stream::StreamSpliterators$SliceSpliterator;
using $StreamSpliterators$SliceSpliterator$OfPrimitive = ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0 : public $LongConsumer {
	$class(StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0, $NO_CLASS_INIT, $LongConsumer)
public:
	void init$() {
	}
	virtual void accept(int64_t e) override {
		StreamSpliterators$SliceSpliterator$OfLong::lambda$emptyConsumer$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0::*)()>(&StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0",
	"java.lang.Object",
	"java.util.function.LongConsumer",
	nullptr,
	methodInfos
};
$Class* StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0::class$ = nullptr;

$MethodInfo _StreamSpliterators$SliceSpliterator$OfLong_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/Spliterator$OfLong;JJ)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfLong::*)($Spliterator$OfLong*,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfLong::init$))},
	{"<init>", "(Ljava/util/Spliterator$OfLong;JJJJ)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfLong::*)($Spliterator$OfLong*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfLong::init$))},
	{"emptyConsumer", "()Ljava/util/function/LongConsumer;", nullptr, $PROTECTED},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfLong::*)($LongConsumer*)>(&StreamSpliterators$SliceSpliterator$OfLong::forEachRemaining))},
	{"lambda$emptyConsumer$0", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&StreamSpliterators$SliceSpliterator$OfLong::lambda$emptyConsumer$0))},
	{"makeSpliterator", "(Ljava/util/Spliterator$OfLong;JJJJ)Ljava/util/Spliterator$OfLong;", nullptr, $PROTECTED, $method(static_cast<$Spliterator$OfLong*(StreamSpliterators$SliceSpliterator$OfLong::*)($Spliterator$OfLong*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfLong::makeSpliterator))},
	{"makeSpliterator", "(Ljava/util/Spliterator;JJJJ)Ljava/util/Spliterator;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $method(static_cast<bool(StreamSpliterators$SliceSpliterator$OfLong::*)($LongConsumer*)>(&StreamSpliterators$SliceSpliterator$OfLong::tryAdvance))},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _StreamSpliterators$SliceSpliterator$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$SliceSpliterator", "java.util.stream.StreamSpliterators", "SliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfLong", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$SliceSpliterator$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfLong",
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive",
	"java.util.Spliterator$OfLong",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfLong_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive<Ljava/lang/Long;Ljava/util/Spliterator$OfLong;Ljava/util/function/LongConsumer;>;Ljava/util/Spliterator$OfLong;",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$SliceSpliterator$OfLong($Class* clazz) {
	return $of($alloc(StreamSpliterators$SliceSpliterator$OfLong));
}

bool StreamSpliterators$SliceSpliterator$OfLong::tryAdvance(Object$* action) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfLong::forEachRemaining(Object$* action) {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::forEachRemaining(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfLong::estimateSize() {
	 return this->$StreamSpliterators$SliceSpliterator$OfPrimitive::estimateSize();
}

int32_t StreamSpliterators$SliceSpliterator$OfLong::characteristics() {
	 return this->$StreamSpliterators$SliceSpliterator$OfPrimitive::characteristics();
}

int32_t StreamSpliterators$SliceSpliterator$OfLong::hashCode() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::hashCode();
}

bool StreamSpliterators$SliceSpliterator$OfLong::equals(Object$* obj) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::equals(obj);
}

$Object* StreamSpliterators$SliceSpliterator$OfLong::clone() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::clone();
}

$String* StreamSpliterators$SliceSpliterator$OfLong::toString() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::toString();
}

void StreamSpliterators$SliceSpliterator$OfLong::finalize() {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::finalize();
}

bool StreamSpliterators$SliceSpliterator$OfLong::tryAdvance($Consumer* action) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfLong::forEachRemaining($Consumer* action) {
	$as($Spliterator$OfLong, this)->$Spliterator$OfLong::forEachRemaining(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfLong::getExactSizeIfKnown() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::getExactSizeIfKnown();
}

bool StreamSpliterators$SliceSpliterator$OfLong::hasCharacteristics(int32_t characteristics) {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$SliceSpliterator$OfLong::getComparator() {
	 return $as($Spliterator$OfLong, this)->$Spliterator$OfLong::getComparator();
}

$Object0* StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::toObject0$() const {
	return ($Object0*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$));
}

$Spliterator$OfLong* StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::trySplit() {
	return $cast($Spliterator$OfLong, ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->trySplit());
}

bool StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::tryAdvance($LongConsumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::forEachRemaining($LongConsumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::tryAdvance($Consumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::forEachRemaining($Consumer* action) {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

void StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::forEachRemaining(Object$* action) {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->forEachRemaining(action);
}

bool StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::tryAdvance(Object$* action) {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->tryAdvance(action);
}

int64_t StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::estimateSize() {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->estimateSize();
}

int64_t StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::getExactSizeIfKnown() {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->getExactSizeIfKnown();
}

int32_t StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::characteristics() {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->characteristics();
}

bool StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::hasCharacteristics(int32_t characteristics) {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->hasCharacteristics(characteristics);
}

$Comparator* StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::getComparator() {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->getComparator();
}

int32_t StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::hashCode() {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->hashCode();
}

bool StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::equals(Object$* obj) {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->equals(obj);
}

$Object* StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::clone() {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->clone();
}

$String* StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::toString() {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->toString();
}

void StreamSpliterators$SliceSpliterator$OfLong::MemberClass0$::finalize() {
	return ((StreamSpliterators$SliceSpliterator$OfLong*)(void*)((int8_t*)(void*)this - $offsetof(StreamSpliterators$SliceSpliterator$OfLong, memberClass0$)))->finalize();
}

void StreamSpliterators$SliceSpliterator$OfLong::init$($Spliterator$OfLong* s, int64_t sliceOrigin, int64_t sliceFence) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::init$(s, sliceOrigin, sliceFence);
}

void StreamSpliterators$SliceSpliterator$OfLong::init$($Spliterator$OfLong* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::init$(s, sliceOrigin, sliceFence, origin, fence);
}

$Spliterator$OfLong* StreamSpliterators$SliceSpliterator$OfLong::makeSpliterator($Spliterator$OfLong* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	return $as($Spliterator$OfLong, $new(StreamSpliterators$SliceSpliterator$OfLong, s, sliceOrigin, sliceFence, origin, fence));
}

$Object* StreamSpliterators$SliceSpliterator$OfLong::emptyConsumer() {
	return $of(static_cast<$LongConsumer*>($new(StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0)));
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfLong::makeSpliterator($Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	return this->makeSpliterator($cast($Spliterator$OfLong, s), sliceOrigin, sliceFence, origin, fence);
}

void StreamSpliterators$SliceSpliterator$OfLong::forEachRemaining($LongConsumer* action) {
	$StreamSpliterators$SliceSpliterator$OfPrimitive::forEachRemaining($of(action));
}

bool StreamSpliterators$SliceSpliterator$OfLong::tryAdvance($LongConsumer* action) {
	return $StreamSpliterators$SliceSpliterator$OfPrimitive::tryAdvance($of(action));
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfLong::trySplit() {
	return $cast($Spliterator$OfLong, $StreamSpliterators$SliceSpliterator$OfPrimitive::trySplit());
}

void StreamSpliterators$SliceSpliterator$OfLong::lambda$emptyConsumer$0(int64_t e) {
	$init(StreamSpliterators$SliceSpliterator$OfLong);
}

StreamSpliterators$SliceSpliterator$OfLong::StreamSpliterators$SliceSpliterator$OfLong() {
}

$Class* StreamSpliterators$SliceSpliterator$OfLong::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0::classInfo$.name)) {
			return StreamSpliterators$SliceSpliterator$OfLong$$Lambda$lambda$emptyConsumer$0::load$(name, initialize);
		}
	}
	$loadClass(StreamSpliterators$SliceSpliterator$OfLong, name, initialize, &_StreamSpliterators$SliceSpliterator$OfLong_ClassInfo_, allocate$StreamSpliterators$SliceSpliterator$OfLong);
	return class$;
}

$Class* StreamSpliterators$SliceSpliterator$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java