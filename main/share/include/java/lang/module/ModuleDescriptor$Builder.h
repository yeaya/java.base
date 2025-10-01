#ifndef _java_lang_module_ModuleDescriptor$Builder_h_
#define _java_lang_module_ModuleDescriptor$Builder_h_
//$ class java.lang.module.ModuleDescriptor$Builder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleDescriptor$Exports;
			class ModuleDescriptor$Opens;
			class ModuleDescriptor$Provides;
			class ModuleDescriptor$Requires;
			class ModuleDescriptor$Version;
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
	namespace lang {
		namespace module {

class $import ModuleDescriptor$Builder : public ::java::lang::Object {
	$class(ModuleDescriptor$Builder, $PRELOAD, ::java::lang::Object)
public:
	ModuleDescriptor$Builder();
	void init$($String* name, bool strict, ::java::util::Set* modifiers);
	::java::lang::module::ModuleDescriptor* build();
	::java::lang::module::ModuleDescriptor$Builder* exports(::java::lang::module::ModuleDescriptor$Exports* e);
	::java::lang::module::ModuleDescriptor$Builder* exports(::java::util::Set* ms, $String* pn, ::java::util::Set* targets);
	::java::lang::module::ModuleDescriptor$Builder* exports(::java::util::Set* ms, $String* pn);
	::java::lang::module::ModuleDescriptor$Builder* exports($String* pn, ::java::util::Set* targets);
	::java::lang::module::ModuleDescriptor$Builder* exports($String* pn);
	void lambda$provides$0($String* name);
	::java::lang::module::ModuleDescriptor$Builder* mainClass($String* mc);
	::java::lang::module::ModuleDescriptor$Builder* opens(::java::lang::module::ModuleDescriptor$Opens* obj);
	::java::lang::module::ModuleDescriptor$Builder* opens(::java::util::Set* ms, $String* pn, ::java::util::Set* targets);
	::java::lang::module::ModuleDescriptor$Builder* opens(::java::util::Set* ms, $String* pn);
	::java::lang::module::ModuleDescriptor$Builder* opens($String* pn, ::java::util::Set* targets);
	::java::lang::module::ModuleDescriptor$Builder* opens($String* pn);
	::java::util::Set* packages();
	::java::lang::module::ModuleDescriptor$Builder* packages(::java::util::Set* pns);
	::java::lang::module::ModuleDescriptor$Builder* provides(::java::lang::module::ModuleDescriptor$Provides* p);
	::java::lang::module::ModuleDescriptor$Builder* provides($String* service, ::java::util::List* providers);
	::java::lang::module::ModuleDescriptor$Builder* requires(::java::lang::module::ModuleDescriptor$Requires* req);
	::java::lang::module::ModuleDescriptor$Builder* requires(::java::util::Set* ms, $String* mn, ::java::lang::module::ModuleDescriptor$Version* compiledVersion);
	::java::lang::module::ModuleDescriptor$Builder* requires(::java::util::Set* ms, $String* mn, $String* rawCompiledVersion);
	::java::lang::module::ModuleDescriptor$Builder* requires(::java::util::Set* ms, $String* mn);
	::java::lang::module::ModuleDescriptor$Builder* requires($String* mn);
	::java::lang::module::ModuleDescriptor$Builder* uses($String* service);
	::java::lang::module::ModuleDescriptor$Builder* version(::java::lang::module::ModuleDescriptor$Version* v);
	::java::lang::module::ModuleDescriptor$Builder* version($String* vs);
	static bool $assertionsDisabled;
	$String* name = nullptr;
	bool strict = false;
	::java::util::Set* modifiers = nullptr;
	bool open = false;
	bool automatic = false;
	::java::util::Set* packages$ = nullptr;
	::java::util::Map* requires$ = nullptr;
	::java::util::Map* exports$ = nullptr;
	::java::util::Map* opens$ = nullptr;
	::java::util::Set* uses$ = nullptr;
	::java::util::Map* provides$ = nullptr;
	::java::lang::module::ModuleDescriptor$Version* version$ = nullptr;
	$String* rawVersionString = nullptr;
	$String* mainClass$ = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleDescriptor$Builder_h_