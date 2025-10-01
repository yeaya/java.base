#ifndef _jdk_internal_org_objectweb_asm$_tree_ClassNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_ClassNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.ClassNode
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

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
					class FieldVisitor;
					class MethodVisitor;
					class ModuleVisitor;
					class RecordComponentVisitor;
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
						class ModuleNode;
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
					namespace tree {

class $export ClassNode : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(ClassNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	ClassNode();
	void init$();
	void init$(int32_t api);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	virtual void check(int32_t api);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) override;
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	virtual ::jdk::internal::org::objectweb::asm$::ModuleVisitor* visitModule($String* name, int32_t access, $String* version) override;
	virtual void visitNestHost($String* nestHost) override;
	virtual void visitNestMember($String* nestMember) override;
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor) override;
	virtual void visitPermittedSubclassExperimental($String* permittedSubclass) override;
	virtual ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* visitRecordComponent($String* name, $String* descriptor, $String* signature) override;
	virtual void visitSource($String* file, $String* debug) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	int32_t version = 0;
	int32_t access = 0;
	$String* name = nullptr;
	$String* signature = nullptr;
	$String* superName = nullptr;
	::java::util::List* interfaces = nullptr;
	$String* sourceFile = nullptr;
	$String* sourceDebug = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::ModuleNode* module = nullptr;
	$String* outerClass = nullptr;
	$String* outerMethod = nullptr;
	$String* outerMethodDesc = nullptr;
	::java::util::List* visibleAnnotations = nullptr;
	::java::util::List* invisibleAnnotations = nullptr;
	::java::util::List* visibleTypeAnnotations = nullptr;
	::java::util::List* invisibleTypeAnnotations = nullptr;
	::java::util::List* attrs = nullptr;
	::java::util::List* innerClasses = nullptr;
	$String* nestHostClass = nullptr;
	::java::util::List* nestMembers = nullptr;
	::java::util::List* permittedSubclassesExperimental = nullptr;
	::java::util::List* recordComponents = nullptr;
	::java::util::List* fields = nullptr;
	::java::util::List* methods = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_ClassNode_h_