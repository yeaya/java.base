#ifndef _java_lang_module_Configuration_h_
#define _java_lang_module_Configuration_h_
//$ class java.lang.module.Configuration
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTY_CONFIGURATION")
#undef EMPTY_CONFIGURATION

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleFinder;
			class ResolvedModule;
			class Resolver;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Map;
		class Optional;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {
		namespace module {

class $import Configuration : public ::java::lang::Object {
	$class(Configuration, $PRELOAD, ::java::lang::Object)
public:
	Configuration();
	void init$();
	void init$(::java::util::List* parents, ::java::lang::module::Resolver* resolver);
	void init$(::java::lang::module::ModuleFinder* finder, ::java::util::Map* map);
	::java::util::stream::Stream* configurations();
	::java::util::Set* descriptors();
	static ::java::lang::module::Configuration* empty();
	::java::util::Optional* findModule($String* name);
	static ::java::lang::module::ResolvedModule* lambda$findModule$0($String* name, ::java::lang::module::Configuration* cf);
	::java::util::Set* modules();
	::java::util::List* parents();
	::java::util::Set* reads(::java::lang::module::ResolvedModule* m);
	::java::lang::module::Configuration* resolve(::java::lang::module::ModuleFinder* before, ::java::lang::module::ModuleFinder* after, ::java::util::Collection* roots);
	static ::java::lang::module::Configuration* resolve(::java::lang::module::ModuleFinder* before, ::java::util::List* parents, ::java::lang::module::ModuleFinder* after, ::java::util::Collection* roots);
	::java::lang::module::Configuration* resolveAndBind(::java::lang::module::ModuleFinder* before, ::java::lang::module::ModuleFinder* after, ::java::util::Collection* roots);
	static ::java::lang::module::Configuration* resolveAndBind(::java::lang::module::ModuleFinder* finder, ::java::util::Collection* roots, ::java::io::PrintStream* traceOutput);
	static ::java::lang::module::Configuration* resolveAndBind(::java::lang::module::ModuleFinder* before, ::java::util::List* parents, ::java::lang::module::ModuleFinder* after, ::java::util::Collection* roots);
	$String* targetPlatform();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static ::java::lang::module::Configuration* EMPTY_CONFIGURATION;
	::java::util::List* parents$ = nullptr;
	::java::util::Map* graph = nullptr;
	::java::util::Set* modules$ = nullptr;
	::java::util::Map* nameToModule = nullptr;
	$String* targetPlatform$ = nullptr;
	$volatile(::java::util::List*) allConfigurations = nullptr;
};

		} // module
	} // lang
} // java

#pragma pop_macro("EMPTY_CONFIGURATION")

#endif // _java_lang_module_Configuration_h_