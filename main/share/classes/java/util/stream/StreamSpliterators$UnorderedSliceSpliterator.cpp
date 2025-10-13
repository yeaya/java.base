#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/stream/AbstractTask.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

#undef CHUNK_SIZE
#undef MAYBE_MORE
#undef NO_MORE
#undef ORDERED
#undef SIZED
#undef SUBSIZED
#undef UNLIMITED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $AbstractTask = ::java::util::stream::AbstractTask;
using $StreamSpliterators = ::java::util::stream::StreamSpliterators;
using $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$UnorderedSliceSpliterator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StreamSpliterators$UnorderedSliceSpliterator, $assertionsDisabled)},
	{"CHUNK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(StreamSpliterators$UnorderedSliceSpliterator, CHUNK_SIZE)},
	{"s", "Ljava/util/Spliterator;", "TT_SPLITR;", $PROTECTED | $FINAL, $field(StreamSpliterators$UnorderedSliceSpliterator, s)},
	{"unlimited", "Z", nullptr, $PROTECTED | $FINAL, $field(StreamSpliterators$UnorderedSliceSpliterator, unlimited)},
	{"chunkSize", "I", nullptr, $PROTECTED | $FINAL, $field(StreamSpliterators$UnorderedSliceSpliterator, chunkSize)},
	{"skipThreshold", "J", nullptr, $PRIVATE | $FINAL, $field(StreamSpliterators$UnorderedSliceSpliterator, skipThreshold)},
	{"permits", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $FINAL, $field(StreamSpliterators$UnorderedSliceSpliterator, permits)},
	{}
};

$MethodInfo _StreamSpliterators$UnorderedSliceSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Spliterator;JJ)V", "(TT_SPLITR;JJ)V", 0, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator::*)($Spliterator*,int64_t,int64_t)>(&StreamSpliterators$UnorderedSliceSpliterator::init$))},
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator;)V", "(TT_SPLITR;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator<TT;TT_SPLITR;>;)V", 0, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator::*)($Spliterator*,StreamSpliterators$UnorderedSliceSpliterator*)>(&StreamSpliterators$UnorderedSliceSpliterator::init$))},
	{"acquirePermits", "(J)J", nullptr, $PROTECTED | $FINAL, $method(static_cast<int64_t(StreamSpliterators$UnorderedSliceSpliterator::*)(int64_t)>(&StreamSpliterators$UnorderedSliceSpliterator::acquirePermits))},
	{"characteristics", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(StreamSpliterators$UnorderedSliceSpliterator::*)()>(&StreamSpliterators$UnorderedSliceSpliterator::characteristics))},
	{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(StreamSpliterators$UnorderedSliceSpliterator::*)()>(&StreamSpliterators$UnorderedSliceSpliterator::estimateSize))},
	{"makeSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", "(TT_SPLITR;)TT_SPLITR;", $PROTECTED | $ABSTRACT},
	{"permitStatus", "()Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$StreamSpliterators$UnorderedSliceSpliterator$PermitStatus*(StreamSpliterators$UnorderedSliceSpliterator::*)()>(&StreamSpliterators$UnorderedSliceSpliterator::permitStatus))},
	{"trySplit", "()Ljava/util/Spliterator;", "()TT_SPLITR;", $PUBLIC | $FINAL, $method(static_cast<$Spliterator*(StreamSpliterators$UnorderedSliceSpliterator::*)()>(&StreamSpliterators$UnorderedSliceSpliterator::trySplit))},
	{}
};

$InnerClassInfo _StreamSpliterators$UnorderedSliceSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "java.util.stream.StreamSpliterators", "UnorderedSliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfDouble", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfLong", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfInt", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfRef", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfRef", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$PermitStatus", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "PermitStatus", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StreamSpliterators$UnorderedSliceSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator",
	"java.lang.Object",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator_FieldInfo_,
	_StreamSpliterators$UnorderedSliceSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator<TT;>;>Ljava/lang/Object;",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$UnorderedSliceSpliterator($Class* clazz) {
	return $of($alloc(StreamSpliterators$UnorderedSliceSpliterator));
}

