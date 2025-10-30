#ifndef _java_lang_LayerInstantiationException_h_
#define _java_lang_LayerInstantiationException_h_
//$ class java.lang.LayerInstantiationException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import LayerInstantiationException : public ::java::lang::RuntimeException {
	$class(LayerInstantiationException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	LayerInstantiationException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* cause);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xF36C63CD4C0382A5;
	LayerInstantiationException(const LayerInstantiationException& e);
	virtual void throw$() override;
	inline LayerInstantiationException* operator ->() {
		return (LayerInstantiationException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_LayerInstantiationException_h_