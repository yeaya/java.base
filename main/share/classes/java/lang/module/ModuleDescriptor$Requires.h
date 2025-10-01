#ifndef _java_lang_module_ModuleDescriptor$Requires_h_
#define _java_lang_module_ModuleDescriptor$Requires_h_
//$ class java.lang.module.ModuleDescriptor$Requires
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor$Version;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace module {

class $export ModuleDescriptor$Requires : public ::java::lang::Comparable {
	$class(ModuleDescriptor$Requires, 0, ::java::lang::Comparable)
public:
	ModuleDescriptor$Requires();
	void init$(::java::util::Set* ms, $String* mn, ::java::lang::module::ModuleDescriptor$Version* v, $String* vs);
	void init$(::java::util::Set* ms, $String* mn, ::java::lang::module::ModuleDescriptor$Version* v, bool unused);
	int32_t compareTo(::java::lang::module::ModuleDescriptor$Requires* that);
	virtual int32_t compareTo(Object$* that) override;
	::java::util::Optional* compiledVersion();
	virtual bool equals(Object$* ob) override;
	virtual int32_t hashCode() override;
	::java::util::Set* modifiers();
	$String* name();
	::java::util::Optional* rawCompiledVersion();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::util::Set* mods = nullptr;
	$String* name$ = nullptr;
	::java::lang::module::ModuleDescriptor$Version* compiledVersion$ = nullptr;
	$String* rawCompiledVersion$ = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleDescriptor$Requires_h_