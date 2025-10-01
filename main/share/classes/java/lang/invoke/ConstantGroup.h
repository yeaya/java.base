#ifndef _java_lang_invoke_ConstantGroup_h_
#define _java_lang_invoke_ConstantGroup_h_
//$ interface java.lang.invoke.ConstantGroup
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ConstantGroup : public ::java::lang::Object {
	$interface(ConstantGroup, 0, ::java::lang::Object)
public:
	virtual ::java::util::List* asList();
	virtual ::java::util::List* asList(Object$* ifNotPresent);
	virtual int32_t copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos);
	virtual int32_t copyConstants(int32_t start, int32_t end, $ObjectArray* buf, int32_t pos, Object$* ifNotPresent);
	virtual $Object* get(int32_t index) {return nullptr;}
	virtual $Object* get(int32_t index, Object$* ifNotPresent) {return nullptr;}
	virtual bool isPresent(int32_t index) {return false;}
	static ::java::lang::invoke::ConstantGroup* makeConstantGroup(::java::util::List* constants, Object$* ifNotPresent, ::java::util::function::IntFunction* constantProvider);
	static ::java::lang::invoke::ConstantGroup* makeConstantGroup(::java::util::List* constants);
	virtual int32_t size() {return 0;}
	virtual ::java::lang::invoke::ConstantGroup* subGroup(int32_t start, int32_t end);
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_ConstantGroup_h_