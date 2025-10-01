#ifndef _jdk_internal_module_ModuleReferences_h_
#define _jdk_internal_module_ModuleReferences_h_
//$ class jdk.internal.module.ModuleReferences
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReader;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes$HashSupplier;
			class ModuleInfo$Attributes;
			class ModulePatcher;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModuleReferences : public ::java::lang::Object {
	$class(ModuleReferences, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleReferences();
	void init$();
	static ::java::lang::module::ModuleReader* lambda$newExplodedModule$4(::java::nio::file::Path* dir);
	static ::java::lang::module::ModuleReader* lambda$newJModModule$2(::java::nio::file::Path* file, ::java::net::URI* uri);
	static ::java::lang::module::ModuleReader* lambda$newJarModule$0(::java::nio::file::Path* file, ::java::net::URI* uri);
	static $bytes* lambda$newJarModule$1(::java::util::function::Supplier* supplier, $String* a);
	static ::java::lang::module::ModuleReference* newExplodedModule(::jdk::internal::module::ModuleInfo$Attributes* attrs, ::jdk::internal::module::ModulePatcher* patcher, ::java::nio::file::Path* dir);
	static ::java::lang::module::ModuleReference* newJModModule(::jdk::internal::module::ModuleInfo$Attributes* attrs, ::java::nio::file::Path* file);
	static ::java::lang::module::ModuleReference* newJarModule(::jdk::internal::module::ModuleInfo$Attributes* attrs, ::jdk::internal::module::ModulePatcher* patcher, ::java::nio::file::Path* file);
	static ::java::lang::module::ModuleReference* newModule(::jdk::internal::module::ModuleInfo$Attributes* attrs, ::java::net::URI* uri, ::java::util::function::Supplier* supplier, ::jdk::internal::module::ModulePatcher* patcher, ::jdk::internal::module::ModuleHashes$HashSupplier* hasher);
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleReferences_h_