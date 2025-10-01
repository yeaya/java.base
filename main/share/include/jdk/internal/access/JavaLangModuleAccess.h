#ifndef _jdk_internal_access_JavaLangModuleAccess_h_
#define _jdk_internal_access_JavaLangModuleAccess_h_
//$ interface jdk.internal.access.JavaLangModuleAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaLangModuleAccess : public ::java::lang::Object {
	$interface(JavaLangModuleAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::module::Configuration* newConfiguration(::java::lang::module::ModuleFinder* finder, ::java::util::Map* graph) {return nullptr;}
	virtual ::java::lang::module::ModuleDescriptor$Exports* newExports(::java::util::Set* ms, $String* source) {return nullptr;}
	virtual ::java::lang::module::ModuleDescriptor$Exports* newExports(::java::util::Set* ms, $String* source, ::java::util::Set* targets) {return nullptr;}
	virtual ::java::lang::module::ModuleDescriptor$Builder* newModuleBuilder($String* mn, bool strict, ::java::util::Set* ms) {return nullptr;}
	virtual ::java::lang::module::ModuleDescriptor* newModuleDescriptor($String* name, ::java::lang::module::ModuleDescriptor$Version* version, ::java::util::Set* ms, ::java::util::Set* requires, ::java::util::Set* exports, ::java::util::Set* opens, ::java::util::Set* uses, ::java::util::Set* provides, ::java::util::Set* packages, $String* mainClass, int32_t hashCode) {return nullptr;}
	virtual ::java::lang::module::ModuleDescriptor$Opens* newOpens(::java::util::Set* ms, $String* source) {return nullptr;}
	virtual ::java::lang::module::ModuleDescriptor$Opens* newOpens(::java::util::Set* ms, $String* source, ::java::util::Set* targets) {return nullptr;}
	virtual ::java::lang::module::ModuleDescriptor$Provides* newProvides($String* service, ::java::util::List* providers) {return nullptr;}
	virtual ::java::lang::module::ModuleDescriptor$Requires* newRequires(::java::util::Set* ms, $String* mn, ::java::lang::module::ModuleDescriptor$Version* v) {return nullptr;}
	virtual ::java::util::Set* packages(::java::lang::module::ModuleDescriptor$Builder* builder) {return nullptr;}
	virtual void requires(::java::lang::module::ModuleDescriptor$Builder* builder, ::java::util::Set* ms, $String* mn, $String* rawCompiledVersion) {}
	virtual ::java::lang::module::Configuration* resolveAndBind(::java::lang::module::ModuleFinder* finder, ::java::util::Collection* roots, ::java::io::PrintStream* traceOutput) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaLangModuleAccess_h_