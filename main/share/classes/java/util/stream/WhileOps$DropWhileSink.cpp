#include <java/util/stream/WhileOps$DropWhileSink.h>
#include <java/util/stream/WhileOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$Class* WhileOps$DropWhileSink::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDropCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WhileOps$DropWhileSink, getDropCount, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.WhileOps$DropWhileSink", "java.util.stream.WhileOps", "DropWhileSink", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.util.stream.WhileOps$DropWhileSink",
		nullptr,
		"java.util.stream.Sink",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.WhileOps"
	};
	$loadClass(WhileOps$DropWhileSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WhileOps$DropWhileSink);
	});
	return class$;
}

$Class* WhileOps$DropWhileSink::class$ = nullptr;

		} // stream
	} // util
} // java