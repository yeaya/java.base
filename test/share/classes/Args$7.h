#ifndef _Args$7_h_
#define _Args$7_h_
//$ class Args$7
//$ extends Args$Thunk

#include <Args$Thunk.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class Args$7 : public ::Args$Thunk {
	$class(Args$7, $NO_CLASS_INIT, ::Args$Thunk)
public:
	Args$7();
	void init$(::java::nio::channels::FileChannel* val$fc);
	virtual void run() override;
	::java::nio::channels::FileChannel* val$fc = nullptr;
};

#endif // _Args$7_h_