#ifndef _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup_h_
#define _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup_h_
//$ class java.io.ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup
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

class ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup : public ::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key {
	$class(ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup, $NO_CLASS_INIT, ::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key)
public:
	ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup();
	void init$($Array<::java::io::ObjectStreamField>* fields);
	virtual $String* fieldName(int32_t i) override;
	virtual $Class* fieldType(int32_t i) override;
	virtual int32_t length() override;
	$Array<::java::io::ObjectStreamField>* fields = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup_h_