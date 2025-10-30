#include <java/util/stream/WhileOps$4$1.h>

#include <java/util/function/DoublePredicate.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoublePredicate = ::java::util::function::DoublePredicate;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;
using $WhileOps$4 = ::java::util::stream::WhileOps$4;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$4$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/WhileOps$4;", nullptr, $FINAL | $SYNTHETIC, $field(WhileOps$4$1, this$0)},
	{"take", "Z", nullptr, 0, $field(WhileOps$4$1, take)},
	{}
};

$MethodInfo _WhileOps$4$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/WhileOps$4;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(WhileOps$4$1::*)($WhileOps$4*,$Sink*)>(&WhileOps$4$1::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WhileOps$4$1_EnclosingMethodInfo_ = {
	"java.util.stream.WhileOps$4",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _WhileOps$4$1_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$4", nullptr, nullptr, 0},
	{"java.util.stream.WhileOps$4$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _WhileOps$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.WhileOps$4$1",
	"java.util.stream.Sink$ChainedDouble",
	nullptr,
	_WhileOps$4$1_FieldInfo_,
	_WhileOps$4$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
	&_WhileOps$4$1_EnclosingMethodInfo_,
	_WhileOps$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$4$1($Class* clazz) {
	return $of($alloc(WhileOps$4$1));
}

void WhileOps$4$1::init$($WhileOps$4* this$0, $Sink* downstream) {
	$set(this, this$0, this$0);
	$Sink$ChainedDouble::init$(downstream);
	this->take = true;
}

void WhileOps$4$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void WhileOps$4$1::accept(double t) {
	bool var$0 = this->take;
	if (var$0 && (this->take = $nc(this->this$0->val$predicate)->test(t))) {
		$nc(this->downstream)->accept(t);
	}
}

bool WhileOps$4$1::cancellationRequested() {
	return !this->take || $nc(this->downstream)->cancellationRequested();
}

WhileOps$4$1::WhileOps$4$1() {
}

$Class* WhileOps$4$1::load$($String* name, bool initialize) {
	$loadClass(WhileOps$4$1, name, initialize, &_WhileOps$4$1_ClassInfo_, allocate$WhileOps$4$1);
	return class$;
}

$Class* WhileOps$4$1::class$ = nullptr;

		} // stream
	} // util
} // java