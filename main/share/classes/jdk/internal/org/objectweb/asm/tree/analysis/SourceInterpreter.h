#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_SourceInterpreter_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_SourceInterpreter_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.SourceInterpreter
//$ extends jdk.internal.org.objectweb.asm.tree.analysis.Interpreter
//$ implements jdk.internal.org.objectweb.asm.Opcodes

#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Interpreter.h>

namespace java {
	namespace util {
		class List;
		class Set;
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
							class SourceValue;
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

class SourceInterpreter : public ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter, public ::jdk::internal::org::objectweb::asm$::Opcodes {
	$class(SourceInterpreter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter, ::jdk::internal::org::objectweb::asm$::Opcodes)
public:
	SourceInterpreter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t api);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* binaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value2);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* binaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2) override;
	static bool containsAll(::java::util::Set* self, ::java::util::Set* other);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* copyOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* copyOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* merge(::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value2);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* merge(::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* naryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::java::util::List* values) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* newValue(::jdk::internal::org::objectweb::asm$::Type* type) override;
	virtual void returnOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* expected);
	virtual void returnOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* expected) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* ternaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value2, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value3);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* ternaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value2, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value3) override;
	virtual $String* toString() override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* unaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::SourceValue* value);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* unaryOperation(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value) override;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_SourceInterpreter_h_