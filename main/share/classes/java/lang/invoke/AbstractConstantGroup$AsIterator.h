#ifndef _java_lang_invoke_AbstractConstantGroup$AsIterator_h_
#define _java_lang_invoke_AbstractConstantGroup$AsIterator_h_
//$ class java.lang.invoke.AbstractConstantGroup$AsIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		namespace invoke {
			class ConstantGroup;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class AbstractConstantGroup$AsIterator : public ::java::util::Iterator {
	$class(AbstractConstantGroup$AsIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	AbstractConstantGroup$AsIterator();
	void init$(::java::lang::invoke::ConstantGroup* self, int32_t start, int32_t end, bool resolving, Object$* ifNotPresent);
	void init$(::java::lang::invoke::ConstantGroup* self, int32_t start, int32_t end);
	void init$(::java::lang::invoke::ConstantGroup* self, int32_t start, int32_t end, Object$* ifNotPresent);
	int32_t bumpIndex();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::lang::invoke::ConstantGroup* self = nullptr;
	int32_t end = 0;
	bool resolving = false;
	$Object* ifNotPresent = nullptr;
	int32_t index = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_AbstractConstantGroup$AsIterator_h_