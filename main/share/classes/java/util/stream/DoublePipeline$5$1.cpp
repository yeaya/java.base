#include <java/util/stream/DoublePipeline$5$1.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/function/DoubleFunction.h>
#include <java/util/stream/DoublePipeline$5.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $DoubleFunction = ::java::util::function::DoubleFunction;
using $DoublePipeline$5 = ::java::util::stream::DoublePipeline$5;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

class DoublePipeline$5$1$$Lambda$accept : public $DoubleConsumer {
	$class(DoublePipeline$5$1$$Lambda$accept, $NO_CLASS_INIT, $DoubleConsumer)
public:
	void init$($Sink* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(double value) override {
		$nc(inst$)->accept(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoublePipeline$5$1$$Lambda$accept>());
	}
	$Sink* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DoublePipeline$5$1$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoublePipeline$5$1$$Lambda$accept, inst$)},
	{}
};
$MethodInfo DoublePipeline$5$1$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", nullptr, $PUBLIC, $method(static_cast<void(DoublePipeline$5$1$$Lambda$accept::*)($Sink*)>(&DoublePipeline$5$1$$Lambda$accept::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DoublePipeline$5$1$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.DoublePipeline$5$1$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	fieldInfos,
	methodInfos
};
$Class* DoublePipeline$5$1$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(DoublePipeline$5$1$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoublePipeline$5$1$$Lambda$accept::class$ = nullptr;

$FieldInfo _DoublePipeline$5$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/DoublePipeline$5;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$5$1, this$1)},
	{"cancellationRequestedCalled", "Z", nullptr, 0, $field(DoublePipeline$5$1, cancellationRequestedCalled)},
	{"downstreamAsDouble", "Ljava/util/function/DoubleConsumer;", nullptr, 0, $field(DoublePipeline$5$1, downstreamAsDouble)},
	{}
};

$MethodInfo _DoublePipeline$5$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/DoublePipeline$5;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(DoublePipeline$5$1::*)($DoublePipeline$5*,$Sink*)>(&DoublePipeline$5$1::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DoublePipeline$5$1_EnclosingMethodInfo_ = {
	"java.util.stream.DoublePipeline$5",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _DoublePipeline$5$1_InnerClassesInfo_[] = {
	{"java.util.stream.DoublePipeline$5", nullptr, nullptr, 0},
	{"java.util.stream.DoublePipeline$5$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DoublePipeline$5$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.DoublePipeline$5$1",
	"java.util.stream.Sink$ChainedDouble",
	nullptr,
	_DoublePipeline$5$1_FieldInfo_,
	_DoublePipeline$5$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
	&_DoublePipeline$5$1_EnclosingMethodInfo_,
	_DoublePipeline$5$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.DoublePipeline"
};

$Object* allocate$DoublePipeline$5$1($Class* clazz) {
	return $of($alloc(DoublePipeline$5$1));
}

void DoublePipeline$5$1::init$($DoublePipeline$5* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedDouble::init$(downstream);
	$set(this, downstreamAsDouble, static_cast<$DoubleConsumer*>($new(DoublePipeline$5$1$$Lambda$accept, static_cast<$Sink*>($nc(this->downstream)))));
}

void DoublePipeline$5$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void DoublePipeline$5$1::accept(double t) {
	$useLocalCurrentObjectStackCache();
	{
		$var($DoubleStream, result, $cast($DoubleStream, $nc(this->this$1->val$mapper)->apply(t)));
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

bool DoublePipeline$5$1::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return $nc(this->downstream)->cancellationRequested();
}

DoublePipeline$5$1::DoublePipeline$5$1() {
}

$Class* DoublePipeline$5$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DoublePipeline$5$1$$Lambda$accept::classInfo$.name)) {
			return DoublePipeline$5$1$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(DoublePipeline$5$1, name, initialize, &_DoublePipeline$5$1_ClassInfo_, allocate$DoublePipeline$5$1);
	return class$;
}

$Class* DoublePipeline$5$1::class$ = nullptr;

		} // stream
	} // util
} // java