#include <java/util/stream/SliceOps$1$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SliceOps$1.h>
#include <java/util/stream/SliceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;
using $SliceOps = ::java::util::stream::SliceOps;
using $SliceOps$1 = ::java::util::stream::SliceOps$1;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SliceOps$1$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/SliceOps$1;", nullptr, $FINAL | $SYNTHETIC, $field(SliceOps$1$1, this$0)},
	{"n", "J", nullptr, 0, $field(SliceOps$1$1, n)},
	{"m", "J", nullptr, 0, $field(SliceOps$1$1, m)},
	{}
};

$MethodInfo _SliceOps$1$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/SliceOps$1;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(SliceOps$1$1::*)($SliceOps$1*,$Sink*)>(&SliceOps$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SliceOps$1$1_EnclosingMethodInfo_ = {
	"java.util.stream.SliceOps$1",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _SliceOps$1$1_InnerClassesInfo_[] = {
	{"java.util.stream.SliceOps$1", nullptr, nullptr, 0},
	{"java.util.stream.SliceOps$1$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SliceOps$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.SliceOps$1$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_SliceOps$1$1_FieldInfo_,
	_SliceOps$1$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TT;TT;>;",
	&_SliceOps$1$1_EnclosingMethodInfo_,
	_SliceOps$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SliceOps"
};

$Object* allocate$SliceOps$1$1($Class* clazz) {
	return $of($alloc(SliceOps$1$1));
}

void SliceOps$1$1::init$($SliceOps$1* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedReference::init$(downstream);
	this->n = this->this$0->val$skip;
	this->m = this->this$0->val$normalizedLimit;
}

void SliceOps$1$1::begin(int64_t size) {
	$nc(this->downstream)->begin($SliceOps::calcSize(size, this->this$0->val$skip, this->m));
}

void SliceOps$1$1::accept(Object$* t) {
	if (this->n == 0) {
		if (this->m > 0) {
			--this->m;
			$nc(this->downstream)->accept(t);
		}
	} else {
		--this->n;
	}
}

bool SliceOps$1$1::cancellationRequested() {
	return this->m == 0 || $nc(this->downstream)->cancellationRequested();
}

SliceOps$1$1::SliceOps$1$1() {
}

$Class* SliceOps$1$1::load$($String* name, bool initialize) {
	$loadClass(SliceOps$1$1, name, initialize, &_SliceOps$1$1_ClassInfo_, allocate$SliceOps$1$1);
	return class$;
}

$Class* SliceOps$1$1::class$ = nullptr;

		} // stream
	} // util
} // java