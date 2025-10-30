#include <java/util/stream/LongPipeline$10$1.h>

#include <java/util/function/LongConsumer.h>
#include <java/util/stream/LongPipeline$10.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongConsumer = ::java::util::function::LongConsumer;
using $LongPipeline$10 = ::java::util::stream::LongPipeline$10;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$10$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/LongPipeline$10;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$10$1, this$1)},
	{}
};

$MethodInfo _LongPipeline$10$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/LongPipeline$10;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(LongPipeline$10$1::*)($LongPipeline$10*,$Sink*)>(&LongPipeline$10$1::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LongPipeline$10$1_EnclosingMethodInfo_ = {
	"java.util.stream.LongPipeline$10",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _LongPipeline$10$1_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$10", nullptr, nullptr, 0},
	{"java.util.stream.LongPipeline$10$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPipeline$10$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$10$1",
	"java.util.stream.Sink$ChainedLong",
	nullptr,
	_LongPipeline$10$1_FieldInfo_,
	_LongPipeline$10$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Long;>;",
	&_LongPipeline$10$1_EnclosingMethodInfo_,
	_LongPipeline$10$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$10$1($Class* clazz) {
	return $of($alloc(LongPipeline$10$1));
}

void LongPipeline$10$1::init$($LongPipeline$10* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedLong::init$(downstream);
}

void LongPipeline$10$1::accept(int64_t t) {
	$nc(this->this$1->val$action)->accept(t);
	$nc(this->downstream)->accept(t);
}

LongPipeline$10$1::LongPipeline$10$1() {
}

$Class* LongPipeline$10$1::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$10$1, name, initialize, &_LongPipeline$10$1_ClassInfo_, allocate$LongPipeline$10$1);
	return class$;
}

$Class* LongPipeline$10$1::class$ = nullptr;

		} // stream
	} // util
} // java