#include <jdk/internal/org/objectweb/asm/tree/InsnList.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Iterator.h>
#include <java/util/ListIterator.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InsnList$InsnListIterator.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jcpp.h>

using $AbstractInsnNodeArray = $Array<::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $ListIterator = ::java::util::ListIterator;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $InsnList$InsnListIterator = ::jdk::internal::org::objectweb::asm$::tree::InsnList$InsnListIterator;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void InsnList::init$() {
}

int32_t InsnList::size() {
	return this->size$;
}

$AbstractInsnNode* InsnList::getFirst() {
	return this->firstInsn;
}

$AbstractInsnNode* InsnList::getLast() {
	return this->lastInsn;
}

$AbstractInsnNode* InsnList::get(int32_t index) {
	if (index < 0 || index >= this->size$) {
		$throwNew($IndexOutOfBoundsException);
	}
	if (this->cache == nullptr) {
		$set(this, cache, toArray());
	}
	return $nc(this->cache)->get(index);
}

bool InsnList::contains($AbstractInsnNode* insnNode) {
	$var($AbstractInsnNode, currentInsn, this->firstInsn);
	while (currentInsn != nullptr && currentInsn != insnNode) {
		$assign(currentInsn, currentInsn->nextInsn);
	}
	return currentInsn != nullptr;
}

int32_t InsnList::indexOf($AbstractInsnNode* insnNode) {
	if (this->cache == nullptr) {
		$set(this, cache, toArray());
	}
	return $nc(insnNode)->index;
}

void InsnList::accept($MethodVisitor* methodVisitor) {
	$var($AbstractInsnNode, currentInsn, this->firstInsn);
	while (currentInsn != nullptr) {
		currentInsn->accept(methodVisitor);
		$assign(currentInsn, currentInsn->nextInsn);
	}
}

$Iterator* InsnList::iterator() {
	return iterator(0);
}

$ListIterator* InsnList::iterator(int32_t index) {
	return $new($InsnList$InsnListIterator, this, index);
}

$AbstractInsnNodeArray* InsnList::toArray() {
	$useLocalObjectStack();
	int32_t currentInsnIndex = 0;
	$var($AbstractInsnNode, currentInsn, this->firstInsn);
	$var($AbstractInsnNodeArray, insnNodeArray, $new($AbstractInsnNodeArray, this->size$));
	while (currentInsn != nullptr) {
		insnNodeArray->set(currentInsnIndex, currentInsn);
		currentInsn->index = currentInsnIndex++;
		$assign(currentInsn, currentInsn->nextInsn);
	}
	return insnNodeArray;
}

void InsnList::set($AbstractInsnNode* oldInsnNode, $AbstractInsnNode* newInsnNode) {
	$useLocalObjectStack();
	$var($AbstractInsnNode, nextInsn, $nc(oldInsnNode)->nextInsn);
	$set($nc(newInsnNode), nextInsn, nextInsn);
	if (nextInsn != nullptr) {
		$set(nextInsn, previousInsn, newInsnNode);
	} else {
		$set(this, lastInsn, newInsnNode);
	}
	$var($AbstractInsnNode, previousInsn, oldInsnNode->previousInsn);
	$set(newInsnNode, previousInsn, previousInsn);
	if (previousInsn != nullptr) {
		$set(previousInsn, nextInsn, newInsnNode);
	} else {
		$set(this, firstInsn, newInsnNode);
	}
	if (this->cache != nullptr) {
		int32_t index = oldInsnNode->index;
		this->cache->set(index, newInsnNode);
		newInsnNode->index = index;
	} else {
		newInsnNode->index = 0;
	}
	oldInsnNode->index = -1;
	$set(oldInsnNode, previousInsn, nullptr);
	$set(oldInsnNode, nextInsn, nullptr);
}

void InsnList::add($AbstractInsnNode* insnNode) {
	++this->size$;
	if (this->lastInsn == nullptr) {
		$set(this, firstInsn, insnNode);
		$set(this, lastInsn, insnNode);
	} else {
		$set(this->lastInsn, nextInsn, insnNode);
		$set($nc(insnNode), previousInsn, this->lastInsn);
	}
	$set(this, lastInsn, insnNode);
	$set(this, cache, nullptr);
	$nc(insnNode)->index = 0;
}

void InsnList::add(InsnList* insnList) {
	if ($nc(insnList)->size$ == 0) {
		return;
	}
	this->size$ += insnList->size$;
	if (this->lastInsn == nullptr) {
		$set(this, firstInsn, insnList->firstInsn);
		$set(this, lastInsn, insnList->lastInsn);
	} else {
		$var($AbstractInsnNode, firstInsnListElement, insnList->firstInsn);
		$set(this->lastInsn, nextInsn, firstInsnListElement);
		$set($nc(firstInsnListElement), previousInsn, this->lastInsn);
		$set(this, lastInsn, insnList->lastInsn);
	}
	$set(this, cache, nullptr);
	insnList->removeAll(false);
}

