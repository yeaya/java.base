#ifndef _sun_reflect_annotation_ExceptionProxy_h_
#define _sun_reflect_annotation_ExceptionProxy_h_
//$ class sun.reflect.annotation.ExceptionProxy
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace lang {
		class RuntimeException;
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $import ExceptionProxy : public ::java::io::Serializable {
	$class(ExceptionProxy, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ExceptionProxy();
	void init$();
	virtual ::java::lang::RuntimeException* generateException() {return nullptr;}
	static const int64_t serialVersionUID = (int64_t)0x64808102765006E9;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_ExceptionProxy_h_