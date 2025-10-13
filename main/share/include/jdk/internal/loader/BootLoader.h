#ifndef _jdk_internal_loader_BootLoader_h_
#define _jdk_internal_loader_BootLoader_h_
//$ class jdk.internal.loader.BootLoader
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLASS_LOADER_VALUE_MAP")
#undef CLASS_LOADER_VALUE_MAP
#pragma push_macro("JAVA_HOME")
#undef JAVA_HOME
#pragma push_macro("JLA")
#undef JLA
#pragma push_macro("NATIVE_LIBS")
#undef NATIVE_LIBS
#pragma push_macro("UNNAMED_MODULE")
#undef UNNAMED_MODULE

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Module;
		class Package;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleReference;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
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
			class NativeLibraries;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ServicesCatalog;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $import BootLoader : public ::java::lang::Object {
	$class(BootLoader, 0, ::java::lang::Object)
public:
	BootLoader();
	void init$();
	static ::java::lang::Package* definePackage($Class* c);
	static ::java::net::URL* findResource($String* mn, $String* name);
	static ::java::net::URL* findResource($String* name);
	static ::java::io::InputStream* findResourceAsStream($String* mn, $String* name);
	static ::java::util::Enumeration* findResources($String* name);
	static ::java::util::concurrent::ConcurrentHashMap* getClassLoaderValueMap();
	static ::java::lang::Package* getDefinedPackage($String* pn);
	static ::jdk::internal::loader::NativeLibraries* getNativeLibraries();
	static ::jdk::internal::module::ServicesCatalog* getServicesCatalog();
	static $String* getSystemPackageLocation($String* name);
	static $StringArray* getSystemPackageNames();
	static ::java::lang::Module* getUnnamedModule();
	static bool hasClassPath();
	static ::java::lang::Package* lambda$packages$0($String* name);
	static $Class* loadClass(::java::lang::Module* module, $String* name);
	static $Class* loadClassOrNull($String* name);
	static void loadLibrary($String* name);
	static void loadModule(::java::lang::module::ModuleReference* mref);
	static ::java::util::stream::Stream* packages();
	static void setBootLoaderUnnamedModule0(::java::lang::Module* module);
	static ::jdk::internal::access::JavaLangAccess* JLA;
	static ::java::lang::Module* UNNAMED_MODULE;
	static $String* JAVA_HOME;
	static ::java::util::concurrent::ConcurrentHashMap* CLASS_LOADER_VALUE_MAP;
	static ::jdk::internal::loader::NativeLibraries* NATIVE_LIBS;
};

		} // loader
	} // internal
} // jdk

#pragma pop_macro("CLASS_LOADER_VALUE_MAP")
#pragma pop_macro("JAVA_HOME")
#pragma pop_macro("JLA")
#pragma pop_macro("NATIVE_LIBS")
#pragma pop_macro("UNNAMED_MODULE")

#endif // _jdk_internal_loader_BootLoader_h_