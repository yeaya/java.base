#ifndef _java_util_stream_ReduceOps$Box_h_
#define _java_util_stream_ReduceOps$Box_h_
//$ class java.util.stream.ReduceOps$Box
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$Box : public ::java::lang::Object {
	$class(ReduceOps$Box, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReduceOps$Box();
	void init$();
	virtual $Object* get();
	$Object* state = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$Box_h_