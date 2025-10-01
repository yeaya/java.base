#ifndef _Transfers$UserTarget_h_
#define _Transfers$UserTarget_h_
//$ class Transfers$UserTarget
//$ extends Transfers$Target

#include <Transfers$Target.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class WritableByteChannel;
		}
	}
}

class $export Transfers$UserTarget : public ::Transfers$Target {
	$class(Transfers$UserTarget, $NO_CLASS_INIT, ::Transfers$Target)
public:
	Transfers$UserTarget();
	void init$(int32_t size, int64_t seed);
	virtual ::java::nio::channels::WritableByteChannel* channel() override;
	virtual void verify() override;
	::java::nio::channels::WritableByteChannel* ch = nullptr;
	::java::nio::ByteBuffer* dst = nullptr;
};

#endif // _Transfers$UserTarget_h_