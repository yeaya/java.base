#ifndef _jdk_internal_module_ModulePath_h_
#define _jdk_internal_module_ModulePath_h_
//$ class jdk.internal.module.ModulePath
//$ extends java.lang.module.ModuleFinder

#include <java/lang/Array.h>
#include <java/lang/module/ModuleFinder.h>

#pragma push_macro("SERVICES_PREFIX")
#undef SERVICES_PREFIX
#pragma push_macro("MODULE_INFO")
#undef MODULE_INFO
#pragma push_macro("AUTOMATIC_MODULE_NAME")
#undef AUTOMATIC_MODULE_NAME

namespace java {
	namespace io {
		class BufferedReader;
	}
}
namespace java {
	namespace lang {
		class Runtime$Version;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
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
		class Map;
		class Optional;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Attributes$Name;
			class JarEntry;
			class JarFile;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jmod {
			class JmodFile;
			class JmodFile$Entry;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModulePatcher;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace perf {
			class PerfCounter;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export ModulePath : public ::java::lang::module::ModuleFinder {
	$class(ModulePath, 0, ::java::lang::module::ModuleFinder)
public:
	ModulePath();
	void init$(::java::lang::Runtime$Version* version, bool isLinkPhase, ::jdk::internal::module::ModulePatcher* patcher, $Array<::java::nio::file::Path>* entries);
	static $String* cleanModuleName($String* mn);
	::java::lang::module::ModuleDescriptor* deriveModuleDescriptor(::java::util::jar::JarFile* jf);
	::java::util::Set* explodedPackages(::java::nio::file::Path* dir);
	$String* fileName(::java::lang::module::ModuleReference* mref);
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
	bool hasNextEntry();
	bool isDefaultFileSystem(::java::nio::file::Path* path);
	bool isHidden(::java::nio::file::Path* file);
	::java::util::Set* jarPackages(::java::util::jar::JarFile* jf);
	::java::util::Set* jmodPackages(::jdk::internal::jmod::JmodFile* jf);
	static bool lambda$deriveModuleDescriptor$2(::java::util::jar::JarEntry* e);
	static bool lambda$deriveModuleDescriptor$3($String* e);
	static bool lambda$deriveModuleDescriptor$4($String* e);
	bool lambda$explodedPackages$7(::java::nio::file::Path* path, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	static ::java::nio::file::Path* lambda$explodedPackages$8(::java::nio::file::Path* dir, ::java::nio::file::Path* path);
	static bool lambda$jmodPackages$0(::jdk::internal::jmod::JmodFile$Entry* e);
	::java::util::Set* lambda$readExplodedModule$9(::java::nio::file::Path* dir);
	::java::util::Set* lambda$readJMod$1(::jdk::internal::jmod::JmodFile* jf);
	::java::util::Set* lambda$readJar$6(::java::util::jar::JarFile* jf);
	$String* nextLine(::java::io::BufferedReader* reader);
	static ::java::lang::module::ModuleFinder* of(::jdk::internal::module::ModulePatcher* patcher, $Array<::java::nio::file::Path>* entries);
	static ::java::lang::module::ModuleFinder* of($Array<::java::nio::file::Path>* entries);
	static ::java::lang::module::ModuleFinder* of(::java::lang::Runtime$Version* version, bool isLinkPhase, $Array<::java::nio::file::Path>* entries);
	static $String* packageName($String* cn);
	::java::lang::module::ModuleReference* readExplodedModule(::java::nio::file::Path* dir);
	::java::lang::module::ModuleReference* readJMod(::java::nio::file::Path* file);
	::java::lang::module::ModuleReference* readJar(::java::nio::file::Path* file);
	::java::lang::module::ModuleReference* readModule(::java::nio::file::Path* entry, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	::java::util::Map* scan(::java::nio::file::Path* entry);
	::java::util::Map* scanDirectory(::java::nio::file::Path* dir);
	void scanNextEntry();
	::java::util::Optional* toPackageName($String* name);
	::java::util::Optional* toPackageName(::java::nio::file::Path* file);
	::java::util::Optional* toServiceName($String* cf);
	static bool $assertionsDisabled;
	static $String* MODULE_INFO;
	::java::lang::Runtime$Version* releaseVersion = nullptr;
	bool isLinkPhase = false;
	::jdk::internal::module::ModulePatcher* patcher = nullptr;
	$Array<::java::nio::file::Path>* entries = nullptr;
	int32_t next = 0;
	::java::util::Map* cachedModules = nullptr;
	static $String* SERVICES_PREFIX;
	static ::java::util::jar::Attributes$Name* AUTOMATIC_MODULE_NAME;
	static ::jdk::internal::perf::PerfCounter* scanTime;
	static ::jdk::internal::perf::PerfCounter* moduleCount;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("SERVICES_PREFIX")
#pragma pop_macro("MODULE_INFO")
#pragma pop_macro("AUTOMATIC_MODULE_NAME")

#endif // _jdk_internal_module_ModulePath_h_