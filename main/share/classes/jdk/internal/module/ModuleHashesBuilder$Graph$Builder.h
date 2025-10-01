#ifndef _jdk_internal_module_ModuleHashesBuilder$Graph$Builder_h_
#define _jdk_internal_module_ModuleHashesBuilder$Graph$Builder_h_
//$ class jdk.internal.module.ModuleHashesBuilder$Graph$Builder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashesBuilder$Graph;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export ModuleHashesBuilder$Graph$Builder : public ::java::lang::Object {
	$class(ModuleHashesBuilder$Graph$Builder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleHashesBuilder$Graph$Builder();
	void init$();
	virtual void addEdge(Object$* u, Object$* v);
	virtual void addNode(Object$* node);
	virtual ::jdk::internal::module::ModuleHashesBuilder$Graph* build();
	static ::java::util::Set* lambda$addNode$0(Object$* _e);
	::java::util::Set* nodes = nullptr;
	::java::util::Map* edges = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleHashesBuilder$Graph$Builder_h_