#ifndef _java_io_ObjectInputFilter$FilterInfo_h_
#define _java_io_ObjectInputFilter$FilterInfo_h_
//$ interface java.io.ObjectInputFilter$FilterInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {

class $export ObjectInputFilter$FilterInfo : public ::java::lang::Object {
	$interface(ObjectInputFilter$FilterInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t arrayLength() {return 0;}
	virtual int64_t depth() {return 0;}
	virtual int64_t references() {return 0;}
	virtual $Class* serialClass() {return nullptr;}
	virtual int64_t streamBytes() {return 0;}
};

	} // io
} // java

#endif // _java_io_ObjectInputFilter$FilterInfo_h_