#include <java/util/stream/WhileOps$1$1.h>

#include <java/util/function/Predicate.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;
using $WhileOps$1 = ::java::util::stream::WhileOps$1;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$1$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/WhileOps$1;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$1$1, this$0)},
	{"take", "Z", nullptr, 0, $field(WhileOps$1$1, take)},
	{}
};

$MethodInfo _WhileOps$1$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/WhileOps$1;Ljava/util/stream/Sink;)V", nullptr, 0, $method(WhileOps$1$1, init$, void, $WhileOps$1*, $Sink*)},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(WhileOps$1$1, accept, void, Object$*)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(WhileOps$1$1, begin, void, int64_t)},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(WhileOps$1$1, cancellationRequested, bool)},
	{}
};

$EnclosingMethodInfo _WhileOps$1$1_EnclosingMethodInfo_ = {
	"java.util.stream.WhileOps$1",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _WhileOps$1$1_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$1", nullptr, nullptr, 0},
	{"java.util.stream.WhileOps$1$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.WhileOps$1$1",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_WhileOps$1$1_FieldInfo_,
	_WhileOps$1$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedReference<TT;TT;>;",
	&_WhileOps$1$1_EnclosingMethodInfo_,
	_WhileOps$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$1$1($Class* clazz) {
	return $of($alloc(WhileOps$1$1));
}

void WhileOps$1$1::init$($WhileOps$1* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedReference::init$(downstream);
	this->take = true;
}

void WhileOps$1$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void WhileOps$1$1::accept(Object$* t) {
	bool var$0 = this->take;
	if (var$0 && (this->take = $nc(this->this$0->val$predicate)->test(t))) {
		$nc(this->downstream)->accept(t);
	}
}

bool WhileOps$1$1::cancellationRequested() {
	return !this->take || $nc(this->downstream)->cancellationRequested();
}

WhileOps$1$1::WhileOps$1$1() {
}

$Class* WhileOps$1$1::load$($String* name, bool initialize) {
	$loadClass(WhileOps$1$1, name, initialize, &_WhileOps$1$1_ClassInfo_, allocate$WhileOps$1$1);
	return class$;
}

$Class* WhileOps$1$1::class$ = nullptr;

		} // stream
	} // util
} // java