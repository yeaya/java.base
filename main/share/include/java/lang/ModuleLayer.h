#ifndef _java_lang_ModuleLayer_h_
#define _java_lang_ModuleLayer_h_
//$ class java.lang.ModuleLayer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLV")
#undef CLV
#pragma push_macro("EMPTY_LAYER")
#undef EMPTY_LAYER

namespace java {
	namespace lang {
		class ClassLoader;
		class LayerInstantiationException;
		class Module;
		class ModuleLayer$Controller;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Optional;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
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
		namespace loader {
			class ClassLoaderValue;
			class Loader;
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

namespace java {
	namespace lang {

class $import ModuleLayer : public ::java::lang::Object {
	$class(ModuleLayer, $PRELOAD, ::java::lang::Object)
public:
	ModuleLayer();
	void init$(::java::lang::module::Configuration* cf, ::java::util::List* parents, ::java::util::function::Function* clf);
	void bindToLoader(::java::lang::ClassLoader* loader);
	static ::java::lang::ModuleLayer* boot();
	static void checkConfiguration(::java::lang::module::Configuration* cf, ::java::util::List* parentLayers);
	static void checkCreateClassLoaderPermission();
	static void checkForDuplicatePkgs(::java::lang::module::Configuration* cf, ::java::util::function::Function* clf);
	static void checkGetClassLoaderPermission();
	::java::lang::module::Configuration* configuration();
	::java::lang::ModuleLayer* defineModules(::java::lang::module::Configuration* cf, ::java::util::function::Function* clf);
	static ::java::lang::ModuleLayer$Controller* defineModules(::java::lang::module::Configuration* cf, ::java::util::List* parentLayers, ::java::util::function::Function* clf);
	::java::lang::ModuleLayer* defineModulesWithManyLoaders(::java::lang::module::Configuration* cf, ::java::lang::ClassLoader* parentLoader);
	static ::java::lang::ModuleLayer$Controller* defineModulesWithManyLoaders(::java::lang::module::Configuration* cf, ::java::util::List* parentLayers, ::java::lang::ClassLoader* parentLoader);
	::java::lang::ModuleLayer* defineModulesWithOneLoader(::java::lang::module::Configuration* cf, ::java::lang::ClassLoader* parentLoader);
	static ::java::lang::ModuleLayer$Controller* defineModulesWithOneLoader(::java::lang::module::Configuration* cf, ::java::util::List* parentLayers, ::java::lang::ClassLoader* parentLoader);
	static ::java::lang::ModuleLayer* empty();
	static ::java::lang::LayerInstantiationException* fail($String* fmt, $ObjectArray* args);
	::java::lang::ClassLoader* findLoader($String* name);
	::java::util::Optional* findModule($String* name);
	::jdk::internal::module::ServicesCatalog* getServicesCatalog();
	static ::java::util::Set* lambda$checkForDuplicatePkgs$1(::java::lang::ClassLoader* k);
	static ::java::lang::ClassLoader* lambda$defineModulesWithOneLoader$0(::jdk::internal::loader::Loader* loader, $String* mn);
	static ::java::lang::Module* lambda$findModule$2($String* name, ::java::lang::ModuleLayer* l);
	::java::util::stream::Stream* layers();
	static ::java::util::stream::Stream* layers(::java::lang::ClassLoader* loader);
	::java::util::Set* modules();
	::java::util::List* parents();
	virtual $String* toString() override;
	static ::java::lang::ModuleLayer* EMPTY_LAYER;
	::java::lang::module::Configuration* cf = nullptr;
	::java::util::List* parents$ = nullptr;
	::java::util::Map* nameToModule = nullptr;
	$volatile(::java::util::List*) allLayers = nullptr;
	$volatile(::java::util::Set*) modules$ = nullptr;
	$volatile(::jdk::internal::module::ServicesCatalog*) servicesCatalog = nullptr;
	static ::jdk::internal::loader::ClassLoaderValue* CLV;
};

	} // lang
} // java

#pragma pop_macro("CLV")
#pragma pop_macro("EMPTY_LAYER")

#endif // _java_lang_ModuleLayer_h_