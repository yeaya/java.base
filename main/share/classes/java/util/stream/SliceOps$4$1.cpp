#include <java/util/stream/SliceOps$4$1.h>

#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SliceOps$4.h>
#include <java/util/stream/SliceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;
using $SliceOps = ::java::util::stream::SliceOps;
using $SliceOps$4 = ::java::util::stream::SliceOps$4;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SliceOps$4$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SliceOps$4;", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$4$1, this$0)},
	{"n", "J", nullptr, 0, $field(SliceOps$4$1, n)},
	{"m", "J", nullptr, 0, $field(SliceOps$4$1, m)},
	{}
};

$MethodInfo _SliceOps$4$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/SliceOps$4;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(SliceOps$4$1::*)($SliceOps$4*,$Sink*)>(&SliceOps$4$1::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SliceOps$4$1_EnclosingMethodInfo_ = {
	"java.util.stream.SliceOps$4",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _SliceOps$4$1_InnerClassesInfo_[] = {
	{"java.util.stream.SliceOps$4", nullptr, nullptr, 0},
	{"java.util.stream.SliceOps$4$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SliceOps$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SliceOps$4$1",
	"java.util.stream.Sink$ChainedDouble",
	nullptr,
	_SliceOps$4$1_FieldInfo_,
	_SliceOps$4$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
	&_SliceOps$4$1_EnclosingMethodInfo_,
	_SliceOps$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SliceOps"
};

$Object* allocate$SliceOps$4$1($Class* clazz) {
	return $of($alloc(SliceOps$4$1));
}

void SliceOps$4$1::init$($SliceOps$4* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedDouble::init$(downstream);
	this->n = this->this$0->val$skip;
	this->m = this->this$0->val$normalizedLimit;
}

void SliceOps$4$1::begin(int64_t size) {
	$nc(this->downstream)->begin($SliceOps::calcSize(size, this->this$0->val$skip, this->m));
}

void SliceOps$4$1::accept(double t) {
	if (this->n == 0) {
		if (this->m > 0) {
			--this->m;
			$nc(this->downstream)->accept(t);
		}
	} else {
		--this->n;
	}
}

bool SliceOps$4$1::cancellationRequested() {
	return this->m == 0 || $nc(this->downstream)->cancellationRequested();
}

SliceOps$4$1::SliceOps$4$1() {
}

$Class* SliceOps$4$1::load$($String* name, bool initialize) {
	$loadClass(SliceOps$4$1, name, initialize, &_SliceOps$4$1_ClassInfo_, allocate$SliceOps$4$1);
	return class$;
}

$Class* SliceOps$4$1::class$ = nullptr;

		} // stream
	} // util
} // java