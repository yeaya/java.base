#include <java/util/stream/WhileOps$2$1.h>

#include <java/util/function/IntPredicate.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntPredicate = ::java::util::function::IntPredicate;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;
using $WhileOps$2 = ::java::util::stream::WhileOps$2;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$2$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/WhileOps$2;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$2$1, this$0)},
	{"take", "Z", nullptr, 0, $field(WhileOps$2$1, take)},
	{}
};

$MethodInfo _WhileOps$2$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/WhileOps$2;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(WhileOps$2$1::*)($WhileOps$2*,$Sink*)>(&WhileOps$2$1::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WhileOps$2$1_EnclosingMethodInfo_ = {
	"java.util.stream.WhileOps$2",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _WhileOps$2$1_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$2", nullptr, nullptr, 0},
	{"java.util.stream.WhileOps$2$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.WhileOps$2$1",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_WhileOps$2$1_FieldInfo_,
	_WhileOps$2$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Integer;>;",
	&_WhileOps$2$1_EnclosingMethodInfo_,
	_WhileOps$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$2$1($Class* clazz) {
	return $of($alloc(WhileOps$2$1));
}

void WhileOps$2$1::init$($WhileOps$2* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedInt::init$(downstream);
	this->take = true;
}

void WhileOps$2$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void WhileOps$2$1::accept(int32_t t) {
	bool var$0 = this->take;
	if (var$0 && (this->take = $nc(this->this$0->val$predicate)->test(t))) {
		$nc(this->downstream)->accept(t);
	}
}

bool WhileOps$2$1::cancellationRequested() {
	return !this->take || $nc(this->downstream)->cancellationRequested();
}

WhileOps$2$1::WhileOps$2$1() {
}

$Class* WhileOps$2$1::load$($String* name, bool initialize) {
	$loadClass(WhileOps$2$1, name, initialize, &_WhileOps$2$1_ClassInfo_, allocate$WhileOps$2$1);
	return class$;
}

$Class* WhileOps$2$1::class$ = nullptr;

		} // stream
	} // util
} // java