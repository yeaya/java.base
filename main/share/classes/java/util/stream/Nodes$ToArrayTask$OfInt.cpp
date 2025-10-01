#include <java/util/stream/Nodes$ToArrayTask$OfInt.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>
#include <java/util/stream/Nodes$ToArrayTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node$OfInt = ::java::util::stream::Node$OfInt;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes$ToArrayTask = ::java::util::stream::Nodes$ToArrayTask;
using $Nodes$ToArrayTask$OfPrimitive = ::java::util::stream::Nodes$ToArrayTask$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$ToArrayTask$OfInt_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Node$OfInt;[II)V", nullptr, $PRIVATE, $method(static_cast<void(Nodes$ToArrayTask$OfInt::*)($Node$OfInt*,$ints*,int32_t)>(&Nodes$ToArrayTask$OfInt::init$))},
	{}
};

$InnerClassInfo _Nodes$ToArrayTask$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ToArrayTask", "java.util.stream.Nodes", "ToArrayTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$ToArrayTask$OfInt", "java.util.stream.Nodes$ToArrayTask", "OfInt", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$ToArrayTask$OfPrimitive", "java.util.stream.Nodes$ToArrayTask", "OfPrimitive", $PRIVATE | $STATIC},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$OfInt", "java.util.stream.Node", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$ToArrayTask$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$ToArrayTask$OfInt",
	"java.util.stream.Nodes$ToArrayTask$OfPrimitive",
	nullptr,
	nullptr,
	_Nodes$ToArrayTask$OfInt_MethodInfo_,
	"Ljava/util/stream/Nodes$ToArrayTask$OfPrimitive<Ljava/lang/Integer;Ljava/util/function/IntConsumer;[ILjava/util/Spliterator$OfInt;Ljava/util/stream/Node$OfInt;>;",
	nullptr,
	_Nodes$ToArrayTask$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ToArrayTask$OfInt($Class* clazz) {
	return $of($alloc(Nodes$ToArrayTask$OfInt));
}

void Nodes$ToArrayTask$OfInt::init$($Node$OfInt* node, $ints* array, int32_t offset) {
	$Nodes$ToArrayTask$OfPrimitive::init$(static_cast<$Node$OfPrimitive*>(node), $of(array), offset);
}

Nodes$ToArrayTask$OfInt::Nodes$ToArrayTask$OfInt() {
}

$Class* Nodes$ToArrayTask$OfInt::load$($String* name, bool initialize) {
	$loadClass(Nodes$ToArrayTask$OfInt, name, initialize, &_Nodes$ToArrayTask$OfInt_ClassInfo_, allocate$Nodes$ToArrayTask$OfInt);
	return class$;
}

$Class* Nodes$ToArrayTask$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java