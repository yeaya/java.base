#include <java/util/stream/LongPipeline$6$1.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/function/LongFunction.h>
#include <java/util/stream/LongPipeline$6.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $LongConsumer = ::java::util::function::LongConsumer;
using $LongFunction = ::java::util::function::LongFunction;
using $BaseStream = ::java::util::stream::BaseStream;
using $LongPipeline$6 = ::java::util::stream::LongPipeline$6;
using $LongStream = ::java::util::stream::LongStream;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;

namespace java {
	namespace util {
		namespace stream {

class LongPipeline$6$1$$Lambda$accept : public $LongConsumer {
	$class(LongPipeline$6$1$$Lambda$accept, $NO_CLASS_INIT, $LongConsumer)
public:
	void init$($Sink* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int64_t value) override {
		$nc(inst$)->accept(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LongPipeline$6$1$$Lambda$accept>());
	}
	$Sink* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LongPipeline$6$1$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongPipeline$6$1$$Lambda$accept, inst$)},
	{}
};
$MethodInfo LongPipeline$6$1$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", nullptr, $PUBLIC, $method(static_cast<void(LongPipeline$6$1$$Lambda$accept::*)($Sink*)>(&LongPipeline$6$1$$Lambda$accept::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LongPipeline$6$1$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.LongPipeline$6$1$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.LongConsumer",
	fieldInfos,
	methodInfos
};
$Class* LongPipeline$6$1$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$6$1$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LongPipeline$6$1$$Lambda$accept::class$ = nullptr;

$FieldInfo _LongPipeline$6$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/LongPipeline$6;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$6$1, this$1)},
	{"cancellationRequestedCalled", "Z", nullptr, 0, $field(LongPipeline$6$1, cancellationRequestedCalled)},
	{"downstreamAsLong", "Ljava/util/function/LongConsumer;", nullptr, 0, $field(LongPipeline$6$1, downstreamAsLong)},
	{}
};

$MethodInfo _LongPipeline$6$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/LongPipeline$6;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(LongPipeline$6$1::*)($LongPipeline$6*,$Sink*)>(&LongPipeline$6$1::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LongPipeline$6$1_EnclosingMethodInfo_ = {
	"java.util.stream.LongPipeline$6",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _LongPipeline$6$1_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$6", nullptr, nullptr, 0},
	{"java.util.stream.LongPipeline$6$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPipeline$6$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$6$1",
	"java.util.stream.Sink$ChainedLong",
	nullptr,
	_LongPipeline$6$1_FieldInfo_,
	_LongPipeline$6$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Long;>;",
	&_LongPipeline$6$1_EnclosingMethodInfo_,
	_LongPipeline$6$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$6$1($Class* clazz) {
	return $of($alloc(LongPipeline$6$1));
}

void LongPipeline$6$1::init$($LongPipeline$6* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedLong::init$(downstream);
	$set(this, downstreamAsLong, static_cast<$LongConsumer*>($new(LongPipeline$6$1$$Lambda$accept, static_cast<$Sink*>($nc(this->downstream)))));
}

void LongPipeline$6$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void LongPipeline$6$1::accept(int64_t t) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LongStream, result, $cast($LongStream, $nc(this->this$1->val$mapper)->apply(t)));
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

bool LongPipeline$6$1::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return $nc(this->downstream)->cancellationRequested();
}

LongPipeline$6$1::LongPipeline$6$1() {
}

$Class* LongPipeline$6$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LongPipeline$6$1$$Lambda$accept::classInfo$.name)) {
			return LongPipeline$6$1$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(LongPipeline$6$1, name, initialize, &_LongPipeline$6$1_ClassInfo_, allocate$LongPipeline$6$1);
	return class$;
}

$Class* LongPipeline$6$1::class$ = nullptr;

		} // stream
	} // util
} // java