#ifndef _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter$1_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter$1_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckMethodAdapter$1
//$ extends jdk.internal.org.objectweb.asm.tree.MethodNode

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodNode.h>

namespace java {
	namespace lang {
		class Exception;
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
						namespace analysis {
							class Analyzer;
						}
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
					namespace util {

class CheckMethodAdapter$1 : public ::jdk::internal::org::objectweb::asm$::tree::MethodNode {
	$class(CheckMethodAdapter$1, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::MethodNode)
public:
	CheckMethodAdapter$1();
	void init$(int32_t api, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions, ::jdk::internal::org::objectweb::asm$::MethodVisitor* val$methodVisitor);
	void throwError(::jdk::internal::org::objectweb::asm$::tree::analysis::Analyzer* analyzer, ::java::lang::Exception* e);
	virtual void visitEnd() override;
	using ::jdk::internal::org::objectweb::asm$::tree::MethodNode::visitMethodInsn;
	::jdk::internal::org::objectweb::asm$::MethodVisitor* val$methodVisitor = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter$1_h_