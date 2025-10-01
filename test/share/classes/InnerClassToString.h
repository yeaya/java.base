#ifndef _InnerClassToString_h_
#define _InnerClassToString_h_
//$ class InnerClassToString
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}

class $export InnerClassToString : public ::java::lang::Object {
	$class(InnerClassToString, 0, ::java::lang::Object)
public:
	InnerClassToString();
	void init$();
	static void main($StringArray* args);
	void run();
	void test(::java::lang::reflect::Constructor* constructor, $ClassArray* paramClasses);
	static $ClassArray* genericParamClasses;
	static $ClassArray* nongenericParamClasses;
	int32_t errors = 0;
};

#endif // _InnerClassToString_h_