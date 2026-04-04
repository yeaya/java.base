#include <java/util/stream/Nodes$ToArrayTask$OfDouble.h>
#include <java/util/stream/Node$OfDouble.h>
#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>
#include <java/util/stream/Nodes$ToArrayTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node$OfDouble = ::java::util::stream::Node$OfDouble;
using $Nodes$ToArrayTask$OfPrimitive = ::java::util::stream::Nodes$ToArrayTask$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

void Nodes$ToArrayTask$OfDouble::init$($Node$OfDouble* node, $doubles* array, int32_t offset) {
	$Nodes$ToArrayTask$OfPrimitive::init$(node, array, offset);
}

Nodes$ToArrayTask$OfDouble::Nodes$ToArrayTask$OfDouble() {
}

$Class* Nodes$ToArrayTask$OfDouble::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Node$OfDouble;[DI)V", nullptr, $PRIVATE, $method(Nodes$ToArrayTask$OfDouble, init$, void, $Node$OfDouble*, $doubles*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$ToArrayTask", "java.util.stream.Nodes", "ToArrayTask", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.Nodes$ToArrayTask$OfDouble", "java.util.stream.Nodes$ToArrayTask", "OfDouble", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Nodes$ToArrayTask$OfPrimitive", "java.util.stream.Nodes$ToArrayTask", "OfPrimitive", $PRIVATE | $STATIC},
		{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$OfDouble", "java.util.stream.Node", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$ToArrayTask$OfDouble",
		"java.util.stream.Nodes$ToArrayTask$OfPrimitive",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive<Ljava/lang/Double;Ljava/util/function/DoubleConsumer;[DLjava/util/Spliterator$OfDouble;Ljava/util/stream/Node$OfDouble;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$ToArrayTask$OfDouble, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Nodes$ToArrayTask$OfDouble));
	});
	return class$;
}

$Class* Nodes$ToArrayTask$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java