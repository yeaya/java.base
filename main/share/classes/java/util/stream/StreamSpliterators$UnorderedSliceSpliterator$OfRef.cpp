#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfRef.h>

#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfRef.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$PermitStatus.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator.h>
#include <jcpp.h>

#undef MAYBE_MORE
#undef NO_MORE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $StreamSpliterators$ArrayBuffer$OfRef = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfRef;
using $StreamSpliterators$UnorderedSliceSpliterator = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator;
using $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus = ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$UnorderedSliceSpliterator$OfRef_FieldInfo_[] = {
	{"tmpSlot", "Ljava/lang/Object;", "TT;", 0, $field(StreamSpliterators$UnorderedSliceSpliterator$OfRef, tmpSlot)},
	{}
};

$MethodInfo _StreamSpliterators$UnorderedSliceSpliterator$OfRef_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator;JJ)V", "(Ljava/util/Spliterator<TT;>;JJ)V", 0, $method(StreamSpliterators$UnorderedSliceSpliterator$OfRef, init$, void, $Spliterator*, int64_t, int64_t)},
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfRef;)V", "(Ljava/util/Spliterator<TT;>;Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfRef<TT;>;)V", 0, $method(StreamSpliterators$UnorderedSliceSpliterator$OfRef, init$, void, $Spliterator*, StreamSpliterators$UnorderedSliceSpliterator$OfRef*)},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $FINAL, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfRef, accept, void, Object$*)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfRef, forEachRemaining, void, $Consumer*)},
	{"makeSpliterator", "(Ljava/util/Spliterator;)Ljava/util/Spliterator;", "(Ljava/util/Spliterator<TT;>;)Ljava/util/Spliterator<TT;>;", $PROTECTED, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfRef, makeSpliterator, $Spliterator*, $Spliterator*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC, $virtualMethod(StreamSpliterators$UnorderedSliceSpliterator$OfRef, tryAdvance, bool, $Consumer*)},
	{"*trySplit", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "java.util.stream.StreamSpliterators", "UnorderedSliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfRef", "java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$UnorderedSliceSpliterator$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfRef",
	"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator",
	"java.util.Spliterator,java.util.function.Consumer",
	_StreamSpliterators$UnorderedSliceSpliterator$OfRef_FieldInfo_,
	_StreamSpliterators$UnorderedSliceSpliterator$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/StreamSpliterators$UnorderedSliceSpliterator<TT;Ljava/util/Spliterator<TT;>;>;Ljava/util/Spliterator<TT;>;Ljava/util/function/Consumer<TT;>;",
	nullptr,
	_StreamSpliterators$UnorderedSliceSpliterator$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$UnorderedSliceSpliterator$OfRef($Class* clazz) {
	return $of($alloc(StreamSpliterators$UnorderedSliceSpliterator$OfRef));
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfRef::trySplit() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::trySplit();
}

int64_t StreamSpliterators$UnorderedSliceSpliterator$OfRef::estimateSize() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::estimateSize();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfRef::characteristics() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::characteristics();
}

int32_t StreamSpliterators$UnorderedSliceSpliterator$OfRef::hashCode() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::hashCode();
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfRef::equals(Object$* obj) {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::equals(obj);
}

$Object* StreamSpliterators$UnorderedSliceSpliterator$OfRef::clone() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::clone();
}

$String* StreamSpliterators$UnorderedSliceSpliterator$OfRef::toString() {
	 return this->$StreamSpliterators$UnorderedSliceSpliterator::toString();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfRef::finalize() {
	this->$StreamSpliterators$UnorderedSliceSpliterator::finalize();
}

void StreamSpliterators$UnorderedSliceSpliterator$OfRef::init$($Spliterator* s, int64_t skip, int64_t limit) {
	$StreamSpliterators$UnorderedSliceSpliterator::init$(s, skip, limit);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfRef::init$($Spliterator* s, StreamSpliterators$UnorderedSliceSpliterator$OfRef* parent) {
	$StreamSpliterators$UnorderedSliceSpliterator::init$(s, parent);
}

void StreamSpliterators$UnorderedSliceSpliterator$OfRef::accept(Object$* t) {
	$set(this, tmpSlot, t);
}

bool StreamSpliterators$UnorderedSliceSpliterator$OfRef::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	$init($StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
	while (permitStatus() != $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::NO_MORE) {
		if (!$nc(this->s)->tryAdvance(this)) {
			return false;
		} else if (acquirePermits(1) == 1) {
			action->accept(this->tmpSlot);
			$set(this, tmpSlot, nullptr);
			return true;
		}
	}
	return false;
}

void StreamSpliterators$UnorderedSliceSpliterator$OfRef::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	$var($StreamSpliterators$ArrayBuffer$OfRef, sb, nullptr);
	$StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* permitStatus = nullptr;
	$init($StreamSpliterators$UnorderedSliceSpliterator$PermitStatus);
	while ((permitStatus = this->permitStatus()) != $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::NO_MORE) {
		if (permitStatus == $StreamSpliterators$UnorderedSliceSpliterator$PermitStatus::MAYBE_MORE) {
			if (sb == nullptr) {
				$assign(sb, $new($StreamSpliterators$ArrayBuffer$OfRef, this->chunkSize));
			} else {
				$nc(sb)->reset();
			}
			int64_t permitsRequested = 0;
			do {
			} while ($nc(this->s)->tryAdvance(sb) && ++permitsRequested < this->chunkSize);
			if (permitsRequested == 0) {
				return;
			}
			$nc(sb)->forEach(action, acquirePermits(permitsRequested));
		} else {
			$nc(this->s)->forEachRemaining(action);
			return;
		}
	}
}

$Spliterator* StreamSpliterators$UnorderedSliceSpliterator$OfRef::makeSpliterator($Spliterator* s) {
	return $new(StreamSpliterators$UnorderedSliceSpliterator$OfRef, s, this);
}

StreamSpliterators$UnorderedSliceSpliterator$OfRef::StreamSpliterators$UnorderedSliceSpliterator$OfRef() {
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfRef::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$UnorderedSliceSpliterator$OfRef, name, initialize, &_StreamSpliterators$UnorderedSliceSpliterator$OfRef_ClassInfo_, allocate$StreamSpliterators$UnorderedSliceSpliterator$OfRef);
	return class$;
}

$Class* StreamSpliterators$UnorderedSliceSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java