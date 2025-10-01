#ifndef _jdk_internal_org_objectweb_asm$_tree_ModuleProvideNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_ModuleProvideNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.ModuleProvideNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
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

class $import ModuleProvideNode : public ::java::lang::Object {
	$class(ModuleProvideNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleProvideNode();
	void init$($String* service, ::java::util::List* providers);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor);
	$String* service = nullptr;
	::java::util::List* providers = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_ModuleProvideNode_h_