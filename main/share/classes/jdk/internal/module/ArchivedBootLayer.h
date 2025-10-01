#ifndef _jdk_internal_module_ArchivedBootLayer_h_
#define _jdk_internal_module_ArchivedBootLayer_h_
//$ class jdk.internal.module.ArchivedBootLayer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ModuleLayer;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ArchivedBootLayer : public ::java::lang::Object {
	$class(ArchivedBootLayer, $PRELOAD, ::java::lang::Object)
public:
	ArchivedBootLayer();
	void init$(::java::lang::ModuleLayer* bootLayer);
	static void archive(::java::lang::ModuleLayer* layer);
	virtual ::java::lang::ModuleLayer* bootLayer();
	static ::jdk::internal::module::ArchivedBootLayer* get();
	static ::jdk::internal::module::ArchivedBootLayer* archivedBootLayer;
	::java::lang::ModuleLayer* bootLayer$ = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ArchivedBootLayer_h_