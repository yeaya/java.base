#ifndef _jdk_internal_org_objectweb_asm$_MethodVisitor_h_
#define _jdk_internal_org_objectweb_asm$_MethodVisitor_h_
//$ class jdk.internal.org.objectweb.asm.MethodVisitor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("REQUIRES_ASM5")
#undef REQUIRES_ASM5

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class Attribute;
					class Handle;
					class Label;
					class TypePath;
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

class $export MethodVisitor : public ::java::lang::Object {
	$class(MethodVisitor, 0, ::java::lang::Object)
public:
	MethodVisitor();
	void init$(int32_t api);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	virtual void visitAnnotableParameterCount(int32_t parameterCount, bool visible);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotationDefault();
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	virtual void visitCode();
	virtual void visitEnd();
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor);
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack);
	virtual void visitIincInsn(int32_t var, int32_t increment);
	virtual void visitInsn(int32_t opcode);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitInsnAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitIntInsn(int32_t opcode, int32_t operand);
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void visitLabel(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void visitLdcInsn(Object$* value);
	virtual void visitLineNumber(int32_t line, ::jdk::internal::org::objectweb::asm$::Label* start);
	virtual void visitLocalVariable($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, int32_t index);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitLocalVariableAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::Label>* start, $Array<::jdk::internal::org::objectweb::asm$::Label>* end, $ints* index, $String* descriptor, bool visible);
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	virtual void visitMaxs(int32_t maxStack, int32_t maxLocals);
	virtual void visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor);
	virtual void visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface);
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions);
	virtual void visitParameter($String* name, int32_t access);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible);
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTryCatchAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitTryCatchBlock(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Label* handler, $String* type);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitTypeInsn(int32_t opcode, $String* type);
	virtual void visitVarInsn(int32_t opcode, int32_t var);
	static $String* REQUIRES_ASM5;
	int32_t api = 0;
	::jdk::internal::org::objectweb::asm$::MethodVisitor* mv = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("REQUIRES_ASM5")

#endif // _jdk_internal_org_objectweb_asm$_MethodVisitor_h_