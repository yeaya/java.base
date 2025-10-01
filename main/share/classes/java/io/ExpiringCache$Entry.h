#ifndef _java_io_ExpiringCache$Entry_h_
#define _java_io_ExpiringCache$Entry_h_
//$ class java.io.ExpiringCache$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {

class ExpiringCache$Entry : public ::java::lang::Object {
	$class(ExpiringCache$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExpiringCache$Entry();
	void init$(int64_t timestamp, $String* val);
	virtual void setTimestamp(int64_t timestamp);
	virtual void setVal($String* val);
	virtual int64_t timestamp();
	virtual $String* val();
	int64_t timestamp$ = 0;
	$String* val$ = nullptr;
};

	} // io
} // java

#endif // _java_io_ExpiringCache$Entry_h_