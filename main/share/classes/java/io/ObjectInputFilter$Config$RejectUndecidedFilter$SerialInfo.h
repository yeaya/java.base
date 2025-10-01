#ifndef _java_io_ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_h_
#define _java_io_ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_h_
//$ class java.io.ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo
//$ extends java.io.ObjectInputFilter$FilterInfo

#include <java/io/ObjectInputFilter$FilterInfo.h>

namespace java {
	namespace io {

class ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo : public ::java::io::ObjectInputFilter$FilterInfo {
	$class(ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, $NO_CLASS_INIT, ::java::io::ObjectInputFilter$FilterInfo)
public:
	ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo();
	void init$(::java::io::ObjectInputFilter$FilterInfo* base, $Class* clazz);
	virtual int64_t arrayLength() override;
	virtual int64_t depth() override;
	virtual int64_t references() override;
	virtual $Class* serialClass() override;
	virtual int64_t streamBytes() override;
	::java::io::ObjectInputFilter$FilterInfo* base = nullptr;
	$Class* clazz = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo_h_