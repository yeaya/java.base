#ifndef _jdk_internal_org_objectweb_asm$_util_TraceAnnotationVisitor_h_
#define _jdk_internal_org_objectweb_asm$_util_TraceAnnotationVisitor_h_
//$ class jdk.internal.org.objectweb.asm.util.TraceAnnotationVisitor
//$ extends jdk.internal.org.objectweb.asm.AnnotationVisitor

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>

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

class $import TraceAnnotationVisitor : public ::jdk::internal::org::objectweb::asm$::AnnotationVisitor {
	$class(TraceAnnotationVisitor, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::AnnotationVisitor)
public:
	TraceAnnotationVisitor();
	void init$(::jdk::internal::org::objectweb::asm$::util::Printer* printer);
	void init$(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor, ::jdk::internal::org::objectweb::asm$::util::Printer* printer);
	virtual void visit($String* name, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitArray($String* name) override;
	virtual void visitEnd() override;
	virtual void visitEnum($String* name, $String* descriptor, $String* value) override;
	::jdk::internal::org::objectweb::asm$::util::Printer* printer = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_TraceAnnotationVisitor_h_