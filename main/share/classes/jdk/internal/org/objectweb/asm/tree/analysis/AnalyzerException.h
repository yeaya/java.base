#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_AnalyzerException_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_AnalyzerException_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						class AbstractInsnNode;
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
							class Value;
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
					namespace tree {
						namespace analysis {

class AnalyzerException : public ::java::lang::Exception {
	$class(AnalyzerException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	AnalyzerException();
	void init$(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, $String* message);
	void init$(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, $String* message, $Throwable* cause);
	void init$(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, $String* message, Object$* expected, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* actual);
	static const int64_t serialVersionUID = (int64_t)0x2BC5EF8038196D65;
	::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* node = nullptr;
	AnalyzerException(const AnalyzerException& e);
	AnalyzerException wrapper$();
	virtual void throwWrapper$() override;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_AnalyzerException_h_