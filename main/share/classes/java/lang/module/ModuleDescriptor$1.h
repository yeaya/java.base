#ifndef _java_lang_module_ModuleDescriptor$1_h_
#define _java_lang_module_ModuleDescriptor$1_h_
//$ class java.lang.module.ModuleDescriptor$1
//$ extends jdk.internal.access.JavaLangModuleAccess

#include <jdk/internal/access/JavaLangModuleAccess.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleDescriptor;
			class ModuleDescriptor$Builder;
			class ModuleDescriptor$Exports;
			class ModuleDescriptor$Opens;
			class ModuleDescriptor$Provides;
			class ModuleDescriptor$Requires;
			class ModuleDescriptor$Version;
			class ModuleFinder;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Map;
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace module {

class ModuleDescriptor$1 : public ::jdk::internal::access::JavaLangModuleAccess {
	$class(ModuleDescriptor$1, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaLangModuleAccess)
public:
	ModuleDescriptor$1();
	void init$();
	virtual ::java::lang::module::Configuration* newConfiguration(::java::lang::module::ModuleFinder* finder, ::java::util::Map* graph) override;
	virtual ::java::lang::module::ModuleDescriptor$Exports* newExports(::java::util::Set* ms, $String* source) override;
	virtual ::java::lang::module::ModuleDescriptor$Exports* newExports(::java::util::Set* ms, $String* source, ::java::util::Set* targets) override;
	virtual ::java::lang::module::ModuleDescriptor$Builder* newModuleBuilder($String* mn, bool strict, ::java::util::Set* modifiers) override;
	virtual ::java::lang::module::ModuleDescriptor* newModuleDescriptor($String* name, ::java::lang::module::ModuleDescriptor$Version* version, ::java::util::Set* modifiers, ::java::util::Set* requires, ::java::util::Set* exports, ::java::util::Set* opens, ::java::util::Set* uses, ::java::util::Set* provides, ::java::util::Set* packages, $String* mainClass, int32_t hashCode) override;
	virtual ::java::lang::module::ModuleDescriptor$Opens* newOpens(::java::util::Set* ms, $String* source, ::java::util::Set* targets) override;
	virtual ::java::lang::module::ModuleDescriptor$Opens* newOpens(::java::util::Set* ms, $String* source) override;
	virtual ::java::lang::module::ModuleDescriptor$Provides* newProvides($String* service, ::java::util::List* providers) override;
	virtual ::java::lang::module::ModuleDescriptor$Requires* newRequires(::java::util::Set* ms, $String* mn, ::java::lang::module::ModuleDescriptor$Version* v) override;
	virtual ::java::util::Set* packages(::java::lang::module::ModuleDescriptor$Builder* builder) override;
	virtual void requires(::java::lang::module::ModuleDescriptor$Builder* builder, ::java::util::Set* ms, $String* mn, $String* rawCompiledVersion) override;
	virtual ::java::lang::module::Configuration* resolveAndBind(::java::lang::module::ModuleFinder* finder, ::java::util::Collection* roots, ::java::io::PrintStream* traceOutput) override;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleDescriptor$1_h_