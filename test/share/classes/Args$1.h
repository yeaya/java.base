#ifndef _Args$1_h_
#define _Args$1_h_
//$ class Args$1
//$ extends Args$Thunk

#include <Args$Thunk.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class Args$1 : public ::Args$Thunk {
	$class(Args$1, $NO_CLASS_INIT, ::Args$Thunk)
public:
	Args$1();
	void init$(::java::nio::channels::FileChannel* val$fc);
	virtual void run() override;
	::java::nio::channels::FileChannel* val$fc = nullptr;
};

#endif // _Args$1_h_