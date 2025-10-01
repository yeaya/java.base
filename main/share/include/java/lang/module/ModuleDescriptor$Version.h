#ifndef _java_lang_module_ModuleDescriptor$Version_h_
#define _java_lang_module_ModuleDescriptor$Version_h_
//$ class java.lang.module.ModuleDescriptor$Version
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

class $import ModuleDescriptor$Version : public ::java::lang::Comparable {
	$class(ModuleDescriptor$Version, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	ModuleDescriptor$Version();
	void init$($String* v);
	int32_t cmp(Object$* o1, Object$* o2);
	int32_t compareTo(::java::lang::module::ModuleDescriptor$Version* that);
	virtual int32_t compareTo(Object$* that) override;
	int32_t compareTokens(::java::util::List* ts1, ::java::util::List* ts2);
	virtual bool equals(Object$* ob) override;
	virtual int32_t hashCode() override;
	static ::java::lang::module::ModuleDescriptor$Version* parse($String* v);
	static int32_t takeNumber($String* s, int32_t i, ::java::util::List* acc);
	static int32_t takeString($String* s, int32_t i, ::java::util::List* acc);
	virtual $String* toString() override;
	$String* version = nullptr;
	::java::util::List* sequence = nullptr;
	::java::util::List* pre = nullptr;
	::java::util::List* build = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleDescriptor$Version_h_