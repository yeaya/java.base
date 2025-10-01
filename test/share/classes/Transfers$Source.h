#ifndef _Transfers$Source_h_
#define _Transfers$Source_h_
//$ class Transfers$Source
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace channels {
			class ReadableByteChannel;
		}
	}
}

class $export Transfers$Source : public ::java::lang::Object {
	$class(Transfers$Source, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Transfers$Source();
	void init$(int32_t size, int64_t seed, $String* name);
	virtual ::java::nio::channels::ReadableByteChannel* channel() {return nullptr;}
	virtual $String* name();
	virtual void verify() {}
	int32_t size = 0;
	int64_t seed = 0;
	$String* name$ = nullptr;
};

#endif // _Transfers$Source_h_