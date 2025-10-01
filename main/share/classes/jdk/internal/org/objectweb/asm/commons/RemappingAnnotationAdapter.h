#ifndef _jdk_internal_org_objectweb_asm$_commons_RemappingAnnotationAdapter_h_
#define _jdk_internal_org_objectweb_asm$_commons_RemappingAnnotationAdapter_h_
//$ class jdk.internal.org.objectweb.asm.commons.RemappingAnnotationAdapter
//$ extends jdk.internal.org.objectweb.asm.AnnotationVisitor

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>

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

class $export RemappingAnnotationAdapter : public ::jdk::internal::org::objectweb::asm$::AnnotationVisitor {
	$class(RemappingAnnotationAdapter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::AnnotationVisitor)
public:
	RemappingAnnotationAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	virtual void visit($String* name, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitArray($String* name) override;
	virtual void visitEnum($String* name, $String* descriptor, $String* value) override;
	::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_RemappingAnnotationAdapter_h_