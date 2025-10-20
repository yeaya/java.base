#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator.h>
#include <jcpp.h>

#undef MAYBE_MORE
#undef NO_MORE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $StreamSpliterators$ArrayBuffer$OfPrimitive = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive;
using $StreamSpliterators$UnorderedSliceSpliterator = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator;
using $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfPrimitive;JJ)V", "(TT_SPLITR;JJ)V", 0, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::*)($Spliterator$OfPrimitive*,int64_t,int64_t)>(&StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$))},
	{"<init>", "(Ljava/util/Spliterator$OfPrimitive;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive;)V", "(TT_SPLITR;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive<TT;TT_CONS;TT_BUFF;TT_SPLITR;>;)V", 0, $method(static_cast<void(StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::*)($Spliterator$OfPrimitive*,StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive*)>(&StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$))},
	{"acceptConsumed", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PROTECTED | $ABSTRACT},
	{"bufferCreate", "(I)Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive;", "(I)TT_BUFF;", $PROTECTED | $ABSTRACT},
	{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", "(TT_CONS;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator$OfPrimitive;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "java.util.stream.StreamSpliterators", "UnorderedSliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive",
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator",
	"java.util.Spliterator$OfPrimitive",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_MethodInfo_,
	"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;T_BUFF:Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive<TT_CONS;>;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;>Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator<TT;TT_SPLITR;>;Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive($Class* clazz) {
	return $of($alloc(StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive));
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::estimateSize() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::estimateSize();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::characteristics() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::characteristics();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::hashCode() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::hashCode();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::equals(Object$* obj) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::equals(obj);
}

$Object* StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::clone() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::clone();
}

$String* StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::toString() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::toString();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::finalize() {
	this->$StreamSpliterators$UnorderedSliceSpliterator::finalize();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$($Spliterator$OfPrimitive* s, int64_t skip, int64_t limit) {
	$StreamSpliterators$UnorderedSliceSpliterator::init$(s, skip, limit);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::init$($Spliterator$OfPrimitive* s, StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive* parent) {
	$StreamSpliterators$UnorderedSliceSpliterator::init$(s, parent);
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::tryAdvance(Object$* action) {
	$Objects::requireNonNull(action);
	$var($Object, consumer, $of(this));
	$init($StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
	while (permitStatus() != $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::NO_MORE) {
		if (!$nc(($cast($Spliterator$OfPrimitive, this->s)))->tryAdvance(consumer)) {
			return false;
		} else if (acquirePermits(1) == 1) {
			acceptConsumed(action);
			return true;
		}
	}
	return false;
}

void StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::forEachRemaining(Object$* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($StreamSpliterators$ArrayBuffer$OfPrimitive, sb, nullptr);
	$StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* permitStatus = nullptr;
	$init($StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
	while ((permitStatus = this->permitStatus()) != $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::NO_MORE) {
		if (permitStatus == $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::MAYBE_MORE) {
			if (sb == nullptr) {
				$assign(sb, bufferCreate(this->chunkSize));
			} else {
				$nc(sb)->reset();
			}
			$var($Object, sbc, $of(sb));
			int64_t permitsRequested = 0;
			do {
			} while ($nc(($cast($Spliterator$OfPrimitive, this->s)))->tryAdvance(sbc) && ++permitsRequested < this->chunkSize);
			if (permitsRequested == 0) {
				return;
			}
			$nc(sb)->forEach(action, acquirePermits(permitsRequested));
		} else {
			$nc(($cast($Spliterator$OfPrimitive, this->s)))->forEachRemaining(action);
			return;
		}
	}
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::trySplit() {
	return $cast($Spliterator$OfPrimitive, $StreamSpliterators$UnorderedSliceSpliterator::trySplit());
}

StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive() {
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive, name, initialize, &_StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_ClassInfo_, allocate$StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive);
	return class$;
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java