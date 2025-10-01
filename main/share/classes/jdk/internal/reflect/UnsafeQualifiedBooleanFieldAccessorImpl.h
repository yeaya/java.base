#ifndef _jdk_internal_reflect_UnsafeQualifiedBooleanFieldAccessorImpl_h_
#define _jdk_internal_reflect_UnsafeQualifiedBooleanFieldAccessorImpl_h_
//$ class jdk.internal.reflect.UnsafeQualifiedBooleanFieldAccessorImpl
//$ extends jdk.internal.reflect.UnsafeQualifiedFieldAccessorImpl

#include <jdk/internal/reflect/UnsafeQualifiedFieldAccessorImpl.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class UnsafeQualifiedBooleanFieldAccessorImpl : public ::jdk::internal::reflect::UnsafeQualifiedFieldAccessorImpl {
	$class(UnsafeQualifiedBooleanFieldAccessorImpl, $NO_CLASS_INIT, ::jdk::internal::reflect::UnsafeQualifiedFieldAccessorImpl)
public:
	UnsafeQualifiedBooleanFieldAccessorImpl();
	void init$(::java::lang::reflect::Field* field, bool isReadOnly);
	virtual $Object* get(Object$* obj) override;
	virtual bool getBoolean(Object$* obj) override;
	virtual int8_t getByte(Object$* obj) override;
	virtual char16_t getChar(Object$* obj) override;
	virtual double getDouble(Object$* obj) override;
	virtual float getFloat(Object$* obj) override;
	virtual int32_t getInt(Object$* obj) override;
	virtual int64_t getLong(Object$* obj) override;
	virtual int16_t getShort(Object$* obj) override;
	virtual void set(Object$* obj, Object$* value) override;
	virtual void setBoolean(Object$* obj, bool z) override;
	virtual void setByte(Object$* obj, int8_t b) override;
	virtual void setChar(Object$* obj, char16_t c) override;
	virtual void setDouble(Object$* obj, double d) override;
	virtual void setFloat(Object$* obj, float f) override;
	virtual void setInt(Object$* obj, int32_t i) override;
	virtual void setLong(Object$* obj, int64_t l) override;
	virtual void setShort(Object$* obj, int16_t s) override;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_UnsafeQualifiedBooleanFieldAccessorImpl_h_