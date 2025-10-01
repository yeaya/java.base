#ifndef _jdk_internal_org_objectweb_asm$_tree_LdcInsnNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_LdcInsnNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.LdcInsnNode
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

class $import LdcInsnNode : public ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode {
	$class(LdcInsnNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode)
public:
	LdcInsnNode();
	using ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode::clone;
	void init$(Object$* value);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) override;
	virtual int32_t getType() override;
	$Object* cst = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_LdcInsnNode_h_