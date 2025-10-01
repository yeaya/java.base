#ifndef _jdk_internal_org_objectweb_asm$_tree_TypeAnnotationNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_TypeAnnotationNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.TypeAnnotationNode
//$ extends jdk.internal.org.objectweb.asm.tree.AnnotationNode

#include <jdk/internal/org/objectweb/asm/tree/AnnotationNode.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class TypePath;
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

class $import TypeAnnotationNode : public ::jdk::internal::org::objectweb::asm$::tree::AnnotationNode {
	$class(TypeAnnotationNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::AnnotationNode)
public:
	TypeAnnotationNode();
	void init$(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor);
	void init$(int32_t api, int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor);
	int32_t typeRef = 0;
	::jdk::internal::org::objectweb::asm$::TypePath* typePath = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_TypeAnnotationNode_h_