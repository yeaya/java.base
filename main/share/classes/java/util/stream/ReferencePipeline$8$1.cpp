#include <java/util/stream/ReferencePipeline$8$1.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/ReferencePipeline$8.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;
using $ReferencePipeline$8 = ::java::util::stream::ReferencePipeline$8;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$8$1$$Lambda$accept : public $IntConsumer {
	$class(ReferencePipeline$8$1$$Lambda$accept, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($Sink* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int32_t value) override {
		$nc(inst$)->accept(value);
	}
	$Sink* inst$ = nullptr;
};
$Class* ReferencePipeline$8$1$$Lambda$accept::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ReferencePipeline$8$1$$Lambda$accept, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", nullptr, $PUBLIC, $method(ReferencePipeline$8$1$$Lambda$accept, init$, void, $Sink*)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(ReferencePipeline$8$1$$Lambda$accept, accept, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.ReferencePipeline$8$1$$Lambda$accept",
		"java.lang.Object",
		"java.util.function.IntConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReferencePipeline$8$1$$Lambda$accept, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferencePipeline$8$1$$Lambda$accept);
	});
	return class$;
}
$Class* ReferencePipeline$8$1$$Lambda$accept::class$ = nullptr;

void ReferencePipeline$8$1::init$($ReferencePipeline$8* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
	$set(this, downstreamAsInt, $new(ReferencePipeline$8$1$$Lambda$accept, $nc(this->downstream)));
}

void ReferencePipeline$8$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void ReferencePipeline$8$1::accept(Object$* u) {
	$useLocalObjectStack();
	{
		$var($IntStream, result, $cast($IntStream, $nc(this->this$1->val$mapper)->apply(u)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (result != nullptr) {
					if (!this->cancellationRequestedCalled) {
						$$nc(result->sequential())->forEach(this->downstreamAsInt);
					} else {
						$var($Spliterator$OfInt, s, $cast($Spliterator$OfInt, $$nc(result->sequential())->spliterator()));
						bool var$1 = false;
						do {
							var$1 = !$nc(this->downstream)->cancellationRequested();
						} while (var$1 && $nc(s)->tryAdvance(this->downstreamAsInt));
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

bool ReferencePipeline$8$1::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return $nc(this->downstream)->cancellationRequested();
}

ReferencePipeline$8$1::ReferencePipeline$8$1() {
}

$Class* ReferencePipeline$8$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.ReferencePipeline$8$1$$Lambda$accept")) {
			return ReferencePipeline$8$1$$Lambda$accept::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/stream/ReferencePipeline$8;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$8$1, this$1)},
		{"cancellationRequestedCalled", "Z", nullptr, 0, $field(ReferencePipeline$8$1, cancellationRequestedCalled)},
		{"downstreamAsInt", "Ljava/util/function/IntConsumer;", nullptr, 0, $field(ReferencePipeline$8$1, downstreamAsInt)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/ReferencePipeline$8;Ljava/util/stream/Sink;)V", nullptr, 0, $method(ReferencePipeline$8$1, init$, void, $ReferencePipeline$8*, $Sink*)},
		{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC, $virtualMethod(ReferencePipeline$8$1, accept, void, Object$*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(ReferencePipeline$8$1, begin, void, int64_t)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(ReferencePipeline$8$1, cancellationRequested, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReferencePipeline$8",
		"opWrapSink",
		"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReferencePipeline$8", nullptr, nullptr, 0},
		{"java.util.stream.ReferencePipeline$8$1", nullptr, nullptr, 0},
		{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReferencePipeline$8$1",
		"java.util.stream.Sink$ChainedReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedReference<TP_OUT;Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReferencePipeline"
	};
	$loadClass(ReferencePipeline$8$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferencePipeline$8$1);
	});
	return class$;
}

$Class* ReferencePipeline$8$1::class$ = nullptr;

		} // stream
	} // util
} // java