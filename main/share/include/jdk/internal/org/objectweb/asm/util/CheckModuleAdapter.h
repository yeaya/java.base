#ifndef _jdk_internal_org_objectweb_asm$_util_CheckModuleAdapter_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckModuleAdapter_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckModuleAdapter
//$ extends jdk.internal.org.objectweb.asm.ModuleVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {
						class CheckModuleAdapter$NameSet;
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

class $import CheckModuleAdapter : public ::jdk::internal::org::objectweb::asm$::ModuleVisitor {
	$class(CheckModuleAdapter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ModuleVisitor)
public:
	CheckModuleAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor, bool isOpen);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor, bool isOpen);
	void checkVisitEndNotCalled();
	virtual void visitEnd() override;
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitMainClass($String* mainClass) override;
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitPackage($String* packaze) override;
	virtual void visitProvide($String* service, $StringArray* providers) override;
	virtual void visitRequire($String* module, int32_t access, $String* version) override;
	virtual void visitUse($String* service) override;
	bool isOpen = false;
	::jdk::internal::org::objectweb::asm$::util::CheckModuleAdapter$NameSet* requiredModules = nullptr;
	::jdk::internal::org::objectweb::asm$::util::CheckModuleAdapter$NameSet* exportedPackages = nullptr;
	::jdk::internal::org::objectweb::asm$::util::CheckModuleAdapter$NameSet* openedPackages = nullptr;
	::jdk::internal::org::objectweb::asm$::util::CheckModuleAdapter$NameSet* usedServices = nullptr;
	::jdk::internal::org::objectweb::asm$::util::CheckModuleAdapter$NameSet* providedServices = nullptr;
	int32_t classVersion = 0;
	bool visitEndCalled = false;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_CheckModuleAdapter_h_