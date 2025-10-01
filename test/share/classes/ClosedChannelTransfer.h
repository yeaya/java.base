#ifndef _ClosedChannelTransfer_h_
#define _ClosedChannelTransfer_h_
//$ class ClosedChannelTransfer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class $export ClosedChannelTransfer : public ::java::lang::Object {
	$class(ClosedChannelTransfer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClosedChannelTransfer();
	void init$();
	static void main($StringArray* args);
	static void test1(::java::nio::channels::FileChannel* channel);
	static void test2(::java::nio::channels::FileChannel* channel);
};

#endif // _ClosedChannelTransfer_h_