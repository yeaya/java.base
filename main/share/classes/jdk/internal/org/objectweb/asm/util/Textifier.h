#ifndef _jdk_internal_org_objectweb_asm$_util_Textifier_h_
#define _jdk_internal_org_objectweb_asm$_util_Textifier_h_
//$ class jdk.internal.org.objectweb.asm.util.Textifier
//$ extends jdk.internal.org.objectweb.asm.util.Printer

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/util/Printer.h>

#pragma push_macro("CLASS_SIGNATURE")
#undef CLASS_SIGNATURE
#pragma push_macro("CLASS_SUFFIX")
#undef CLASS_SUFFIX
#pragma push_macro("DEPRECATED")
#undef DEPRECATED
#pragma push_macro("FIELD_DESCRIPTOR")
#undef FIELD_DESCRIPTOR
#pragma push_macro("FIELD_SIGNATURE")
#undef FIELD_SIGNATURE
#pragma push_macro("FRAME_TYPES")
#undef FRAME_TYPES
#pragma push_macro("HANDLE_DESCRIPTOR")
#undef HANDLE_DESCRIPTOR
#pragma push_macro("INTERNAL_NAME")
#undef INTERNAL_NAME
#pragma push_macro("INVISIBLE")
#undef INVISIBLE
#pragma push_macro("METHOD_DESCRIPTOR")
#undef METHOD_DESCRIPTOR
#pragma push_macro("METHOD_SIGNATURE")
#undef METHOD_SIGNATURE
#pragma push_macro("RECORD")
#undef RECORD
#pragma push_macro("USAGE")
#undef USAGE

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
					class Type;
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

