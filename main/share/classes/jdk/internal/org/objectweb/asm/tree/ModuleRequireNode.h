#ifndef _jdk_internal_org_objectweb_asm$_tree_ModuleRequireNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_ModuleRequireNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.ModuleRequireNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ModuleVisitor;
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

class $export ModuleRequireNode : public ::java::lang::Object {
	$class(ModuleRequireNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleRequireNode();
	void init$($String* module, int32_t access, $String* version);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor);
	$String* module = nullptr;
	int32_t access = 0;
	$String* version = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_ModuleRequireNode_h_