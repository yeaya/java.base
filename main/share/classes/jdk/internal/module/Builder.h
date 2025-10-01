#ifndef _jdk_internal_module_Builder_h_
#define _jdk_internal_module_Builder_h_
//$ class jdk.internal.module.Builder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JLMA")
#undef JLMA

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
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangModuleAccess;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class Builder : public ::java::lang::Object {
	$class(Builder, 0, ::java::lang::Object)
public:
	Builder();
	void init$($String* name);
	::java::lang::module::ModuleDescriptor* build(int32_t hashCode);
	::jdk::internal::module::Builder* exports($Array<::java::lang::module::ModuleDescriptor$Exports>* exports);
	::jdk::internal::module::Builder* mainClass($String* mc);
	::jdk::internal::module::Builder* mandated(bool value);
	::java::util::Set* modifiers();
	static ::java::lang::module::ModuleDescriptor$Exports* newExports(::java::util::Set* ms, $String* pn, ::java::util::Set* targets);
	static ::java::lang::module::ModuleDescriptor$Exports* newExports(::java::util::Set* ms, $String* pn);
	static ::java::lang::module::ModuleDescriptor$Opens* newOpens(::java::util::Set* ms, $String* pn);
	static ::java::lang::module::ModuleDescriptor$Opens* newOpens(::java::util::Set* ms, $String* pn, ::java::util::Set* targets);
	static ::java::lang::module::ModuleDescriptor$Provides* newProvides($String* st, ::java::util::List* pcs);
	static ::java::lang::module::ModuleDescriptor$Requires* newRequires(::java::util::Set* mods, $String* mn, $String* compiledVersion);
	static ::java::lang::module::ModuleDescriptor$Requires* newRequires(::java::util::Set* mods, $String* mn);
	::jdk::internal::module::Builder* open(bool value);
	::jdk::internal::module::Builder* opens($Array<::java::lang::module::ModuleDescriptor$Opens>* opens);
	::jdk::internal::module::Builder* packages(::java::util::Set* packages);
	::jdk::internal::module::Builder* provides($Array<::java::lang::module::ModuleDescriptor$Provides>* provides);
	::jdk::internal::module::Builder* requires($Array<::java::lang::module::ModuleDescriptor$Requires>* requires);
	::jdk::internal::module::Builder* synthetic(bool value);
	::jdk::internal::module::Builder* uses(::java::util::Set* uses);
	::jdk::internal::module::Builder* version($String* v);
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangModuleAccess* JLMA;
	static ::java::lang::module::ModuleDescriptor$Version* cachedVersion;
	$String* name = nullptr;
	bool open$ = false;
	bool synthetic$ = false;
	bool mandated$ = false;
	::java::util::Set* requires$ = nullptr;
	::java::util::Set* exports$ = nullptr;
	::java::util::Set* opens$ = nullptr;
	::java::util::Set* packages$ = nullptr;
	::java::util::Set* uses$ = nullptr;
	::java::util::Set* provides$ = nullptr;
	::java::lang::module::ModuleDescriptor$Version* version$ = nullptr;
	$String* mainClass$ = nullptr;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("JLMA")

#endif // _jdk_internal_module_Builder_h_