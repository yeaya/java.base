#ifndef _Args$4_h_
#define _Args$4_h_
//$ class Args$4
//$ extends Args$Thunk

#include <Args$Thunk.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class Args$4 : public ::Args$Thunk {
	$class(Args$4, $NO_CLASS_INIT, ::Args$Thunk)
public:
	Args$4();
	void init$(::java::nio::channels::FileChannel* val$fc);
	virtual void run() override;
	::java::nio::channels::FileChannel* val$fc = nullptr;
};

#endif // _Args$4_h_