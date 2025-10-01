#ifndef _jdk_internal_org_objectweb_asm$_FieldVisitor_h_
#define _jdk_internal_org_objectweb_asm$_FieldVisitor_h_
//$ class jdk.internal.org.objectweb.asm.FieldVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class Attribute;
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

class $export FieldVisitor : public ::java::lang::Object {
	$class(FieldVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FieldVisitor();
	void init$(int32_t api);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::FieldVisitor* fieldVisitor);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible);
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	virtual void visitEnd();
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	int32_t api = 0;
	::jdk::internal::org::objectweb::asm$::FieldVisitor* fv = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_FieldVisitor_h_