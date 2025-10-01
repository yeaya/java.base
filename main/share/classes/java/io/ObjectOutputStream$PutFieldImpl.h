#ifndef _java_io_ObjectOutputStream$PutFieldImpl_h_
#define _java_io_ObjectOutputStream$PutFieldImpl_h_
//$ class java.io.ObjectOutputStream$PutFieldImpl
//$ extends java.io.ObjectOutputStream$PutField

#include <java/io/ObjectOutputStream$PutField.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectOutput;
		class ObjectOutputStream;
		class ObjectStreamClass;
	}
}

namespace java {
	namespace io {

class ObjectOutputStream$PutFieldImpl : public ::java::io::ObjectOutputStream$PutField {
	$class(ObjectOutputStream$PutFieldImpl, $NO_CLASS_INIT, ::java::io::ObjectOutputStream$PutField)
public:
	ObjectOutputStream$PutFieldImpl();
	void init$(::java::io::ObjectOutputStream* this$0, ::java::io::ObjectStreamClass* desc);
	int32_t getFieldOffset($String* name, $Class* type);
	virtual void put($String* name, bool val) override;
	virtual void put($String* name, int8_t val) override;
	virtual void put($String* name, char16_t val) override;
	virtual void put($String* name, int16_t val) override;
	virtual void put($String* name, int32_t val) override;
	virtual void put($String* name, float val) override;
	virtual void put($String* name, int64_t val) override;
	virtual void put($String* name, double val) override;
	virtual void put($String* name, Object$* val) override;
	virtual void write(::java::io::ObjectOutput* out) override;
	virtual void writeFields();
	::java::io::ObjectOutputStream* this$0 = nullptr;
	::java::io::ObjectStreamClass* desc = nullptr;
	$bytes* primVals = nullptr;
	$ObjectArray* objVals = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectOutputStream$PutFieldImpl_h_