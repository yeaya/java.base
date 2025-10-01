#ifndef _ImplicitStringConcatAssignLHS_h_
#define _ImplicitStringConcatAssignLHS_h_
//$ class ImplicitStringConcatAssignLHS
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ARR_SIZE")
#undef ARR_SIZE

class ImplicitStringConcatAssignLHS$MyClass;
namespace java {
	namespace lang {
		class CharSequence;
	}
}

class $export ImplicitStringConcatAssignLHS : public ::java::lang::Object {
	$class(ImplicitStringConcatAssignLHS, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImplicitStringConcatAssignLHS();
	void init$();
	static void check(int32_t expected, $String* label);
	static $Array<::java::lang::CharSequence>* getCharSequenceArray();
	static int32_t getIndex();
	static ::ImplicitStringConcatAssignLHS$MyClass* getMyClass();
	static $ObjectArray* getObjArray();
	static $StringArray* getStringArray();
	static void main($StringArray* args);
	static const int32_t ARR_SIZE = 10;
	static int32_t x;
};

#pragma pop_macro("ARR_SIZE")

#endif // _ImplicitStringConcatAssignLHS_h_