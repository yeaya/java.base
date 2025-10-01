#ifndef _javax_crypto_extObjectInputStream_h_
#define _javax_crypto_extObjectInputStream_h_
//$ class javax.crypto.extObjectInputStream
//$ extends java.io.ObjectInputStream

#include <java/io/ObjectInputStream.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectStreamClass;
	}
}

namespace javax {
	namespace crypto {

class extObjectInputStream : public ::java::io::ObjectInputStream {
	$class(extObjectInputStream, $NO_CLASS_INIT, ::java::io::ObjectInputStream)
public:
	extObjectInputStream();
	void init$(::java::io::InputStream* in);
	using ::java::io::ObjectInputStream::read;
	virtual $Class* resolveClass(::java::io::ObjectStreamClass* v) override;
};

	} // crypto
} // javax

#endif // _javax_crypto_extObjectInputStream_h_