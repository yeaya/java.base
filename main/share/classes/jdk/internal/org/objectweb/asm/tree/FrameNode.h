#ifndef _jdk_internal_org_objectweb_asm$_tree_FrameNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_FrameNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.FrameNode
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

class $export FrameNode : public ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode {
	$class(FrameNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode)
public:
	FrameNode();
	using ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode::clone;
	void init$();
	void init$(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor) override;
	static $ObjectArray* asArray(::java::util::List* list);
	virtual ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* clone(::java::util::Map* clonedLabels) override;
	virtual int32_t getType() override;
	int32_t type = 0;
	::java::util::List* local = nullptr;
	::java::util::List* stack = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_FrameNode_h_