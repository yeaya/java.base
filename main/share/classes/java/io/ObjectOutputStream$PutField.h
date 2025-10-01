#ifndef _java_io_ObjectOutputStream$PutField_h_
#define _java_io_ObjectOutputStream$PutField_h_
//$ class java.io.ObjectOutputStream$PutField
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectOutput;
	}
}

namespace java {
	namespace io {

class $export ObjectOutputStream$PutField : public ::java::lang::Object {
	$class(ObjectOutputStream$PutField, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectOutputStream$PutField();
	void init$();
	virtual void put($String* name, bool val) {}
	virtual void put($String* name, int8_t val) {}
	virtual void put($String* name, char16_t val) {}
	virtual void put($String* name, int16_t val) {}
	virtual void put($String* name, int32_t val) {}
	virtual void put($String* name, int64_t val) {}
	virtual void put($String* name, float val) {}
	virtual void put($String* name, double val) {}
	virtual void put($String* name, Object$* val) {}
	virtual void write(::java::io::ObjectOutput* out) {}
};

	} // io
} // java

#endif // _java_io_ObjectOutputStream$PutField_h_