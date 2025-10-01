#ifndef _java_lang_module_ModuleDescriptor$Exports_h_
#define _java_lang_module_ModuleDescriptor$Exports_h_
//$ class java.lang.module.ModuleDescriptor$Exports
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace module {

class $import ModuleDescriptor$Exports : public ::java::lang::Comparable {
	$class(ModuleDescriptor$Exports, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	ModuleDescriptor$Exports();
	void init$(::java::util::Set* ms, $String* source, ::java::util::Set* targets);
	void init$(::java::util::Set* ms, $String* source, ::java::util::Set* targets, bool unused);
	int32_t compareTo(::java::lang::module::ModuleDescriptor$Exports* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual int32_t hashCode() override;
	bool isQualified();
	::java::util::Set* modifiers();
	$String* source();
	::java::util::Set* targets();
	virtual $String* toString() override;
	::java::util::Set* mods = nullptr;
	$String* source$ = nullptr;
	::java::util::Set* targets$ = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleDescriptor$Exports_h_