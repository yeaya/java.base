#include <java/util/stream/Nodes$ToArrayTask$OfDouble.h>

#include <java/util/stream/Node$OfDouble.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>
#include <java/util/stream/Nodes$ToArrayTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node$OfDouble = ::java::util::stream::Node$OfDouble;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes$ToArrayTask$OfPrimitive = ::java::util::stream::Nodes$ToArrayTask$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$ToArrayTask$OfDouble_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Node$OfDouble;[DI)V", nullptr, $PRIVATE, $method(Nodes$ToArrayTask$OfDouble, init$, void, $Node$OfDouble*, $doubles*, int32_t)},
	{}
};

$InnerClassInfo _Nodes$ToArrayTask$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ToArrayTask", "java.util.stream.Nodes", "ToArrayTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$ToArrayTask$OfDouble", "java.util.stream.Nodes$ToArrayTask", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$ToArrayTask$OfPrimitive", "java.util.stream.Nodes$ToArrayTask", "OfPrimitive", $PRIVATE | $STATIC},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$OfDouble", "java.util.stream.Node", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$ToArrayTask$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$ToArrayTask$OfDouble",
	"java.util.stream.Nodes$ToArrayTask$OfPrimitive",
	nullptr,
	nullptr,
	_Nodes$ToArrayTask$OfDouble_MethodInfo_,
	"Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive<Ljava/lang/Double;Ljava/util/function/DoubleConsumer;[DLjava/util/Spliterator$OfDouble;Ljava/util/stream/Node$OfDouble;>;",
	nullptr,
	_Nodes$ToArrayTask$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ToArrayTask$OfDouble($Class* clazz) {
	return $of($alloc(Nodes$ToArrayTask$OfDouble));
}

void Nodes$ToArrayTask$OfDouble::init$($Node$OfDouble* node, $doubles* array, int32_t offset) {
	$Nodes$ToArrayTask$OfPrimitive::init$(static_cast<$Node$OfPrimitive*>(node), $of(array), offset);
}

Nodes$ToArrayTask$OfDouble::Nodes$ToArrayTask$OfDouble() {
}

$Class* Nodes$ToArrayTask$OfDouble::load$($String* name, bool initialize) {
	$loadClass(Nodes$ToArrayTask$OfDouble, name, initialize, &_Nodes$ToArrayTask$OfDouble_ClassInfo_, allocate$Nodes$ToArrayTask$OfDouble);
	return class$;
}

$Class* Nodes$ToArrayTask$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java