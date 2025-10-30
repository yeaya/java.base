#ifndef _sun_reflect_generics_reflectiveObjects_NotImplementedException_h_
#define _sun_reflect_generics_reflectiveObjects_NotImplementedException_h_
//$ class sun.reflect.generics.reflectiveObjects.NotImplementedException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

class $import NotImplementedException : public ::java::lang::RuntimeException {
	$class(NotImplementedException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	NotImplementedException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x80A1B30A44591BEA;
	NotImplementedException(const NotImplementedException& e);
	virtual void throw$() override;
	inline NotImplementedException* operator ->() {
		return (NotImplementedException*)throwing$;
	}
};

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_reflectiveObjects_NotImplementedException_h_