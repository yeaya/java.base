#ifndef _java_lang_reflect_Array_h_
#define _java_lang_reflect_Array_h_
//$ class java.lang.reflect.Array
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {

class $export Array : public ::java::lang::Object {
	$class(Array, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Array();
	void init$();
	static $Object* get(Object$* array, int32_t index);
	static bool getBoolean(Object$* array, int32_t index);
	static int8_t getByte(Object$* array, int32_t index);
	static char16_t getChar(Object$* array, int32_t index);
	static double getDouble(Object$* array, int32_t index);
	static float getFloat(Object$* array, int32_t index);
	static int32_t getInt(Object$* array, int32_t index);
	static int32_t getLength(Object$* array);
	static int64_t getLong(Object$* array, int32_t index);
	static int16_t getShort(Object$* array, int32_t index);
	static $Object* multiNewArray($Class* componentType, $ints* dimensions);
	static $Object* newArray($Class* componentType, int32_t length);
	static $Object* newInstance($Class* componentType, int32_t length);
	static $Object* newInstance($Class* componentType, $ints* dimensions);
	static void set(Object$* array, int32_t index, Object$* value);
	static void setBoolean(Object$* array, int32_t index, bool z);
	static void setByte(Object$* array, int32_t index, int8_t b);
	static void setChar(Object$* array, int32_t index, char16_t c);
	static void setDouble(Object$* array, int32_t index, double d);
	static void setFloat(Object$* array, int32_t index, float f);
	static void setInt(Object$* array, int32_t index, int32_t i);
	static void setLong(Object$* array, int32_t index, int64_t l);
	static void setShort(Object$* array, int32_t index, int16_t s);
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Array_h_