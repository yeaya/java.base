#ifndef _jdk_internal_org_objectweb_asm$_tree_InsnList_h_
#define _jdk_internal_org_objectweb_asm$_tree_InsnList_h_
//$ class jdk.internal.org.objectweb.asm.tree.InsnList
//$ extends java.lang.Iterable

#include <java/lang/Array.h>
#include <java/lang/Iterable.h>

namespace java {
	namespace util {
		class Iterator;
		class ListIterator;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class MethodVisitor;
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
						class AbstractInsnNode;
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

class $import InsnList : public ::java::lang::Iterable {
	$class(InsnList, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	InsnList();
	void init$();
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	virtual void add(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	virtual void add(::jdk::internal::org::objectweb::asm$::tree::InsnList* insnList);
	virtual void clear();
	virtual bool contains(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* get(int32_t index);
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* getFirst();
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* getLast();
	virtual int32_t indexOf(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	virtual void insert(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	virtual void insert(::jdk::internal::org::objectweb::asm$::tree::InsnList* insnList);
	virtual void insert(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* previousInsn, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	virtual void insert(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* previousInsn, ::jdk::internal::org::objectweb::asm$::tree::InsnList* insnList);
	virtual void insertBefore(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* nextInsn, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	virtual void insertBefore(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* nextInsn, ::jdk::internal::org::objectweb::asm$::tree::InsnList* insnList);
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::ListIterator* iterator(int32_t index);
	virtual void remove(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	virtual void removeAll(bool mark);
	virtual void resetLabels();
	virtual void set(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* oldInsnNode, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* newInsnNode);
	virtual int32_t size();
	virtual $Array<::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode>* toArray();
	int32_t size$ = 0;
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* firstInsn = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* lastInsn = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode>* cache = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_InsnList_h_