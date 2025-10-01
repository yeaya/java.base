#include <java/util/stream/LongPipeline$9.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/LongPredicate.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/LongPipeline$9$1.h>
#include <java/util/stream/LongPipeline$StatelessOp.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink$OfLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongPredicate = ::java::util::function::LongPredicate;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongPipeline$9$1 = ::java::util::stream::LongPipeline$9$1;
using $LongPipeline$StatelessOp = ::java::util::stream::LongPipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;
using $Sink$OfLong = ::java::util::stream::Sink$OfLong;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _LongPipeline$9_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/LongPipeline;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$9, this$0)},
	{"val$predicate", "Ljava/util/function/LongPredicate;", nullptr, $FINAL | $SYNTHETIC, $field(LongPipeline$9, val$predicate)},
	{}
};

$MethodInfo _LongPipeline$9_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/LongPipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;ILjava/util/function/LongPredicate;)V", nullptr, 0, $method(static_cast<void(LongPipeline$9::*)($LongPipeline*,$AbstractPipeline*,$StreamShape*,int32_t,$LongPredicate*)>(&LongPipeline$9::init$))},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Long;>;)Ljava/util/stream/Sink<Ljava/lang/Long;>;", 0},
	{}
};

$EnclosingMethodInfo _LongPipeline$9_EnclosingMethodInfo_ = {
	"java.util.stream.LongPipeline",
	"filter",
	"(Ljava/util/function/LongPredicate;)Ljava/util/stream/LongStream;"
};

$InnerClassInfo _LongPipeline$9_InnerClassesInfo_[] = {
	{"java.util.stream.LongPipeline$9", nullptr, nullptr, 0},
	{"java.util.stream.LongPipeline$StatelessOp", "java.util.stream.LongPipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{"java.util.stream.LongPipeline$9$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LongPipeline$9_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.LongPipeline$9",
	"java.util.stream.LongPipeline$StatelessOp",
	nullptr,
	_LongPipeline$9_FieldInfo_,
	_LongPipeline$9_MethodInfo_,
	"Ljava/util/stream/LongPipeline$StatelessOp<Ljava/lang/Long;>;",
	&_LongPipeline$9_EnclosingMethodInfo_,
	_LongPipeline$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.LongPipeline"
};

$Object* allocate$LongPipeline$9($Class* clazz) {
	return $of($alloc(LongPipeline$9));
}

void LongPipeline$9::init$($LongPipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags, $LongPredicate* val$predicate) {
	$set(this, this$0, this$0);
	$set(this, val$predicate, val$predicate);
	$LongPipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* LongPipeline$9::opWrapSink(int32_t flags, $Sink* sink) {
	return $new($LongPipeline$9$1, this, sink);
}

LongPipeline$9::LongPipeline$9() {
}

$Class* LongPipeline$9::load$($String* name, bool initialize) {
	$loadClass(LongPipeline$9, name, initialize, &_LongPipeline$9_ClassInfo_, allocate$LongPipeline$9);
	return class$;
}

$Class* LongPipeline$9::class$ = nullptr;

		} // stream
	} // util
} // java