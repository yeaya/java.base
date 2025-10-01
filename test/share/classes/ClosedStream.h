#ifndef _ClosedStream_h_
#define _ClosedStream_h_
//$ class ClosedStream
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ClosedStream : public ::java::lang::Object {
	$class(ClosedStream, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClosedStream();
	void init$();
	static void main($StringArray* argv);
};

#endif // _ClosedStream_h_