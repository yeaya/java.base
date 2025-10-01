#ifndef _pkg_A4pkg_h_
#define _pkg_A4pkg_h_
//$ class pkg.A4pkg
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace pkg {

class $export A4pkg : public ::java::lang::Object {
	$class(A4pkg, 0, ::java::lang::Object)
public:
	A4pkg();
	void init$();
	static ::java::util::Set* inaccessibleFields();
	static ::java::lang::invoke::MethodHandles$Lookup* lookup();
	static $Object* f_public_static;
	static $Object* f_protected_static;
	static $Object* f_package_static;
	static $Object* f_private_static;
	static $Object* f_public_static_final;
	static $Object* f_protected_static_final;
	static $Object* f_package_static_final;
	static $Object* f_private_static_final;
	$Object* f_public = nullptr;
	$Object* f_protected = nullptr;
	$Object* f_package = nullptr;
	$Object* f_private = nullptr;
	$Object* f_public_final = nullptr;
	$Object* f_protected_final = nullptr;
	$Object* f_package_final = nullptr;
	$Object* f_private_final = nullptr;
};

} // pkg

#endif // _pkg_A4pkg_h_