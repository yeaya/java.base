#ifndef _java_lang_invoke_AbstractConstantGroup$AsList_h_
#define _java_lang_invoke_AbstractConstantGroup$AsList_h_
//$ class java.lang.invoke.AbstractConstantGroup$AsList
//$ extends java.util.AbstractList

#include <java/lang/Array.h>
#include <java/util/AbstractList.h>

namespace java {
	namespace lang {
		namespace invoke {
			class ConstantGroup;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class AbstractConstantGroup$AsList : public ::java::util::AbstractList {
	$class(AbstractConstantGroup$AsList, $NO_CLASS_INIT, ::java::util::AbstractList)
public:
	AbstractConstantGroup$AsList();
	using ::java::util::AbstractList::addAll;
	void init$(::java::lang::invoke::ConstantGroup* self, int32_t start, int32_t end, bool resolving, Object$* ifNotPresent);
	void init$(::java::lang::invoke::ConstantGroup* self, int32_t start, int32_t end);
	void init$(::java::lang::invoke::ConstantGroup* self, int32_t start, int32_t end, Object$* ifNotPresent);
	virtual $Object* get(int32_t index) override;
	virtual ::java::util::Iterator* iterator() override;
	int32_t mapIndex(int32_t index);
	using ::java::util::AbstractList::remove;
	virtual int32_t size() override;
	virtual ::java::util::List* subList(int32_t start, int32_t end) override;
	using ::java::util::AbstractList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::lang::invoke::ConstantGroup* self = nullptr;
	int32_t size$ = 0;
	int32_t offset = 0;
	bool resolving = false;
	$Object* ifNotPresent = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_AbstractConstantGroup$AsList_h_