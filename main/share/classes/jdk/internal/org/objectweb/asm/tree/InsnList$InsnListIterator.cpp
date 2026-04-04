#include <jdk/internal/org/objectweb/asm/tree/InsnList$InsnListIterator.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InsnList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $InsnList = ::jdk::internal::org::objectweb::asm$::tree::InsnList;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void InsnList$InsnListIterator::init$($InsnList* this$0, int32_t index) {
	$set(this, this$0, this$0);
	if (index == this$0->size()) {
		$set(this, nextInsn, nullptr);
		$set(this, previousInsn, this$0->getLast());
	} else {
		$set(this, nextInsn, this$0->get(index));
		$set(this, previousInsn, $nc(this->nextInsn)->previousInsn);
	}
}

bool InsnList$InsnListIterator::hasNext() {
	return this->nextInsn != nullptr;
}

$Object* InsnList$InsnListIterator::next() {
	if (this->nextInsn == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($AbstractInsnNode, result, this->nextInsn);
	$set(this, previousInsn, result);
	$set(this, nextInsn, $nc(result)->nextInsn);
	$set(this, remove$, result);
	return result;
}

void InsnList$InsnListIterator::remove() {
	if (this->remove$ != nullptr) {
		if (this->remove$ == this->nextInsn) {
			$set(this, nextInsn, $nc(this->nextInsn)->nextInsn);
		} else {
			$set(this, previousInsn, $nc(this->previousInsn)->previousInsn);
		}
		this->this$0->remove(this->remove$);
		$set(this, remove$, nullptr);
	} else {
		$throwNew($IllegalStateException);
	}
}

bool InsnList$InsnListIterator::hasPrevious() {
	return this->previousInsn != nullptr;
}

$Object* InsnList$InsnListIterator::previous() {
	if (this->previousInsn == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($AbstractInsnNode, result, this->previousInsn);
	$set(this, nextInsn, result);
	$set(this, previousInsn, $nc(result)->previousInsn);
	$set(this, remove$, result);
	return result;
}

int32_t InsnList$InsnListIterator::nextIndex() {
	if (this->nextInsn == nullptr) {
		return this->this$0->size();
	}
	if (this->this$0->cache == nullptr) {
		$set(this->this$0, cache, this->this$0->toArray());
	}
	return $nc(this->nextInsn)->index;
}

int32_t InsnList$InsnListIterator::previousIndex() {
	if (this->previousInsn == nullptr) {
		return -1;
	}
	if (this->this$0->cache == nullptr) {
		$set(this->this$0, cache, this->this$0->toArray());
	}
	return $nc(this->previousInsn)->index;
}

void InsnList$InsnListIterator::add(Object$* o) {
	if (this->nextInsn != nullptr) {
		this->this$0->insertBefore(this->nextInsn, $cast($AbstractInsnNode, o));
	} else if (this->previousInsn != nullptr) {
		this->this$0->insert(this->previousInsn, $cast($AbstractInsnNode, o));
	} else {
		this->this$0->add($cast($AbstractInsnNode, o));
	}
	$set(this, previousInsn, $cast($AbstractInsnNode, o));
	$set(this, remove$, nullptr);
}

void InsnList$InsnListIterator::set(Object$* o) {
	if (this->remove$ != nullptr) {
		this->this$0->set(this->remove$, $cast($AbstractInsnNode, o));
		if (this->remove$ == this->previousInsn) {
			$set(this, previousInsn, $cast($AbstractInsnNode, o));
		} else {
			$set(this, nextInsn, $cast($AbstractInsnNode, o));
		}
	} else {
		$throwNew($IllegalStateException);
	}
}

InsnList$InsnListIterator::InsnList$InsnListIterator() {
}

$Class* InsnList$InsnListIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/org/objectweb/asm/tree/InsnList;", nullptr, $FINAL | $SYNTHETIC, $field(InsnList$InsnListIterator, this$0)},
		{"nextInsn", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, 0, $field(InsnList$InsnListIterator, nextInsn)},
		{"previousInsn", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, 0, $field(InsnList$InsnListIterator, previousInsn)},
		{"remove", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, 0, $field(InsnList$InsnListIterator, remove$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/InsnList;I)V", nullptr, 0, $method(InsnList$InsnListIterator, init$, void, $InsnList*, int32_t)},
		{"add", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, add, void, Object$*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, hasNext, bool)},
		{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, hasPrevious, bool)},
		{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, next, $Object*)},
		{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, nextIndex, int32_t)},
		{"previous", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, previous, $Object*)},
		{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, previousIndex, int32_t)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, remove, void)},
		{"set", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(InsnList$InsnListIterator, set, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator", "jdk.internal.org.objectweb.asm.tree.InsnList", "InsnListIterator", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator",
		"java.lang.Object",
		"java.util.ListIterator",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.tree.InsnList"
	};
	$loadClass(InsnList$InsnListIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InsnList$InsnListIterator);
	});
	return class$;
}

$Class* InsnList$InsnListIterator::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk