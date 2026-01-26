#include <java/util/stream/Nodes$InternalNodeSpliterator.h>

#include <java/util/ArrayDeque.h>
#include <java/util/Deque.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes.h>
#include <jcpp.h>

#undef SIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Deque = ::java::util::Deque;
using $Spliterator = ::java::util::Spliterator;
using $Node = ::java::util::stream::Node;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$InternalNodeSpliterator_FieldInfo_[] = {
	{"curNode", "Ljava/util/stream/Node;", "TN;", 0, $field(Nodes$InternalNodeSpliterator, curNode)},
	{"curChildIndex", "I", nullptr, 0, $field(Nodes$InternalNodeSpliterator, curChildIndex)},
	{"lastNodeSpliterator", "Ljava/util/Spliterator;", "TS;", 0, $field(Nodes$InternalNodeSpliterator, lastNodeSpliterator)},
	{"tryAdvanceSpliterator", "Ljava/util/Spliterator;", "TS;", 0, $field(Nodes$InternalNodeSpliterator, tryAdvanceSpliterator)},
	{"tryAdvanceStack", "Ljava/util/Deque;", "Ljava/util/Deque<TN;>;", 0, $field(Nodes$InternalNodeSpliterator, tryAdvanceStack)},
	{}
};

$MethodInfo _Nodes$InternalNodeSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Node;)V", "(TN;)V", 0, $method(Nodes$InternalNodeSpliterator, init$, void, $Node*)},
	{"characteristics", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Nodes$InternalNodeSpliterator, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC | $FINAL, $virtualMethod(Nodes$InternalNodeSpliterator, estimateSize, int64_t)},
	{"findNextLeafNode", "(Ljava/util/Deque;)Ljava/util/stream/Node;", "(Ljava/util/Deque<TN;>;)TN;", $PROTECTED | $FINAL, $method(Nodes$InternalNodeSpliterator, findNextLeafNode, $Node*, $Deque*)},
	{"initStack", "()Ljava/util/Deque;", "()Ljava/util/Deque<TN;>;", $PROTECTED | $FINAL, $method(Nodes$InternalNodeSpliterator, initStack, $Deque*)},
	{"initTryAdvance", "()Z", nullptr, $PROTECTED | $FINAL, $method(Nodes$InternalNodeSpliterator, initTryAdvance, bool)},
	{"trySplit", "()Ljava/util/Spliterator;", "()TS;", $PUBLIC | $FINAL, $virtualMethod(Nodes$InternalNodeSpliterator, trySplit, $Spliterator*)},
	{}
};

$InnerClassInfo _Nodes$InternalNodeSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$InternalNodeSpliterator", "java.util.stream.Nodes", "InternalNodeSpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$InternalNodeSpliterator$OfDouble", "java.util.stream.Nodes$InternalNodeSpliterator", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$InternalNodeSpliterator$OfLong", "java.util.stream.Nodes$InternalNodeSpliterator", "OfLong", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$InternalNodeSpliterator$OfInt", "java.util.stream.Nodes$InternalNodeSpliterator", "OfInt", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Nodes$InternalNodeSpliterator$OfPrimitive", "java.util.stream.Nodes$InternalNodeSpliterator", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$InternalNodeSpliterator$OfRef", "java.util.stream.Nodes$InternalNodeSpliterator", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Nodes$InternalNodeSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Nodes$InternalNodeSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_Nodes$InternalNodeSpliterator_FieldInfo_,
	_Nodes$InternalNodeSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;S::Ljava/util/Spliterator<TT;>;N::Ljava/util/stream/Node<TT;>;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_Nodes$InternalNodeSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$InternalNodeSpliterator($Class* clazz) {
	return $of($alloc(Nodes$InternalNodeSpliterator));
}

void Nodes$InternalNodeSpliterator::init$($Node* curNode) {
	$set(this, curNode, curNode);
}

$Deque* Nodes$InternalNodeSpliterator::initStack() {
	$useLocalCurrentObjectStackCache();
	$var($Deque, stack, $new($ArrayDeque, 8));
	for (int32_t i = $nc(this->curNode)->getChildCount() - 1; i >= this->curChildIndex; --i) {
		stack->addFirst($($nc(this->curNode)->getChild(i)));
	}
	return stack;
}

$Node* Nodes$InternalNodeSpliterator::findNextLeafNode($Deque* stack) {
	$useLocalCurrentObjectStackCache();
	$var($Node, n, nullptr);
	while (($assign(n, $cast($Node, $nc(stack)->pollFirst()))) != nullptr) {
		if ($nc(n)->getChildCount() == 0) {
			if (n->count() > 0) {
				return n;
			}
		} else {
			for (int32_t i = n->getChildCount() - 1; i >= 0; --i) {
				stack->addFirst($(n->getChild(i)));
			}
		}
	}
	return nullptr;
}

bool Nodes$InternalNodeSpliterator::initTryAdvance() {
	if (this->curNode == nullptr) {
		return false;
	}
	if (this->tryAdvanceSpliterator == nullptr) {
		if (this->lastNodeSpliterator == nullptr) {
			$set(this, tryAdvanceStack, initStack());
			$var($Node, leaf, findNextLeafNode(this->tryAdvanceStack));
			if (leaf != nullptr) {
				$set(this, tryAdvanceSpliterator, leaf->spliterator());
			} else {
				$set(this, curNode, nullptr);
				return false;
			}
		} else {
			$set(this, tryAdvanceSpliterator, this->lastNodeSpliterator);
		}
	}
	return true;
}

$Spliterator* Nodes$InternalNodeSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	if (this->curNode == nullptr || this->tryAdvanceSpliterator != nullptr) {
		return nullptr;
	} else if (this->lastNodeSpliterator != nullptr) {
		return $nc(this->lastNodeSpliterator)->trySplit();
	} else if (this->curChildIndex < $nc(this->curNode)->getChildCount() - 1) {
		return $nc($($nc(this->curNode)->getChild(this->curChildIndex++)))->spliterator();
	} else {
		$set(this, curNode, $nc(this->curNode)->getChild(this->curChildIndex));
		if ($nc(this->curNode)->getChildCount() == 0) {
			$set(this, lastNodeSpliterator, $nc(this->curNode)->spliterator());
			return $nc(this->lastNodeSpliterator)->trySplit();
		} else {
			this->curChildIndex = 0;
			return $nc($($nc(this->curNode)->getChild(this->curChildIndex++)))->spliterator();
		}
	}
}

int64_t Nodes$InternalNodeSpliterator::estimateSize() {
	$useLocalCurrentObjectStackCache();
	if (this->curNode == nullptr) {
		return 0;
	}
	if (this->lastNodeSpliterator != nullptr) {
		return $nc(this->lastNodeSpliterator)->estimateSize();
	} else {
		int64_t size = 0;
		for (int32_t i = this->curChildIndex; i < $nc(this->curNode)->getChildCount(); ++i) {
			size += $nc($($nc(this->curNode)->getChild(i)))->count();
		}
		return size;
	}
}

int32_t Nodes$InternalNodeSpliterator::characteristics() {
	return $Spliterator::SIZED;
}

Nodes$InternalNodeSpliterator::Nodes$InternalNodeSpliterator() {
}

$Class* Nodes$InternalNodeSpliterator::load$($String* name, bool initialize) {
	$loadClass(Nodes$InternalNodeSpliterator, name, initialize, &_Nodes$InternalNodeSpliterator_ClassInfo_, allocate$Nodes$InternalNodeSpliterator);
	return class$;
}

$Class* Nodes$InternalNodeSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java