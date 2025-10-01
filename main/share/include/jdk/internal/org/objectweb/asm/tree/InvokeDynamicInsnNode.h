#ifndef _jdk_internal_org_objectweb_asm$_tree_InvokeDynamicInsnNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_InvokeDynamicInsnNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.InvokeDynamicInsnNode
//$ extends jdk.internal.org.objectweb.asm.tree.AbstractInsnNode

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Handle;
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

class $import InvokeDynamicInsnNode : public ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode {
	$class(InvokeDynamicInsnNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode)
public:
	InvokeDynamicInsnNode();
	using ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode::clone;
	void init$($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) override;
	virtual int32_t getType() override;
	$String* name = nullptr;
	$String* desc = nullptr;
	::jdk::internal::org::objectweb::asm$::Handle* bsm = nullptr;
	$ObjectArray* bsmArgs = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_InvokeDynamicInsnNode_h_