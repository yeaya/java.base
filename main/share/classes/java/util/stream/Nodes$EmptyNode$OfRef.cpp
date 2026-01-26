#include <java/util/stream/Nodes$EmptyNode$OfRef.h>

#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Nodes$EmptyNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;
using $Nodes$EmptyNode = ::java::util::stream::Nodes$EmptyNode;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$EmptyNode$OfRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Nodes$EmptyNode$OfRef, init$, void)},
	{"copyInto", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$EmptyNode$OfRef, copyInto, void, $ObjectArray*, int32_t)},
	{"forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Nodes$EmptyNode$OfRef, forEach, void, $Consumer*)},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC, $virtualMethod(Nodes$EmptyNode$OfRef, spliterator, $Spliterator*)},
	{}
};

$InnerClassInfo _Nodes$EmptyNode$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$EmptyNode", "java.util.stream.Nodes", "EmptyNode", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$EmptyNode$OfRef", "java.util.stream.Nodes$EmptyNode", "OfRef", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Nodes$EmptyNode$OfRef_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Nodes$EmptyNode$OfRef",
	"java.util.stream.Nodes$EmptyNode",
	nullptr,
	nullptr,
	_Nodes$EmptyNode$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/Nodes$EmptyNode<TT;[TT;Ljava/util/function/Consumer<-TT;>;>;",
	nullptr,
	_Nodes$EmptyNode$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$EmptyNode$OfRef($Class* clazz) {
	return $of($alloc(Nodes$EmptyNode$OfRef));
}

void Nodes$EmptyNode$OfRef::init$() {
	$Nodes$EmptyNode::init$();
}

$Spliterator* Nodes$EmptyNode$OfRef::spliterator() {
	return $Spliterators::emptySpliterator();
}

void Nodes$EmptyNode$OfRef::copyInto($ObjectArray* array, int32_t offset) {
	$Nodes$EmptyNode::copyInto($of(array), offset);
}

void Nodes$EmptyNode$OfRef::forEach($Consumer* consumer) {
	$Nodes$EmptyNode::forEach($of(consumer));
}

Nodes$EmptyNode$OfRef::Nodes$EmptyNode$OfRef() {
}

$Class* Nodes$EmptyNode$OfRef::load$($String* name, bool initialize) {
	$loadClass(Nodes$EmptyNode$OfRef, name, initialize, &_Nodes$EmptyNode$OfRef_ClassInfo_, allocate$Nodes$EmptyNode$OfRef);
	return class$;
}

$Class* Nodes$EmptyNode$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java