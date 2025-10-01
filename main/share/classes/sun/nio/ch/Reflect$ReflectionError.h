#ifndef _sun_nio_ch_Reflect$ReflectionError_h_
#define _sun_nio_ch_Reflect$ReflectionError_h_
//$ class sun.nio.ch.Reflect$ReflectionError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Reflect$ReflectionError : public ::java::lang::Error {
	$class(Reflect$ReflectionError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	Reflect$ReflectionError();
	void init$($Throwable* x);
	static const int64_t serialVersionUID = (int64_t)0x87D3350D1C458F7F;
	Reflect$ReflectionError(const Reflect$ReflectionError& e);
	Reflect$ReflectionError wrapper$();
	virtual void throwWrapper$() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Reflect$ReflectionError_h_