#ifndef _jdk_internal_org_objectweb_asm$_commons_CodeSizeEvaluator_h_
#define _jdk_internal_org_objectweb_asm$_commons_CodeSizeEvaluator_h_
//$ class jdk.internal.org.objectweb.asm.commons.CodeSizeEvaluator
//$ extends jdk.internal.org.objectweb.asm.MethodVisitor
//$ implements jdk.internal.org.objectweb.asm.Opcodes

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Handle;
					class Label;
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

class $export CodeSizeEvaluator : public ::jdk::internal::org::objectweb::asm$::MethodVisitor, public ::jdk::internal::org::objectweb::asm$::Opcodes {
	$class(CodeSizeEvaluator, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::MethodVisitor, ::jdk::internal::org::objectweb::asm$::Opcodes)
public:
	CodeSizeEvaluator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	virtual int32_t getMaxSize();
	virtual int32_t getMinSize();
	virtual $String* toString() override;
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual void visitIincInsn(int32_t var, int32_t increment) override;
	virtual void visitInsn(int32_t opcode) override;
	virtual void visitIntInsn(int32_t opcode, int32_t operand) override;
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) override;
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLdcInsn(Object$* value) override;
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	using ::jdk::internal::org::objectweb::asm$::MethodVisitor::visitMethodInsn;
	virtual void visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	int32_t minSize = 0;
	int32_t maxSize = 0;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_CodeSizeEvaluator_h_