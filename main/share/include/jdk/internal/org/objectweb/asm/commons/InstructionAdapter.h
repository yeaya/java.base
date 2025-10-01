#ifndef _jdk_internal_org_objectweb_asm$_commons_InstructionAdapter_h_
#define _jdk_internal_org_objectweb_asm$_commons_InstructionAdapter_h_
//$ class jdk.internal.org.objectweb.asm.commons.InstructionAdapter
//$ extends jdk.internal.org.objectweb.asm.MethodVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>

#pragma push_macro("OBJECT_TYPE")
#undef OBJECT_TYPE

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ConstantDynamic;
					class Handle;
					class Label;
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
					namespace commons {

class $import InstructionAdapter : public ::jdk::internal::org::objectweb::asm$::MethodVisitor {
	$class(InstructionAdapter, 0, ::jdk::internal::org::objectweb::asm$::MethodVisitor)
public:
	InstructionAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	virtual void aconst(Object$* value);
	virtual void add(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void aload(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void and$(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void anew(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void areturn(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void arraylength();
	virtual void astore(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void athrow();
	virtual void cast(::jdk::internal::org::objectweb::asm$::Type* from, ::jdk::internal::org::objectweb::asm$::Type* to);
	static void cast(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::jdk::internal::org::objectweb::asm$::Type* from, ::jdk::internal::org::objectweb::asm$::Type* to);
	virtual void cconst(::jdk::internal::org::objectweb::asm$::ConstantDynamic* constantDynamic);
	virtual void checkcast(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void cmpg(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void cmpl(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void dconst(double doubleValue);
	virtual void div(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void dup();
	virtual void dup2();
	virtual void dup2X1();
	virtual void dup2X2();
	virtual void dupX1();
	virtual void dupX2();
	virtual void fconst(float floatValue);
	virtual void getfield($String* owner, $String* name, $String* descriptor);
	virtual void getstatic($String* owner, $String* name, $String* descriptor);
	virtual void goTo(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void hconst(::jdk::internal::org::objectweb::asm$::Handle* handle);
	virtual void iconst(int32_t intValue);
	virtual void ifacmpeq(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifacmpne(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifeq(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifge(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifgt(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ificmpeq(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ificmpge(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ificmpgt(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ificmple(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ificmplt(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ificmpne(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifle(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void iflt(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifne(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifnonnull(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifnull(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void iinc(int32_t var, int32_t increment);
	virtual void instanceOf(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void invokedynamic($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	virtual void invokeinterface($String* owner, $String* name, $String* descriptor);
	virtual void invokespecial($String* owner, $String* name, $String* descriptor);
	virtual void invokespecial($String* owner, $String* name, $String* descriptor, bool isInterface);
	virtual void invokestatic($String* owner, $String* name, $String* descriptor);
	virtual void invokestatic($String* owner, $String* name, $String* descriptor, bool isInterface);
	virtual void invokevirtual($String* owner, $String* name, $String* descriptor);
	virtual void invokevirtual($String* owner, $String* name, $String* descriptor, bool isInterface);
	virtual void jsr(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void lcmp();
	virtual void lconst(int64_t longValue);
	virtual void load(int32_t var, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void lookupswitch(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	virtual void mark(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void monitorenter();
	virtual void monitorexit();
	virtual void mul(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void multianewarray($String* descriptor, int32_t numDimensions);
	virtual void neg(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void newarray(::jdk::internal::org::objectweb::asm$::Type* type);
	static void newarray(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void nop();
	virtual void or$(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void pop();
	virtual void pop2();
	virtual void putfield($String* owner, $String* name, $String* descriptor);
	virtual void putstatic($String* owner, $String* name, $String* descriptor);
	virtual void rem(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void ret(int32_t var);
	virtual void shl(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void shr(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void store(int32_t var, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void sub(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void swap();
	virtual void tableswitch(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	virtual void tconst(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void ushr(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual void visitIincInsn(int32_t var, int32_t increment) override;
	virtual void visitInsn(int32_t opcode) override;
	virtual void visitIntInsn(int32_t opcode, int32_t operand) override;
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) override;
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLabel(::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLdcInsn(Object$* value) override;
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	using ::jdk::internal::org::objectweb::asm$::MethodVisitor::visitMethodInsn;
	virtual void visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	virtual void xor$(::jdk::internal::org::objectweb::asm$::Type* type);
	static ::jdk::internal::org::objectweb::asm$::Type* OBJECT_TYPE;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("OBJECT_TYPE")

#endif // _jdk_internal_org_objectweb_asm$_commons_InstructionAdapter_h_