#ifndef _jdk_internal_org_objectweb_asm$_commons_MethodRemapper_h_
#define _jdk_internal_org_objectweb_asm$_commons_MethodRemapper_h_
//$ class jdk.internal.org.objectweb.asm.commons.MethodRemapper
//$ extends jdk.internal.org.objectweb.asm.MethodVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
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
					namespace commons {
						class Remapper;
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
					namespace commons {

class $import MethodRemapper : public ::jdk::internal::org::objectweb::asm$::MethodVisitor {
	$class(MethodRemapper, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::MethodVisitor)
public:
	MethodRemapper();
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* createAnnotationRemapper(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor);
	$ObjectArray* remapFrameTypes(int32_t numTypes, $ObjectArray* frameTypes);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotationDefault() override;
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitInsnAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) override;
	virtual void visitLdcInsn(Object$* value) override;
	virtual void visitLocalVariable($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, int32_t index) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitLocalVariableAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::Label>* start, $Array<::jdk::internal::org::objectweb::asm$::Label>* end, $ints* index, $String* descriptor, bool visible) override;
	using ::jdk::internal::org::objectweb::asm$::MethodVisitor::visitMethodInsn;
	virtual void visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTryCatchAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitTryCatchBlock(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Label* handler, $String* type) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_MethodRemapper_h_