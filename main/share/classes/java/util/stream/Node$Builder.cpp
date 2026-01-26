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

$MethodInfo _Node$Builder_MethodInfo_[] = {
	{"build", "()Ljava/util/stream/Node;", "()Ljava/util/stream/Node<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Node$Builder, build, $Node*)},
	{}
};

$InnerClassInfo _Node$Builder_InnerClassesInfo_[] = {
	{"java.util.stream.Node$Builder", "java.util.stream.Node", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfDouble", "java.util.stream.Node$Builder", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfLong", "java.util.stream.Node$Builder", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$Builder$OfInt", "java.util.stream.Node$Builder", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Node$Builder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Node$Builder",
	nullptr,
	"java.util.stream.Sink",
	nullptr,
	_Node$Builder_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;",
	nullptr,
	_Node$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Node"
};

$Object* allocate$Node$Builder($Class* clazz) {
	return $of($alloc(Node$Builder));
}

$Class* Node$Builder::load$($String* name, bool initialize) {
	$loadClass(Node$Builder, name, initialize, &_Node$Builder_ClassInfo_, allocate$Node$Builder);
	return class$;
}

$Class* Node$Builder::class$ = nullptr;

		} // stream
	} // util
} // java