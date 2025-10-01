#ifndef _jdk_internal_org_objectweb_asm$_tree_TableSwitchInsnNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_TableSwitchInsnNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.TableSwitchInsnNode
//$ extends jdk.internal.org.objectweb.asm.tree.AbstractInsnNode

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>

namespace java {
	namespace util {
		class List;
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
						class LabelNode;
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

class $export TableSwitchInsnNode : public ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode {
	$class(TableSwitchInsnNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode)
public:
	TableSwitchInsnNode();
	using ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode::clone;
	void init$(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::tree::LabelNode* dflt, $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>* labels);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) override;
	virtual int32_t getType() override;
	int32_t min = 0;
	int32_t max = 0;
	::jdk::internal::org::objectweb::asm$::tree::LabelNode* dflt = nullptr;
	::java::util::List* labels = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_TableSwitchInsnNode_h_