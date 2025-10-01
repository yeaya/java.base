#ifndef _jdk_internal_reflect_FieldAccessor_h_
#define _jdk_internal_reflect_FieldAccessor_h_
//$ interface jdk.internal.reflect.FieldAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class $import FieldAccessor : public ::java::lang::Object {
	$interface(FieldAccessor, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* get(Object$* obj) {return nullptr;}
	virtual bool getBoolean(Object$* obj) {return false;}
	virtual int8_t getByte(Object$* obj) {return 0;}
	virtual char16_t getChar(Object$* obj) {return 0;}
	virtual double getDouble(Object$* obj) {return 0.0;}
	virtual float getFloat(Object$* obj) {return 0.0;}
	virtual int32_t getInt(Object$* obj) {return 0;}
	virtual int64_t getLong(Object$* obj) {return 0;}
	virtual int16_t getShort(Object$* obj) {return 0;}
	virtual void set(Object$* obj, Object$* value) {}
	virtual void setBoolean(Object$* obj, bool z) {}
	virtual void setByte(Object$* obj, int8_t b) {}
	virtual void setChar(Object$* obj, char16_t c) {}
	virtual void setDouble(Object$* obj, double d) {}
	virtual void setFloat(Object$* obj, float f) {}
	virtual void setInt(Object$* obj, int32_t i) {}
	virtual void setLong(Object$* obj, int64_t l) {}
	virtual void setShort(Object$* obj, int16_t s) {}
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_FieldAccessor_h_