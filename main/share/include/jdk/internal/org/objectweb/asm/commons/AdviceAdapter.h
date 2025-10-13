#ifndef _jdk_internal_org_objectweb_asm$_commons_AdviceAdapter_h_
#define _jdk_internal_org_objectweb_asm$_commons_AdviceAdapter_h_
//$ class jdk.internal.org.objectweb.asm.commons.AdviceAdapter
//$ extends jdk.internal.org.objectweb.asm.commons.GeneratorAdapter
//$ implements jdk.internal.org.objectweb.asm.Opcodes

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/GeneratorAdapter.h>

#pragma push_macro("INVALID_OPCODE")
#undef INVALID_OPCODE
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("UNINITIALIZED_THIS")
#undef UNINITIALIZED_THIS

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Handle;
					class Label;
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

class $import AdviceAdapter : public ::jdk::internal::org::objectweb::asm$::commons::GeneratorAdapter, public ::jdk::internal::org::objectweb::asm$::Opcodes {
	$class(AdviceAdapter, 0, ::jdk::internal::org::objectweb::asm$::commons::GeneratorAdapter, ::jdk::internal::org::objectweb::asm$::Opcodes)
public:
	AdviceAdapter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor);
	void addForwardJump(::jdk::internal::org::objectweb::asm$::Label* label);
	void addForwardJumps(::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	void doVisitMethodInsn(int32_t opcode, $String* descriptor);
	virtual void onMethodEnter();
	virtual void onMethodExit(int32_t opcode);
	$Object* peekValue();
	$Object* popValue();
	void pushValue(Object$* value);
	virtual $String* toString() override;
	virtual void visitCode() override;
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual void visitInsn(int32_t opcode) override;
	virtual void visitIntInsn(int32_t opcode, int32_t operand) override;
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) override;
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLabel(::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLdcInsn(Object$* value) override;
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	using ::jdk::internal::org::objectweb::asm$::commons::GeneratorAdapter::visitMethodInsn;
	virtual void visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual void visitTryCatchBlock(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Label* handler, $String* type) override;
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	static $Object* UNINITIALIZED_THIS;
	static $Object* OTHER;
	static $String* INVALID_OPCODE;
	int32_t methodAccess = 0;
	$String* methodDesc = nullptr;
	bool isConstructor = false;
	bool superClassConstructorCalled = false;
	::java::util::List* stackFrame = nullptr;
	::java::util::Map* forwardJumpStackFrames = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("INVALID_OPCODE")
#pragma pop_macro("OTHER")
#pragma pop_macro("UNINITIALIZED_THIS")

#endif // _jdk_internal_org_objectweb_asm$_commons_AdviceAdapter_h_