bool StreamSpliterators$UnorderedSliceSpliterator::$assertionsDisabled = false;

void StreamSpliterators$UnorderedSliceSpliterator::init$($Spliterator* s, int64_t skip, int64_t limit) {
	$set(this, s, s);
	this->unlimited = limit < 0;
	this->skipThreshold = limit >= 0 ? limit : (int64_t)0;
	this->chunkSize = limit >= 0 ? (int32_t)$Math::min((int64_t)StreamSpliterators$UnorderedSliceSpliterator::CHUNK_SIZE, ($div((skip + limit), $AbstractTask::getLeafTarget())) + 1) : StreamSpliterators$UnorderedSliceSpliterator::CHUNK_SIZE;
	$set(this, permits, $new($AtomicLong, limit >= 0 ? skip + limit : skip));
}

void StreamSpliterators$UnorderedSliceSpliterator::init$($Spliterator* s, StreamSpliterators$UnorderedSliceSpliterator* parent) {
	$set(this, s, s);
	this->unlimited = $nc(parent)->unlimited;
	$set(this, permits, parent->permits);
	this->skipThreshold = parent->skipThreshold;
	this->chunkSize = parent->chunkSize;
}

int64_t StreamSpliterators$UnorderedSliceSpliterator::acquirePermits(int64_t numElements) {
	int64_t remainingPermits = 0;
	int64_t grabbing = 0;
	if (!StreamSpliterators$UnorderedSliceSpliterator::$assertionsDisabled && !(numElements > 0)) {
		$throwNew($AssertionError);
	}
	do {
		remainingPermits = $nc(this->permits)->get();
		if (remainingPermits == 0) {
			return this->unlimited ? numElements : (int64_t)0;
		}
		grabbing = $Math::min(remainingPermits, numElements);
	} while (grabbing > 0 && !$nc(this->permits)->compareAndSet(remainingPermits, remainingPermits - grabbing));
	if (this->unlimited) {
		return $Math::max(numElements - grabbing, (int64_t)0);
	} else if (remainingPermits > this->skipThreshold) {
		return $Math::max(grabbing - (remainingPermits - this->skipThreshold), (int64_t)0);
	} else {
		return grabbing;
	}
}

$StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* StreamSpliterators$UnorderedSliceSpliterator::permitStatus() {
	if ($nc(this->permits)->get() > 0) {
		$init($StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
		return $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::MAYBE_MORE;
	} else {
		$init($StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
		return this->unlimited ? $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::UNLIMITED : $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::NO_MORE;
	}
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator::trySplit() {
	if ($nc(this->permits)->get() == 0) {
		return nullptr;
	}
	$var($Spliterator, split, $nc(this->s)->trySplit());
	return split == nullptr ? ($Spliterator*)nullptr : makeSpliterator(split);
}

int64_t StreamSpliterators$UnorderedSliceSpliterator::estimateSize() {
	return $nc(this->s)->estimateSize();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator::characteristics() {
	return (int32_t)($nc(this->s)->characteristics() & (uint32_t)~(($Spliterator::SIZED | $Spliterator::SUBSIZED) | $Spliterator::ORDERED));
}

void clinit$StreamSpliterators$UnorderedSliceSpliterator($Class* class$) {
	$load($StreamSpliterators);
	StreamSpliterators$UnorderedSliceSpliterator::$assertionsDisabled = !$StreamSpliterators::class$->desiredAssertionStatus();
}

StreamSpliterators$UnorderedSliceSpliterator::StreamSpliterators$UnorderedSliceSpliterator() {
}

$Class* StreamSpliterators$UnorderedSliceSpliterator::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$UnorderedSliceSpliterator, name, initialize, &_StreamSpliterators$UnorderedSliceSpliterator_ClassInfo_, clinit$StreamSpliterators$UnorderedSliceSpliterator, allocate$StreamSpliterators$UnorderedSliceSpliterator);
	return class$;
}

$Class* StreamSpliterators$UnorderedSliceSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java