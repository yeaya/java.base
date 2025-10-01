#ifndef _Args$5_h_
#define _Args$5_h_
//$ class Args$5
//$ extends Args$Thunk

#include <Args$Thunk.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class Args$5 : public ::Args$Thunk {
	$class(Args$5, $NO_CLASS_INIT, ::Args$Thunk)
public:
	Args$5();
	void init$(::java::nio::channels::FileChannel* val$fc);
	virtual void run() override;
	::java::nio::channels::FileChannel* val$fc = nullptr;
};

#endif // _Args$5_h_