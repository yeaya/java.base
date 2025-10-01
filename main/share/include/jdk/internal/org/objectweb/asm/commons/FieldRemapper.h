#ifndef _jdk_internal_org_objectweb_asm$_commons_FieldRemapper_h_
#define _jdk_internal_org_objectweb_asm$_commons_FieldRemapper_h_
//$ class jdk.internal.org.objectweb.asm.commons.FieldRemapper
//$ extends jdk.internal.org.objectweb.asm.FieldVisitor

#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
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

class $import FieldRemapper : public ::jdk::internal::org::objectweb::asm$::FieldVisitor {
	$class(FieldRemapper, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::FieldVisitor)
public:
	FieldRemapper();
	void init$(::jdk::internal::org::objectweb::asm$::FieldVisitor* fieldVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::FieldVisitor* fieldVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* createAnnotationRemapper(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_FieldRemapper_h_