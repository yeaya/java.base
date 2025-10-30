#include <java/util/stream/ReferencePipeline$7$1.h>

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/ReferencePipeline$7.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $BaseStream = ::java::util::stream::BaseStream;
using $ReferencePipeline$7 = ::java::util::stream::ReferencePipeline$7;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReferencePipeline$7$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/ReferencePipeline$7;", nullptr, $FINAL | $SYNTHETIC, $field(ReferencePipeline$7$1, this$1)},
	{"cancellationRequestedCalled", "Z", nullptr, 0, $field(ReferencePipeline$7$1, cancellationRequestedCalled)},
	{}
};

$MethodInfo _ReferencePipeline$7$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/ReferencePipeline$7;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(ReferencePipeline$7$1::*)($ReferencePipeline$7*,$Sink*)>(&ReferencePipeline$7$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TP_OUT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReferencePipeline$7$1_EnclosingMethodInfo_ = {
	"java.util.stream.ReferencePipeline$7",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _ReferencePipeline$7$1_InnerClassesInfo_[] = {
	{"java.util.stream.ReferencePipeline$7", nullptr, nullptr, 0},
	{"java.util.stream.ReferencePipeline$7$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferencePipeline$7$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.ReferencePipeline$7$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_ReferencePipeline$7$1_FieldInfo_,
	_ReferencePipeline$7$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TP_OUT;TR;>;",
	&_ReferencePipeline$7$1_EnclosingMethodInfo_,
	_ReferencePipeline$7$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReferencePipeline"
};

$Object* allocate$ReferencePipeline$7$1($Class* clazz) {
	return $of($alloc(ReferencePipeline$7$1));
}

void ReferencePipeline$7$1::init$($ReferencePipeline$7* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedReference::init$(downstream);
}

void ReferencePipeline$7$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void ReferencePipeline$7$1::accept(Object$* u) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Stream, result, $cast($Stream, $nc(this->this$1->val$mapper)->apply(u)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (result != nullptr) {
						if (!this->cancellationRequestedCalled) {
							$nc(($cast($Stream, $(result->sequential()))))->forEach(this->downstream);
						} else {
							$var($Spliterator, s, $nc(($cast($Stream, $(result->sequential()))))->spliterator());
							bool var$1 = false;
							do {
								var$1 = !$nc(this->downstream)->cancellationRequested();
							} while (var$1 && $nc(s)->tryAdvance(this->downstream));
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

bool ReferencePipeline$7$1::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return $nc(this->downstream)->cancellationRequested();
}

ReferencePipeline$7$1::ReferencePipeline$7$1() {
}

$Class* ReferencePipeline$7$1::load$($String* name, bool initialize) {
	$loadClass(ReferencePipeline$7$1, name, initialize, &_ReferencePipeline$7$1_ClassInfo_, allocate$ReferencePipeline$7$1);
	return class$;
}

$Class* ReferencePipeline$7$1::class$ = nullptr;

		} // stream
	} // util
} // java