#ifndef _FailingFlushAndClose_h_
#define _FailingFlushAndClose_h_
//$ class FailingFlushAndClose
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
	}
}

class $export FailingFlushAndClose : public ::java::lang::Object {
	$class(FailingFlushAndClose, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FailingFlushAndClose();
	void init$();
	static void closeAgain(::java::io::InputStream* in);
	static void closeAgain(::java::io::OutputStream* out);
	static ::java::io::Reader* closeAgain(::java::io::Reader* r);
	static ::java::io::Writer* closeAgain(::java::io::Writer* w);
	static void fail($String* msg);
	static void failWithIOE($String* msg);
	static void main($StringArray* args);
	static ::java::io::InputStream* testFailingClose(::java::io::InputStream* in);
	static ::java::io::OutputStream* testFailingClose(::java::io::OutputStream* out);
	static ::java::io::Reader* testFailingClose(::java::io::Reader* r);
	static ::java::io::Writer* testFailingClose(::java::io::Writer* w);
	static ::java::io::OutputStream* testFailingFlush(::java::io::OutputStream* out);
	static ::java::io::Writer* testFailingFlush(::java::io::Writer* w);
	static int32_t failed;
};

#endif // _FailingFlushAndClose_h_