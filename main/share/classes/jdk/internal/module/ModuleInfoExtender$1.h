#ifndef _jdk_internal_module_ModuleInfoExtender$1_h_
#define _jdk_internal_module_ModuleInfoExtender$1_h_
//$ class jdk.internal.module.ModuleInfoExtender$1
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

namespace jdk {
	namespace internal {
		namespace module {
			class ModuleInfoExtender;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Attribute;
					class ModuleVisitor;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfoExtender$1 : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(ModuleInfoExtender$1, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	ModuleInfoExtender$1();
	void init$(::jdk::internal::module::ModuleInfoExtender* this$0, int32_t api, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	static void lambda$visitModule$0(::jdk::internal::org::objectweb::asm$::ModuleVisitor* mv, $String* pn);
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attr) override;
	virtual ::jdk::internal::org::objectweb::asm$::ModuleVisitor* visitModule($String* name, int32_t flags, $String* version) override;
	::jdk::internal::module::ModuleInfoExtender* this$0 = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfoExtender$1_h_