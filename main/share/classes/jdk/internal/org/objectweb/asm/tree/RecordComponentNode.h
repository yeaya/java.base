#ifndef _jdk_internal_org_objectweb_asm$_tree_RecordComponentNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_RecordComponentNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.RecordComponentNode
//$ extends jdk.internal.org.objectweb.asm.RecordComponentVisitor

#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class Attribute;
					class ClassVisitor;
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
					namespace tree {

class $export RecordComponentNode : public ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor {
	$class(RecordComponentNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor)
public:
	RecordComponentNode();
	void init$($String* name, $String* descriptor, $String* signature);
	void init$(int32_t api, $String* name, $String* descriptor, $String* signature);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	virtual void check(int32_t api);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	$String* name = nullptr;
	$String* descriptor = nullptr;
	$String* signature = nullptr;
	::java::util::List* visibleAnnotations = nullptr;
	::java::util::List* invisibleAnnotations = nullptr;
	::java::util::List* visibleTypeAnnotations = nullptr;
	::java::util::List* invisibleTypeAnnotations = nullptr;
	::java::util::List* attrs = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_RecordComponentNode_h_