#ifndef _indify_Indify$Chunk_h_
#define _indify_Indify$Chunk_h_
//$ interface indify.Indify$Chunk
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class DataInputStream;
		class DataOutputStream;
	}
}

namespace indify {

class Indify$Chunk : public ::java::lang::Object {
	$interface(Indify$Chunk, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void readFrom(::java::io::DataInputStream* in) {}
	virtual void writeTo(::java::io::DataOutputStream* out) {}
};

} // indify

#endif // _indify_Indify$Chunk_h_