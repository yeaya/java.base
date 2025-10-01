#ifndef _T8032704_h_
#define _T8032704_h_
//$ class T8032704
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

class $export T8032704 : public ::java::lang::Object {
	$class(T8032704, $NO_CLASS_INIT, ::java::lang::Object)
public:
	T8032704();
	void init$();
	static void here();
	static void main($StringArray* args);
	static bool mf(::java::lang::invoke::MethodHandles$Lookup* l);
	static ::java::lang::invoke::MethodType* mt($Class* k);
	static ::java::lang::invoke::MethodHandle* h;
};

#endif // _T8032704_h_