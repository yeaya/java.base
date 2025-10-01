#ifndef _sun_nio_ch_UnixAsynchronousSocketChannelImpl$OpType_h_
#define _sun_nio_ch_UnixAsynchronousSocketChannelImpl$OpType_h_
//$ class sun.nio.ch.UnixAsynchronousSocketChannelImpl$OpType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("CONNECT")
#undef CONNECT
#pragma push_macro("WRITE")
#undef WRITE

namespace sun {
	namespace nio {
		namespace ch {

class UnixAsynchronousSocketChannelImpl$OpType : public ::java::lang::Enum {
	$class(UnixAsynchronousSocketChannelImpl$OpType, 0, ::java::lang::Enum)
public:
	UnixAsynchronousSocketChannelImpl$OpType();
	static $Array<::sun::nio::ch::UnixAsynchronousSocketChannelImpl$OpType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::nio::ch::UnixAsynchronousSocketChannelImpl$OpType* valueOf($String* name);
	static $Array<::sun::nio::ch::UnixAsynchronousSocketChannelImpl$OpType>* values();
	static ::sun::nio::ch::UnixAsynchronousSocketChannelImpl$OpType* CONNECT;
	static ::sun::nio::ch::UnixAsynchronousSocketChannelImpl$OpType* READ;
	static ::sun::nio::ch::UnixAsynchronousSocketChannelImpl$OpType* WRITE;
	static $Array<::sun::nio::ch::UnixAsynchronousSocketChannelImpl$OpType>* $VALUES;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("READ")
#pragma pop_macro("CONNECT")
#pragma pop_macro("WRITE")

#endif // _sun_nio_ch_UnixAsynchronousSocketChannelImpl$OpType_h_