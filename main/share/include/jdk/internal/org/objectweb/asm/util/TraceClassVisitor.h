#ifndef _jdk_internal_org_objectweb_asm$_util_TraceClassVisitor_h_
#define _jdk_internal_org_objectweb_asm$_util_TraceClassVisitor_h_
//$ class jdk.internal.org.objectweb.asm.util.TraceClassVisitor
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}
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
					namespace util {
						class Printer;
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

class $import TraceClassVisitor : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(TraceClassVisitor, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	TraceClassVisitor();
	void init$(::java::io::PrintWriter* printWriter);
	void init$(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::java::io::PrintWriter* printWriter);
	void init$(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::jdk::internal::org::objectweb::asm$::util::Printer* printer, ::java::io::PrintWriter* printWriter);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) override;
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	virtual ::jdk::internal::org::objectweb::asm$::ModuleVisitor* visitModule($String* name, int32_t flags, $String* version) override;
	virtual void visitNestHost($String* nestHost) override;
	virtual void visitNestMember($String* nestMember) override;
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor) override;
	virtual void visitPermittedSubclassExperimental($String* permittedSubclass) override;
	virtual ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* visitRecordComponent($String* name, $String* descriptor, $String* signature) override;
	virtual void visitSource($String* file, $String* debug) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	::java::io::PrintWriter* printWriter = nullptr;
	::jdk::internal::org::objectweb::asm$::util::Printer* p = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_TraceClassVisitor_h_