#ifndef _jdk_internal_org_objectweb_asm$_tree_FieldInsnNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_FieldInsnNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.FieldInsnNode
//$ extends jdk.internal.org.objectweb.asm.tree.AbstractInsnNode

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

class $export FieldInsnNode : public ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode {
	$class(FieldInsnNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode)
public:
	FieldInsnNode();
	using ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode::clone;
	void init$(int32_t opcode, $String* owner, $String* name, $String* descriptor);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) override;
	virtual int32_t getType() override;
	virtual void setOpcode(int32_t opcode);
	$String* owner = nullptr;
	$String* name = nullptr;
	$String* desc = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_FieldInsnNode_h_