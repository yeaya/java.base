#ifndef _java_lang_reflect_Member_h_
#define _java_lang_reflect_Member_h_
//$ interface java.lang.reflect.Member
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("DECLARED")
#undef DECLARED

namespace java {
	namespace lang {
		namespace reflect {

class $export Member : public ::java::lang::Object {
	$interface(Member, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Class* getDeclaringClass() {return nullptr;}
	virtual int32_t getModifiers() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual bool isSynthetic() {return false;}
	static const int32_t PUBLIC = 0;
	static const int32_t DECLARED = 1;
};

		} // reflect
	} // lang
} // java

#pragma pop_macro("PUBLIC")
#pragma pop_macro("DECLARED")

#endif // _java_lang_reflect_Member_h_