#ifndef _jdk_internal_module_ModulePatcher_h_
#define _jdk_internal_module_ModulePatcher_h_
//$ class jdk.internal.module.ModulePatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JLMA")
#undef JLMA

namespace java {
	namespace lang {
		namespace module {
			class ModuleReader;
			class ModuleReference;
		}
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
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangModuleAccess;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModulePatcher : public ::java::lang::Object {
	$class(ModulePatcher, $PRELOAD, ::java::lang::Object)
public:
	ModulePatcher();
	void init$(::java::util::Map* input);
	bool hasPatches();
	bool isHidden(::java::nio::file::Path* file);
	static ::java::nio::file::Path* lambda$new$0($String* x$0);
	static bool lambda$patchIfNeeded$1(bool isAutomatic, ::java::util::jar::JarEntry* e);
	static $String* lambda$patchIfNeeded$2(::java::nio::file::Path* file, ::java::util::jar::JarEntry* e);
	static bool lambda$patchIfNeeded$3(::java::nio::file::Path* path, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	bool lambda$patchIfNeeded$4(bool isAutomatic, ::java::nio::file::Path* path);
	static $String* lambda$patchIfNeeded$5(::java::nio::file::Path* top, ::java::nio::file::Path* path);
	static ::java::lang::module::ModuleReader* lambda$patchIfNeeded$6(::java::util::List* paths, ::java::lang::module::ModuleReference* mref);
	::java::lang::module::ModuleReference* patchIfNeeded(::java::lang::module::ModuleReference* mref);
	::java::util::Set* patchedModules();
	static $String* toPackageName(::java::nio::file::Path* top, ::java::nio::file::Path* file);
	static $String* toPackageName(::java::nio::file::Path* file, ::java::util::jar::JarEntry* entry);
	static $String* warnIfModuleInfo(::java::nio::file::Path* file, $String* e);
	static ::jdk::internal::access::JavaLangModuleAccess* JLMA;
	::java::util::Map* map = nullptr;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("JLMA")

#endif // _jdk_internal_module_ModulePatcher_h_