#ifndef _jdk_internal_org_objectweb_asm$_tree_MultiANewArrayInsnNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_MultiANewArrayInsnNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.MultiANewArrayInsnNode
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

class $import MultiANewArrayInsnNode : public ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode {
	$class(MultiANewArrayInsnNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode)
public:
	MultiANewArrayInsnNode();
	using ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode::clone;
	void init$($String* descriptor, int32_t numDimensions);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) override;
	virtual int32_t getType() override;
	$String* desc = nullptr;
	int32_t dims = 0;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_MultiANewArrayInsnNode_h_