#include <java/util/stream/IntPipeline$10$1.h>

#include <java/util/function/IntPredicate.h>
#include <java/util/stream/IntPipeline$10.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntPredicate = ::java::util::function::IntPredicate;
using $IntPipeline$10 = ::java::util::stream::IntPipeline$10;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntPipeline$10$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/IntPipeline$10;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$10$1, this$1)},
	{}
};

$MethodInfo _IntPipeline$10$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/IntPipeline$10;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(IntPipeline$10$1::*)($IntPipeline$10*,$Sink*)>(&IntPipeline$10$1::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IntPipeline$10$1_EnclosingMethodInfo_ = {
	"java.util.stream.IntPipeline$10",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _IntPipeline$10$1_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$10", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$10$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntPipeline$10$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntPipeline$10$1",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_IntPipeline$10$1_FieldInfo_,
	_IntPipeline$10$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Integer;>;",
	&_IntPipeline$10$1_EnclosingMethodInfo_,
	_IntPipeline$10$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline"
};

$Object* allocate$IntPipeline$10$1($Class* clazz) {
	return $of($alloc(IntPipeline$10$1));
}

void IntPipeline$10$1::init$($IntPipeline$10* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedInt::init$(downstream);
}

void IntPipeline$10$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void IntPipeline$10$1::accept(int32_t t) {
	if ($nc(this->this$1->val$predicate)->test(t)) {
		$nc(this->downstream)->accept(t);
	}
}

IntPipeline$10$1::IntPipeline$10$1() {
}

$Class* IntPipeline$10$1::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$10$1, name, initialize, &_IntPipeline$10$1_ClassInfo_, allocate$IntPipeline$10$1);
	return class$;
}

$Class* IntPipeline$10$1::class$ = nullptr;

		} // stream
	} // util
} // java