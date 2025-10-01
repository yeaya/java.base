#ifndef _jdk_internal_org_objectweb_asm$_tree_TypeInsnNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_TypeInsnNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.TypeInsnNode
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

class $export TypeInsnNode : public ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode {
	$class(TypeInsnNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode)
public:
	TypeInsnNode();
	using ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode::clone;
	void init$(int32_t opcode, $String* descriptor);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) override;
	virtual int32_t getType() override;
	virtual void setOpcode(int32_t opcode);
	$String* desc = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_TypeInsnNode_h_