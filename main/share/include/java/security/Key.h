#ifndef _java_security_Key_h_
#define _java_security_Key_h_
//$ interface java.security.Key
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace security {

class $import Key : public ::java::io::Serializable {
	$interface(Key, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual $String* getAlgorithm() {return nullptr;}
	virtual $bytes* getEncoded() {return nullptr;}
	virtual $String* getFormat() {return nullptr;}
	static const int64_t serialVersionUID = (int64_t)0x5BA3EEE69414EEA6;
};

	} // security
} // java

#endif // _java_security_Key_h_