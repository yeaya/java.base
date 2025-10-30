#include <java/util/stream/Nodes$InternalNodeSpliterator$OfRef.h>

#include <java/util/Deque.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Deque = ::java::util::Deque;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Node = ::java::util::stream::Node;
using $Nodes$InternalNodeSpliterator = ::java::util::stream::Nodes$InternalNodeSpliterator;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$InternalNodeSpliterator$OfRef_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Node;)V", "(Ljava/util/stream/Node<TT;>;)V", 0, $method(static_cast<void(Nodes$InternalNodeSpliterator$OfRef::*)($Node*)>(&Nodes$InternalNodeSpliterator$OfRef::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$InternalNodeSpliterator$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$InternalNodeSpliterator", "java.util.stream.Nodes", "InternalNodeSpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$InternalNodeSpliterator$OfRef", "java.util.stream.Nodes$InternalNodeSpliterator", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Nodes$InternalNodeSpliterator$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$InternalNodeSpliterator$OfRef",
	"java.util.stream.Nodes$InternalNodeSpliterator",
	nullptr,
	nullptr,
	_Nodes$InternalNodeSpliterator$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/Nodes$InternalNodeSpliterator<TT;Ljava/util/Spliterator<TT;>;Ljava/util/stream/Node<TT;>;>;",
	nullptr,
	_Nodes$InternalNodeSpliterator$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$InternalNodeSpliterator$OfRef($Class* clazz) {
	return $of($alloc(Nodes$InternalNodeSpliterator$OfRef));
}

void Nodes$InternalNodeSpliterator$OfRef::init$($Node* curNode) {
	$Nodes$InternalNodeSpliterator::init$(curNode);
}

bool Nodes$InternalNodeSpliterator$OfRef::tryAdvance($Consumer* consumer) {
	if (!initTryAdvance()) {
		return false;
	}
	bool hasNext = $nc(this->tryAdvanceSpliterator)->tryAdvance(consumer);
	if (!hasNext) {
		if (this->lastNodeSpliterator == nullptr) {
			$var($Node, leaf, findNextLeafNode(this->tryAdvanceStack));
			if (leaf != nullptr) {
				$set(this, tryAdvanceSpliterator, leaf->spliterator());
				return $nc(this->tryAdvanceSpliterator)->tryAdvance(consumer);
			}
		}
		$set(this, curNode, nullptr);
	}
	return hasNext;
}

void Nodes$InternalNodeSpliterator$OfRef::forEachRemaining($Consumer* consumer) {
	$useLocalCurrentObjectStackCache();
	if (this->curNode == nullptr) {
		return;
	}
	if (this->tryAdvanceSpliterator == nullptr) {
		if (this->lastNodeSpliterator == nullptr) {
			$var($Deque, stack, initStack());
			$var($Node, leaf, nullptr);
			while (($assign(leaf, findNextLeafNode(stack))) != nullptr) {
				$nc(leaf)->forEach(consumer);
			}
			$set(this, curNode, nullptr);
		} else {
			$nc(this->lastNodeSpliterator)->forEachRemaining(consumer);
		}
	} else {
		while (tryAdvance(consumer)) {
		}
	}
}

Nodes$InternalNodeSpliterator$OfRef::Nodes$InternalNodeSpliterator$OfRef() {
}

$Class* Nodes$InternalNodeSpliterator$OfRef::load$($String* name, bool initialize) {
	$loadClass(Nodes$InternalNodeSpliterator$OfRef, name, initialize, &_Nodes$InternalNodeSpliterator$OfRef_ClassInfo_, allocate$Nodes$InternalNodeSpliterator$OfRef);
	return class$;
}

$Class* Nodes$InternalNodeSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java