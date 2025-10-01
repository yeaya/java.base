#ifndef _jdk_internal_org_objectweb_asm$_tree_InnerClassNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_InnerClassNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.InnerClassNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ClassVisitor;
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

class $export InnerClassNode : public ::java::lang::Object {
	$class(InnerClassNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InnerClassNode();
	void init$($String* name, $String* outerName, $String* innerName, int32_t access);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	$String* name = nullptr;
	$String* outerName = nullptr;
	$String* innerName = nullptr;
	int32_t access = 0;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_InnerClassNode_h_