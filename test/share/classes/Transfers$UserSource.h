#ifndef _Transfers$UserSource_h_
#define _Transfers$UserSource_h_
//$ class Transfers$UserSource
//$ extends Transfers$Source

#include <Transfers$Source.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class ReadableByteChannel;
		}
	}
}

class $export Transfers$UserSource : public ::Transfers$Source {
	$class(Transfers$UserSource, $NO_CLASS_INIT, ::Transfers$Source)
public:
	Transfers$UserSource();
	void init$(int32_t size, int64_t seed);
	virtual ::java::nio::channels::ReadableByteChannel* channel() override;
	virtual void verify() override;
	::java::nio::channels::ReadableByteChannel* ch = nullptr;
	::java::nio::ByteBuffer* src = nullptr;
};

#endif // _Transfers$UserSource_h_