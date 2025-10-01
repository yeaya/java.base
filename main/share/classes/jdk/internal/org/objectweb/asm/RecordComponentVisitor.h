#ifndef _jdk_internal_org_objectweb_asm$_RecordComponentVisitor_h_
#define _jdk_internal_org_objectweb_asm$_RecordComponentVisitor_h_
//$ class jdk.internal.org.objectweb.asm.RecordComponentVisitor
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

class $export RecordComponentVisitor : public ::java::lang::Object {
	$class(RecordComponentVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RecordComponentVisitor();
	void init$(int32_t api);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* recordComponentVisitor);
	virtual ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* getDelegate();
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible);
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	virtual void visitEnd();
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible);
	int32_t api = 0;
	::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* delegate = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_RecordComponentVisitor_h_