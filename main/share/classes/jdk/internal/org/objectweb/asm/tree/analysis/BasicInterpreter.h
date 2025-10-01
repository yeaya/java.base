#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_BasicInterpreter_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_BasicInterpreter_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.BasicInterpreter
//$ extends jdk.internal.org.objectweb.asm.tree.analysis.Interpreter
//$ implements jdk.internal.org.objectweb.asm.Opcodes

#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Interpreter.h>

#pragma push_macro("NULL_TYPE")
#undef NULL_TYPE

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

class BasicInterpreter : public ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter, public ::jdk::internal::org::objectweb::asm$::Opcodes {
	$class(BasicInterpreter, 0, ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter, ::jdk::internal::org::objectweb::asm$::Opcodes)
public:
	BasicInterpreter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t api);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* binaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value2);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* binaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* copyOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* copyOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* merge(::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value2);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* merge(::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* naryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::java::util::List* values) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newValue(::jdk::internal::org::objectweb::asm$::Type* type) override;
	virtual void returnOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* expected);
	virtual void returnOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* expected) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* ternaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value2, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value3);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* ternaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value3) override;
	virtual $String* toString() override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* unaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue* value);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* unaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value) override;
	static ::jdk::internal::org::objectweb::asm$::Type* NULL_TYPE;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("NULL_TYPE")

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_BasicInterpreter_h_