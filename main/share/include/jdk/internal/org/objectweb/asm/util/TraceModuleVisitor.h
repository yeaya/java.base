#ifndef _jdk_internal_org_objectweb_asm$_util_TraceModuleVisitor_h_
#define _jdk_internal_org_objectweb_asm$_util_TraceModuleVisitor_h_
//$ class jdk.internal.org.objectweb.asm.util.TraceModuleVisitor
//$ extends jdk.internal.org.objectweb.asm.ModuleVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {
						class Printer;
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

class $import TraceModuleVisitor : public ::jdk::internal::org::objectweb::asm$::ModuleVisitor {
	$class(TraceModuleVisitor, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ModuleVisitor)
public:
	TraceModuleVisitor();
	void init$(::jdk::internal::org::objectweb::asm$::util::Printer* printer);
	void init$(::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor, ::jdk::internal::org::objectweb::asm$::util::Printer* printer);
	virtual void visitEnd() override;
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitMainClass($String* mainClass) override;
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitPackage($String* packaze) override;
	virtual void visitProvide($String* service, $StringArray* providers) override;
	virtual void visitRequire($String* module, int32_t access, $String* version) override;
	virtual void visitUse($String* use) override;
	::jdk::internal::org::objectweb::asm$::util::Printer* p = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_TraceModuleVisitor_h_