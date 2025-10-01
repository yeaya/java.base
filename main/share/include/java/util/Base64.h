#ifndef _java_util_Base64_h_
#define _java_util_Base64_h_
//$ class java.util.Base64
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Base64$Decoder;
		class Base64$Encoder;
	}
}

namespace java {
	namespace util {

class $import Base64 : public ::java::lang::Object {
	$class(Base64, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Base64();
	void init$();
	static ::java::util::Base64$Decoder* getDecoder();
	static ::java::util::Base64$Encoder* getEncoder();
	static ::java::util::Base64$Decoder* getMimeDecoder();
	static ::java::util::Base64$Encoder* getMimeEncoder();
	static ::java::util::Base64$Encoder* getMimeEncoder(int32_t lineLength, $bytes* lineSeparator);
	static ::java::util::Base64$Decoder* getUrlDecoder();
	static ::java::util::Base64$Encoder* getUrlEncoder();
};

	} // util
} // java

#endif // _java_util_Base64_h_