#include <java/util/stream/SliceOps$2$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SliceOps$2.h>
#include <java/util/stream/SliceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;
using $SliceOps = ::java::util::stream::SliceOps;
using $SliceOps$2 = ::java::util::stream::SliceOps$2;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SliceOps$2$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SliceOps$2;", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$2$1, this$0)},
	{"n", "J", nullptr, 0, $field(SliceOps$2$1, n)},
	{"m", "J", nullptr, 0, $field(SliceOps$2$1, m)},
	{}
};

$MethodInfo _SliceOps$2$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/SliceOps$2;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(SliceOps$2$1::*)($SliceOps$2*,$Sink*)>(&SliceOps$2$1::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SliceOps$2$1_EnclosingMethodInfo_ = {
	"java.util.stream.SliceOps$2",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _SliceOps$2$1_InnerClassesInfo_[] = {
	{"java.util.stream.SliceOps$2", nullptr, nullptr, 0},
	{"java.util.stream.SliceOps$2$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SliceOps$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SliceOps$2$1",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_SliceOps$2$1_FieldInfo_,
	_SliceOps$2$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Integer;>;",
	&_SliceOps$2$1_EnclosingMethodInfo_,
	_SliceOps$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SliceOps"
};

$Object* allocate$SliceOps$2$1($Class* clazz) {
	return $of($alloc(SliceOps$2$1));
}

void SliceOps$2$1::init$($SliceOps$2* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedInt::init$(downstream);
	this->n = this->this$0->val$skip;
	this->m = this->this$0->val$normalizedLimit;
}

void SliceOps$2$1::begin(int64_t size) {
	$nc(this->downstream)->begin($SliceOps::calcSize(size, this->this$0->val$skip, this->m));
}

void SliceOps$2$1::accept(int32_t t) {
	if (this->n == 0) {
		if (this->m > 0) {
			--this->m;
			$nc(this->downstream)->accept(t);
		}
	} else {
		--this->n;
	}
}

bool SliceOps$2$1::cancellationRequested() {
	return this->m == 0 || $nc(this->downstream)->cancellationRequested();
}

SliceOps$2$1::SliceOps$2$1() {
}

$Class* SliceOps$2$1::load$($String* name, bool initialize) {
	$loadClass(SliceOps$2$1, name, initialize, &_SliceOps$2$1_ClassInfo_, allocate$SliceOps$2$1);
	return class$;
}

$Class* SliceOps$2$1::class$ = nullptr;

		} // stream
	} // util
} // java