#ifndef _jdk_internal_org_objectweb_asm$_tree_LocalVariableNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_LocalVariableNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.LocalVariableNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import LocalVariableNode : public ::java::lang::Object {
	$class(LocalVariableNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LocalVariableNode();
	void init$($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::tree::LabelNode* start, ::jdk::internal::org::objectweb::asm$::tree::LabelNode* end, int32_t index);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	$String* name = nullptr;
	$String* desc = nullptr;
	$String* signature = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::LabelNode* start = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::LabelNode* end = nullptr;
	int32_t index = 0;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_LocalVariableNode_h_