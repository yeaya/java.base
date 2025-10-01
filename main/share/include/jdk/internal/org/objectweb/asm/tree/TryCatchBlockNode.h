#ifndef _jdk_internal_org_objectweb_asm$_tree_TryCatchBlockNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_TryCatchBlockNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.TryCatchBlockNode
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

class $import TryCatchBlockNode : public ::java::lang::Object {
	$class(TryCatchBlockNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TryCatchBlockNode();
	void init$(::jdk::internal::org::objectweb::asm$::tree::LabelNode* start, ::jdk::internal::org::objectweb::asm$::tree::LabelNode* end, ::jdk::internal::org::objectweb::asm$::tree::LabelNode* handler, $String* type);
	virtual void accept(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	virtual void updateIndex(int32_t index);
	::jdk::internal::org::objectweb::asm$::tree::LabelNode* start = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::LabelNode* end = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::LabelNode* handler = nullptr;
	$String* type = nullptr;
	::java::util::List* visibleTypeAnnotations = nullptr;
	::java::util::List* invisibleTypeAnnotations = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_TryCatchBlockNode_h_