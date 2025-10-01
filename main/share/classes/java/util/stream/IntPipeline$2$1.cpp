#include <java/util/stream/IntPipeline$2$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/IntPipeline$2.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntPipeline$2 = ::java::util::stream::IntPipeline$2;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntPipeline$2$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/IntPipeline$2;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$2$1, this$1)},
	{}
};

$MethodInfo _IntPipeline$2$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/IntPipeline$2;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(IntPipeline$2$1::*)($IntPipeline$2*,$Sink*)>(&IntPipeline$2$1::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IntPipeline$2$1_EnclosingMethodInfo_ = {
	"java.util.stream.IntPipeline$2",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _IntPipeline$2$1_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$2", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$2$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntPipeline$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntPipeline$2$1",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_IntPipeline$2$1_FieldInfo_,
	_IntPipeline$2$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Long;>;",
	&_IntPipeline$2$1_EnclosingMethodInfo_,
	_IntPipeline$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline"
};

$Object* allocate$IntPipeline$2$1($Class* clazz) {
	return $of($alloc(IntPipeline$2$1));
}

void IntPipeline$2$1::init$($IntPipeline$2* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedInt::init$(downstream);
}

void IntPipeline$2$1::accept(int32_t t) {
	$nc(this->downstream)->accept((int64_t)t);
}

IntPipeline$2$1::IntPipeline$2$1() {
}

$Class* IntPipeline$2$1::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$2$1, name, initialize, &_IntPipeline$2$1_ClassInfo_, allocate$IntPipeline$2$1);
	return class$;
}

$Class* IntPipeline$2$1::class$ = nullptr;

		} // stream
	} // util
} // java