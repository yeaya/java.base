#include <java/util/stream/Nodes$ToArrayTask$OfLong.h>
#include <java/util/stream/Node$OfLong.h>
#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>
#include <java/util/stream/Nodes$ToArrayTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node$OfLong = ::java::util::stream::Node$OfLong;
using $Nodes$ToArrayTask$OfPrimitive = ::java::util::stream::Nodes$ToArrayTask$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

void Nodes$ToArrayTask$OfLong::init$($Node$OfLong* node, $longs* array, int32_t offset) {
	$Nodes$ToArrayTask$OfPrimitive::init$(node, array, offset);
}

Nodes$ToArrayTask$OfLong::Nodes$ToArrayTask$OfLong() {
}

$Class* Nodes$ToArrayTask$OfLong::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Node$OfLong;[JI)V", nullptr, $PRIVATE, $method(Nodes$ToArrayTask$OfLong, init$, void, $Node$OfLong*, $longs*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$ToArrayTask", "java.util.stream.Nodes", "ToArrayTask", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.Nodes$ToArrayTask$OfLong", "java.util.stream.Nodes$ToArrayTask", "OfLong", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Nodes$ToArrayTask$OfPrimitive", "java.util.stream.Nodes$ToArrayTask", "OfPrimitive", $PRIVATE | $STATIC},
		{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$OfLong", "java.util.stream.Node", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$ToArrayTask$OfLong",
		"java.util.stream.Nodes$ToArrayTask$OfPrimitive",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive<Ljava/lang/Long;Ljava/util/function/LongConsumer;[JLjava/util/Spliterator$OfLong;Ljava/util/stream/Node$OfLong;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$ToArrayTask$OfLong, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Nodes$ToArrayTask$OfLong));
	});
	return class$;
}

$Class* Nodes$ToArrayTask$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java