#ifndef _jdk_internal_reflect_FieldAccessorImpl_h_
#define _jdk_internal_reflect_FieldAccessorImpl_h_
//$ class jdk.internal.reflect.FieldAccessorImpl
//$ extends jdk.internal.reflect.MagicAccessorImpl
//$ implements jdk.internal.reflect.FieldAccessor

#include <jdk/internal/reflect/FieldAccessor.h>
#include <jdk/internal/reflect/MagicAccessorImpl.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class FieldAccessorImpl : public ::jdk::internal::reflect::MagicAccessorImpl, public ::jdk::internal::reflect::FieldAccessor {
	$class(FieldAccessorImpl, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::reflect::MagicAccessorImpl, ::jdk::internal::reflect::FieldAccessor)
public:
	FieldAccessorImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Object* get(Object$* obj) override {return nullptr;}
	virtual bool getBoolean(Object$* obj) override {return false;}
	virtual int8_t getByte(Object$* obj) override {return 0;}
	virtual char16_t getChar(Object$* obj) override {return 0;}
	virtual double getDouble(Object$* obj) override {return 0.0;}
	virtual float getFloat(Object$* obj) override {return 0.0;}
	virtual int32_t getInt(Object$* obj) override {return 0;}
	virtual int64_t getLong(Object$* obj) override {return 0;}
	virtual int16_t getShort(Object$* obj) override {return 0;}
	virtual int32_t hashCode() override;
	void init$();
	virtual void set(Object$* obj, Object$* value) override {}
	virtual void setBoolean(Object$* obj, bool z) override {}
	virtual void setByte(Object$* obj, int8_t b) override {}
	virtual void setChar(Object$* obj, char16_t c) override {}
	virtual void setDouble(Object$* obj, double d) override {}
	virtual void setFloat(Object$* obj, float f) override {}
	virtual void setInt(Object$* obj, int32_t i) override {}
	virtual void setLong(Object$* obj, int64_t l) override {}
	virtual void setShort(Object$* obj, int16_t s) override {}
	virtual $String* toString() override;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_FieldAccessorImpl_h_