#ifndef _LambdaReturn_h_
#define _LambdaReturn_h_
//$ class LambdaReturn
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export LambdaReturn : public ::java::lang::Object {
	$class(LambdaReturn, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaReturn();
	void init$();
	static void amf(::java::util::List* errs, ::java::lang::invoke::MethodHandle* h, ::java::lang::invoke::MethodType* mts, ::java::lang::invoke::MethodType* mtf, ::java::lang::invoke::MethodType* mtb, bool shouldWork);
	static $String* hereS();
	static void hereV();
	static void main($StringArray* args);
	static ::java::lang::invoke::MethodType* mt($Class* k);
	static ::java::lang::invoke::MethodType* mt($Class* k, $Class* k2);
	static ::java::lang::invoke::MethodHandles$Lookup* l;
};

#endif // _LambdaReturn_h_