#ifndef _jdk_internal_loader_NativeLibraries$1_h_
#define _jdk_internal_loader_NativeLibraries$1_h_
//$ class jdk.internal.loader.NativeLibraries$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class NativeLibraries;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class NativeLibraries$1 : public ::java::security::PrivilegedAction {
	$class(NativeLibraries$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NativeLibraries$1();
	void init$(::jdk::internal::loader::NativeLibraries* this$0, ::java::io::File* val$file);
	virtual $Object* run() override;
	::jdk::internal::loader::NativeLibraries* this$0 = nullptr;
	::java::io::File* val$file = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_NativeLibraries$1_h_