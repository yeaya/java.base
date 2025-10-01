#ifndef _jdk_internal_org_objectweb_asm$_util_TraceRecordComponentVisitor_h_
#define _jdk_internal_org_objectweb_asm$_util_TraceRecordComponentVisitor_h_
//$ class jdk.internal.org.objectweb.asm.util.TraceRecordComponentVisitor
//$ extends jdk.internal.org.objectweb.asm.RecordComponentVisitor

#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>

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

class $import TraceRecordComponentVisitor : public ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor {
	$class(TraceRecordComponentVisitor, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor)
public:
	TraceRecordComponentVisitor();
	void init$(::jdk::internal::org::objectweb::asm$::util::Printer* printer);
	void init$(::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* recordComponentVisitor, ::jdk::internal::org::objectweb::asm$::util::Printer* printer);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	::jdk::internal::org::objectweb::asm$::util::Printer* printer = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_TraceRecordComponentVisitor_h_