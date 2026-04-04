#include <java/util/stream/WhileOps$DropWhileOp.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/WhileOps$DropWhileSink.h>
#include <java/util/stream/WhileOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $WhileOps$DropWhileSink = ::java::util::stream::WhileOps$DropWhileSink;

namespace java {
	namespace util {
		namespace stream {

$Class* WhileOps$DropWhileOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"opWrapSink", "(Ljava/util/stream/Sink;Z)Ljava/util/stream/WhileOps$DropWhileSink;", "(Ljava/util/stream/Sink<TT;>;Z)Ljava/util/stream/WhileOps$DropWhileSink<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WhileOps$DropWhileOp, opWrapSink, $WhileOps$DropWhileSink*, $Sink*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.WhileOps$DropWhileOp", "java.util.stream.WhileOps", "DropWhileOp", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.util.stream.WhileOps$DropWhileOp",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.WhileOps"
	};
	$loadClass(WhileOps$DropWhileOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WhileOps$DropWhileOp);
	});
	return class$;
}

$Class* WhileOps$DropWhileOp::class$ = nullptr;

		} // stream
	} // util
} // java