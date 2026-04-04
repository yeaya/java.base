#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::java::util::stream::Node;

namespace java {
	namespace util {
		namespace stream {

$Class* Node$Builder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"build", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Node$Builder, build, $Node*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder$OfDouble", "java.util.stream.Node$Builder", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder$OfLong", "java.util.stream.Node$Builder", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.stream.Node$Builder$OfInt", "java.util.stream.Node$Builder", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.Node$Builder",
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
		"java.util.stream.Node"
	};
	$loadClass(Node$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Node$Builder);
	});
	return class$;
}

$Class* Node$Builder::class$ = nullptr;

		} // stream
	} // util
} // java