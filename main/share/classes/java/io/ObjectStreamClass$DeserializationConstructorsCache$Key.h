#ifndef _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key_h_
#define _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key_h_
//$ class java.io.ObjectStreamClass$DeserializationConstructorsCache$Key
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {

class ObjectStreamClass$DeserializationConstructorsCache$Key : public ::java::lang::Object {
	$class(ObjectStreamClass$DeserializationConstructorsCache$Key, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectStreamClass$DeserializationConstructorsCache$Key();
	void init$();
	virtual bool equals(Object$* obj) override;
	virtual $String* fieldName(int32_t i) {return nullptr;}
	virtual $Class* fieldType(int32_t i) {return nullptr;}
	virtual int32_t hashCode() override;
	virtual int32_t length() {return 0;}
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key_h_