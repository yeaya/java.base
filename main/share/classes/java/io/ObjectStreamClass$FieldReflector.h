#ifndef _java_io_ObjectStreamClass$FieldReflector_h_
#define _java_io_ObjectStreamClass$FieldReflector_h_
//$ class java.io.ObjectStreamClass$FieldReflector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectStreamField;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$FieldReflector : public ::java::lang::Object {
	$class(ObjectStreamClass$FieldReflector, 0, ::java::lang::Object)
public:
	ObjectStreamClass$FieldReflector();
	void init$($Array<::java::io::ObjectStreamField>* fields);
	virtual void checkObjectFieldValueTypes(Object$* obj, $ObjectArray* vals);
	virtual $Array<::java::io::ObjectStreamField>* getFields();
	virtual void getObjFieldValues(Object$* obj, $ObjectArray* vals);
	virtual void getPrimFieldValues(Object$* obj, $bytes* buf);
	virtual void setObjFieldValues(Object$* obj, $ObjectArray* vals);
	void setObjFieldValues(Object$* obj, $ObjectArray* vals, bool dryRun);
	virtual void setPrimFieldValues(Object$* obj, $bytes* buf);
	static ::jdk::internal::misc::Unsafe* unsafe;
	$Array<::java::io::ObjectStreamField>* fields = nullptr;
	int32_t numPrimFields = 0;
	$longs* readKeys = nullptr;
	$longs* writeKeys = nullptr;
	$ints* offsets = nullptr;
	$chars* typeCodes = nullptr;
	$ClassArray* types = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$FieldReflector_h_