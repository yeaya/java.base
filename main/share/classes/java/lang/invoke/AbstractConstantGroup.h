#ifndef _java_lang_invoke_AbstractConstantGroup_h_
#define _java_lang_invoke_AbstractConstantGroup_h_
//$ class java.lang.invoke.AbstractConstantGroup
//$ extends java.lang.invoke.ConstantGroup

#include <java/lang/invoke/ConstantGroup.h>

namespace java {
	namespace lang {
		namespace invoke {

class AbstractConstantGroup : public ::java::lang::invoke::ConstantGroup {
	$class(AbstractConstantGroup, $NO_CLASS_INIT, ::java::lang::invoke::ConstantGroup)
public:
	AbstractConstantGroup();
	virtual $Object* get(int32_t index) override {return nullptr;}
	virtual $Object* get(int32_t index, Object$* ifNotPresent) override {return nullptr;}
	void init$(int32_t size);
	virtual bool isPresent(int32_t index) override {return false;}
	virtual int32_t size() override;
	virtual $String* toString() override;
	int32_t size$ = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_AbstractConstantGroup_h_