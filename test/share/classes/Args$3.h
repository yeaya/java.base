#ifndef _Args$3_h_
#define _Args$3_h_
//$ class Args$3
//$ extends Args$Thunk

#include <Args$Thunk.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class Args$3 : public ::Args$Thunk {
	$class(Args$3, $NO_CLASS_INIT, ::Args$Thunk)
public:
	Args$3();
	void init$(::java::nio::channels::FileChannel* val$fc);
	virtual void run() override;
	::java::nio::channels::FileChannel* val$fc = nullptr;
};

#endif // _Args$3_h_