void InsnList::insert($AbstractInsnNode* insnNode) {
	++this->size$;
	if (this->firstInsn == nullptr) {
		$set(this, firstInsn, insnNode);
		$set(this, lastInsn, insnNode);
	} else {
		$set(this->firstInsn, previousInsn, insnNode);
		$set($nc(insnNode), nextInsn, this->firstInsn);
	}
	$set(this, firstInsn, insnNode);
	$set(this, cache, nullptr);
	$nc(insnNode)->index = 0;
}

void InsnList::insert(InsnList* insnList) {
	if ($nc(insnList)->size$ == 0) {
		return;
	}
	this->size$ += insnList->size$;
	if (this->firstInsn == nullptr) {
		$set(this, firstInsn, insnList->firstInsn);
		$set(this, lastInsn, insnList->lastInsn);
	} else {
		$var($AbstractInsnNode, lastInsnListElement, insnList->lastInsn);
		$set(this->firstInsn, previousInsn, lastInsnListElement);
		$set($nc(lastInsnListElement), nextInsn, this->firstInsn);
		$set(this, firstInsn, insnList->firstInsn);
	}
	$set(this, cache, nullptr);
	insnList->removeAll(false);
}

void InsnList::insert($AbstractInsnNode* previousInsn, $AbstractInsnNode* insnNode) {
	++this->size$;
	$var($AbstractInsnNode, nextInsn, $nc(previousInsn)->nextInsn);
	if (nextInsn == nullptr) {
		$set(this, lastInsn, insnNode);
	} else {
		$set(nextInsn, previousInsn, insnNode);
	}
	$set(previousInsn, nextInsn, insnNode);
	$set($nc(insnNode), nextInsn, nextInsn);
	$set(insnNode, previousInsn, previousInsn);
	$set(this, cache, nullptr);
	insnNode->index = 0;
}

void InsnList::insert($AbstractInsnNode* previousInsn, InsnList* insnList) {
	$useLocalObjectStack();
	if ($nc(insnList)->size$ == 0) {
		return;
	}
	this->size$ += insnList->size$;
	$var($AbstractInsnNode, firstInsnListElement, insnList->firstInsn);
	$var($AbstractInsnNode, lastInsnListElement, insnList->lastInsn);
	$var($AbstractInsnNode, nextInsn, $nc(previousInsn)->nextInsn);
	if (nextInsn == nullptr) {
		$set(this, lastInsn, lastInsnListElement);
	} else {
		$set(nextInsn, previousInsn, lastInsnListElement);
	}
	$set(previousInsn, nextInsn, firstInsnListElement);
	$set($nc(lastInsnListElement), nextInsn, nextInsn);
	$set($nc(firstInsnListElement), previousInsn, previousInsn);
	$set(this, cache, nullptr);
	insnList->removeAll(false);
}

void InsnList::insertBefore($AbstractInsnNode* nextInsn, $AbstractInsnNode* insnNode) {
	++this->size$;
	$var($AbstractInsnNode, previousInsn, $nc(nextInsn)->previousInsn);
	if (previousInsn == nullptr) {
		$set(this, firstInsn, insnNode);
	} else {
		$set(previousInsn, nextInsn, insnNode);
	}
	$set(nextInsn, previousInsn, insnNode);
	$set($nc(insnNode), nextInsn, nextInsn);
	$set(insnNode, previousInsn, previousInsn);
	$set(this, cache, nullptr);
	insnNode->index = 0;
}

void InsnList::insertBefore($AbstractInsnNode* nextInsn, InsnList* insnList) {
	$useLocalObjectStack();
	if ($nc(insnList)->size$ == 0) {
		return;
	}
	this->size$ += insnList->size$;
	$var($AbstractInsnNode, firstInsnListElement, insnList->firstInsn);
	$var($AbstractInsnNode, lastInsnListElement, insnList->lastInsn);
	$var($AbstractInsnNode, previousInsn, $nc(nextInsn)->previousInsn);
	if (previousInsn == nullptr) {
		$set(this, firstInsn, firstInsnListElement);
	} else {
		$set(previousInsn, nextInsn, firstInsnListElement);
	}
	$set(nextInsn, previousInsn, lastInsnListElement);
	$set($nc(lastInsnListElement), nextInsn, nextInsn);
	$set($nc(firstInsnListElement), previousInsn, previousInsn);
	$set(this, cache, nullptr);
	insnList->removeAll(false);
}

