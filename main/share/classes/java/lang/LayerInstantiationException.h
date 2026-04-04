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

class $export LayerInstantiationException : public ::java::lang::RuntimeException {
	$class(LayerInstantiationException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	LayerInstantiationException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* cause);
	void init$($String* msg, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xf36c63cd4c0382a5;
	LayerInstantiationException(const LayerInstantiationException& e);
	virtual void throw$() override;
	inline LayerInstantiationException* operator ->() const {
		return (LayerInstantiationException*)throwing$;
	}
	inline operator LayerInstantiationException*() const {
		return (LayerInstantiationException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_LayerInstantiationException_h_