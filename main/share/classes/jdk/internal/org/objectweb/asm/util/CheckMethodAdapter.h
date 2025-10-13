#ifndef _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckMethodAdapter
//$ extends jdk.internal.org.objectweb.asm.MethodVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>

#pragma push_macro("END_LABEL")
#undef END_LABEL
#pragma push_macro("INVALID")
#undef INVALID
#pragma push_macro("INVALID_DESCRIPTOR")
#undef INVALID_DESCRIPTOR
#pragma push_macro("INVALID_LOCAL_VARIABLE_INDEX")
#undef INVALID_LOCAL_VARIABLE_INDEX
#pragma push_macro("INVALID_TYPE_REFERENCE")
#undef INVALID_TYPE_REFERENCE
#pragma push_macro("MUST_NOT_BE_NULL_OR_EMPTY")
#undef MUST_NOT_BE_NULL_OR_EMPTY
#pragma push_macro("OPCODE_METHODS")
#undef OPCODE_METHODS
#pragma push_macro("START_LABEL")
#undef START_LABEL

namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
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
					namespace util {
						class CheckMethodAdapter$Method;
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
					namespace util {

class $export CheckMethodAdapter : public ::jdk::internal::org::objectweb::asm$::MethodVisitor {
	$class(CheckMethodAdapter, 0, ::jdk::internal::org::objectweb::asm$::MethodVisitor)
public:
	CheckMethodAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodvisitor);
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::java::util::Map* labelInsnIndices);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::java::util::Map* labelInsnIndices);
	void init$(int32_t access, $String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::java::util::Map* labelInsnIndices);
	void init$(int32_t api, int32_t access, $String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, ::java::util::Map* labelInsnIndices);
	static void checkConstant(Object$* value);
	static void checkDescriptor(int32_t version, $String* descriptor, bool canBeVoid);
	static int32_t checkDescriptor(int32_t version, $String* descriptor, int32_t startPos, bool canBeVoid);
	void checkFrameValue(Object$* value);
	static void checkIdentifier(int32_t version, $String* name, int32_t startPos, int32_t endPos, $String* message);
	static void checkInternalClassName(int32_t version, $String* name, $String* message);
	static void checkInternalName(int32_t version, $String* name, $String* message);
	void checkLabel(::jdk::internal::org::objectweb::asm$::Label* label, bool checkVisited, $String* message);
	void checkLdcConstant(Object$* value);
	static void checkMethodDescriptor(int32_t version, $String* descriptor);
	static void checkMethodIdentifier(int32_t version, $String* name, $String* message);
	static void checkOpcodeMethod(int32_t opcode, ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method* method);
	static void checkSignedByte(int32_t value, $String* message);
	static void checkSignedShort(int32_t value, $String* message);
	static void checkUnqualifiedName(int32_t version, $String* name, $String* message);
	static void checkUnsignedShort(int32_t value, $String* message);
	void checkVisitCodeCalled();
	void checkVisitEndNotCalled();
	void checkVisitMaxsNotCalled();
	virtual void visitAnnotableParameterCount(int32_t parameterCount, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotationDefault() override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitCode() override;
	virtual void visitEnd() override;
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) override;
	virtual void visitIincInsn(int32_t var, int32_t increment) override;
	virtual void visitInsn(int32_t opcode) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitInsnAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitIntInsn(int32_t opcode, int32_t operand) override;
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) override;
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLabel(::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLdcInsn(Object$* value) override;
	virtual void visitLineNumber(int32_t line, ::jdk::internal::org::objectweb::asm$::Label* start) override;
	virtual void visitLocalVariable($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, int32_t index) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitLocalVariableAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::Label>* start, $Array<::jdk::internal::org::objectweb::asm$::Label>* end, $ints* index, $String* descriptor, bool visible) override;
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual void visitMaxs(int32_t maxStack, int32_t maxLocals) override;
	using ::jdk::internal::org::objectweb::asm$::MethodVisitor::visitMethodInsn;
	virtual void visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual void visitParameter($String* name, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) override;
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTryCatchAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitTryCatchBlock(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Label* handler, $String* type) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	static $Array<::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method>* OPCODE_METHODS;
	static $String* INVALID;
	static $String* INVALID_DESCRIPTOR;
	static $String* INVALID_TYPE_REFERENCE;
	static $String* INVALID_LOCAL_VARIABLE_INDEX;
	static $String* MUST_NOT_BE_NULL_OR_EMPTY;
	static $String* START_LABEL;
	static $String* END_LABEL;
	int32_t version = 0;
	int32_t access = 0;
	int32_t visibleAnnotableParameterCount = 0;
	int32_t invisibleAnnotableParameterCount = 0;
	bool visitCodeCalled = false;
	bool visitMaxCalled = false;
	bool visitEndCalled = false;
	int32_t insnCount = 0;
	::java::util::Map* labelInsnIndices = nullptr;
	::java::util::Set* referencedLabels = nullptr;
	int32_t lastFrameInsnIndex = 0;
	int32_t numExpandedFrames = 0;
	int32_t numCompressedFrames = 0;
	::java::util::List* handlers = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("END_LABEL")
#pragma pop_macro("INVALID")
#pragma pop_macro("INVALID_DESCRIPTOR")
#pragma pop_macro("INVALID_LOCAL_VARIABLE_INDEX")
#pragma pop_macro("INVALID_TYPE_REFERENCE")
#pragma pop_macro("MUST_NOT_BE_NULL_OR_EMPTY")
#pragma pop_macro("OPCODE_METHODS")
#pragma pop_macro("START_LABEL")

#endif // _jdk_internal_org_objectweb_asm$_util_CheckMethodAdapter_h_