#ifndef _javax_crypto_Mac_h_
#define _javax_crypto_Mac_h_
//$ class javax.crypto.Mac
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class Key;
		class Provider;
		class Provider$Service;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace crypto {
		class MacSpi;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace javax {
	namespace crypto {

class $import Mac : public ::java::lang::Cloneable {
	$class(Mac, 0, ::java::lang::Cloneable)
public:
	Mac();
	void init$(::javax::crypto::MacSpi* macSpi, ::java::security::Provider* provider, $String* algorithm);
	void init$(::java::security::Provider$Service* s, ::java::util::Iterator* t, $String* algorithm);
	virtual void chooseFirstProvider();
	void chooseProvider(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params);
	virtual $Object* clone() override;
	$bytes* doFinal();
	void doFinal($bytes* output, int32_t outOffset);
	$bytes* doFinal($bytes* input);
	$String* getAlgorithm();
	static ::javax::crypto::Mac* getInstance($String* algorithm);
	static ::javax::crypto::Mac* getInstance($String* algorithm, $String* provider);
	static ::javax::crypto::Mac* getInstance($String* algorithm, ::java::security::Provider* provider);
	int32_t getMacLength();
	::java::security::Provider* getProvider();
	$String* getProviderName();
	void init(::java::security::Key* key);
	void init(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params);
	void reset();
	void update(int8_t input);
	void update($bytes* input);
	void update($bytes* input, int32_t offset, int32_t len);
	void update(::java::nio::ByteBuffer* input);
	static ::sun::security::util::Debug* debug;
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	::java::security::Provider* provider = nullptr;
	::javax::crypto::MacSpi* spi = nullptr;
	$String* algorithm = nullptr;
	bool initialized = false;
	::java::security::Provider$Service* firstService = nullptr;
	::java::util::Iterator* serviceIterator = nullptr;
	$Object* lock = nullptr;
	static int32_t warnCount;
};

	} // crypto
} // javax

#endif // _javax_crypto_Mac_h_