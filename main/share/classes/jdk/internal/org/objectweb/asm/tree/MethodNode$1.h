#ifndef _jdk_internal_org_objectweb_asm$_tree_MethodNode$1_h_
#define _jdk_internal_org_objectweb_asm$_tree_MethodNode$1_h_
//$ class jdk.internal.org.objectweb.asm.tree.MethodNode$1
//$ extends java.util.ArrayList

#include <java/util/ArrayList.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						class MethodNode;
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

class MethodNode$1 : public ::java::util::ArrayList {
	$class(MethodNode$1, $NO_CLASS_INIT, ::java::util::ArrayList)
public:
	MethodNode$1();
	using ::java::util::ArrayList::add;
	void init$(::jdk::internal::org::objectweb::asm$::tree::MethodNode* this$0, int32_t initialCapacity);
	virtual bool add(Object$* o) override;
	using ::java::util::ArrayList::toArray;
	::jdk::internal::org::objectweb::asm$::tree::MethodNode* this$0 = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_MethodNode$1_h_