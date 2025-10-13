#ifndef _jdk_internal_module_ModuleLoaderMap$Mapper_h_
#define _jdk_internal_module_ModuleLoaderMap$Mapper_h_
//$ class jdk.internal.module.ModuleLoaderMap$Mapper
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

#pragma push_macro("APP_CLASSLOADER")
#undef APP_CLASSLOADER
#pragma push_macro("APP_LOADER_INDEX")
#undef APP_LOADER_INDEX
#pragma push_macro("PLATFORM_CLASSLOADER")
#undef PLATFORM_CLASSLOADER
#pragma push_macro("PLATFORM_LOADER_INDEX")
#undef PLATFORM_LOADER_INDEX

namespace java {
	namespace lang {
		class ClassLoader;
		class Integer;
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
		class Map;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModuleLoaderMap$Mapper : public ::java::util::function::Function {
	$class(ModuleLoaderMap$Mapper, $PRELOAD, ::java::util::function::Function)
public:
	ModuleLoaderMap$Mapper();
	void init$(::java::lang::module::Configuration* cf);
	::java::lang::ClassLoader* apply($String* name);
	virtual $Object* apply(Object$* name) override;
	static ::java::lang::ClassLoader* PLATFORM_CLASSLOADER;
	static ::java::lang::ClassLoader* APP_CLASSLOADER;
	static ::java::lang::Integer* PLATFORM_LOADER_INDEX;
	static ::java::lang::Integer* APP_LOADER_INDEX;
	::java::util::Map* map = nullptr;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("APP_CLASSLOADER")
#pragma pop_macro("APP_LOADER_INDEX")
#pragma pop_macro("PLATFORM_CLASSLOADER")
#pragma pop_macro("PLATFORM_LOADER_INDEX")

#endif // _jdk_internal_module_ModuleLoaderMap$Mapper_h_