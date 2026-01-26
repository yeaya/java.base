#include <java/util/stream/ReduceOps$AccumulatingSink.h>

#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _ReduceOps$AccumulatingSink_MethodInfo_[] = {
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", "(TK;)V", $PUBLIC | $ABSTRACT, $virtualMethod(ReduceOps$AccumulatingSink, combine, void, ReduceOps$AccumulatingSink*)},
	{}
};

$InnerClassInfo _ReduceOps$AccumulatingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$AccumulatingSink_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.stream.ReduceOps$AccumulatingSink",
	nullptr,
	"java.util.stream.TerminalSink",
	nullptr,
	_ReduceOps$AccumulatingSink_MethodInfo_,
	"<T:Ljava/lang/Object;R:Ljava/lang/Object;K::Ljava/util/stream/ReduceOps$AccumulatingSink<TT;TR;TK;>;>Ljava/lang/Object;Ljava/util/stream/TerminalSink<TT;TR;>;",
	nullptr,
	_ReduceOps$AccumulatingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$AccumulatingSink($Class* clazz) {
	return $of($alloc(ReduceOps$AccumulatingSink));
}

$Class* ReduceOps$AccumulatingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$AccumulatingSink, name, initialize, &_ReduceOps$AccumulatingSink_ClassInfo_, allocate$ReduceOps$AccumulatingSink);
	return class$;
}

$Class* ReduceOps$AccumulatingSink::class$ = nullptr;

		} // stream
	} // util
} // java