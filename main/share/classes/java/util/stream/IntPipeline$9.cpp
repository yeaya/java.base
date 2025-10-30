#include <java/util/stream/IntPipeline$9.h>

#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/IntPipeline$StatelessOp.h>
#include <java/util/stream/IntPipeline.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $IntPipeline = ::java::util::stream::IntPipeline;
using $IntPipeline$StatelessOp = ::java::util::stream::IntPipeline$StatelessOp;
using $Sink = ::java::util::stream::Sink;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _IntPipeline$9_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/IntPipeline;", nullptr, $FINAL | $SYNTHETIC, $field(IntPipeline$9, this$0)},
	{}
};

$MethodInfo _IntPipeline$9_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/IntPipeline;Ljava/util/stream/AbstractPipeline;Ljava/util/stream/StreamShape;I)V", nullptr, 0, $method(static_cast<void(IntPipeline$9::*)($IntPipeline*,$AbstractPipeline*,$StreamShape*,int32_t)>(&IntPipeline$9::init$))},
	{"opWrapSink", "(ILjava/util/stream/Sink;)Ljava/util/stream/Sink;", "(ILjava/util/stream/Sink<Ljava/lang/Integer;>;)Ljava/util/stream/Sink<Ljava/lang/Integer;>;", 0},
	{}
};

$EnclosingMethodInfo _IntPipeline$9_EnclosingMethodInfo_ = {
	"java.util.stream.IntPipeline",
	"unordered",
	"()Ljava/util/stream/IntStream;"
};

$InnerClassInfo _IntPipeline$9_InnerClassesInfo_[] = {
	{"java.util.stream.IntPipeline$9", nullptr, nullptr, 0},
	{"java.util.stream.IntPipeline$StatelessOp", "java.util.stream.IntPipeline", "StatelessOp", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _IntPipeline$9_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.IntPipeline$9",
	"java.util.stream.IntPipeline$StatelessOp",
	nullptr,
	_IntPipeline$9_FieldInfo_,
	_IntPipeline$9_MethodInfo_,
	"Ljava/util/stream/IntPipeline$StatelessOp<Ljava/lang/Integer;>;",
	&_IntPipeline$9_EnclosingMethodInfo_,
	_IntPipeline$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.IntPipeline"
};

$Object* allocate$IntPipeline$9($Class* clazz) {
	return $of($alloc(IntPipeline$9));
}

void IntPipeline$9::init$($IntPipeline* this$0, $AbstractPipeline* upstream, $StreamShape* inputShape, int32_t opFlags) {
	$set(this, this$0, this$0);
	$IntPipeline$StatelessOp::init$(upstream, inputShape, opFlags);
}

$Sink* IntPipeline$9::opWrapSink(int32_t flags, $Sink* sink) {
	return sink;
}

IntPipeline$9::IntPipeline$9() {
}

$Class* IntPipeline$9::load$($String* name, bool initialize) {
	$loadClass(IntPipeline$9, name, initialize, &_IntPipeline$9_ClassInfo_, allocate$IntPipeline$9);
	return class$;
}

$Class* IntPipeline$9::class$ = nullptr;

		} // stream
	} // util
} // java