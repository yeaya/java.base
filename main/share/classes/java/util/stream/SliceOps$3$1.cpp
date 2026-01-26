#include <java/util/stream/SliceOps$3$1.h>

#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SliceOps$3.h>
#include <java/util/stream/SliceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;
using $SliceOps = ::java::util::stream::SliceOps;
using $SliceOps$3 = ::java::util::stream::SliceOps$3;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SliceOps$3$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SliceOps$3;", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$3$1, this$0)},
	{"n", "J", nullptr, 0, $field(SliceOps$3$1, n)},
	{"m", "J", nullptr, 0, $field(SliceOps$3$1, m)},
	{}
};

$MethodInfo _SliceOps$3$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/SliceOps$3;Ljava/util/stream/Sink;)V", nullptr, 0, $method(SliceOps$3$1, init$, void, $SliceOps$3*, $Sink*)},
	{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(SliceOps$3$1, accept, void, int64_t)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SliceOps$3$1, begin, void, int64_t)},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(SliceOps$3$1, cancellationRequested, bool)},
	{}
};

$EnclosingMethodInfo _SliceOps$3$1_EnclosingMethodInfo_ = {
	"java.util.stream.SliceOps$3",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _SliceOps$3$1_InnerClassesInfo_[] = {
	{"java.util.stream.SliceOps$3", nullptr, nullptr, 0},
	{"java.util.stream.SliceOps$3$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SliceOps$3$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SliceOps$3$1",
	"java.util.stream.Sink$ChainedLong",
	nullptr,
	_SliceOps$3$1_FieldInfo_,
	_SliceOps$3$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Long;>;",
	&_SliceOps$3$1_EnclosingMethodInfo_,
	_SliceOps$3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SliceOps"
};

$Object* allocate$SliceOps$3$1($Class* clazz) {
	return $of($alloc(SliceOps$3$1));
}

void SliceOps$3$1::init$($SliceOps$3* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedLong::init$(downstream);
	this->n = this->this$0->val$skip;
	this->m = this->this$0->val$normalizedLimit;
}

void SliceOps$3$1::begin(int64_t size) {
	$nc(this->downstream)->begin($SliceOps::calcSize(size, this->this$0->val$skip, this->m));
}

void SliceOps$3$1::accept(int64_t t) {
	if (this->n == 0) {
		if (this->m > 0) {
			--this->m;
			$nc(this->downstream)->accept(t);
		}
	} else {
		--this->n;
	}
}

bool SliceOps$3$1::cancellationRequested() {
	return this->m == 0 || $nc(this->downstream)->cancellationRequested();
}

SliceOps$3$1::SliceOps$3$1() {
}

$Class* SliceOps$3$1::load$($String* name, bool initialize) {
	$loadClass(SliceOps$3$1, name, initialize, &_SliceOps$3$1_ClassInfo_, allocate$SliceOps$3$1);
	return class$;
}

$Class* SliceOps$3$1::class$ = nullptr;

		} // stream
	} // util
} // java