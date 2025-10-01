#ifndef _java_io_ObjectInputStream$FieldValues_h_
#define _java_io_ObjectInputStream$FieldValues_h_
//$ class java.io.ObjectInputStream$FieldValues
//$ extends java.io.ObjectInputStream$GetField

#include <java/io/ObjectInputStream$GetField.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectStreamClass;
	}
}

namespace java {
	namespace io {

class ObjectInputStream$FieldValues : public ::java::io::ObjectInputStream$GetField {
	$class(ObjectInputStream$FieldValues, $NO_CLASS_INIT, ::java::io::ObjectInputStream$GetField)
public:
	ObjectInputStream$FieldValues();
	void init$(::java::io::ObjectInputStream* this$0, ::java::io::ObjectStreamClass* desc, bool recordDependencies);
	void defaultCheckFieldValues(Object$* obj);
	void defaultSetFieldValues(Object$* obj);
	virtual bool defaulted($String* name) override;
	virtual bool get($String* name, bool val) override;
	virtual int8_t get($String* name, int8_t val) override;
	virtual char16_t get($String* name, char16_t val) override;
	virtual int16_t get($String* name, int16_t val) override;
	virtual int32_t get($String* name, int32_t val) override;
	virtual float get($String* name, float val) override;
	virtual int64_t get($String* name, int64_t val) override;
	virtual double get($String* name, double val) override;
	virtual $Object* get($String* name, Object$* val) override;
	int32_t getFieldOffset($String* name, $Class* type);
	virtual ::java::io::ObjectStreamClass* getObjectStreamClass() override;
	::java::io::ObjectInputStream* this$0 = nullptr;
	::java::io::ObjectStreamClass* desc = nullptr;
	$bytes* primValues = nullptr;
	$ObjectArray* objValues = nullptr;
	$ints* objHandles = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$FieldValues_h_