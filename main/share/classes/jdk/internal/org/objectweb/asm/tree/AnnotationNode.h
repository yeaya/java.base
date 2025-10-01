#ifndef _jdk_internal_org_objectweb_asm$_tree_AnnotationNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_AnnotationNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.AnnotationNode
//$ extends jdk.internal.org.objectweb.asm.AnnotationVisitor

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>

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
					namespace tree {

class $export AnnotationNode : public ::jdk::internal::org::objectweb::asm$::AnnotationVisitor {
	$class(AnnotationNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::AnnotationVisitor)
public:
	AnnotationNode();
	void init$($String* descriptor);
	void init$(int32_t api, $String* descriptor);
	void init$(::java::util::List* values);
	virtual void accept(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor);
	static void accept(::jdk::internal::org::objectweb::asm$::AnnotationVisitor* annotationVisitor, $String* name, Object$* value);
	virtual void check(int32_t api);
	virtual void visit($String* name, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitArray($String* name) override;
	virtual void visitEnd() override;
	virtual void visitEnum($String* name, $String* descriptor, $String* value) override;
	$String* desc = nullptr;
	::java::util::List* values = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_AnnotationNode_h_