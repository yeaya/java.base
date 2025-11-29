#include <java/util/stream/ReferencePipeline$10$1.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/ReferencePipeline$10.h>
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
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Function = ::java::util::function::Function;
using $LongConsumer = ::java::util::function::LongConsumer;
using $LongStream = ::java::util::stream::LongStream;
using $ReferencePipeline$10 = ::java::util::stream::ReferencePipeline$10;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$10$1$$Lambda$accept : public $LongConsumer {
	$class(ReferencePipeline$10$1$$Lambda$accept, $NO_CLASS_INIT, $LongConsumer)
public:
	void init$($Sink* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int64_t value) override {
		$nc(inst$)->accept(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ReferencePipeline$10$1$$Lambda$accept>());
	}
	$Sink* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ReferencePipeline$10$1$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ReferencePipeline$10$1$$Lambda$accept, inst$)},
	{}
};
$MethodInfo ReferencePipeline$10$1$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferencePipeline$10$1$$Lambda$accept::*)($Sink*)>(&ReferencePipeline$10$1$$Lambda$accept::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ReferencePipeline$10$1$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.ReferencePipeline$10$1$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.LongConsumer",
	fieldInfos,
	methodInfos
};
$Class* ReferencePipeline$10$1$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$10$1$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ReferencePipeline$10$1$$Lambda$accept::class$ = nullptr;

$FieldInfo _ReferencePipeline$10$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/ReferencePipeline$10;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$10$1, this$1)},
	{"cancellationRequestedCalled", "Z", nullptr, 0, $field(ReferencePipeline$10$1, cancellationRequestedCalled)},
	{"downstreamAsLong", "Ljava/util/function/LongConsumer;", nullptr, 0, $field(ReferencePipeline$10$1, downstreamAsLong)},
	{}
};

$MethodInfo _ReferencePipeline$10$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline$10;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$10$1::*)($ReferencePipeline$10*,$Sink*)>(&ReferencePipeline$10$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$10$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline$10",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _ReferencePipeline$10$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$10", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$10$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$10$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$10$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_ReferencePipeline$10$1_FieldInfo_,
	_ReferencePipeline$10$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TP_OUT;Ljava/lang/Long;>;",
	&_ReferencePipeline$10$1_EnclosingMethodInfo_,
	_ReferencePipeline$10$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$10$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$10$1));
}

void ReferencePipeline$10$1::init$($ReferencePipeline$10* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
	$set(this, downstreamAsLong, static_cast<$LongConsumer*>($new(ReferencePipeline$10$1$$Lambda$accept, static_cast<$Sink*>($nc(this->downstream)))));
}

void ReferencePipeline$10$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void ReferencePipeline$10$1::accept(Object$* u) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LongStream, result, $cast($LongStream, $nc(this->this$1->val$mapper)->apply(u)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (result != nullptr) {
						if (!this->cancellationRequestedCalled) {
							$nc($(result->sequential()))->forEach(this->downstreamAsLong);
						} else {
							$var($Spliterator$OfLong, s, $cast($Spliterator$OfLong, $nc($(result->sequential()))->spliterator()));
							bool var$1 = false;
							do {
								var$1 = !$nc(this->downstream)->cancellationRequested();
							} while (var$1 && $nc(s)->tryAdvance(this->downstreamAsLong));
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

bool ReferencePipeline$10$1::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return $nc(this->downstream)->cancellationRequested();
}

ReferencePipeline$10$1::ReferencePipeline$10$1() {
}

$Class* ReferencePipeline$10$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ReferencePipeline$10$1$$Lambda$accept::classInfo$.name)) {
			return ReferencePipeline$10$1$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(ReferencePipeline$10$1, name, initialize, &_ReferencePipeline$10$1_ClassInfo_, allocate$ReferencePipeline$10$1);
	return class$;
}

$Class* ReferencePipeline$10$1::class$ = nullptr;

		} // stream
	} // util
} // java