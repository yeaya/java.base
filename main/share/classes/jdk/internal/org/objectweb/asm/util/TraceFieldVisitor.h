#ifndef _jdk_internal_org_objectweb_asm$_util_TraceFieldVisitor_h_
#define _jdk_internal_org_objectweb_asm$_util_TraceFieldVisitor_h_
//$ class jdk.internal.org.objectweb.asm.util.TraceFieldVisitor
//$ extends jdk.internal.org.objectweb.asm.FieldVisitor

#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>

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

class $export TraceFieldVisitor : public ::jdk::internal::org::objectweb::asm$::FieldVisitor {
	$class(TraceFieldVisitor, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::FieldVisitor)
public:
	TraceFieldVisitor();
	void init$(::jdk::internal::org::objectweb::asm$::util::Printer* printer);
	void init$(::jdk::internal::org::objectweb::asm$::FieldVisitor* fieldVisitor, ::jdk::internal::org::objectweb::asm$::util::Printer* printer);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	::jdk::internal::org::objectweb::asm$::util::Printer* p = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_TraceFieldVisitor_h_