#ifndef _Args$6_h_
#define _Args$6_h_
//$ class Args$6
//$ extends Args$Thunk

#include <Args$Thunk.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class Args$6 : public ::Args$Thunk {
	$class(Args$6, $NO_CLASS_INIT, ::Args$Thunk)
public:
	Args$6();
	void init$(::java::nio::channels::FileChannel* val$fc);
	virtual void run() override;
	::java::nio::channels::FileChannel* val$fc = nullptr;
};

#endif // _Args$6_h_