class $export Textifier : public ::jdk::internal::org::objectweb::asm$::util::Printer {
	$class(Textifier, 0, ::jdk::internal::org::objectweb::asm$::util::Printer)
public:
	Textifier();
	void init$();
	void init$(int32_t api);
	::jdk::internal::org::objectweb::asm$::util::Textifier* addNewTextifier($String* endText);
	void appendAccess(int32_t accessFlags);
	virtual void appendDescriptor(int32_t type, $String* value);
	void appendFrameTypes(int32_t numTypes, $ObjectArray* frameTypes);
	virtual void appendHandle(::jdk::internal::org::objectweb::asm$::Handle* handle);
	void appendJavaDeclaration($String* name, $String* signature);
	virtual void appendLabel(::jdk::internal::org::objectweb::asm$::Label* label);
	void appendRawAccess(int32_t accessFlags);
	void appendTypeReference(int32_t typeRef);
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* createTextifier();
	static void main($StringArray* args);
	static void main($StringArray* args, ::java::io::PrintWriter* output, ::java::io::PrintWriter* logger);
	void maybeAppendComma(int32_t numValues);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual void visit($String* name, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitAnnotableParameterCount(int32_t parameterCount, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitAnnotation($String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitAnnotation($String* descriptor, bool visible);
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitAnnotationDefault() override;
	virtual void visitAnnotationEnd() override;
	void visitAnnotationValue($String* name);
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitArray($String* name) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	void visitBoolean(bool value);
	void visitByte(int8_t value);
	void visitChar(char16_t value);
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitClassAnnotation($String* descriptor, bool visible) override;
	virtual void visitClassAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitClassEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitClassTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitCode() override;
	void visitDouble(double value);
	virtual void visitEnum($String* name, $String* descriptor, $String* value) override;
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules) override;
	void visitExportOrOpen($String* method, $String* packaze, int32_t access, $StringArray* modules);
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitFieldAnnotation($String* descriptor, bool visible) override;
	virtual void visitFieldAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitFieldEnd() override;
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitFieldTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	void visitFloat(float value);
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) override;
	virtual void visitIincInsn(int32_t var, int32_t increment) override;
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) override;
	virtual void visitInsn(int32_t opcode) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitInsnAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	void visitInt(int32_t value);
	virtual void visitIntInsn(int32_t opcode, int32_t operand) override;
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) override;
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLabel(::jdk::internal::org::objectweb::asm$::Label* label) override;
	virtual void visitLdcInsn(Object$* value) override;
	virtual void visitLineNumber(int32_t line, ::jdk::internal::org::objectweb::asm$::Label* start) override;
	virtual void visitLocalVariable($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, int32_t index) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitLocalVariableAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::Label>* start, $Array<::jdk::internal::org::objectweb::asm$::Label>* end, $ints* index, $String* descriptor, bool visible) override;
	void visitLong(int64_t value);
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual void visitMainClass($String* mainClass) override;
	virtual void visitMaxs(int32_t maxStack, int32_t maxLocals) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitMethodAnnotation($String* descriptor, bool visible) override;
	virtual void visitMethodAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitMethodEnd() override;
	using ::jdk::internal::org::objectweb::asm$::util::Printer::visitMethodInsn;
	virtual void visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitMethodTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitModule($String* name, int32_t access, $String* version) override;
	virtual void visitModuleEnd() override;
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) override;
	virtual void visitNestHost($String* nestHost) override;
	virtual void visitNestMember($String* nestMember) override;
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor) override;
	virtual void visitPackage($String* packaze) override;
	virtual void visitParameter($String* name, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) override;
	virtual void visitPermittedSubclassExperimental($String* permittedSubclass) override;
	virtual void visitProvide($String* provide, $StringArray* providers) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitRecordComponent($String* name, $String* descriptor, $String* signature) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitRecordComponentAnnotation($String* descriptor, bool visible) override;
	virtual void visitRecordComponentAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitRecordComponentEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitRecordComponentTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitRequire($String* require, int32_t access, $String* version) override;
	void visitShort(int16_t value);
	virtual void visitSource($String* file, $String* debug) override;
	void visitString($String* value);
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) override;
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitTryCatchAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	virtual void visitTryCatchBlock(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Label* handler, $String* type) override;
	void visitType(::jdk::internal::org::objectweb::asm$::Type* value);
	virtual ::jdk::internal::org::objectweb::asm$::util::Textifier* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitTypeInsn(int32_t opcode, $String* type) override;
	virtual void visitUse($String* use) override;
	virtual void visitVarInsn(int32_t opcode, int32_t var) override;
	static $String* USAGE;
	static const int32_t INTERNAL_NAME = 0;
	static const int32_t FIELD_DESCRIPTOR = 1;
	static const int32_t FIELD_SIGNATURE = 2;
	static const int32_t METHOD_DESCRIPTOR = 3;
	static const int32_t METHOD_SIGNATURE = 4;
	static const int32_t CLASS_SIGNATURE = 5;
	static const int32_t HANDLE_DESCRIPTOR = 9;
	static $String* CLASS_SUFFIX;
	static $String* DEPRECATED;
	static $String* RECORD;
	static $String* INVISIBLE;
	static ::java::util::List* FRAME_TYPES;
	$String* tab = nullptr;
	$String* tab2 = nullptr;
	$String* tab3 = nullptr;
	$String* ltab = nullptr;
	::java::util::Map* labelNames = nullptr;
	int32_t access = 0;
	int32_t numAnnotationValues = 0;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("CLASS_SIGNATURE")
#pragma pop_macro("CLASS_SUFFIX")
#pragma pop_macro("DEPRECATED")
#pragma pop_macro("FIELD_DESCRIPTOR")
#pragma pop_macro("FIELD_SIGNATURE")
#pragma pop_macro("FRAME_TYPES")
#pragma pop_macro("HANDLE_DESCRIPTOR")
#pragma pop_macro("INTERNAL_NAME")
#pragma pop_macro("INVISIBLE")
#pragma pop_macro("METHOD_DESCRIPTOR")
#pragma pop_macro("METHOD_SIGNATURE")
#pragma pop_macro("RECORD")
#pragma pop_macro("USAGE")

#endif // _jdk_internal_org_objectweb_asm$_util_Textifier_h_