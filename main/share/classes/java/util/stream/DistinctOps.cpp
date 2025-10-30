#include <java/util/stream/DistinctOps.h>

#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/DistinctOps$1.h>
#include <java/util/stream/ReferencePipeline$StatefulOp.h>
#include <java/util/stream/ReferencePipeline.h>
#include <java/util/stream/StreamOpFlag.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

#undef IS_DISTINCT
#undef NOT_SIZED
#undef REFERENCE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $DistinctOps$1 = ::java::util::stream::DistinctOps$1;
using $ReferencePipeline = ::java::util::stream::ReferencePipeline;
using $ReferencePipeline$StatefulOp = ::java::util::stream::ReferencePipeline$StatefulOp;
using $StreamOpFlag = ::java::util::stream::StreamOpFlag;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _DistinctOps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DistinctOps::*)()>(&DistinctOps::init$))},
	{"makeRef", "(Ljava/util/stream/AbstractPipeline;)Ljava/util/stream/ReferencePipeline;", "<T:Ljava/lang/Object;>(Ljava/util/stream/AbstractPipeline<*TT;*>;)Ljava/util/stream/ReferencePipeline<TT;TT;>;", $STATIC, $method(static_cast<$ReferencePipeline*(*)($AbstractPipeline*)>(&DistinctOps::makeRef))},
	{}
};

$InnerClassInfo _DistinctOps_InnerClassesInfo_[] = {
	{"java.util.stream.DistinctOps$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DistinctOps_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.DistinctOps",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DistinctOps_MethodInfo_,
	nullptr,
	nullptr,
	_DistinctOps_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.DistinctOps$1,java.util.stream.DistinctOps$1$2,java.util.stream.DistinctOps$1$1"
};

$Object* allocate$DistinctOps($Class* clazz) {
	return $of($alloc(DistinctOps));
}

void DistinctOps::init$() {
}

$ReferencePipeline* DistinctOps::makeRef($AbstractPipeline* upstream) {
	$init($StreamShape);
	$init($StreamOpFlag);
	return $new($DistinctOps$1, upstream, $StreamShape::REFERENCE, $StreamOpFlag::IS_DISTINCT | $StreamOpFlag::NOT_SIZED);
}

DistinctOps::DistinctOps() {
}

$Class* DistinctOps::load$($String* name, bool initialize) {
	$loadClass(DistinctOps, name, initialize, &_DistinctOps_ClassInfo_, allocate$DistinctOps);
	return class$;
}

$Class* DistinctOps::class$ = nullptr;

		} // stream
	} // util
} // java