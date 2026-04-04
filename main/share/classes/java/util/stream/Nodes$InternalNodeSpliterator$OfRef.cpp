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
using $Consumer = ::java::util::function::Consumer;
using $Node = ::java::util::stream::Node;
using $Nodes$InternalNodeSpliterator = ::java::util::stream::Nodes$InternalNodeSpliterator;

namespace java {
	namespace util {
		namespace stream {

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
	$useLocalObjectStack();
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
			this->lastNodeSpliterator->forEachRemaining(consumer);
		}
	} else {
		while (tryAdvance(consumer)) {
		}
	}
}

Nodes$InternalNodeSpliterator$OfRef::Nodes$InternalNodeSpliterator$OfRef() {
}

$Class* Nodes$InternalNodeSpliterator$OfRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Node;)V", "(Ljava/util/stream/Node<TT;>;)V", 0, $method(Nodes$InternalNodeSpliterator$OfRef, init$, void, $Node*)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(Nodes$InternalNodeSpliterator$OfRef, forEachRemaining, void, $Consumer*)},
		{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC, $virtualMethod(Nodes$InternalNodeSpliterator$OfRef, tryAdvance, bool, $Consumer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Nodes$InternalNodeSpliterator", "java.util.stream.Nodes", "InternalNodeSpliterator", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.Nodes$InternalNodeSpliterator$OfRef", "java.util.stream.Nodes$InternalNodeSpliterator", "OfRef", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Nodes$InternalNodeSpliterator$OfRef",
		"java.util.stream.Nodes$InternalNodeSpliterator",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/Nodes$InternalNodeSpliterator<TT;Ljava/util/Spliterator<TT;>;Ljava/util/stream/Node<TT;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Nodes"
	};
	$loadClass(Nodes$InternalNodeSpliterator$OfRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nodes$InternalNodeSpliterator$OfRef);
	});
	return class$;
}

$Class* Nodes$InternalNodeSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java