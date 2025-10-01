#ifndef _jdk_internal_org_objectweb_asm$_tree_LabelNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_LabelNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.LabelNode
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
					class Label;
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

class $import LabelNode : public ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode {
	$class(LabelNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode)
public:
	LabelNode();
	using ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode::clone;
	void init$();
	void init$(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) override;
	virtual ::jdk::internal::org::objectweb::asm$::Label* getLabel();
	virtual int32_t getType() override;
	virtual void resetLabel();
	::jdk::internal::org::objectweb::asm$::Label* value = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_LabelNode_h_