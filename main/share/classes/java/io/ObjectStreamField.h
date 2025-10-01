#ifndef _java_io_ObjectStreamField_h_
#define _java_io_ObjectStreamField_h_
//$ class java.io.ObjectStreamField
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

namespace java {
	namespace io {

class $export ObjectStreamField : public ::java::lang::Comparable {
	$class(ObjectStreamField, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	ObjectStreamField();
	void init$($String* name, $Class* type);
	void init$($String* name, $Class* type, bool unshared);
	void init$($String* name, $String* signature, bool unshared);
	void init$(::java::lang::reflect::Field* field, bool unshared, bool showType);
	static ::java::lang::StringBuilder* appendClassSignature(::java::lang::StringBuilder* sbuf, $Class* cl);
	virtual int32_t compareTo(Object$* obj) override;
	static $String* getClassSignature($Class* cl);
	virtual ::java::lang::reflect::Field* getField();
	virtual $String* getName();
	virtual int32_t getOffset();
	static $String* getPrimitiveSignature($Class* cl);
	virtual $String* getSignature();
	virtual $Class* getType();
	virtual char16_t getTypeCode();
	virtual $String* getTypeString();
	virtual bool isPrimitive();
	virtual bool isUnshared();
	virtual void setOffset(int32_t offset);
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* signature = nullptr;
	$Class* type = nullptr;
	$String* typeSignature = nullptr;
	bool unshared = false;
	::java::lang::reflect::Field* field = nullptr;
	int32_t offset = 0;
};

	} // io
} // java

#endif // _java_io_ObjectStreamField_h_