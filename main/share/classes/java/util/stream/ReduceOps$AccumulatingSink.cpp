#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$Class* ReduceOps$AccumulatingSink::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", "(TK;)V", $PUBLIC | $ABSTRACT, $virtualMethod(ReduceOps$AccumulatingSink, combine, void, ReduceOps$AccumulatingSink*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.util.stream.ReduceOps$AccumulatingSink",
		nullptr,
		"java.util.stream.TerminalSink",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;R:Ljava/lang/Object;K::Ljava/util/stream/ReduceOps$AccumulatingSink<TT;TR;TK;>;>Ljava/lang/Object;Ljava/util/stream/TerminalSink<TT;TR;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$AccumulatingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReduceOps$AccumulatingSink));
	});
	return class$;
}

$Class* ReduceOps$AccumulatingSink::class$ = nullptr;

		} // stream
	} // util
} // java