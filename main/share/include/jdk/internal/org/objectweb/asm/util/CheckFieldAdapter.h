#ifndef _jdk_internal_org_objectweb_asm$_util_CheckFieldAdapter_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckFieldAdapter_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckFieldAdapter
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

class $import CheckFieldAdapter : public ::jdk::internal::org::objectweb::asm$::FieldVisitor {
	$class(CheckFieldAdapter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::FieldVisitor)
public:
	CheckFieldAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::FieldVisitor* fieldVisitor);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::FieldVisitor* fieldVisitor);
	void checkVisitEndNotCalled();
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	bool visitEndCalled = false;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_CheckFieldAdapter_h_