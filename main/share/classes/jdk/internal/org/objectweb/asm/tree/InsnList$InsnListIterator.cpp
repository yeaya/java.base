#include <jdk/internal/org/objectweb/asm/tree/InsnList$InsnListIterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InsnList.h>
#include <jcpp.h>

using $AbstractInsnNodeArray = $Array<::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $InsnList = ::jdk::internal::org::objectweb::asm$::tree::InsnList;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _InsnList$InsnListIterator_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/org/objectweb/asm/tree/InsnList;", nullptr, $FINAL | $SYNTHETIC, $field(InsnList$InsnListIterator, this$0)},
	{"nextInsn", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, 0, $field(InsnList$InsnListIterator, nextInsn)},
	{"previousInsn", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, 0, $field(InsnList$InsnListIterator, previousInsn)},
	{"remove", "Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", nullptr, 0, $field(InsnList$InsnListIterator, remove$)},
	{}
};

$MethodInfo _InsnList$InsnListIterator_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/InsnList;I)V", nullptr, 0, $method(static_cast<void(InsnList$InsnListIterator::*)($InsnList*,int32_t)>(&InsnList$InsnListIterator::init$))},
	{"add", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"hasPrevious", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC},
	{"previous", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"previousIndex", "()I", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InsnList$InsnListIterator_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator", "jdk.internal.org.objectweb.asm.tree.InsnList", "InsnListIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _InsnList$InsnListIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator",
	"java.lang.Object",
	"java.util.ListIterator",
	_InsnList$InsnListIterator_FieldInfo_,
	_InsnList$InsnListIterator_MethodInfo_,
	nullptr,
	nullptr,
	_InsnList$InsnListIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.tree.InsnList"
};

$Object* allocate$InsnList$InsnListIterator($Class* clazz) {
	return $of($alloc(InsnList$InsnListIterator));
}

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
	return $of(result);
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
	return $of(result);
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
	$loadClass(InsnList$InsnListIterator, name, initialize, &_InsnList$InsnListIterator_ClassInfo_, allocate$InsnList$InsnListIterator);
	return class$;
}

$Class* InsnList$InsnListIterator::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk