#ifndef _jdk_internal_module_ModulePathValidator_h_
#define _jdk_internal_module_ModulePathValidator_h_
//$ class jdk.internal.module.ModulePathValidator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INDENT")
#undef INDENT
#pragma push_macro("MODULE_INFO")
#undef MODULE_INFO

namespace java {
	namespace io {
		class PrintStream;
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
		class Map;
		class Optional;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModulePathValidator : public ::java::lang::Object {
	$class(ModulePathValidator, 0, ::java::lang::Object)
public:
	ModulePathValidator();
	void init$(::java::io::PrintStream* out);
	static bool isJrt(::java::net::URI* uri);
	static bool lambda$printModule$2(::java::net::URI* uri);
	void lambda$printModule$3(::java::net::URI* uri);
	static ::java::nio::file::Path* lambda$scanAllModules$0($String* x$0);
	void printModule(::java::lang::module::ModuleReference* mref);
	void process(::java::lang::module::ModuleReference* mref);
	void scan(::java::nio::file::Path* entry);
	static int32_t scanAllModules(::java::io::PrintStream* out);
	void scanDirectory(::java::nio::file::Path* dir);
	::java::util::Optional* scanModule(::java::nio::file::Path* entry);
	static $String* MODULE_INFO;
	static $String* INDENT;
	::java::util::Map* nameToModule = nullptr;
	::java::util::Map* packageToModule = nullptr;
	::java::io::PrintStream* out = nullptr;
	int32_t errorCount = 0;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("INDENT")
#pragma pop_macro("MODULE_INFO")

#endif // _jdk_internal_module_ModulePathValidator_h_