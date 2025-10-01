#ifndef _jdk_internal_org_objectweb_asm$_tree_LocalVariableAnnotationNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_LocalVariableAnnotationNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.LocalVariableAnnotationNode
//$ extends jdk.internal.org.objectweb.asm.tree.TypeAnnotationNode

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode.h>

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
					class MethodVisitor;
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

class $import LocalVariableAnnotationNode : public ::jdk::internal::org::objectweb::asm$::tree::TypeAnnotationNode {
	$class(LocalVariableAnnotationNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::TypeAnnotationNode)
public:
	LocalVariableAnnotationNode();
	using ::jdk::internal::org::objectweb::asm$::tree::TypeAnnotationNode::accept;
	void init$(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>* start, $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>* end, $ints* index, $String* descriptor);
	void init$(int32_t api, int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>* start, $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>* end, $ints* index, $String* descriptor);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, bool visible);
	::java::util::List* start = nullptr;
	::java::util::List* end = nullptr;
	::java::util::List* index = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_LocalVariableAnnotationNode_h_