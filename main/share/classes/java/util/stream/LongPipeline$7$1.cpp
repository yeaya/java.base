#include <java/util/stream/LongPipeline$7$1.h>

#include <java/util/function/LongConsumer.h>
#include <java/util/stream/LongPipeline$7.h>
#include <java/util/stream/LongStream$LongMapMultiConsumer.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongConsumer = ::java::util::function::LongConsumer;
using $LongPipeline$7 = ::java::util::stream::LongPipeline$7;
using $LongStream$LongMapMultiConsumer = ::java::util::stream::LongStream$LongMapMultiConsumer;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$7$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/LongPipeline$7;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$7$1, this$1)},
	{}
};

$MethodInfo _LongPipeline$7$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/LongPipeline$7;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(LongPipeline$7$1::*)($LongPipeline$7*,$Sink*)>(&LongPipeline$7$1::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LongPipeline$7$1_EnclosingMethodInfo_ = {
	"java.util.stream.LongPipeline$7",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _LongPipeline$7$1_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$7", nullptr, nullptr, 0},
	{"java.util.stream.LongPipeline$7$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPipeline$7$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$7$1",
	"java.util.stream.Sink$ChainedLong",
	nullptr,
	_LongPipeline$7$1_FieldInfo_,
	_LongPipeline$7$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Long;>;",
	&_LongPipeline$7$1_EnclosingMethodInfo_,
	_LongPipeline$7$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$7$1($Class* clazz) {
	return $of($alloc(LongPipeline$7$1));
}

void LongPipeline$7$1::init$($LongPipeline$7* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedLong::init$(downstream);
}

void LongPipeline$7$1::begin(int64_t size) {
	$nc(this->downstream)->begin(-1);
}

void LongPipeline$7$1::accept(int64_t t) {
	$nc(this->this$1->val$mapper)->accept(t, $cast($LongConsumer, this->downstream));
}

LongPipeline$7$1::LongPipeline$7$1() {
}

$Class* LongPipeline$7$1::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$7$1, name, initialize, &_LongPipeline$7$1_ClassInfo_, allocate$LongPipeline$7$1);
	return class$;
}

$Class* LongPipeline$7$1::class$ = nullptr;

		} // stream
	} // util
} // java