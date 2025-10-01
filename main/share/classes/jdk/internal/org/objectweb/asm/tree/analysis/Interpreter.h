#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_Interpreter_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_Interpreter_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.Interpreter
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
					class Type;
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
						class AbstractInsnNode;
						class TryCatchBlockNode;
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
							class Frame;
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

class Interpreter : public ::java::lang::Object {
	$class(Interpreter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Interpreter();
	void init$(int32_t api);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* binaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* copyOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* merge(::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* naryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::java::util::List* values) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newEmptyValue(int32_t local);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newExceptionValue(::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode* tryCatchBlockNode, ::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* handlerFrame, ::jdk::internal::org::objectweb::asm$::Type* exceptionType);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newParameterValue(bool isInstanceMethod, int32_t local, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newReturnTypeValue(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newValue(::jdk::internal::org::objectweb::asm$::Type* type) {return nullptr;}
	virtual void returnOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* expected) {}
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* ternaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value3) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* unaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value) {return nullptr;}
	int32_t api = 0;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_Interpreter_h_