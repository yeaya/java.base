#include <java/util/stream/Nodes$InternalNodeSpliterator$OfPrimitive.h>

#include <java/util/Comparator.h>
#include <java/util/Deque.h>
#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Deque = ::java::util::Deque;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Consumer = ::java::util::function::Consumer;
using $Node = ::java::util::stream::Node;
using $Node$OfPrimitive = ::java::util::stream::Node$OfPrimitive;
using $Nodes$InternalNodeSpliterator = ::java::util::stream::Nodes$InternalNodeSpliterator;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Nodes$InternalNodeSpliterator$OfPrimitive_MethodInfo_[] = {
	{"*characteristics", "()I", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*estimateSize", "()J", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEachRemaining", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getComparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getExactSizeIfKnown", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hasCharacteristics", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/stream/Node$OfPrimitive;)V", "(TN;)V", 0, $method(static_cast<void(Nodes$InternalNodeSpliterator$OfPrimitive::*)($Node$OfPrimitive*)>(&Nodes$InternalNodeSpliterator$OfPrimitive::init$))},
	{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*tryAdvance", "(Ljava/util/function/Consumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/lang/Object;)Z", "(TT_CONS;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator$OfPrimitive;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Nodes$InternalNodeSpliterator$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$InternalNodeSpliterator", "java.util.stream.Nodes", "InternalNodeSpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$InternalNodeSpliterator$OfPrimitive", "java.util.stream.Nodes$InternalNodeSpliterator", "OfPrimitive", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.Node$OfPrimitive", "java.util.stream.Node", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$InternalNodeSpliterator$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Nodes$InternalNodeSpliterator$OfPrimitive",
	"java.util.stream.Nodes$InternalNodeSpliterator",
	"java.util.Spliterator$OfPrimitive",
	nullptr,
	_Nodes$InternalNodeSpliterator$OfPrimitive_MethodInfo_,
	"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;T_ARR:Ljava/lang/Object;T_SPLITR::Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;N::Ljava/util/stream/Node$OfPrimitive<TT;TT_CONS;TT_ARR;TT_SPLITR;TN;>;>Ljava/util/stream/Nodes$InternalNodeSpliterator<TT;TT_SPLITR;TN;>;Ljava/util/Spliterator$OfPrimitive<TT;TT_CONS;TT_SPLITR;>;",
	nullptr,
	_Nodes$InternalNodeSpliterator$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$InternalNodeSpliterator$OfPrimitive($Class* clazz) {
	return $of($alloc(Nodes$InternalNodeSpliterator$OfPrimitive));
}

int64_t Nodes$InternalNodeSpliterator$OfPrimitive::estimateSize() {
	 return this->$Nodes$InternalNodeSpliterator::estimateSize();
}

int32_t Nodes$InternalNodeSpliterator$OfPrimitive::characteristics() {
	 return this->$Nodes$InternalNodeSpliterator::characteristics();
}

void Nodes$InternalNodeSpliterator$OfPrimitive::forEachRemaining($Consumer* action) {
	this->$Nodes$InternalNodeSpliterator::forEachRemaining(action);
}

int64_t Nodes$InternalNodeSpliterator$OfPrimitive::getExactSizeIfKnown() {
	 return this->$Nodes$InternalNodeSpliterator::getExactSizeIfKnown();
}

bool Nodes$InternalNodeSpliterator$OfPrimitive::hasCharacteristics(int32_t characteristics) {
	 return this->$Nodes$InternalNodeSpliterator::hasCharacteristics(characteristics);
}

$Comparator* Nodes$InternalNodeSpliterator$OfPrimitive::getComparator() {
	 return this->$Nodes$InternalNodeSpliterator::getComparator();
}

int32_t Nodes$InternalNodeSpliterator$OfPrimitive::hashCode() {
	 return this->$Nodes$InternalNodeSpliterator::hashCode();
}

bool Nodes$InternalNodeSpliterator$OfPrimitive::equals(Object$* obj) {
	 return this->$Nodes$InternalNodeSpliterator::equals(obj);
}

$Object* Nodes$InternalNodeSpliterator$OfPrimitive::clone() {
	 return this->$Nodes$InternalNodeSpliterator::clone();
}

$String* Nodes$InternalNodeSpliterator$OfPrimitive::toString() {
	 return this->$Nodes$InternalNodeSpliterator::toString();
}

void Nodes$InternalNodeSpliterator$OfPrimitive::finalize() {
	this->$Nodes$InternalNodeSpliterator::finalize();
}

void Nodes$InternalNodeSpliterator$OfPrimitive::init$($Node$OfPrimitive* cur) {
	$Nodes$InternalNodeSpliterator::init$(cur);
}

bool Nodes$InternalNodeSpliterator$OfPrimitive::tryAdvance(Object$* consumer) {
	if (!initTryAdvance()) {
		return false;
	}
	bool hasNext = $nc(($cast($Spliterator$OfPrimitive, this->tryAdvanceSpliterator)))->tryAdvance(consumer);
	if (!hasNext) {
		if (this->lastNodeSpliterator == nullptr) {
			$var($Node$OfPrimitive, leaf, $cast($Node$OfPrimitive, findNextLeafNode(this->tryAdvanceStack)));
			if (leaf != nullptr) {
				$set(this, tryAdvanceSpliterator, leaf->spliterator());
				return $nc(($cast($Spliterator$OfPrimitive, this->tryAdvanceSpliterator)))->tryAdvance(consumer);
			}
		}
		$set(this, curNode, nullptr);
	}
	return hasNext;
}

void Nodes$InternalNodeSpliterator$OfPrimitive::forEachRemaining(Object$* consumer) {
	$useLocalCurrentObjectStackCache();
	if (this->curNode == nullptr) {
		return;
	}
	if (this->tryAdvanceSpliterator == nullptr) {
		if (this->lastNodeSpliterator == nullptr) {
			$var($Deque, stack, initStack());
			$var($Node$OfPrimitive, leaf, nullptr);
			while (($assign(leaf, $cast($Node$OfPrimitive, findNextLeafNode(stack)))) != nullptr) {
				$nc(leaf)->forEach(consumer);
			}
			$set(this, curNode, nullptr);
		} else {
			$nc(($cast($Spliterator$OfPrimitive, this->lastNodeSpliterator)))->forEachRemaining(consumer);
		}
	} else {
		while (tryAdvance(consumer)) {
		}
	}
}

$Spliterator* Nodes$InternalNodeSpliterator$OfPrimitive::trySplit() {
	return $cast($Spliterator$OfPrimitive, $Nodes$InternalNodeSpliterator::trySplit());
}

Nodes$InternalNodeSpliterator$OfPrimitive::Nodes$InternalNodeSpliterator$OfPrimitive() {
}

$Class* Nodes$InternalNodeSpliterator$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(Nodes$InternalNodeSpliterator$OfPrimitive, name, initialize, &_Nodes$InternalNodeSpliterator$OfPrimitive_ClassInfo_, allocate$Nodes$InternalNodeSpliterator$OfPrimitive);
	return class$;
}

$Class* Nodes$InternalNodeSpliterator$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java