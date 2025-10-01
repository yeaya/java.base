#ifndef _SendSize_h_
#define _SendSize_h_
//$ class SendSize
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export SendSize : public ::java::lang::Object {
	$class(SendSize, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SendSize();
	void init$();
	static void main($StringArray* args);
	static const int32_t bufferLength = 512;
	static const int32_t packetLength = 256;
};

#endif // _SendSize_h_