#ifndef _jdk_internal_module_ModuleInfoExtender$1$1_h_
#define _jdk_internal_module_ModuleInfoExtender$1$1_h_
//$ class jdk.internal.module.ModuleInfoExtender$1$1
//$ extends jdk.internal.org.objectweb.asm.ModuleVisitor

#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>

namespace jdk {
	namespace internal {
		namespace module {
			class ModuleInfoExtender$1;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfoExtender$1$1 : public ::jdk::internal::org::objectweb::asm$::ModuleVisitor {
	$class(ModuleInfoExtender$1$1, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ModuleVisitor)
public:
	ModuleInfoExtender$1$1();
	void init$(::jdk::internal::module::ModuleInfoExtender$1* this$1, int32_t api, ::jdk::internal::org::objectweb::asm$::ModuleVisitor* moduleVisitor);
	virtual void visitMainClass($String* existingMainClass) override;
	virtual void visitPackage($String* existingPackage) override;
	::jdk::internal::module::ModuleInfoExtender$1* this$1 = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfoExtender$1$1_h_