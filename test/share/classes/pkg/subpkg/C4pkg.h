#ifndef _pkg_subpkg_C4pkg_h_
#define _pkg_subpkg_C4pkg_h_
//$ class pkg.subpkg.C4pkg
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
	namespace subpkg {

class $export C4pkg : public ::java::lang::Object {
	$class(C4pkg, $NO_CLASS_INIT, ::java::lang::Object)
public:
	C4pkg();
	void init$();
	static ::java::util::Set* inaccessibleFields();
	static ::java::lang::invoke::MethodHandles$Lookup* lookup();
};

	} // subpkg
} // pkg

#endif // _pkg_subpkg_C4pkg_h_