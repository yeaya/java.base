#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive.h>

#include <java/lang/Math.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $StreamSpliterators$SliceSpliterator = ::java::util::stream::StreamSpliterators$SliceSpliterator;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _StreamSpliterators$SliceSpliterator$OfPrimitive_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator$OfPrimitive;JJ)V", "(TT_SPLITR;JJ)V", 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfPrimitive::*)($Spliterator$OfPrimitive*,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfPrimitive::init$))},
	{"<init>", "(Ljava/util/Spliterator$OfPrimitive;JJJJ)V", "(TT_SPLITR;JJJJ)V", $PRIVATE, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfPrimitive::*)($Spliterator$OfPrimitive*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfPrimitive::init$))},
	{"emptyConsumer", "()Ljava/lang/Object;", "()TT_CONS;", $PROTECTED | $ABSTRACT},
	{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", "(TT_CONS;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator$OfPrimitive;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _StreamSpliterators$SliceSpliterator$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$SliceSpliterator", "java.util.stream.StreamSpliterators", "SliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$SliceSpliterator$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive",
	"java.util.stream.StreamSpliterators$SliceSpliterator",
	"java.util.Spliterator$OfPrimitive",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfPrimitive_MethodInfo_,
	"<T:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;T_CONS:Ljava/lang/Object;>Ljava/util/stream/StreamSpliterators$SliceSpliterator<TT;TT_SPLITR;>;Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$SliceSpliterator$OfPrimitive($Class* clazz) {
	return $of($alloc(StreamSpliterators$SliceSpliterator$OfPrimitive));
}

int64_t StreamSpliterators$SliceSpliterator$OfPrimitive::estimateSize() {
	 return this->$StreamSpliterators$SliceSpliterator::estimateSize();
}

int32_t StreamSpliterators$SliceSpliterator$OfPrimitive::characteristics() {
	 return this->$StreamSpliterators$SliceSpliterator::characteristics();
}

int32_t StreamSpliterators$SliceSpliterator$OfPrimitive::hashCode() {
	 return this->$StreamSpliterators$SliceSpliterator::hashCode();
}

bool StreamSpliterators$SliceSpliterator$OfPrimitive::equals(Object$* obj) {
	 return this->$StreamSpliterators$SliceSpliterator::equals(obj);
}

$Object* StreamSpliterators$SliceSpliterator$OfPrimitive::clone() {
	 return this->$StreamSpliterators$SliceSpliterator::clone();
}

$String* StreamSpliterators$SliceSpliterator$OfPrimitive::toString() {
	 return this->$StreamSpliterators$SliceSpliterator::toString();
}

void StreamSpliterators$SliceSpliterator$OfPrimitive::finalize() {
	this->$StreamSpliterators$SliceSpliterator::finalize();
}

void StreamSpliterators$SliceSpliterator$OfPrimitive::init$($Spliterator$OfPrimitive* s, int64_t sliceOrigin, int64_t sliceFence) {
	StreamSpliterators$SliceSpliterator$OfPrimitive::init$(s, sliceOrigin, sliceFence, 0, $Math::min($nc(s)->estimateSize(), sliceFence));
}

void StreamSpliterators$SliceSpliterator$OfPrimitive::init$($Spliterator$OfPrimitive* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	$StreamSpliterators$SliceSpliterator::init$(s, sliceOrigin, sliceFence, origin, fence);
}

bool StreamSpliterators$SliceSpliterator$OfPrimitive::tryAdvance(Object$* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	if (this->sliceOrigin >= this->fence) {
		return false;
	}
	while (this->sliceOrigin > this->index) {
		$nc(($cast($Spliterator$OfPrimitive, this->s)))->tryAdvance($(emptyConsumer()));
		++this->index;
	}
	if (this->index >= this->fence) {
		return false;
	}
	++this->index;
	return $nc(($cast($Spliterator$OfPrimitive, this->s)))->tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfPrimitive::forEachRemaining(Object$* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	if (this->sliceOrigin >= this->fence) {
		return;
	}
	if (this->index >= this->fence) {
		return;
	}
	if (this->index >= this->sliceOrigin && (this->index + $nc(($cast($Spliterator$OfPrimitive, this->s)))->estimateSize()) <= this->sliceFence) {
		$nc(($cast($Spliterator$OfPrimitive, this->s)))->forEachRemaining(action);
		this->index = this->fence;
	} else {
		while (this->sliceOrigin > this->index) {
			$nc(($cast($Spliterator$OfPrimitive, this->s)))->tryAdvance($(emptyConsumer()));
			++this->index;
		}
		for (; this->index < this->fence; ++this->index) {
			$nc(($cast($Spliterator$OfPrimitive, this->s)))->tryAdvance(action);
		}
	}
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfPrimitive::trySplit() {
	return $cast($Spliterator$OfPrimitive, $StreamSpliterators$SliceSpliterator::trySplit());
}

StreamSpliterators$SliceSpliterator$OfPrimitive::StreamSpliterators$SliceSpliterator$OfPrimitive() {
}

$Class* StreamSpliterators$SliceSpliterator$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$SliceSpliterator$OfPrimitive, name, initialize, &_StreamSpliterators$SliceSpliterator$OfPrimitive_ClassInfo_, allocate$StreamSpliterators$SliceSpliterator$OfPrimitive);
	return class$;
}

$Class* StreamSpliterators$SliceSpliterator$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java