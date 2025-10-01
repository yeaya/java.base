#ifndef _jdk_internal_org_objectweb_asm$_commons_TryCatchBlockSorter_h_
#define _jdk_internal_org_objectweb_asm$_commons_TryCatchBlockSorter_h_
//$ class jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter
//$ extends jdk.internal.org.objectweb.asm.tree.MethodNode

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodNode.h>

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
					namespace commons {

class $export TryCatchBlockSorter : public ::jdk::internal::org::objectweb::asm$::tree::MethodNode {
	$class(TryCatchBlockSorter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::MethodNode)
public:
	TryCatchBlockSorter();
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions);
	virtual void visitEnd() override;
	using ::jdk::internal::org::objectweb::asm$::tree::MethodNode::visitMethodInsn;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_TryCatchBlockSorter_h_