#include <java/util/stream/LongPipeline$2$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/LongPipeline$2.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongPipeline$2 = ::java::util::stream::LongPipeline$2;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$2$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/stream/LongPipeline$2;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$2$1, this$1)},
	{}
};

$MethodInfo _LongPipeline$2$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/LongPipeline$2;Ljava/util/stream/Sink;)V", nullptr, 0, $method(static_cast<void(LongPipeline$2$1::*)($LongPipeline$2*,$Sink*)>(&LongPipeline$2$1::init$))},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LongPipeline$2$1_EnclosingMethodInfo_ = {
	"java.util.stream.LongPipeline$2",
	"opWrapSink",
	"(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;"
};

$InnerClassInfo _LongPipeline$2$1_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$2", nullptr, nullptr, 0},
	{"java.util.stream.LongPipeline$2$1", nullptr, nullptr, 0},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LongPipeline$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$2$1",
	"java.util.stream.Sink$ChainedLong",
	nullptr,
	_LongPipeline$2$1_FieldInfo_,
	_LongPipeline$2$1_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Double;>;",
	&_LongPipeline$2$1_EnclosingMethodInfo_,
	_LongPipeline$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$2$1($Class* clazz) {
	return $of($alloc(LongPipeline$2$1));
}

void LongPipeline$2$1::init$($LongPipeline$2* this$1, $Sink* downstream) {
	$set(this, this$1, this$1);
	$Sink$ChainedLong::init$(downstream);
}

void LongPipeline$2$1::accept(int64_t t) {
	$nc(this->downstream)->accept((double)t);
}

LongPipeline$2$1::LongPipeline$2$1() {
}

$Class* LongPipeline$2$1::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$2$1, name, initialize, &_LongPipeline$2$1_ClassInfo_, allocate$LongPipeline$2$1);
	return class$;
}

$Class* LongPipeline$2$1::class$ = nullptr;

		} // stream
	} // util
} // java