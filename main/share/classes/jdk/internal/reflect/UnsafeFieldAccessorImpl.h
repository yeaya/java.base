#ifndef _jdk_internal_reflect_UnsafeFieldAccessorImpl_h_
#define _jdk_internal_reflect_UnsafeFieldAccessorImpl_h_
//$ class jdk.internal.reflect.UnsafeFieldAccessorImpl
//$ extends jdk.internal.reflect.FieldAccessorImpl

#include <jdk/internal/reflect/FieldAccessorImpl.h>

namespace java {
	namespace lang {
		class IllegalArgumentException;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class UnsafeFieldAccessorImpl : public ::jdk::internal::reflect::FieldAccessorImpl {
	$class(UnsafeFieldAccessorImpl, $PRELOAD, ::jdk::internal::reflect::FieldAccessorImpl)
public:
	UnsafeFieldAccessorImpl();
	void init$(::java::lang::reflect::Field* field);
	virtual void ensureObj(Object$* o);
	$String* getQualifiedFieldName();
	virtual $String* getSetMessage($String* attemptedType, $String* attemptedValue);
	virtual ::java::lang::IllegalArgumentException* newGetBooleanIllegalArgumentException();
	virtual ::java::lang::IllegalArgumentException* newGetByteIllegalArgumentException();
	virtual ::java::lang::IllegalArgumentException* newGetCharIllegalArgumentException();
	virtual ::java::lang::IllegalArgumentException* newGetDoubleIllegalArgumentException();
	virtual ::java::lang::IllegalArgumentException* newGetFloatIllegalArgumentException();
	virtual ::java::lang::IllegalArgumentException* newGetIllegalArgumentException($String* type);
	virtual ::java::lang::IllegalArgumentException* newGetIntIllegalArgumentException();
	virtual ::java::lang::IllegalArgumentException* newGetLongIllegalArgumentException();
	virtual ::java::lang::IllegalArgumentException* newGetShortIllegalArgumentException();
	virtual void throwFinalFieldIllegalAccessException($String* attemptedType, $String* attemptedValue);
	virtual void throwFinalFieldIllegalAccessException(Object$* o);
	virtual void throwFinalFieldIllegalAccessException(bool z);
	virtual void throwFinalFieldIllegalAccessException(char16_t b);
	virtual void throwFinalFieldIllegalAccessException(int8_t b);
	virtual void throwFinalFieldIllegalAccessException(int16_t b);
	virtual void throwFinalFieldIllegalAccessException(int32_t i);
	virtual void throwFinalFieldIllegalAccessException(int64_t i);
	virtual void throwFinalFieldIllegalAccessException(float f);
	virtual void throwFinalFieldIllegalAccessException(double f);
	virtual void throwSetIllegalArgumentException($String* attemptedType, $String* attemptedValue);
	virtual void throwSetIllegalArgumentException(Object$* o);
	virtual void throwSetIllegalArgumentException(bool b);
	virtual void throwSetIllegalArgumentException(int8_t b);
	virtual void throwSetIllegalArgumentException(char16_t c);
	virtual void throwSetIllegalArgumentException(int16_t s);
	virtual void throwSetIllegalArgumentException(int32_t i);
	virtual void throwSetIllegalArgumentException(int64_t l);
	virtual void throwSetIllegalArgumentException(float f);
	virtual void throwSetIllegalArgumentException(double d);
	static ::jdk::internal::misc::Unsafe* unsafe;
	::java::lang::reflect::Field* field = nullptr;
	int64_t fieldOffset = 0;
	bool isFinal = false;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_UnsafeFieldAccessorImpl_h_