#ifndef _jdk_internal_org_objectweb_asm$_tree_InsnList$InsnListIterator_h_
#define _jdk_internal_org_objectweb_asm$_tree_InsnList$InsnListIterator_h_
//$ class jdk.internal.org.objectweb.asm.tree.InsnList$InsnListIterator
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						class AbstractInsnNode;
						class InsnList;
					}
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

class InsnList$InsnListIterator : public ::java::util::ListIterator {
	$class(InsnList$InsnListIterator, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	InsnList$InsnListIterator();
	void init$(::jdk::internal::org::objectweb::asm$::tree::InsnList* this$0, int32_t index);
	virtual void add(Object$* o) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* o) override;
	::jdk::internal::org::objectweb::asm$::tree::InsnList* this$0 = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* nextInsn = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* previousInsn = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* remove$ = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_InsnList$InsnListIterator_h_