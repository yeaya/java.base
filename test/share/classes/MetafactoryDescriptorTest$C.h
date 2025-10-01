#ifndef _MetafactoryDescriptorTest$C_h_
#define _MetafactoryDescriptorTest$C_h_
//$ class MetafactoryDescriptorTest$C
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

class $export MetafactoryDescriptorTest$C : public ::java::lang::Object {
	$class(MetafactoryDescriptorTest$C, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MetafactoryDescriptorTest$C();
	void init$();
	static ::java::lang::invoke::MethodHandle* getM($Class* c);
	static ::java::lang::invoke::MethodHandle* getN($Class* c);
	static ::java::lang::Integer* m_Integer($String* arg);
	static $Object* m_Object($String* arg);
	static $String* m_String($String* arg);
	static bool m_boolean($String* arg);
	static int8_t m_byte($String* arg);
	static char16_t m_char($String* arg);
	static double m_double($String* arg);
	static float m_float($String* arg);
	static int32_t m_int($String* arg);
	static int64_t m_long($String* arg);
	static int16_t m_short($String* arg);
	static void m_void($String* arg);
	static $String* n_Integer(::java::lang::Integer* arg);
	static $String* n_Object(Object$* arg);
	static $String* n_String($String* arg);
	static $String* n_boolean(bool arg);
	static $String* n_byte(int8_t arg);
	static $String* n_char(char16_t arg);
	static $String* n_double(double arg);
	static $String* n_float(float arg);
	static $String* n_int(int32_t arg);
	static $String* n_long(int64_t arg);
	static $String* n_short(int16_t arg);
};

#endif // _MetafactoryDescriptorTest$C_h_