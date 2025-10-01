#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_BasicVerifier_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_BasicVerifier_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.BasicVerifier
//$ extends jdk.internal.org.objectweb.asm.tree.analysis.BasicInterpreter

#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicInterpreter.h>

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
							class BasicValue;
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

class BasicVerifier : public ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicInterpreter {
	$class(BasicVerifier, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicInterpreter)
public:
	BasicVerifier();
	void init$();
	void init$(int32_t api);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* binaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value2) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* binaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* copyOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* copyOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* getElementValue(::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* objectArrayValue);
	virtual bool isArrayValue(::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value);
	virtual bool isSubTypeOf(::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* expected);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* naryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::java::util::List* values) override;
	virtual void returnOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* expected) override;
	virtual void returnOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* expected) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* ternaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value2, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value3) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* ternaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value3) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* unaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* unaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value) override;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_BasicVerifier_h_