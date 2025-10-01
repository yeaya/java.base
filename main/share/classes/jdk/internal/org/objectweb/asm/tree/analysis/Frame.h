#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_Frame_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_Frame_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.Frame
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						class AbstractInsnNode;
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
							class Interpreter;
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

class Frame : public ::java::lang::Object {
	$class(Frame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Frame();
	void init$(int32_t numLocals, int32_t numStack);
	void init$(::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* frame);
	virtual void clearStack();
	virtual void execute(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter* interpreter);
	bool executeDupX2(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value1, ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter* interpreter);
	void executeInvokeInsn(::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insn, $String* methodDescriptor, ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter* interpreter);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* getLocal(int32_t index);
	virtual int32_t getLocals();
	virtual int32_t getMaxStackSize();
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* getStack(int32_t index);
	virtual int32_t getStackSize();
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* init(::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* frame);
	virtual void initJumpTarget(int32_t opcode, ::jdk::internal::org::objectweb::asm$::tree::LabelNode* target);
	virtual bool merge(::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* frame, ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter* interpreter);
	virtual bool merge(::jdk::internal::org::objectweb::asm$::tree::analysis::Frame* frame, $booleans* localsUsed);
	virtual ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* pop();
	virtual void push(::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value);
	virtual void setLocal(int32_t index, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value);
	virtual void setReturn(::jdk::internal::org::objectweb::asm$::tree::analysis::Value* v);
	virtual void setStack(int32_t index, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value* value);
	virtual $String* toString() override;
	::jdk::internal::org::objectweb::asm$::tree::analysis::Value* returnValue = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::tree::analysis::Value>* values = nullptr;
	int32_t numLocals = 0;
	int32_t numStack = 0;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_Frame_h_