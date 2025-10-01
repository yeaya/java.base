#ifndef _jdk_internal_org_objectweb_asm$_commons_ModuleRemapper_h_
#define _jdk_internal_org_objectweb_asm$_commons_ModuleRemapper_h_
//$ class jdk.internal.org.objectweb.asm.commons.ModuleRemapper
//$ extends jdk.internal.org.objectweb.asm.ModuleVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {
						class Remapper;
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
					namespace commons {

class $import ModuleRemapper : public ::jdk::internal::org::objectweb::asm$::ModuleVisitor {
	$class(ModuleRemapper, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ModuleVisitor)
public:
	ModuleRemapper();
	void init$(::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor, ::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper);
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitMainClass($String* mainClass) override;
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitPackage($String* packaze) override;
	virtual void visitProvide($String* service, $StringArray* providers) override;
	virtual void visitRequire($String* module, int32_t access, $String* version) override;
	virtual void visitUse($String* service) override;
	::jdk::internal::org::objectweb::asm$::commons::Remapper* remapper = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_ModuleRemapper_h_