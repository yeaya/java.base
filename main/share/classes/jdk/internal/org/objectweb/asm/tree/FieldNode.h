#ifndef _jdk_internal_org_objectweb_asm$_tree_FieldNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_FieldNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.FieldNode
//$ extends jdk.internal.org.objectweb.asm.FieldVisitor

#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>

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

class $export FieldNode : public ::jdk::internal::org::objectweb::asm$::FieldVisitor {
	$class(FieldNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::FieldVisitor)
public:
	FieldNode();
	void init$(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value);
	void init$(int32_t api, int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	virtual void check(int32_t api);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	int32_t access = 0;
	$String* name = nullptr;
	$String* desc = nullptr;
	$String* signature = nullptr;
	$Object* value = nullptr;
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

#endif // _jdk_internal_org_objectweb_asm$_tree_FieldNode_h_