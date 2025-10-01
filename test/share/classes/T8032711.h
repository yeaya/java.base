#ifndef _T8032711_h_
#define _T8032711_h_
//$ class T8032711
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

class $export T8032711 : public ::java::lang::Object {
	$class(T8032711, $NO_CLASS_INIT, ::java::lang::Object)
public:
	T8032711();
	void init$();
	static void here();
	static void main($StringArray* args);
	static bool mf($Class* k);
	static ::java::lang::invoke::MethodType* mt($Class* k);
	static ::java::lang::invoke::MethodHandles$Lookup* l;
	static ::java::lang::invoke::MethodHandle* h;
};

#endif // _T8032711_h_