#ifndef _sun_security_provider_NativePRNG$RandomIO_h_
#define _sun_security_provider_NativePRNG$RandomIO_h_
//$ class sun.security.provider.NativePRNG$RandomIO
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOCK_GET_BYTES")
#undef LOCK_GET_BYTES
#pragma push_macro("LOCK_GET_SEED")
#undef LOCK_GET_SEED
#pragma push_macro("LOCK_SET_SEED")
#undef LOCK_SET_SEED
#pragma push_macro("MAX_BUFFER_SIZE")
#undef MAX_BUFFER_SIZE
#pragma push_macro("MAX_BUFFER_TIME")
#undef MAX_BUFFER_TIME
#pragma push_macro("MIN_BUFFER_SIZE")
#undef MIN_BUFFER_SIZE
#pragma push_macro("REQ_LIMIT_DEC")
#undef REQ_LIMIT_DEC
#pragma push_macro("REQ_LIMIT_INC")
#undef REQ_LIMIT_INC

namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class SecureRandom;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class NativePRNG$RandomIO : public ::java::lang::Object {
	$class(NativePRNG$RandomIO, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativePRNG$RandomIO();
	void init$(::java::io::File* seedFile, ::java::io::File* nextFile);
	void ensureBufferValid();
	::sun::security::provider::SecureRandom* getMixRandom();
	$bytes* implGenerateSeed(int32_t numBytes);
	void implNextBytes($bytes* data);
	void implSetSeed($bytes* seed);
	static void readFully(::java::io::InputStream* in, $bytes* data);
	static const int64_t MAX_BUFFER_TIME = 100;
	static const int32_t MAX_BUFFER_SIZE = 0x00010000;
	static const int32_t MIN_BUFFER_SIZE = 32;
	int32_t bufferSize = 0;
	::java::io::File* seedFile = nullptr;
	::java::io::InputStream* seedIn = nullptr;
	::java::io::InputStream* nextIn = nullptr;
	::java::io::OutputStream* seedOut = nullptr;
	bool seedOutInitialized = false;
	$volatile(::sun::security::provider::SecureRandom*) mixRandom = nullptr;
	$bytes* nextBuffer = nullptr;
	int32_t buffered = 0;
	int64_t lastRead = 0;
	int32_t change_buffer = 0;
	static const int32_t REQ_LIMIT_INC = 1000;
	static const int32_t REQ_LIMIT_DEC = (-100);
	$Object* LOCK_GET_BYTES = nullptr;
	$Object* LOCK_GET_SEED = nullptr;
	$Object* LOCK_SET_SEED = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("LOCK_GET_BYTES")
#pragma pop_macro("LOCK_GET_SEED")
#pragma pop_macro("LOCK_SET_SEED")
#pragma pop_macro("MAX_BUFFER_SIZE")
#pragma pop_macro("MAX_BUFFER_TIME")
#pragma pop_macro("MIN_BUFFER_SIZE")
#pragma pop_macro("REQ_LIMIT_DEC")
#pragma pop_macro("REQ_LIMIT_INC")

#endif // _sun_security_provider_NativePRNG$RandomIO_h_