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
using $Iterable = ::java::lang::Iterable;
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

$FieldInfo _InsnList_FieldInfo_[] = {
	{"size", "I", nullptr, $PRIVATE, $field(InsnList, size$)},
	{"firstInsn", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PRIVATE, $field(InsnList, firstInsn)},
	{"lastInsn", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PRIVATE, $field(InsnList, lastInsn)},
	{"cache", "[Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, 0, $field(InsnList, cache)},
	{}
};

$MethodInfo _InsnList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InsnList::*)()>(&InsnList::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"add", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC},
	{"add", "(Ljdk/internal/org/objectweb/asm/tree/InsnList;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)Z", nullptr, $PUBLIC},
	{"get", "(I)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC},
	{"getFirst", "()Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC},
	{"getLast", "()Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC},
	{"indexOf", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)I", nullptr, $PUBLIC},
	{"insert", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC},
	{"insert", "(Ljdk/internal/org/objectweb/asm/tree/InsnList;)V", nullptr, $PUBLIC},
	{"insert", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC},
	{"insert", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/InsnList;)V", nullptr, $PUBLIC},
	{"insertBefore", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC},
	{"insertBefore", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/InsnList;)V", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;>;", $PUBLIC},
	{"iterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;>;", $PUBLIC},
	{"remove", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC},
	{"removeAll", "(Z)V", nullptr, 0},
	{"resetLabels", "()V", nullptr, $PUBLIC},
	{"set", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InsnList_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator", "jdk.internal.org.objectweb.asm.tree.InsnList", "InsnListIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _InsnList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.InsnList",
	"java.lang.Object",
	"java.lang.Iterable",
	_InsnList_FieldInfo_,
	_InsnList_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;>;",
	nullptr,
	_InsnList_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator"
};

$Object* allocate$InsnList($Class* clazz) {
	return $of($alloc(InsnList));
}

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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
		$nc(this->cache)->set(index, newInsnNode);
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
		$set($nc(this->lastInsn), nextInsn, insnNode);
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
	this->size$ += $nc(insnList)->size$;
	if (this->lastInsn == nullptr) {
		$set(this, firstInsn, insnList->firstInsn);
		$set(this, lastInsn, insnList->lastInsn);
	} else {
		$var($AbstractInsnNode, firstInsnListElement, insnList->firstInsn);
		$set($nc(this->lastInsn), nextInsn, firstInsnListElement);
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
		$set($nc(this->firstInsn), previousInsn, insnNode);
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
	this->size$ += $nc(insnList)->size$;
	if (this->firstInsn == nullptr) {
		$set(this, firstInsn, insnList->firstInsn);
		$set(this, lastInsn, insnList->lastInsn);
	} else {
		$var($AbstractInsnNode, lastInsnListElement, insnList->lastInsn);
		$set($nc(this->firstInsn), previousInsn, lastInsnListElement);
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
		$set($nc(nextInsn), previousInsn, insnNode);
	}
	$set(previousInsn, nextInsn, insnNode);
	$set($nc(insnNode), nextInsn, nextInsn);
	$set(insnNode, previousInsn, previousInsn);
	$set(this, cache, nullptr);
	insnNode->index = 0;
}

void InsnList::insert($AbstractInsnNode* previousInsn, InsnList* insnList) {
	$useLocalCurrentObjectStackCache();
	if ($nc(insnList)->size$ == 0) {
		return;
	}
	this->size$ += $nc(insnList)->size$;
	$var($AbstractInsnNode, firstInsnListElement, insnList->firstInsn);
	$var($AbstractInsnNode, lastInsnListElement, insnList->lastInsn);
	$var($AbstractInsnNode, nextInsn, $nc(previousInsn)->nextInsn);
	if (nextInsn == nullptr) {
		$set(this, lastInsn, lastInsnListElement);
	} else {
		$set($nc(nextInsn), previousInsn, lastInsnListElement);
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
		$set($nc(previousInsn), nextInsn, insnNode);
	}
	$set(nextInsn, previousInsn, insnNode);
	$set($nc(insnNode), nextInsn, nextInsn);
	$set(insnNode, previousInsn, previousInsn);
	$set(this, cache, nullptr);
	insnNode->index = 0;
}

void InsnList::insertBefore($AbstractInsnNode* nextInsn, InsnList* insnList) {
	$useLocalCurrentObjectStackCache();
	if ($nc(insnList)->size$ == 0) {
		return;
	}
	this->size$ += $nc(insnList)->size$;
	$var($AbstractInsnNode, firstInsnListElement, insnList->firstInsn);
	$var($AbstractInsnNode, lastInsnListElement, insnList->lastInsn);
	$var($AbstractInsnNode, previousInsn, $nc(nextInsn)->previousInsn);
	if (previousInsn == nullptr) {
		$set(this, firstInsn, firstInsnListElement);
	} else {
		$set($nc(previousInsn), nextInsn, firstInsnListElement);
	}
	$set(nextInsn, previousInsn, lastInsnListElement);
	$set($nc(lastInsnListElement), nextInsn, nextInsn);
	$set($nc(firstInsnListElement), previousInsn, previousInsn);
	$set(this, cache, nullptr);
	insnList->removeAll(false);
}

void InsnList::remove($AbstractInsnNode* insnNode) {
	$useLocalCurrentObjectStackCache();
	--this->size$;
	$var($AbstractInsnNode, nextInsn, $nc(insnNode)->nextInsn);
	$var($AbstractInsnNode, previousInsn, insnNode->previousInsn);
	if (nextInsn == nullptr) {
		if (previousInsn == nullptr) {
			$set(this, firstInsn, nullptr);
			$set(this, lastInsn, nullptr);
		} else {
			$set($nc(previousInsn), nextInsn, nullptr);
			$set(this, lastInsn, previousInsn);
		}
	} else if (previousInsn == nullptr) {
		$set(this, firstInsn, nextInsn);
		$set($nc(nextInsn), previousInsn, nullptr);
	} else {
		$set($nc(previousInsn), nextInsn, nextInsn);
		$set($nc(nextInsn), previousInsn, previousInsn);
	}
	$set(this, cache, nullptr);
	insnNode->index = -1;
	$set(insnNode, previousInsn, nullptr);
	$set(insnNode, nextInsn, nullptr);
}

void InsnList::removeAll(bool mark) {
	$useLocalCurrentObjectStackCache();
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
			$nc(($cast($LabelNode, currentInsn)))->resetLabel();
		}
		$assign(currentInsn, currentInsn->nextInsn);
	}
}

InsnList::InsnList() {
}

$Class* InsnList::load$($String* name, bool initialize) {
	$loadClass(InsnList, name, initialize, &_InsnList_ClassInfo_, allocate$InsnList);
	return class$;
}

$Class* InsnList::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk