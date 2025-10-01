#ifndef _java_io_ObjectInputStream$GetField_h_
#define _java_io_ObjectInputStream$GetField_h_
//$ class java.io.ObjectInputStream$GetField
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectStreamClass;
	}
}

namespace java {
	namespace io {

class $import ObjectInputStream$GetField : public ::java::lang::Object {
	$class(ObjectInputStream$GetField, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectInputStream$GetField();
	void init$();
	virtual bool defaulted($String* name) {return false;}
	virtual bool get($String* name, bool val) {return false;}
	virtual int8_t get($String* name, int8_t val) {return 0;}
	virtual char16_t get($String* name, char16_t val) {return 0;}
	virtual int16_t get($String* name, int16_t val) {return 0;}
	virtual int32_t get($String* name, int32_t val) {return 0;}
	virtual int64_t get($String* name, int64_t val) {return 0;}
	virtual float get($String* name, float val) {return 0.0;}
	virtual double get($String* name, double val) {return 0.0;}
	virtual $Object* get($String* name, Object$* val) {return nullptr;}
	virtual ::java::io::ObjectStreamClass* getObjectStreamClass() {return nullptr;}
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$GetField_h_