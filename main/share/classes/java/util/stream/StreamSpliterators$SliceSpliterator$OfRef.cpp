#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfRef.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
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
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $StreamSpliterators$SliceSpliterator = ::java::util::stream::StreamSpliterators$SliceSpliterator;

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0 : public $Consumer {
	$class(StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* e) override {
		StreamSpliterators$SliceSpliterator$OfRef::lambda$tryAdvance$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0::*)()>(&StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0::class$ = nullptr;

$MethodInfo _StreamSpliterators$SliceSpliterator$OfRef_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator;JJ)V", "(Ljava/util/Spliterator<TT;>;JJ)V", 0, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfRef::*)($Spliterator*,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfRef::init$))},
	{"<init>", "(Ljava/util/Spliterator;JJJJ)V", "(Ljava/util/Spliterator<TT;>;JJJJ)V", $PRIVATE, $method(static_cast<void(StreamSpliterators$SliceSpliterator$OfRef::*)($Spliterator*,int64_t,int64_t,int64_t,int64_t)>(&StreamSpliterators$SliceSpliterator$OfRef::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"lambda$tryAdvance$0", "(Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Object$*)>(&StreamSpliterators$SliceSpliterator$OfRef::lambda$tryAdvance$0))},
	{"makeSpliterator", "(Ljava/util/Spliterator;JJJJ)Ljava/util/Spliterator;", "(Ljava/util/Spliterator<TT;>;JJJJ)Ljava/util/Spliterator<TT;>;", $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{"*trySplit", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$SliceSpliterator$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$SliceSpliterator", "java.util.stream.StreamSpliterators", "SliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$SliceSpliterator$OfRef", "java.util.stream.StreamSpliterators$SliceSpliterator", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$SliceSpliterator$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$SliceSpliterator$OfRef",
	"java.util.stream.StreamSpliterators$SliceSpliterator",
	"java.util.Spliterator",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/StreamSpliterators$SliceSpliterator<TT;Ljava/util/Spliterator<TT;>;>;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_StreamSpliterators$SliceSpliterator$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$SliceSpliterator$OfRef($Class* clazz) {
	return $of($alloc(StreamSpliterators$SliceSpliterator$OfRef));
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfRef::trySplit() {
	 return this->$StreamSpliterators$SliceSpliterator::trySplit();
}

int64_t StreamSpliterators$SliceSpliterator$OfRef::estimateSize() {
	 return this->$StreamSpliterators$SliceSpliterator::estimateSize();
}

int32_t StreamSpliterators$SliceSpliterator$OfRef::characteristics() {
	 return this->$StreamSpliterators$SliceSpliterator::characteristics();
}

int32_t StreamSpliterators$SliceSpliterator$OfRef::hashCode() {
	 return this->$StreamSpliterators$SliceSpliterator::hashCode();
}

bool StreamSpliterators$SliceSpliterator$OfRef::equals(Object$* obj) {
	 return this->$StreamSpliterators$SliceSpliterator::equals(obj);
}

$Object* StreamSpliterators$SliceSpliterator$OfRef::clone() {
	 return this->$StreamSpliterators$SliceSpliterator::clone();
}

$String* StreamSpliterators$SliceSpliterator$OfRef::toString() {
	 return this->$StreamSpliterators$SliceSpliterator::toString();
}

void StreamSpliterators$SliceSpliterator$OfRef::finalize() {
	this->$StreamSpliterators$SliceSpliterator::finalize();
}

void StreamSpliterators$SliceSpliterator$OfRef::init$($Spliterator* s, int64_t sliceOrigin, int64_t sliceFence) {
	StreamSpliterators$SliceSpliterator$OfRef::init$(s, sliceOrigin, sliceFence, 0, $Math::min($nc(s)->estimateSize(), sliceFence));
}

void StreamSpliterators$SliceSpliterator$OfRef::init$($Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	$StreamSpliterators$SliceSpliterator::init$(s, sliceOrigin, sliceFence, origin, fence);
}

$Spliterator* StreamSpliterators$SliceSpliterator$OfRef::makeSpliterator($Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {
	return $new(StreamSpliterators$SliceSpliterator$OfRef, s, sliceOrigin, sliceFence, origin, fence);
}

bool StreamSpliterators$SliceSpliterator$OfRef::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->sliceOrigin >= this->fence) {
		return false;
	}
	while (this->sliceOrigin > this->index) {
		$nc(this->s)->tryAdvance(static_cast<$Consumer*>($$new(StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0)));
		++this->index;
	}
	if (this->index >= this->fence) {
		return false;
	}
	++this->index;
	return $nc(this->s)->tryAdvance(action);
}

void StreamSpliterators$SliceSpliterator$OfRef::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->sliceOrigin >= this->fence) {
		return;
	}
	if (this->index >= this->fence) {
		return;
	}
	if (this->index >= this->sliceOrigin && (this->index + $nc(this->s)->estimateSize()) <= this->sliceFence) {
		$nc(this->s)->forEachRemaining(action);
		this->index = this->fence;
	} else {
		while (this->sliceOrigin > this->index) {
			$nc(this->s)->tryAdvance(static_cast<$Consumer*>($$new(StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0)));
			++this->index;
		}
		for (; this->index < this->fence; ++this->index) {
			$nc(this->s)->tryAdvance(action);
		}
	}
}

void StreamSpliterators$SliceSpliterator$OfRef::lambda$tryAdvance$0(Object$* e) {
	$init(StreamSpliterators$SliceSpliterator$OfRef);
}

StreamSpliterators$SliceSpliterator$OfRef::StreamSpliterators$SliceSpliterator$OfRef() {
}

$Class* StreamSpliterators$SliceSpliterator$OfRef::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0::classInfo$.name)) {
			return StreamSpliterators$SliceSpliterator$OfRef$$Lambda$lambda$tryAdvance$0::load$(name, initialize);
		}
	}
	$loadClass(StreamSpliterators$SliceSpliterator$OfRef, name, initialize, &_StreamSpliterators$SliceSpliterator$OfRef_ClassInfo_, allocate$StreamSpliterators$SliceSpliterator$OfRef);
	return class$;
}

$Class* StreamSpliterators$SliceSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java