#ifndef _jdk_internal_org_objectweb_asm$_tree_ModuleNode_h_
#define _jdk_internal_org_objectweb_asm$_tree_ModuleNode_h_
//$ class jdk.internal.org.objectweb.asm.tree.ModuleNode
//$ extends jdk.internal.org.objectweb.asm.ModuleVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>

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
					class ClassVisitor;
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

class $export ModuleNode : public ::jdk::internal::org::objectweb::asm$::ModuleVisitor {
	$class(ModuleNode, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ModuleVisitor)
public:
	ModuleNode();
	void init$($String* name, int32_t access, $String* version);
	void init$(int32_t api, $String* name, int32_t access, $String* version, ::java::util::List* requires, ::java::util::List* exports, ::java::util::List* opens, ::java::util::List* uses, ::java::util::List* provides);
	virtual void accept(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	virtual void visitEnd() override;
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitMainClass($String* mainClass) override;
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitPackage($String* packaze) override;
	virtual void visitProvide($String* service, $StringArray* providers) override;
	virtual void visitRequire($String* module, int32_t access, $String* version) override;
	virtual void visitUse($String* service) override;
	$String* name = nullptr;
	int32_t access = 0;
	$String* version = nullptr;
	$String* mainClass = nullptr;
	::java::util::List* packages = nullptr;
	::java::util::List* requires = nullptr;
	::java::util::List* exports = nullptr;
	::java::util::List* opens = nullptr;
	::java::util::List* uses = nullptr;
	::java::util::List* provides = nullptr;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_ModuleNode_h_