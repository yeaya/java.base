#ifndef _jdk_internal_org_objectweb_asm$_tree_ParameterNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_ParameterNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.ParameterNode
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

class $import ParameterNode : public ::java::lang::Object {
	$class(ParameterNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ParameterNode();
	void init$($String* name, int32_t access);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	$String* name = nullptr;
	int32_t access = 0;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_ParameterNode_h_