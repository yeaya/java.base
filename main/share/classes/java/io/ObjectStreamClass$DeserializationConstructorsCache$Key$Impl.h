#ifndef _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_h_
#define _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_h_
//$ class java.io.ObjectStreamClass$DeserializationConstructorsCache$Key$Impl
//$ extends java.io.ObjectStreamClass$DeserializationConstructorsCache$Key

#include <java/io/ObjectStreamClass$DeserializationConstructorsCache$Key.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectStreamField;
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$DeserializationConstructorsCache$Key$Impl : public ::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key {
	$class(ObjectStreamClass$DeserializationConstructorsCache$Key$Impl, $NO_CLASS_INIT, ::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key)
public:
	ObjectStreamClass$DeserializationConstructorsCache$Key$Impl();
	void init$($Array<::java::io::ObjectStreamField>* fields);
	virtual $String* fieldName(int32_t i) override;
	virtual $Class* fieldType(int32_t i) override;
	virtual int32_t length() override;
	::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key$Impl* next = nullptr;
	$StringArray* fieldNames = nullptr;
	$ClassArray* fieldTypes = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_h_