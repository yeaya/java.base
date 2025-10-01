#ifndef _jdk_internal_org_objectweb_asm$_MethodWriter_h_
#define _jdk_internal_org_objectweb_asm$_MethodWriter_h_
//$ class jdk.internal.org.objectweb.asm.MethodWriter
//$ extends jdk.internal.org.objectweb.asm.MethodVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>

#pragma push_macro("COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES")
#undef COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES
#pragma push_macro("NA")
#undef NA
#pragma push_macro("STACK_SIZE_DELTA")
#undef STACK_SIZE_DELTA
#pragma push_macro("COMPUTE_MAX_STACK_AND_LOCAL")
#undef COMPUTE_MAX_STACK_AND_LOCAL
#pragma push_macro("COMPUTE_INSERTED_FRAMES")
#undef COMPUTE_INSERTED_FRAMES
#pragma push_macro("COMPUTE_NOTHING")
#undef COMPUTE_NOTHING
#pragma push_macro("COMPUTE_ALL_FRAMES")
#undef COMPUTE_ALL_FRAMES

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class AnnotationWriter;
					class Attribute;
					class Attribute$Set;
					class ByteVector;
					class ClassReader;
					class Handle;
					class Handler;
					class Label;
					class SymbolTable;
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

class MethodWriter : public ::jdk::internal::org::objectweb::asm$::MethodVisitor {
	$class(MethodWriter, 0, ::jdk::internal::org::objectweb::asm$::MethodVisitor)
public:
	MethodWriter();
	void init$(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions, int32_t compute);
	void addSuccessorToCurrentBasicBlock(int32_t info, ::jdk::internal::org::objectweb::asm$::Label* successor);
	bool canCopyMethodAttributes(::jdk::internal::org::objectweb::asm$::ClassReader* source, bool hasSyntheticAttribute, bool hasDeprecatedAttribute, int32_t descriptorIndex, int32_t signatureIndex, int32_t exceptionsOffset);
	void collectAttributePrototypes(::jdk::internal::org::objectweb::asm$::Attribute$Set* attributePrototypes);
	void computeAllFrames();
	void computeMaxStackAndLocal();
	int32_t computeMethodInfoSize();
	void endCurrentBasicBlockWithNoSuccessor();
	bool hasAsmInstructions();
	bool hasFrames();
	void putAbstractTypes(int32_t start, int32_t end);
	void putFrame();
	void putFrameType(Object$* type);
	void putMethodInfo(::jdk::internal::org::objectweb::asm$::ByteVector* output);
	void setMethodAttributesSource(int32_t methodInfoOffset, int32_t methodInfoLength);
	void visitAbstractType(int32_t frameIndex, int32_t abstractType);
	virtual void visitAnnotableParameterCount(int32_t parameterCount, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotationDefault() override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitCode() override;
	virtual void visitEnd() override;
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) override;
	void visitFrameEnd();
	int32_t visitFrameStart(int32_t offset, int32_t numLocal, int32_t numStack);
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
	virtual void visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual void visitParameter($String* name, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitParameterAnnotation(int32_t parameter, $String* annotationDescriptor, bool visible) override;
	void visitSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTryCatchAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitTryCatchBlock(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Label* handler, $String* type) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	static const int32_t COMPUTE_NOTHING = 0;
	static const int32_t COMPUTE_MAX_STACK_AND_LOCAL = 1;
	static const int32_t COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES = 2;
	static const int32_t COMPUTE_INSERTED_FRAMES = 3;
	static const int32_t COMPUTE_ALL_FRAMES = 4;
	static const int32_t NA = 0;
	static $ints* STACK_SIZE_DELTA;
	::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable = nullptr;
	int32_t accessFlags = 0;
	int32_t nameIndex = 0;
	$String* name = nullptr;
	int32_t descriptorIndex = 0;
	$String* descriptor = nullptr;
	int32_t maxStack = 0;
	int32_t maxLocals = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* code = nullptr;
	::jdk::internal::org::objectweb::asm$::Handler* firstHandler = nullptr;
	::jdk::internal::org::objectweb::asm$::Handler* lastHandler = nullptr;
	int32_t lineNumberTableLength = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* lineNumberTable = nullptr;
	int32_t localVariableTableLength = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* localVariableTable = nullptr;
	int32_t localVariableTypeTableLength = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* localVariableTypeTable = nullptr;
	int32_t stackMapTableNumberOfEntries = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* stackMapTableEntries = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastCodeRuntimeVisibleTypeAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastCodeRuntimeInvisibleTypeAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::Attribute* firstCodeAttribute = nullptr;
	int32_t numberOfExceptions = 0;
	$ints* exceptionIndexTable = nullptr;
	int32_t signatureIndex = 0;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleAnnotation = nullptr;
	int32_t visibleAnnotableParameterCount = 0;
	$Array<::jdk::internal::org::objectweb::asm$::AnnotationWriter>* lastRuntimeVisibleParameterAnnotations = nullptr;
	int32_t invisibleAnnotableParameterCount = 0;
	$Array<::jdk::internal::org::objectweb::asm$::AnnotationWriter>* lastRuntimeInvisibleParameterAnnotations = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleTypeAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleTypeAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::ByteVector* defaultValue = nullptr;
	int32_t parametersCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* parameters = nullptr;
	::jdk::internal::org::objectweb::asm$::Attribute* firstAttribute = nullptr;
	int32_t compute = 0;
	::jdk::internal::org::objectweb::asm$::Label* firstBasicBlock = nullptr;
	::jdk::internal::org::objectweb::asm$::Label* lastBasicBlock = nullptr;
	::jdk::internal::org::objectweb::asm$::Label* currentBasicBlock = nullptr;
	int32_t relativeStackSize = 0;
	int32_t maxRelativeStackSize = 0;
	int32_t currentLocals = 0;
	int32_t previousFrameOffset = 0;
	$ints* previousFrame = nullptr;
	$ints* currentFrame = nullptr;
	bool hasSubroutines = false;
	bool hasAsmInstructions$ = false;
	int32_t lastBytecodeOffset = 0;
	int32_t sourceOffset = 0;
	int32_t sourceLength = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES")
#pragma pop_macro("NA")
#pragma pop_macro("STACK_SIZE_DELTA")
#pragma pop_macro("COMPUTE_MAX_STACK_AND_LOCAL")
#pragma pop_macro("COMPUTE_INSERTED_FRAMES")
#pragma pop_macro("COMPUTE_NOTHING")
#pragma pop_macro("COMPUTE_ALL_FRAMES")

#endif // _jdk_internal_org_objectweb_asm$_MethodWriter_h_