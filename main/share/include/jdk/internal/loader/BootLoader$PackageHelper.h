#ifndef _jdk_internal_loader_BootLoader$PackageHelper_h_
#define _jdk_internal_loader_BootLoader$PackageHelper_h_
//$ class jdk.internal.loader.BootLoader$PackageHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JLA")
#undef JLA

namespace java {
	namespace lang {
		class InternalError;
		class Module;
		class Package;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Manifest;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $import BootLoader$PackageHelper : public ::java::lang::Object {
	$class(BootLoader$PackageHelper, 0, ::java::lang::Object)
public:
	BootLoader$PackageHelper();
	void init$();
	static ::java::lang::Package* definePackage($String* name, $String* location);
	static ::java::lang::Module* findModule($String* location);
	static ::java::util::jar::Manifest* getManifest($String* location);
	static ::java::lang::InternalError* lambda$findModule$0($String* name);
	static ::java::net::URL* toFileURL($String* location);
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

		} // loader
	} // internal
} // jdk

#pragma pop_macro("JLA")

#endif // _jdk_internal_loader_BootLoader$PackageHelper_h_