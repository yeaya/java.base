#ifndef _java_lang_module_ResolvedModule_h_
#define _java_lang_module_ResolvedModule_h_
//$ class java.lang.module.ResolvedModule
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleDescriptor;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace module {

class $export ResolvedModule : public ::java::lang::Object {
	$class(ResolvedModule, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResolvedModule();
	void init$(::java::lang::module::Configuration* cf, ::java::lang::module::ModuleReference* mref);
	::java::lang::module::Configuration* configuration();
	::java::lang::module::ModuleDescriptor* descriptor();
	virtual bool equals(Object$* ob) override;
	virtual int32_t hashCode() override;
	$String* name();
	::java::util::Set* reads();
	::java::lang::module::ModuleReference* reference();
	virtual $String* toString() override;
	::java::lang::module::Configuration* cf = nullptr;
	::java::lang::module::ModuleReference* mref = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ResolvedModule_h_