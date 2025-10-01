#ifndef _jdk_internal_org_objectweb_asm$_ClassVisitor_h_
#define _jdk_internal_org_objectweb_asm$_ClassVisitor_h_
//$ class jdk.internal.org.objectweb.asm.ClassVisitor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class Attribute;
					class FieldVisitor;
					class MethodVisitor;
					class ModuleVisitor;
					class RecordComponentVisitor;
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

class $export ClassVisitor : public ::java::lang::Object {
	$class(ClassVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassVisitor();
	void init$(int32_t api);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible);
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	virtual void visitEnd();
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value);
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access);
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions);
	virtual ::jdk::internal::org::objectweb::asm$::ModuleVisitor* visitModule($String* name, int32_t access, $String* version);
	virtual void visitNestHost($String* nestHost);
	virtual void visitNestMember($String* nestMember);
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor);
	virtual void visitPermittedSubclassExperimental($String* permittedSubclass);
	virtual ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* visitRecordComponent($String* name, $String* descriptor, $String* signature);
	virtual void visitSource($String* source, $String* debug);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	int32_t api = 0;
	::jdk::internal::org::objectweb::asm$::ClassVisitor* cv = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_ClassVisitor_h_