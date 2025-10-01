#ifndef _jdk_internal_org_objectweb_asm$_ModuleVisitor_h_
#define _jdk_internal_org_objectweb_asm$_ModuleVisitor_h_
//$ class jdk.internal.org.objectweb.asm.ModuleVisitor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $import ModuleVisitor : public ::java::lang::Object {
	$class(ModuleVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleVisitor();
	void init$(int32_t api);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor);
	virtual void visitEnd();
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules);
	virtual void visitMainClass($String* mainClass);
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules);
	virtual void visitPackage($String* packaze);
	virtual void visitProvide($String* service, $StringArray* providers);
	virtual void visitRequire($String* module, int32_t access, $String* version);
	virtual void visitUse($String* service);
	int32_t api = 0;
	::jdk::internal::org::objectweb::asm$::ModuleVisitor* mv = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_ModuleVisitor_h_