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
	$Sink* inst$ = nullptr;
};
$Class* DoublePipeline$5$1$$Lambda$accept::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoublePipeline$5$1$$Lambda$accept, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", nullptr, $PUBLIC, $method(DoublePipeline$5$1$$Lambda$accept, init$, void, $Sink*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$5$1$$Lambda$accept, accept, void, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.DoublePipeline$5$1$$Lambda$accept",
		"java.lang.Object",
		"java.util.function.DoubleConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DoublePipeline$5$1$$Lambda$accept, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoublePipeline$5$1$$Lambda$accept);
	});
	return class$;
}
$Class* DoublePipeline$5$1$$Lambda$accept::class$ = nullptr;

void DoublePipeline$5$1::init$($DoublePipeline$5* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedDouble::init$(downstream);
	$set(this, downstreamAsDouble, $new(DoublePipeline$5$1$$Lambda$accept, $nc(this->downstream)));
}

void DoublePipeline$5$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void DoublePipeline$5$1::accept(double t) {
	$useLocalObjectStack();
	{
		$var($DoubleStream, result, $cast($DoubleStream, $nc(this->this$1->val$mapper)->apply(t)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (result != nullptr) {
					if (!this->cancellationRequestedCalled) {
						$$nc(result->sequential())->forEach(this->downstreamAsDouble);
					} else {
						$var($Spliterator$OfDouble, s, $cast($Spliterator$OfDouble, $$nc(result->sequential())->spliterator()));
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

bool DoublePipeline$5$1::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return $nc(this->downstream)->cancellationRequested();
}

DoublePipeline$5$1::DoublePipeline$5$1() {
}

$Class* DoublePipeline$5$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.DoublePipeline$5$1$$Lambda$accept")) {
			return DoublePipeline$5$1$$Lambda$accept::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/stream/DoublePipeline$5;", nullptr, $FINAL | $SYNTHETIC, $field(DoublePipeline$5$1, this$1)},
		{"cancellationRequestedCalled", "Z", nullptr, 0, $field(DoublePipeline$5$1, cancellationRequestedCalled)},
		{"downstreamAsDouble", "Ljava/util/function/DoubleConsumer;", nullptr, 0, $field(DoublePipeline$5$1, downstreamAsDouble)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/DoublePipeline$5;Ljava/util/stream/Sink;)V", nullptr, 0, $method(DoublePipeline$5$1, init$, void, $DoublePipeline$5*, $Sink*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$5$1, accept, void, double)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$5$1, begin, void, int64_t)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(DoublePipeline$5$1, cancellationRequested, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.DoublePipeline$5",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.DoublePipeline$5", nullptr, nullptr, 0},
		{"java.util.stream.DoublePipeline$5$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.DoublePipeline$5$1",
		"java.util.stream.Sink$ChainedDouble",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.DoublePipeline"
	};
	$loadClass(DoublePipeline$5$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DoublePipeline$5$1));
	});
	return class$;
}

$Class* DoublePipeline$5$1::class$ = nullptr;

		} // stream
	} // util
} // java