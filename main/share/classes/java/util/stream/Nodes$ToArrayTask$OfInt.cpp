#include <java/util/stream/Nodes$ToArrayTask$OfInt.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>
#include <java/util/stream/Nodes$ToArrayTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node$OfInt = ::java::util::stream::Node$OfInt;
using $Nodes$ToArrayTask$OfPrimitive = ::java::util::stream::Nodes$ToArrayTask$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

void Nodes$ToArrayTask$OfInt::init$($Node$OfInt* node, $ints* array, int32_t offset) {
	$Nodes$ToArrayTask$OfPrimitive::init$(node, array, offset);
}

Nodes$ToArrayTask$OfInt::Nodes$ToArrayTask$OfInt() {
}

$Class* Nodes$ToArrayTask$OfInt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Node$OfInt;[II)V", nullptr, $PRIVATE, $method(Nodes$ToArrayTask$OfInt, init$, void, $Node$OfInt*, $ints*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$ToArrayTask", "java.util.stream.Nodes", "ToArrayTask", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.Nodes$ToArrayTask$OfInt", "java.util.stream.Nodes$ToArrayTask", "OfInt", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Nodes$ToArrayTask$OfPrimitive", "java.util.stream.Nodes$ToArrayTask", "OfPrimitive", $PRIVATE | $STATIC},
		{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$OfInt", "java.util.stream.Node", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$ToArrayTask$OfInt",
		"java.util.stream.Nodes$ToArrayTask$OfPrimitive",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive<Ljava/lang/Integer;Ljava/util/function/IntConsumer;[ILjava/util/Spliterator$OfInt;Ljava/util/stream/Node$OfInt;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$ToArrayTask$OfInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Nodes$ToArrayTask$OfInt));
	});
	return class$;
}

$Class* Nodes$ToArrayTask$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java