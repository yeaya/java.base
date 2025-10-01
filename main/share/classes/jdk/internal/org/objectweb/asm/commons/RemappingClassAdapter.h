#ifndef _jdk_internal_org_objectweb_asm$_commons_RemappingClassAdapter_h_
#define _jdk_internal_org_objectweb_asm$_commons_RemappingClassAdapter_h_
//$ class jdk.internal.org.objectweb.asm.commons.RemappingClassAdapter
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class FieldVisitor;
					class MethodVisitor;
					class ModuleVisitor;
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

class $export RemappingClassAdapter : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(RemappingClassAdapter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	RemappingClassAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* createRemappingAnnotationAdapter(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* av);
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* createRemappingFieldAdapter(::jdk::internal::org::objectweb::asm$::FieldVisitor* fieldVisitor);
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* createRemappingMethodAdapter(int32_t access, $String* newDescriptor, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitior);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) override;
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	virtual ::jdk::internal::org::objectweb::asm$::ModuleVisitor* visitModule($String* name, int32_t flags, $String* version) override;
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper = nullptr;
	$String* className = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_RemappingClassAdapter_h_