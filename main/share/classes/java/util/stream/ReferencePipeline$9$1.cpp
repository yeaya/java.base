#include <java/util/stream/ReferencePipeline$9$1.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/ReferencePipeline$9.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $Function = ::java::util::function::Function;
using $BaseStream = ::java::util::stream::BaseStream;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $ReferencePipeline$9 = ::java::util::stream::ReferencePipeline$9;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$9$1$$Lambda$accept : public $DoubleConsumer {
	$class(ReferencePipeline$9$1$$Lambda$accept, $NO_CLASS_INIT, $DoubleConsumer)
public:
	void init$($Sink* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(double value) override {
		$nc(inst$)->accept(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ReferencePipeline$9$1$$Lambda$accept>());
	}
	$Sink* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ReferencePipeline$9$1$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ReferencePipeline$9$1$$Lambda$accept, inst$)},
	{}
};
$MethodInfo ReferencePipeline$9$1$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferencePipeline$9$1$$Lambda$accept::*)($Sink*)>(&ReferencePipeline$9$1$$Lambda$accept::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ReferencePipeline$9$1$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.ReferencePipeline$9$1$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	fieldInfos,
	methodInfos
};
$Class* ReferencePipeline$9$1$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$9$1$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ReferencePipeline$9$1$$Lambda$accept::class$ = nullptr;

$FieldInfo _ReferencePipeline$9$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/ReferencePipeline$9;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$9$1, this$1)},
	{"cancellationRequestedCalled", "Z", nullptr, 0, $field(ReferencePipeline$9$1, cancellationRequestedCalled)},
	{"downstreamAsDouble", "Ljava/util/function/DoubleConsumer;", nullptr, 0, $field(ReferencePipeline$9$1, downstreamAsDouble)},
	{}
};

$MethodInfo _ReferencePipeline$9$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline$9;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$9$1::*)($ReferencePipeline$9*,$Sink*)>(&ReferencePipeline$9$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$9$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline$9",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _ReferencePipeline$9$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$9", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$9$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$9$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$9$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_ReferencePipeline$9$1_FieldInfo_,
	_ReferencePipeline$9$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TP_OUT;Ljava/lang/Double;>;",
	&_ReferencePipeline$9$1_EnclosingMethodInfo_,
	_ReferencePipeline$9$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$9$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$9$1));
}

void ReferencePipeline$9$1::init$($ReferencePipeline$9* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
	$set(this, downstreamAsDouble, static_cast<$DoubleConsumer*>($new(ReferencePipeline$9$1$$Lambda$accept, static_cast<$Sink*>($nc(this->downstream)))));
}

void ReferencePipeline$9$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void ReferencePipeline$9$1::accept(Object$* u) {
	$useLocalCurrentObjectStackCache();
	{
		$var($DoubleStream, result, $cast($DoubleStream, $nc(this->this$1->val$mapper)->apply(u)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (result != nullptr) {
						if (!this->cancellationRequestedCalled) {
							$nc($(result->sequential()))->forEach(this->downstreamAsDouble);
						} else {
							$var($Spliterator$OfDouble, s, $cast($Spliterator$OfDouble, $nc($(result->sequential()))->spliterator()));
							bool var$1 = false;
							do {
								var$1 = !$nc(this->downstream)->cancellationRequested();
							} while (var$1 && $nc(s)->tryAdvance(this->downstreamAsDouble));
						}
					}
				} catch ($Throwable& t$) {
					if (result != nullptr) {
						try {
							result->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} /*finally*/ {
				if (result != nullptr) {
					result->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

bool ReferencePipeline$9$1::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return $nc(this->downstream)->cancellationRequested();
}

ReferencePipeline$9$1::ReferencePipeline$9$1() {
}

$Class* ReferencePipeline$9$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ReferencePipeline$9$1$$Lambda$accept::classInfo$.name)) {
			return ReferencePipeline$9$1$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(ReferencePipeline$9$1, name, initialize, &_ReferencePipeline$9$1_ClassInfo_, allocate$ReferencePipeline$9$1);
	return class$;
}

$Class* ReferencePipeline$9$1::class$ = nullptr;

		} // stream
	} // util
} // java