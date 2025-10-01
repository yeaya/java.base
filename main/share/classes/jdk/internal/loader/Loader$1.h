#ifndef _jdk_internal_loader_Loader$1_h_
#define _jdk_internal_loader_Loader$1_h_
//$ class jdk.internal.loader.Loader$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReference;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class Loader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class Loader$1 : public ::java::security::PrivilegedExceptionAction {
	$class(Loader$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Loader$1();
	void init$(::jdk::internal::loader::Loader* this$0, ::java::lang::module::ModuleReference* val$mref, $String* val$name);
	virtual $Object* run() override;
	::jdk::internal::loader::Loader* this$0 = nullptr;
	$String* val$name = nullptr;
	::java::lang::module::ModuleReference* val$mref = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_Loader$1_h_