#include <java/util/stream/StreamSpliterators$WrappingSpliterator.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
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
#include <java/util/function/BooleanSupplier.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/AbstractSpinedBuffer.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SpinedBuffer.h>
#include <java/util/stream/StreamSpliterators$AbstractWrappingSpliterator.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $BooleanSupplier = ::java::util::function::BooleanSupplier;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;
using $AbstractSpinedBuffer = ::java::util::stream::AbstractSpinedBuffer;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink = ::java::util::stream::Sink;
using $SpinedBuffer = ::java::util::stream::SpinedBuffer;
using $StreamSpliterators = ::java::util::stream::StreamSpliterators;
using $StreamSpliterators$AbstractWrappingSpliterator = ::java::util::stream::StreamSpliterators$AbstractWrappingSpliterator;

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$WrappingSpliterator$$Lambda$accept : public $Sink {
	$class(StreamSpliterators$WrappingSpliterator$$Lambda$accept, $NO_CLASS_INIT, $Sink)
public:
	void init$($SpinedBuffer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* e) override {
		$nc(inst$)->accept(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StreamSpliterators$WrappingSpliterator$$Lambda$accept>());
	}
	$SpinedBuffer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StreamSpliterators$WrappingSpliterator$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(StreamSpliterators$WrappingSpliterator$$Lambda$accept, inst$)},
	{}
};
$MethodInfo StreamSpliterators$WrappingSpliterator$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/SpinedBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSpliterators$WrappingSpliterator$$Lambda$accept::*)($SpinedBuffer*)>(&StreamSpliterators$WrappingSpliterator$$Lambda$accept::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StreamSpliterators$WrappingSpliterator$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.StreamSpliterators$WrappingSpliterator$$Lambda$accept",
	"java.lang.Object",
	"java.util.stream.Sink",
	fieldInfos,
	methodInfos
};
$Class* StreamSpliterators$WrappingSpliterator$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$WrappingSpliterator$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StreamSpliterators$WrappingSpliterator$$Lambda$accept::class$ = nullptr;

class StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1 : public $BooleanSupplier {
	$class(StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1, $NO_CLASS_INIT, $BooleanSupplier)
public:
	void init$(StreamSpliterators$WrappingSpliterator* inst) {
		$set(this, inst$, inst);
	}
	virtual bool getAsBoolean() override {
		 return $nc(inst$)->lambda$initPartialTraversalState$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1>());
	}
	StreamSpliterators$WrappingSpliterator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1, inst$)},
	{}
};
$MethodInfo StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/StreamSpliterators$WrappingSpliterator;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::*)(StreamSpliterators$WrappingSpliterator*)>(&StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::init$))},
	{"getAsBoolean", "()Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1",
	"java.lang.Object",
	"java.util.function.BooleanSupplier",
	fieldInfos,
	methodInfos
};
$Class* StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::class$ = nullptr;

class StreamSpliterators$WrappingSpliterator$$Lambda$accept$2 : public $Sink {
	$class(StreamSpliterators$WrappingSpliterator$$Lambda$accept$2, $NO_CLASS_INIT, $Sink)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->accept(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StreamSpliterators$WrappingSpliterator$$Lambda$accept$2>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(StreamSpliterators$WrappingSpliterator$$Lambda$accept$2, inst$)},
	{}
};
$MethodInfo StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::*)($Consumer*)>(&StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.StreamSpliterators$WrappingSpliterator$$Lambda$accept$2",
	"java.lang.Object",
	"java.util.stream.Sink",
	fieldInfos,
	methodInfos
};
$Class* StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$WrappingSpliterator$$Lambda$accept$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::class$ = nullptr;

