#ifndef _Args$2_h_
#define _Args$2_h_
//$ class Args$2
//$ extends Args$Thunk

#include <Args$Thunk.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class Args$2 : public ::Args$Thunk {
	$class(Args$2, $NO_CLASS_INIT, ::Args$Thunk)
public:
	Args$2();
	void init$(::java::nio::channels::FileChannel* val$fc);
	virtual void run() override;
	::java::nio::channels::FileChannel* val$fc = nullptr;
};

#endif // _Args$2_h_