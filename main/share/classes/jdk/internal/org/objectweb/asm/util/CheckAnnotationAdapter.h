#ifndef _jdk_internal_org_objectweb_asm$_util_CheckAnnotationAdapter_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckAnnotationAdapter_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckAnnotationAdapter
//$ extends jdk.internal.org.objectweb.asm.AnnotationVisitor

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

class $export CheckAnnotationAdapter : public ::jdk::internal::org::objectweb::asm$::AnnotationVisitor {
	$class(CheckAnnotationAdapter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::AnnotationVisitor)
public:
	CheckAnnotationAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor);
	void init$(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor, bool useNamedValues);
	void checkName($String* name);
	void checkVisitEndNotCalled();
	virtual void visit($String* name, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitArray($String* name) override;
	virtual void visitEnd() override;
	virtual void visitEnum($String* name, $String* descriptor, $String* value) override;
	bool useNamedValue = false;
	bool visitEndCalled = false;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_CheckAnnotationAdapter_h_