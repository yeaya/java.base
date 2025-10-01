#ifndef _java_io_ObjectInputStream$FilterValues_h_
#define _java_io_ObjectInputStream$FilterValues_h_
//$ class java.io.ObjectInputStream$FilterValues
//$ extends java.io.ObjectInputFilter$FilterInfo

#include <java/io/ObjectInputFilter$FilterInfo.h>

namespace java {
	namespace io {

class $export ObjectInputStream$FilterValues : public ::java::io::ObjectInputFilter$FilterInfo {
	$class(ObjectInputStream$FilterValues, $NO_CLASS_INIT, ::java::io::ObjectInputFilter$FilterInfo)
public:
	ObjectInputStream$FilterValues();
	void init$($Class* clazz, int64_t arrayLength, int64_t totalObjectRefs, int64_t depth, int64_t streamBytes);
	virtual int64_t arrayLength() override;
	virtual int64_t depth() override;
	virtual int64_t references() override;
	virtual $Class* serialClass() override;
	virtual int64_t streamBytes() override;
	$Class* clazz = nullptr;
	int64_t arrayLength$ = 0;
	int64_t totalObjectRefs = 0;
	int64_t depth$ = 0;
	int64_t streamBytes$ = 0;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$FilterValues_h_