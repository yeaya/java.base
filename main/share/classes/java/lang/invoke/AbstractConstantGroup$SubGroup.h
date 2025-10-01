#ifndef _java_lang_invoke_AbstractConstantGroup$SubGroup_h_
#define _java_lang_invoke_AbstractConstantGroup$SubGroup_h_
//$ class java.lang.invoke.AbstractConstantGroup$SubGroup
//$ extends java.lang.invoke.AbstractConstantGroup

#include <java/lang/Array.h>
#include <java/lang/invoke/AbstractConstantGroup.h>

namespace java {
	namespace lang {
		namespace invoke {
			class ConstantGroup;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class AbstractConstantGroup$SubGroup : public ::java::lang::invoke::AbstractConstantGroup {
	$class(AbstractConstantGroup$SubGroup, $NO_CLASS_INIT, ::java::lang::invoke::AbstractConstantGroup)
public:
	AbstractConstantGroup$SubGroup();
	void init$(::java::lang::invoke::ConstantGroup* self, int32_t start, int32_t end);
	virtual ::java::util::List* asList() override;
	virtual ::java::util::List* asList(Object$* ifNotPresent) override;
	virtual int32_t copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos) override;
	virtual int32_t copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos, Object$* ifNotPresent) override;
	virtual $Object* get(int32_t index) override;
	virtual $Object* get(int32_t index, Object$* ifNotPresent) override;
	virtual bool isPresent(int32_t index) override;
	int32_t mapIndex(int32_t index);
	virtual ::java::lang::invoke::ConstantGroup* subGroup(int32_t start, int32_t end) override;
	::java::lang::invoke::ConstantGroup* self = nullptr;
	int32_t offset = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_AbstractConstantGroup$SubGroup_h_