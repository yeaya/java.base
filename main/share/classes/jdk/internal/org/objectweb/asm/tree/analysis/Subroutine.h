#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_Subroutine_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_Subroutine_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.Subroutine
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
					namespace tree {
						class JumpInsnNode;
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
						namespace analysis {

class Subroutine : public ::java::lang::Object {
	$class(Subroutine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Subroutine();
	void init$(::jdk::internal::org::objectweb::asm$::tree::LabelNode* start, int32_t maxLocals, ::jdk::internal::org::objectweb::asm$::tree::JumpInsnNode* caller);
	void init$(::jdk::internal::org::objectweb::asm$::tree::analysis::Subroutine* subroutine);
	bool merge(::jdk::internal::org::objectweb::asm$::tree::analysis::Subroutine* subroutine);
	::jdk::internal::org::objectweb::asm$::tree::LabelNode* start = nullptr;
	$booleans* localsUsed = nullptr;
	::java::util::List* callers = nullptr;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_Subroutine_h_