#ifndef _java_lang_module_ModuleDescriptor$Provides_h_
#define _java_lang_module_ModuleDescriptor$Provides_h_
//$ class java.lang.module.ModuleDescriptor$Provides
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace module {

class $import ModuleDescriptor$Provides : public ::java::lang::Comparable {
	$class(ModuleDescriptor$Provides, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	ModuleDescriptor$Provides();
	void init$($String* service, ::java::util::List* providers);
	void init$($String* service, ::java::util::List* providers, bool unused);
	int32_t compareTo(::java::lang::module::ModuleDescriptor$Provides* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual int32_t hashCode() override;
	::java::util::List* providers();
	$String* service();
	virtual $String* toString() override;
	$String* service$ = nullptr;
	::java::util::List* providers$ = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleDescriptor$Provides_h_