#ifndef _Transfers$Target_h_
#define _Transfers$Target_h_
//$ class Transfers$Target
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace channels {
			class WritableByteChannel;
		}
	}
}

class $export Transfers$Target : public ::java::lang::Object {
	$class(Transfers$Target, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Transfers$Target();
	void init$(int32_t size, int64_t seed, $String* name);
	virtual ::java::nio::channels::WritableByteChannel* channel() {return nullptr;}
	virtual $String* name();
	virtual void verify() {}
	int32_t size = 0;
	int64_t seed = 0;
	$String* name$ = nullptr;
};

#endif // _Transfers$Target_h_