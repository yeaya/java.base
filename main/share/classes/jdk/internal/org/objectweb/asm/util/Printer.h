#ifndef _jdk_internal_org_objectweb_asm$_util_Printer_h_
#define _jdk_internal_org_objectweb_asm$_util_Printer_h_
//$ class jdk.internal.org.objectweb.asm.util.Printer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HANDLE_TAG")
#undef HANDLE_TAG
#pragma push_macro("OPCODES")
#undef OPCODES
#pragma push_macro("TYPES")
#undef TYPES
#pragma push_macro("UNSUPPORTED_OPERATION")
#undef UNSUPPORTED_OPERATION

namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
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

class $export Printer : public ::java::lang::Object {
	$class(Printer, 0, ::java::lang::Object)
public:
	Printer();
	void init$(int32_t api);
	static void appendString(::java::lang::StringBuilder* stringBuilder, $String* string);
	virtual ::java::util::List* getText();
	static void main($StringArray* args, $String* usage, ::jdk::internal::org::objectweb::asm$::util::Printer* printer, ::java::io::PrintWriter* output, ::java::io::PrintWriter* logger);
	virtual void print(::java::io::PrintWriter* printWriter);
	static void printList(::java::io::PrintWriter* printWriter, ::java::util::List* list);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) {}
	virtual void visit($String* name, Object$* value) {}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitAnnotableParameterCount(int32_t parameterCount, bool visible);
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitAnnotation($String* name, $String* descriptor) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitAnnotationDefault() {return nullptr;}
	virtual void visitAnnotationEnd() {}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitArray($String* name) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitClassAnnotation($String* descriptor, bool visible) {return nullptr;}
	virtual void visitClassAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) {}
	virtual void visitClassEnd() {}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitClassTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitCode() {}
	virtual void visitEnum($String* name, $String* descriptor, $String* value) {}
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules);
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitFieldAnnotation($String* descriptor, bool visible) {return nullptr;}
	virtual void visitFieldAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) {}
	virtual void visitFieldEnd() {}
	virtual void visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitFieldTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {}
	virtual void visitIincInsn(int32_t var, int32_t increment) {}
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) {}
	virtual void visitInsn(int32_t opcode) {}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitInsnAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitIntInsn(int32_t opcode, int32_t operand) {}
	virtual void visitInvokeDynamicInsn($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {}
	virtual void visitJumpInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Label* label) {}
	virtual void visitLabel(::jdk::internal::org::objectweb::asm$::Label* label) {}
	virtual void visitLdcInsn(Object$* value) {}
	virtual void visitLineNumber(int32_t line, ::jdk::internal::org::objectweb::asm$::Label* start) {}
	virtual void visitLocalVariable($String* name, $String* descriptor, $String* signature, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, int32_t index) {}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitLocalVariableAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $Array<::jdk::internal::org::objectweb::asm$::Label>* start, $Array<::jdk::internal::org::objectweb::asm$::Label>* end, $ints* index, $String* descriptor, bool visible);
	virtual void visitLookupSwitchInsn(::jdk::internal::org::objectweb::asm$::Label* dflt, $ints* keys, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) {}
	virtual void visitMainClass($String* mainClass);
	virtual void visitMaxs(int32_t maxStack, int32_t maxLocals) {}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {return nullptr;}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitMethodAnnotation($String* descriptor, bool visible) {return nullptr;}
	virtual void visitMethodAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) {}
	virtual void visitMethodEnd() {}
	virtual void visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor);
	virtual void visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface);
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitMethodTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitModule($String* name, int32_t access, $String* version);
	virtual void visitModuleEnd();
	virtual void visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {}
	virtual void visitNestHost($String* nestHost);
	virtual void visitNestMember($String* nestMember);
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules);
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor) {}
	virtual void visitPackage($String* packaze);
	virtual void visitParameter($String* name, int32_t access);
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) {return nullptr;}
	virtual void visitPermittedSubclassExperimental($String* permittedSubclass);
	virtual void visitProvide($String* service, $StringArray* providers);
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitRecordComponent($String* name, $String* descriptor, $String* signature);
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitRecordComponentAnnotation($String* descriptor, bool visible);
	virtual void visitRecordComponentAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	virtual void visitRecordComponentEnd();
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitRecordComponentTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitRequire($String* module, int32_t access, $String* version);
	virtual void visitSource($String* source, $String* debug) {}
	virtual void visitTableSwitchInsn(int32_t min, int32_t max, ::jdk::internal::org::objectweb::asm$::Label* dflt, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels) {}
	virtual ::jdk::internal::org::objectweb::asm$::util::Printer* visitTryCatchAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	virtual void visitTryCatchBlock(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Label* handler, $String* type) {}
	virtual void visitTypeInsn(int32_t opcode, $String* type) {}
	virtual void visitUse($String* service);
	virtual void visitVarInsn(int32_t opcode, int32_t var) {}
	static $StringArray* OPCODES;
	static $StringArray* TYPES;
	static $StringArray* HANDLE_TAG;
	static $String* UNSUPPORTED_OPERATION;
	int32_t api = 0;
	::java::lang::StringBuilder* stringBuilder = nullptr;
	::java::util::List* text = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("HANDLE_TAG")
#pragma pop_macro("OPCODES")
#pragma pop_macro("TYPES")
#pragma pop_macro("UNSUPPORTED_OPERATION")

#endif // _jdk_internal_org_objectweb_asm$_util_Printer_h_