#ifndef _sun_nio_ch_Reflect_h_
#define _sun_nio_ch_Reflect_h_
//$ class sun.nio.ch.Reflect
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AccessibleObject;
			class Constructor;
			class Field;
			class Method;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Reflect : public ::java::lang::Object {
	$class(Reflect, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Reflect();
	void init$();
	static $Object* get(Object$* ob, ::java::lang::reflect::Field* f);
	static $Object* get(::java::lang::reflect::Field* f);
	static $Object* invoke(::java::lang::reflect::Constructor* c, $ObjectArray* args);
	static $Object* invoke(::java::lang::reflect::Method* m, Object$* ob, $ObjectArray* args);
	static $Object* invokeIO(::java::lang::reflect::Method* m, Object$* ob, $ObjectArray* args);
	static ::java::lang::reflect::Constructor* lookupConstructor($String* className, $ClassArray* paramTypes);
	static ::java::lang::reflect::Field* lookupField($String* className, $String* fieldName);
	static ::java::lang::reflect::Method* lookupMethod($String* className, $String* methodName, $ClassArray* paramTypes);
	static void set(Object$* ob, ::java::lang::reflect::Field* f, Object$* val);
	static void setAccessible(::java::lang::reflect::AccessibleObject* ao);
	static void setBoolean(Object$* ob, ::java::lang::reflect::Field* f, bool val);
	static void setInt(Object$* ob, ::java::lang::reflect::Field* f, int32_t val);
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Reflect_h_