void InsnList::remove($AbstractInsnNode* insnNode) {
	$useLocalObjectStack();
	--this->size$;
	$var($AbstractInsnNode, nextInsn, $nc(insnNode)->nextInsn);
	$var($AbstractInsnNode, previousInsn, insnNode->previousInsn);
	if (nextInsn == nullptr) {
		if (previousInsn == nullptr) {
			$set(this, firstInsn, nullptr);
			$set(this, lastInsn, nullptr);
		} else {
			$set(previousInsn, nextInsn, nullptr);
			$set(this, lastInsn, previousInsn);
		}
	} else if (previousInsn == nullptr) {
		$set(this, firstInsn, nextInsn);
		$set(nextInsn, previousInsn, nullptr);
	} else {
		$set(previousInsn, nextInsn, nextInsn);
		$set(nextInsn, previousInsn, previousInsn);
	}
	$set(this, cache, nullptr);
	insnNode->index = -1;
	$set(insnNode, previousInsn, nullptr);
	$set(insnNode, nextInsn, nullptr);
}

void InsnList::removeAll(bool mark) {
	$useLocalObjectStack();
	if (mark) {
		$var($AbstractInsnNode, currentInsn, this->firstInsn);
		while (currentInsn != nullptr) {
			$var($AbstractInsnNode, next, currentInsn->nextInsn);
			currentInsn->index = -1;
			$set(currentInsn, previousInsn, nullptr);
			$set(currentInsn, nextInsn, nullptr);
			$assign(currentInsn, next);
		}
	}
	this->size$ = 0;
	$set(this, firstInsn, nullptr);
	$set(this, lastInsn, nullptr);
	$set(this, cache, nullptr);
}

void InsnList::clear() {
	removeAll(false);
}

void InsnList::resetLabels() {
	$var($AbstractInsnNode, currentInsn, this->firstInsn);
	while (currentInsn != nullptr) {
		if ($instanceOf($LabelNode, currentInsn)) {
			$cast($LabelNode, currentInsn)->resetLabel();
		}
		$assign(currentInsn, currentInsn->nextInsn);
	}
}

InsnList::InsnList() {
}

$Class* InsnList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"size", "I", nullptr, $PRIVATE, $field(InsnList, size$)},
		{"firstInsn", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PRIVATE, $field(InsnList, firstInsn)},
		{"lastInsn", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PRIVATE, $field(InsnList, lastInsn)},
		{"cache", "[Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, 0, $field(InsnList, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InsnList, init$, void)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, accept, void, $MethodVisitor*)},
		{"add", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, add, void, $AbstractInsnNode*)},
		{"add", "(Ljdk/internal/org/objectweb/asm/tree/InsnList;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, add, void, InsnList*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(InsnList, clear, void)},
		{"contains", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)Z", nullptr, $PUBLIC, $virtualMethod(InsnList, contains, bool, $AbstractInsnNode*)},
		{"get", "(I)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC, $virtualMethod(InsnList, get, $AbstractInsnNode*, int32_t)},
		{"getFirst", "()Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC, $virtualMethod(InsnList, getFirst, $AbstractInsnNode*)},
		{"getLast", "()Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC, $virtualMethod(InsnList, getLast, $AbstractInsnNode*)},
		{"indexOf", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)I", nullptr, $PUBLIC, $virtualMethod(InsnList, indexOf, int32_t, $AbstractInsnNode*)},
		{"insert", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, insert, void, $AbstractInsnNode*)},
		{"insert", "(Ljdk/internal/org/objectweb/asm/tree/InsnList;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, insert, void, InsnList*)},
		{"insert", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, insert, void, $AbstractInsnNode*, $AbstractInsnNode*)},
		{"insert", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/InsnList;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, insert, void, $AbstractInsnNode*, InsnList*)},
		{"insertBefore", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, insertBefore, void, $AbstractInsnNode*, $AbstractInsnNode*)},
		{"insertBefore", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/InsnList;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, insertBefore, void, $AbstractInsnNode*, InsnList*)},
		{"iterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;>;", $PUBLIC, $virtualMethod(InsnList, iterator, $Iterator*)},
		{"iterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;>;", $PUBLIC, $virtualMethod(InsnList, iterator, $ListIterator*, int32_t)},
		{"remove", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, remove, void, $AbstractInsnNode*)},
		{"removeAll", "(Z)V", nullptr, 0, $virtualMethod(InsnList, removeAll, void, bool)},
		{"resetLabels", "()V", nullptr, $PUBLIC, $virtualMethod(InsnList, resetLabels, void)},
		{"set", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC, $virtualMethod(InsnList, set, void, $AbstractInsnNode*, $AbstractInsnNode*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(InsnList, size, int32_t)},
		{"toArray", "()[Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC, $virtualMethod(InsnList, toArray, $AbstractInsnNodeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator", "jdk.internal.org.objectweb.asm.tree.InsnList", "InsnListIterator", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.InsnList",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Iterable<Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator"
	};
	$loadClass(InsnList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InsnList);
	});
	return class$;
}

$Class* InsnList::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk