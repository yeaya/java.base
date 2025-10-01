#ifndef _java_lang_invoke_AbstractConstantGroup$WithCache_h_
#define _java_lang_invoke_AbstractConstantGroup$WithCache_h_
//$ class java.lang.invoke.AbstractConstantGroup$WithCache
//$ extends java.lang.invoke.AbstractConstantGroup

#include <java/lang/Array.h>
#include <java/lang/invoke/AbstractConstantGroup.h>

#pragma push_macro("NOT_PRESENT")
#undef NOT_PRESENT
#pragma push_macro("RESOLVED_TO_NULL")
#undef RESOLVED_TO_NULL

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class AbstractConstantGroup$WithCache : public ::java::lang::invoke::AbstractConstantGroup {
	$class(AbstractConstantGroup$WithCache, 0, ::java::lang::invoke::AbstractConstantGroup)
public:
	AbstractConstantGroup$WithCache();
	void init$(int32_t size);
	virtual $Object* fillCache(int32_t i);
	virtual $Object* get(int32_t i) override;
	virtual $Object* get(int32_t i, Object$* ifNotAvailable) override;
	virtual void initializeCache(::java::util::List* cacheContents, Object$* ifNotPresent);
	virtual bool isPresent(int32_t i) override;
	static $Object* unwrapNull(Object$* x);
	static $Object* wrapNull(Object$* x);
	static bool $assertionsDisabled;
	$ObjectArray* cache = nullptr;
	static $Object* RESOLVED_TO_NULL;
	static $Object* NOT_PRESENT;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("NOT_PRESENT")
#pragma pop_macro("RESOLVED_TO_NULL")

#endif // _java_lang_invoke_AbstractConstantGroup$WithCache_h_