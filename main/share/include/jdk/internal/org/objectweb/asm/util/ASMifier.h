#ifndef _jdk_internal_org_objectweb_asm$_util_ASMifier_h_
#define _jdk_internal_org_objectweb_asm$_util_ASMifier_h_
//$ class jdk.internal.org.objectweb.asm.util.ASMifier
//$ extends jdk.internal.org.objectweb.asm.util.Printer

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/util/Printer.h>

#pragma push_macro("ACCESS_CLASS")
#undef ACCESS_CLASS
#pragma push_macro("ACCESS_FIELD")
#undef ACCESS_FIELD
#pragma push_macro("ACCESS_INNER")
#undef ACCESS_INNER
#pragma push_macro("ACCESS_MODULE")
#undef ACCESS_MODULE
#pragma push_macro("ANNOTATION_VISITOR")
#undef ANNOTATION_VISITOR
#pragma push_macro("ANNOTATION_VISITOR0")
#undef ANNOTATION_VISITOR0
#pragma push_macro("CLASS_VERSIONS")
#undef CLASS_VERSIONS
#pragma push_macro("COMMA")
#undef COMMA
#pragma push_macro("END_ARRAY")
#undef END_ARRAY
#pragma push_macro("END_PARAMETERS")
#undef END_PARAMETERS
#pragma push_macro("FRAME_TYPES")
#undef FRAME_TYPES
#pragma push_macro("NEW_OBJECT_ARRAY")
#undef NEW_OBJECT_ARRAY
#pragma push_macro("USAGE")
#undef USAGE
#pragma push_macro("VISIT_END")
#undef VISIT_END

namespace java {
	namespace io {
		class PrintWriter;
	}
}
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

class $import ASMifier : public ::jdk::internal::org::objectweb::asm$::util::Printer {
	$class(ASMifier, 0, ::jdk::internal::org::objectweb::asm$::util::Printer)
public:
	ASMifier();
	void init$();
	void init$(int32_t api, $String* visitorVariableName, int32_t annotationVisitorId);
	void appendAccessFlags(int32_t accessFlags);
	virtual void appendConstant(Object$* value);
	void appendFrameTypes(int32_t numTypes, $ObjectArray* frameTypes);
	virtual void appendLabel(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* createASMifier($String* visitorVariableName, int32_t annotationVisitorId);
	void declareFrameTypes(int32_t numTypes, $ObjectArray* frameTypes);
	virtual void declareLabel(::jdk::internal::org::objectweb::asm$::Label* label);
	static void main($StringArray* args);
	static void main($StringArray* args, ::java::io::PrintWriter* output, ::java::io::PrintWriter* logger);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual void visit($String* name, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitAnnotableParameterCount(int32_t parameterCount, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitAnnotation($String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitAnnotation($String* descriptor, bool visible);
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitAnnotationDefault() override;
	virtual void visitAnnotationEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitArray($String* name) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitClassAnnotation($String* descriptor, bool visible) override;
	virtual void visitClassAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitClassEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitClassTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitCode() override;
	virtual void visitEnum($String* name, $String* descriptor, $String* value) override;
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules) override;
	void visitExportOrOpen($String* visitMethod, $String* packaze, int32_t access, $StringArray* modules);
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitFieldAnnotation($String* descriptor, bool visible) override;
	virtual void visitFieldAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitFieldEnd() override;
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitFieldTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) override;
	virtual void visitIincInsn(int32_t var, int32_t increment) override;
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) override;
	virtual void visitInsn(int32_t opcode) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitInsnAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitIntInsn(int32_t opcode, int32_t operand) override;
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) override;
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLabel(::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLdcInsn(Object$* value) override;
	virtual void visitLineNumber(int32_t line, ::jdk::internal::org::objectweb::asm$::Label* start) override;
	virtual void visitLocalVariable($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, int32_t index) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitLocalVariableAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::Label>* start, $Array<::jdk::internal::org::objectweb::asm$::Label>* end, $ints* index, $String* descriptor, bool visible) override;
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual void visitMainClass($String* mainClass) override;
	virtual void visitMaxs(int32_t maxStack, int32_t maxLocals) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitMethodAnnotation($String* descriptor, bool visible) override;
	virtual void visitMethodAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitMethodEnd() override;
	using ::jdk::internal::org::objectweb::asm$::util::Printer::visitMethodInsn;
	virtual void visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitMethodTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitModule($String* name, int32_t flags, $String* version) override;
	virtual void visitModuleEnd() override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual void visitNestHost($String* nestHost) override;
	virtual void visitNestMember($String* nestMember) override;
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor) override;
	virtual void visitPackage($String* packaze) override;
	virtual void visitParameter($String* parameterName, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) override;
	virtual void visitPermittedSubclassExperimental($String* permittedSubclass) override;
	virtual void visitProvide($String* service, $StringArray* providers) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitRecordComponent($String* name, $String* descriptor, $String* signature) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitRecordComponentAnnotation($String* descriptor, bool visible) override;
	virtual void visitRecordComponentAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitRecordComponentEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitRecordComponentTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitRequire($String* module, int32_t access, $String* version) override;
	virtual void visitSource($String* file, $String* debug) override;
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitTryCatchAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitTryCatchBlock(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Label* handler, $String* type) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual ::jdk::internal::org::objectweb::asm$::util::ASMifier* visitTypeAnnotation($String* method, int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	virtual void visitUse($String* service) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	static $String* USAGE;
	static const int32_t ACCESS_CLASS = 0x00040000;
	static const int32_t ACCESS_FIELD = 0x00080000;
	static const int32_t ACCESS_INNER = 0x00100000;
	static const int32_t ACCESS_MODULE = 0x00200000;
	static $String* ANNOTATION_VISITOR;
	static $String* ANNOTATION_VISITOR0;
	static $String* COMMA;
	static $String* END_ARRAY;
	static $String* END_PARAMETERS;
	static $String* NEW_OBJECT_ARRAY;
	static $String* VISIT_END;
	static ::java::util::List* FRAME_TYPES;
	static ::java::util::Map* CLASS_VERSIONS;
	$String* name = nullptr;
	int32_t id = 0;
	::java::util::Map* labelNames = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("ACCESS_CLASS")
#pragma pop_macro("ACCESS_FIELD")
#pragma pop_macro("ACCESS_INNER")
#pragma pop_macro("ACCESS_MODULE")
#pragma pop_macro("ANNOTATION_VISITOR")
#pragma pop_macro("ANNOTATION_VISITOR0")
#pragma pop_macro("CLASS_VERSIONS")
#pragma pop_macro("COMMA")
#pragma pop_macro("END_ARRAY")
#pragma pop_macro("END_PARAMETERS")
#pragma pop_macro("FRAME_TYPES")
#pragma pop_macro("NEW_OBJECT_ARRAY")
#pragma pop_macro("USAGE")
#pragma pop_macro("VISIT_END")

#endif // _jdk_internal_org_objectweb_asm$_util_ASMifier_h_