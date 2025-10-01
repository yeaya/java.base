#ifndef _jdk_internal_org_objectweb_asm$_tree_ModuleExportNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_ModuleExportNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.ModuleExportNode
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

class $export ModuleExportNode : public ::java::lang::Object {
	$class(ModuleExportNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleExportNode();
	void init$($String* packaze, int32_t access, ::java::util::List* modules);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor);
	$String* packaze = nullptr;
	int32_t access = 0;
	::java::util::List* modules = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_ModuleExportNode_h_