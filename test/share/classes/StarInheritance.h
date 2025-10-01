#ifndef _StarInheritance_h_
#define _StarInheritance_h_
//$ class StarInheritance
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

class $export StarInheritance : public ::java::lang::Object {
	$class(StarInheritance, 0, ::java::lang::Object)
public:
	StarInheritance();
	void init$();
	static void main($StringArray* args);
	static void test($Array<::java::lang::reflect::Method>* ma, ::java::util::ArrayList* expect);
	static int32_t n;
};

#endif // _StarInheritance_h_