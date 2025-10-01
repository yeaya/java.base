#ifndef _jdk_internal_org_objectweb_asm$_ClassWriter_h_
#define _jdk_internal_org_objectweb_asm$_ClassWriter_h_
//$ class jdk.internal.org.objectweb.asm.ClassWriter
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

#pragma push_macro("COMPUTE_MAXS")
#undef COMPUTE_MAXS
#pragma push_macro("COMPUTE_FRAMES")
#undef COMPUTE_FRAMES

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class AnnotationWriter;
					class Attribute;
					class ByteVector;
					class ClassReader;
					class FieldVisitor;
					class FieldWriter;
					class Handle;
					class MethodVisitor;
					class MethodWriter;
					class ModuleVisitor;
					class ModuleWriter;
					class RecordComponentVisitor;
					class RecordComponentWriter;
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

class $import ClassWriter : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(ClassWriter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	ClassWriter();
	void init$(int32_t flags);
	void init$(::jdk::internal::org::objectweb::asm$::ClassReader* classReader, int32_t flags);
	$Array<::jdk::internal::org::objectweb::asm$::Attribute>* getAttributePrototypes();
	virtual ::java::lang::ClassLoader* getClassLoader();
	virtual $String* getCommonSuperClass($String* type1, $String* type2);
	virtual int32_t newClass($String* value);
	virtual int32_t newConst(Object$* value);
	virtual int32_t newConstantDynamic($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	virtual int32_t newField($String* owner, $String* name, $String* descriptor);
	virtual int32_t newHandle(int32_t tag, $String* owner, $String* name, $String* descriptor);
	virtual int32_t newHandle(int32_t tag, $String* owner, $String* name, $String* descriptor, bool isInterface);
	virtual int32_t newInvokeDynamic($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	virtual int32_t newMethod($String* owner, $String* name, $String* descriptor, bool isInterface);
	virtual int32_t newMethodType($String* methodDescriptor);
	virtual int32_t newModule($String* moduleName);
	virtual int32_t newNameType($String* name, $String* descriptor);
	virtual int32_t newPackage($String* packageName);
	virtual int32_t newUTF8($String* value);
	$bytes* replaceAsmInstructions($bytes* classFile, bool hasFrames);
	virtual $bytes* toByteArray();
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) override;
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	virtual ::jdk::internal::org::objectweb::asm$::ModuleVisitor* visitModule($String* name, int32_t access, $String* version) override;
	virtual void visitNestHost($String* nestHost) override;
	virtual void visitNestMember($String* nestMember) override;
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor) override;
	virtual void visitPermittedSubclassExperimental($String* permittedSubclass) override;
	virtual ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* visitRecordComponent($String* name, $String* descriptor, $String* signature) override;
	virtual void visitSource($String* file, $String* debug) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	static const int32_t COMPUTE_MAXS = 1;
	static const int32_t COMPUTE_FRAMES = 2;
	int32_t version = 0;
	::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable = nullptr;
	int32_t accessFlags = 0;
	int32_t thisClass = 0;
	int32_t superClass = 0;
	int32_t interfaceCount = 0;
	$ints* interfaces = nullptr;
	::jdk::internal::org::objectweb::asm$::FieldWriter* firstField = nullptr;
	::jdk::internal::org::objectweb::asm$::FieldWriter* lastField = nullptr;
	::jdk::internal::org::objectweb::asm$::MethodWriter* firstMethod = nullptr;
	::jdk::internal::org::objectweb::asm$::MethodWriter* lastMethod = nullptr;
	int32_t numberOfInnerClasses = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* innerClasses = nullptr;
	int32_t enclosingClassIndex = 0;
	int32_t enclosingMethodIndex = 0;
	int32_t signatureIndex = 0;
	int32_t sourceFileIndex = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* debugExtension = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleTypeAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleTypeAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::ModuleWriter* moduleWriter = nullptr;
	int32_t nestHostClassIndex = 0;
	int32_t numberOfNestMemberClasses = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* nestMemberClasses = nullptr;
	int32_t numberOfPermittedSubclassClasses = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* permittedSubclassClasses = nullptr;
	::jdk::internal::org::objectweb::asm$::RecordComponentWriter* firstRecordComponent = nullptr;
	::jdk::internal::org::objectweb::asm$::RecordComponentWriter* lastRecordComponent = nullptr;
	::jdk::internal::org::objectweb::asm$::Attribute* firstAttribute = nullptr;
	int32_t compute = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("COMPUTE_MAXS")
#pragma pop_macro("COMPUTE_FRAMES")

#endif // _jdk_internal_org_objectweb_asm$_ClassWriter_h_