#ifndef _jdk_internal_org_objectweb_asm$_AnnotationVisitor_h_
#define _jdk_internal_org_objectweb_asm$_AnnotationVisitor_h_
//$ class jdk.internal.org.objectweb.asm.AnnotationVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $import AnnotationVisitor : public ::java::lang::Object {
	$class(AnnotationVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AnnotationVisitor();
	void init$(int32_t api);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor);
	virtual void visit($String* name, Object$* value);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* name, $String* descriptor);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitArray($String* name);
	virtual void visitEnd();
	virtual void visitEnum($String* name, $String* descriptor, $String* value);
	int32_t api = 0;
	::jdk::internal::org::objectweb::asm$::AnnotationVisitor* av = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_AnnotationVisitor_h_