$MethodInfo _StreamSpliterators$WrappingSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/function/Supplier;Z)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/function/Supplier<Ljava/util/Spliterator<TP_IN;>;>;Z)V", 0, $method(static_cast<void(StreamSpliterators$WrappingSpliterator::*)($PipelineHelper*,$Supplier*,bool)>(&StreamSpliterators$WrappingSpliterator::init$))},
	{"<init>", "(Ljava/util/stream/PipelineHelper;Ljava/util/Spliterator;Z)V", "(Ljava/util/stream/PipelineHelper<TP_OUT;>;Ljava/util/Spliterator<TP_IN;>;Z)V", 0, $method(static_cast<void(StreamSpliterators$WrappingSpliterator::*)($PipelineHelper*,$Spliterator*,bool)>(&StreamSpliterators$WrappingSpliterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TP_OUT;>;)V", $PUBLIC},
	{"initPartialTraversalState", "()V", nullptr, 0},
	{"lambda$initPartialTraversalState$0", "()Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(StreamSpliterators$WrappingSpliterator::*)()>(&StreamSpliterators$WrappingSpliterator::lambda$initPartialTraversalState$0))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TP_OUT;>;)Z", $PUBLIC},
	{"wrap", "(Ljava/util/Spliterator;)Ljava/util/stream/StreamSpliterators$WrappingSpliterator;", "(Ljava/util/Spliterator<TP_IN;>;)Ljava/util/stream/StreamSpliterators$WrappingSpliterator<TP_IN;TP_OUT;>;", 0},
	{}
};

$InnerClassInfo _StreamSpliterators$WrappingSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$WrappingSpliterator", "java.util.stream.StreamSpliterators", "WrappingSpliterator", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$AbstractWrappingSpliterator", "java.util.stream.StreamSpliterators", "AbstractWrappingSpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$WrappingSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$WrappingSpliterator",
	"java.util.stream.StreamSpliterators$AbstractWrappingSpliterator",
	nullptr,
	nullptr,
	_StreamSpliterators$WrappingSpliterator_MethodInfo_,
	"<P_IN:Ljava/lang/Object;P_OUT:Ljava/lang/Object;>Ljava/util/stream/StreamSpliterators$AbstractWrappingSpliterator<TP_IN;TP_OUT;Ljava/util/stream/SpinedBuffer<TP_OUT;>;>;",
	nullptr,
	_StreamSpliterators$WrappingSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$WrappingSpliterator($Class* clazz) {
	return $of($alloc(StreamSpliterators$WrappingSpliterator));
}

void StreamSpliterators$WrappingSpliterator::init$($PipelineHelper* ph, $Supplier* supplier, bool parallel) {
	$StreamSpliterators$AbstractWrappingSpliterator::init$(ph, supplier, parallel);
}

void StreamSpliterators$WrappingSpliterator::init$($PipelineHelper* ph, $Spliterator* spliterator, bool parallel) {
	$StreamSpliterators$AbstractWrappingSpliterator::init$(ph, spliterator, parallel);
}

StreamSpliterators$WrappingSpliterator* StreamSpliterators$WrappingSpliterator::wrap($Spliterator* s) {
	return $new(StreamSpliterators$WrappingSpliterator, this->ph, s, this->isParallel);
}

void StreamSpliterators$WrappingSpliterator::initPartialTraversalState() {
	$var($SpinedBuffer, b, $new($SpinedBuffer));
	$set(this, buffer, b);
	$set(this, bufferSink, $nc(this->ph)->wrapSink(static_cast<$Sink*>($$new(StreamSpliterators$WrappingSpliterator$$Lambda$accept, static_cast<$SpinedBuffer*>(b)))));
	$set(this, pusher, static_cast<$BooleanSupplier*>($new(StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1, this)));
}

bool StreamSpliterators$WrappingSpliterator::tryAdvance($Consumer* consumer) {
	$Objects::requireNonNull(consumer);
	bool hasNext = doAdvance();
	if (hasNext) {
		consumer->accept($($nc(($cast($SpinedBuffer, this->buffer)))->get(this->nextToConsume)));
	}
	return hasNext;
}

void StreamSpliterators$WrappingSpliterator::forEachRemaining($Consumer* consumer) {
	if (this->buffer == nullptr && !this->finished) {
		$Objects::requireNonNull(consumer);
		init();
		$nc(this->ph)->wrapAndCopyInto(static_cast<$Sink*>($$new(StreamSpliterators$WrappingSpliterator$$Lambda$accept$2, static_cast<$Consumer*>(consumer))), this->spliterator);
		this->finished = true;
	} else {
		do {
		} while (tryAdvance(consumer));
	}
}

bool StreamSpliterators$WrappingSpliterator::lambda$initPartialTraversalState$0() {
	return $nc(this->spliterator)->tryAdvance(this->bufferSink);
}

StreamSpliterators$WrappingSpliterator::StreamSpliterators$WrappingSpliterator() {
}

$Class* StreamSpliterators$WrappingSpliterator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StreamSpliterators$WrappingSpliterator$$Lambda$accept::classInfo$.name)) {
			return StreamSpliterators$WrappingSpliterator$$Lambda$accept::load$(name, initialize);
		}
		if (name->equals(StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::classInfo$.name)) {
			return StreamSpliterators$WrappingSpliterator$$Lambda$lambda$initPartialTraversalState$0$1::load$(name, initialize);
		}
		if (name->equals(StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::classInfo$.name)) {
			return StreamSpliterators$WrappingSpliterator$$Lambda$accept$2::load$(name, initialize);
		}
	}
	$loadClass(StreamSpliterators$WrappingSpliterator, name, initialize, &_StreamSpliterators$WrappingSpliterator_ClassInfo_, allocate$StreamSpliterators$WrappingSpliterator);
	return class$;
}

$Class* StreamSpliterators$WrappingSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java